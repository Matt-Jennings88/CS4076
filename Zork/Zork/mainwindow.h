#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Character.h"
#include "ZorkUL.h"
#include "Room.h"

using std::string;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    friend class ZorkUL;
    friend class Room;


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_north_pressed();
    void on_east_pressed();
    void on_south_pressed();
    void on_west_pressed();
    void on_teleport_pressed();
    void on_help_pressed();
    void on_map_pressed();

private:
    Ui::MainWindow *ui;
    ZorkUL *zork = new ZorkUL();
    void goRoom(string direction);
};
#endif // MAINWINDOW_H
