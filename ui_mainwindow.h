/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelPicture;
    QPushButton *loadButton;
    QPushButton *nextImage;
    QPushButton *prevImage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelPicture = new QLabel(centralwidget);
        labelPicture->setObjectName(QString::fromUtf8("labelPicture"));
        labelPicture->setGeometry(QRect(380, 50, 400, 300));
        labelPicture->setFrameShape(QFrame::Box);
        labelPicture->setScaledContents(true);
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(20, 20, 101, 25));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        loadButton->setFont(font);
        nextImage = new QPushButton(centralwidget);
        nextImage->setObjectName(QString::fromUtf8("nextImage"));
        nextImage->setEnabled(true);
        nextImage->setGeometry(QRect(410, 10, 25, 25));
        nextImage->setFont(font);
        prevImage = new QPushButton(centralwidget);
        prevImage->setObjectName(QString::fromUtf8("prevImage"));
        prevImage->setEnabled(true);
        prevImage->setGeometry(QRect(380, 10, 25, 25));
        prevImage->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        labelPicture->setText(QString());
        loadButton->setText(QCoreApplication::translate("MainWindow", "Klas\303\266r Se\303\247", nullptr));
        nextImage->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        prevImage->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
