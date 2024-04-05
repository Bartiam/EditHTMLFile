#pragma once
#include <QMainWindow>
#include <QWebEngineView>
#include <QPlainTextEdit>

class MainWindow : public QMainWindow
{
	// ������ ��� �������� moc ��������;
	Q_OBJECT

public:
	// �������� ���������� ��� ����������� ����������;
	QWebEngineView* webEngineView;
	// �������� ���������� ��� �������������� HTML ���������;
	QPlainTextEdit* plainTextEdit;
	// �������� ������������ ������ � ���������� ������������� ����;
	MainWindow(QMainWindow* parent);
	
public slots:
	void showHTML();
};