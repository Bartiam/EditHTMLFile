#pragma once
#include <QMainWindow>

class MainWindow : public QMainWindow
{
	// Макрос для создания moc объектов;
	Q_OBJECT

public:
	// Прототип конструктора класса с установкой родительского окна;
	MainWindow(QMainWindow* parent);
};