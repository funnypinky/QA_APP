#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include "../data/dicomobj.h"
#include <opencv2/core.hpp>
#include "../helper/asmOpenCV.h"
#include "../analyse/analysefactory.h"

std::map<string, DCMObject> dcms;
AnalyseFactory *analyse;

MainWindow::MainWindow(QWidget *parent) :
		QMainWindow(parent), ui(new Ui::MainWindow) {
	ui->setupUi(this);
    ui->originalRBt->setChecked(true);
    ui->blurRBt->setEnabled(false);
    ui->cannyRBt->setEnabled(false);
    ui->resultRBt->setEnabled(false);
    ui->imageSelection->setId(ui->originalRBt,0);
    ui->imageSelection->setId(ui->blurRBt,1);
    ui->imageSelection->setId(ui->cannyRBt,2);
    ui->imageSelection->setId(ui->resultRBt,3);

}

MainWindow::~MainWindow() {
	delete ui;
}

void MainWindow::on_openBt_clicked() {
    QStringList filenames = QFileDialog::getOpenFileNames(this, tr("Open DICOM Directory"), ".");
    for(QString filename: filenames) {
        DCMObject dcmTemp(filename.toStdString());
        dcms.insert({dcmTemp.getImageName(),dcmTemp});
        ui->fileListView->addItem(QString(dcmTemp.getImageName()));
    }


}

void MainWindow::on_fileListView_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    cv::Mat img = dcms.at(current->text().toStdString()).getImageMat();
    std::cout << dcms.at(current->text().toStdString()).getPixelSize() << std::endl;
    analyse = new AnalyseFactory(img);
    analyse->processFactory();
    ui->blurRBt->setEnabled(true);
    ui->cannyRBt->setEnabled(true);
    ui->resultRBt->setEnabled(true);
    if(previous == NULL) {
        this->showMat(0);
    } else {
        int id = ui->imageSelection->checkedId();
        this->showMat(id);
    }
}

QPixmap MainWindow::MatToPixmap(cv::Mat src)
{
    QImage::Format format=QImage::Format_Grayscale8;
    int bpp=src.channels();
    if(bpp==3)format=QImage::Format_RGB888;
    QImage img(src.cols,src.rows,format);
    uchar *sptr,*dptr;
    int linesize=src.cols*bpp;
    for(int y=0;y<src.rows;y++){
        sptr=src.ptr(y);
        dptr=img.scanLine(y);
        memcpy(dptr,sptr,linesize);
    }
    if(bpp==3)return QPixmap::fromImage(img.rgbSwapped());
    return QPixmap::fromImage(img);
}

void MainWindow::on_imageSelection_buttonToggled(QAbstractButton *button, bool checked) {
    int id = ui->imageSelection->checkedId();
    this->showMat(id);
}

void MainWindow::showMat(int id){
    cv::Mat img;

    switch (id) {
    case 0: img = dcms.at(ui->fileListView->currentItem()->text().toStdString()).getImageMat();
        break;
    case 1: img = analyse->getBlurMat();
        break;
    case 2: img = analyse->getCannyMat();
        break;
    case 3: img = analyse->getResultMat();
        break;
    }

    QGraphicsScene *scene =  new QGraphicsScene;
    QPixmap pixelmap = ASM::cvMatToQPixmap(img);
    scene->addPixmap(pixelmap);
    ui->imageView->setScene(scene);
    ui->imageView->show();

}
