#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QPixmap>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->LinkButton, &QCommandLinkButton::clicked, this, [this]() {
        qDebug() << "kkkkkkkk ";

        QWidget *memeWindow = new QWidget;
        memeWindow->setWindowTitle("meme");

        QVBoxLayout *layout = new QVBoxLayout(memeWindow);
        QLabel *label = new QLabel(memeWindow);

        QPixmap pixmap(":/build/build/meme gorila.jpg");

        if (pixmap.isNull()) {
            qDebug() << "Erro: imagem não encontrada!";
            return;
        }

        label->setPixmap(pixmap);
        label->setScaledContents(true); // Ajustar imagem ao tamanho do label
        layout->addWidget(label);

        memeWindow->setLayout(layout);
        memeWindow->resize(800, 400);
        memeWindow->show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
