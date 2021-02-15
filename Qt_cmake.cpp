#include <iostream>
#include <QFile>
#include <QString>
#include <QTextStream>
#include "view/mainwindow.h"
#include <QApplication>

using namespace std;



int main(int argc, char *argv[])
{
    QFile file(":/stylesheet.qss");
    file.open(QFile::ReadOnly) | QFile::Text;
    QTextStream stream(&file);
    QApplication a(argc, argv);
    a.setStyleSheet(stream.readAll());
    MainWindow w;
    w.showMaximized();
    return a.exec();
}
