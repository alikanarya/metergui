/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        labelPicture = new QLabel(centralwidget);
        labelPicture->setObjectName(QStringLiteral("labelPicture"));
        labelPicture->setGeometry(QRect(380, 30, 400, 300));
        labelPicture->setFrameShape(QFrame::Box);
        labelPicture->setScaledContents(true);
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(20, 20, 101, 25));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        loadButton->setFont(font);
        nextImage = new QPushButton(centralwidget);
        nextImage->setObjectName(QStringLiteral("nextImage"));
        nextImage->setEnabled(false);
        nextImage->setGeometry(QRect(310, 170, 25, 25));
        nextImage->setFont(font);
        prevImage = new QPushButton(centralwidget);
        prevImage->setObjectName(QStringLiteral("prevImage"));
        prevImage->setEnabled(false);
        prevImage->setGeometry(QRect(280, 170, 25, 25));
        prevImage->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        labelPicture->setText(QString());
        loadButton->setText(QApplication::translate("MainWindow", "Klas\303\266r Se\303\247", 0));
        nextImage->setText(QApplication::translate("MainWindow", "+", 0));
        prevImage->setText(QApplication::translate("MainWindow", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
