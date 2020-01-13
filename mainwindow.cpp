#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loadButton_clicked()
{
    loadedFileNamewPath = QFileDialog::getOpenFileName(this,
        //tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
        tr("Open Image"), "D:/Engineering/Repository Data/meter/ngmeter-data", tr("Image Files (*.jpeg *.png *.jpg *.bmp)"));


    if (!loadedFileNamewPath.isEmpty() && !loadedFileNamewPath.isNull()) {
        fileOpenDir = QFileInfo(loadedFileNamewPath).absoluteDir();
        filesInDirList = fileOpenDir.entryList(fileFilters, QDir::Files);

        foreach(QString temp, filesInDirList){ qDebug() << temp; }

        loadedFileName = QFileInfo(loadedFileNamewPath).fileName();
        filesInDirListIndex = filesInDirList.indexOf(loadedFileName,0);
        //ui->labelPicNo->setText(QString::number(w->filesInDirListIndex)+": "+ w->loadedFileName);


        imageFile.load(loadedFileNamewPath);
        ui->labelPicture->setPixmap( QPixmap::fromImage( imageFile ).scaled( imageFile.width(), imageFile.height(), Qt::KeepAspectRatio));


    }


}
