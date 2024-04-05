#pragma once
#include <QMainWindow>
#include <QWebEngineView>
#include <QPlainTextEdit>

class MainWindow : public QMainWindow
{
	// Макрос для создания moc объектов;
	Q_OBJECT

public:
	// Создание переменной для отображения результата;
	QWebEngineView* webEngineView;
	// Создание переменной для редактирования HTML документа;
	QPlainTextEdit* plainTextEdit;
	// Прототип конструктора класса с установкой родительского окна;
	MainWindow(QMainWindow* parent);
	
public slots:
	void showHTML();
};