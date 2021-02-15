#include <iostream>
#include <QtCore>
#include <QApplication>
#include <QWidget>
#include <QTextStream>
#include <QPushButton>

#include "view/mainwindow.h"


using namespace std;

int main(int argc, char *argv[]) {
	QApplication EditorApp(argc, argv);
	MainWindow window;
    window.setWindowFlag(Qt::WindowMaximizeButtonHint, true);
    window.showMaximized();
	      return EditorApp.exec();
}
