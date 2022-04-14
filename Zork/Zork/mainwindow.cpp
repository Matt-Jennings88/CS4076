#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ZorkUL.h"
#include "Room.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui->gameText->append(QString::fromStdString(zork->printWelcome()));
}

void MainWindow::goRoom(string direction)
{
    if (direction == "teleport")
    {
        ui->gameText->append(QString::fromStdString(zork->teleport() + "\n"));
    }
    else
    {
        ui->gameText->append(QString::fromStdString(zork->go(direction) + "\n"));
    }
}

void MainWindow::on_north_pressed()
{
    goRoom("north");
}

void MainWindow::on_east_pressed()
{
    goRoom("east");
}

void MainWindow::on_south_pressed()
{
    goRoom("south");
}

void MainWindow::on_west_pressed()
{
    goRoom("west");
}

void MainWindow::on_teleport_pressed()
{
    goRoom("teleport");
}

void MainWindow::on_map_pressed()
{
    ui->mapBox->append(QString::fromStdString(zork->printMap()));
}

void MainWindow::on_help_pressed()
{
    ui->gameText->append(QString::fromStdString(zork->printHelp()));
}
