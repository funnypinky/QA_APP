/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *openBt;
    QListWidget *fileListView;
    QGraphicsView *imageView;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *originalRBt;
    QRadioButton *blurRBt;
    QRadioButton *cannyRBt;
    QRadioButton *resultRBt;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *imageSelection;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(1824, 1024);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1200, 1024));
        MainWindow->setAcceptDrops(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        openBt = new QPushButton(centralwidget);
        openBt->setObjectName(QString::fromUtf8("openBt"));
        openBt->setGeometry(QRect(10, 10, 75, 25));
        openBt->setMaximumSize(QSize(75, 25));
        fileListView = new QListWidget(centralwidget);
        fileListView->setObjectName(QString::fromUtf8("fileListView"));
        fileListView->setGeometry(QRect(10, 40, 161, 371));
        imageView = new QGraphicsView(centralwidget);
        imageView->setObjectName(QString::fromUtf8("imageView"));
        imageView->setGeometry(QRect(180, 40, 1091, 851));
        imageView->setMinimumSize(QSize(1024, 768));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, -10, 371, 52));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        originalRBt = new QRadioButton(groupBox);
        imageSelection = new QButtonGroup(MainWindow);
        imageSelection->setObjectName(QString::fromUtf8("imageSelection"));
        imageSelection->addButton(originalRBt);
        originalRBt->setObjectName(QString::fromUtf8("originalRBt"));
        originalRBt->setMinimumSize(QSize(76, 25));
        originalRBt->setChecked(true);

        horizontalLayout->addWidget(originalRBt, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        blurRBt = new QRadioButton(groupBox);
        imageSelection->addButton(blurRBt);
        blurRBt->setObjectName(QString::fromUtf8("blurRBt"));

        horizontalLayout->addWidget(blurRBt);

        cannyRBt = new QRadioButton(groupBox);
        imageSelection->addButton(cannyRBt);
        cannyRBt->setObjectName(QString::fromUtf8("cannyRBt"));

        horizontalLayout->addWidget(cannyRBt);

        resultRBt = new QRadioButton(groupBox);
        imageSelection->addButton(resultRBt);
        resultRBt->setObjectName(QString::fromUtf8("resultRBt"));

        horizontalLayout->addWidget(resultRBt);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1824, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openBt->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        groupBox->setTitle(QString());
        originalRBt->setText(QCoreApplication::translate("MainWindow", "Orignal", nullptr));
        blurRBt->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
        cannyRBt->setText(QCoreApplication::translate("MainWindow", "Canny", nullptr));
        resultRBt->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
