#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QStringList>
#include <QStringListModel>
#include <QAbstractItemView>
#include <QAbstractButton>
#include <QListView>
#include <QListWidgetItem>
#include <opencv2/core.hpp>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static QPixmap MatToPixmap(cv::Mat src);


private slots:
	void on_openBt_clicked();
    void on_fileListView_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);
    void on_imageSelection_buttonToggled(QAbstractButton *button, bool checked);

private:
    Ui::MainWindow *ui;
    void showMat(int id);

};
#endif // MAINWINDOW_H
