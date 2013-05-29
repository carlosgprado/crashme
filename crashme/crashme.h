#ifndef CRASHME_H
#define CRASHME_H

#include <QtWidgets/QMainWindow>
#include "ui_crashme.h"

class crashme : public QMainWindow
{
	Q_OBJECT

public:
	crashme(QWidget *parent = 0);
	~crashme();
	void bufferOverflowCrash();
	void heapOverflowCrash();
	void uninitializedMemoryCrash();
	void zeroPageCrash();

private:
	Ui::crashmeClass ui;

public slots:
	void on_crashButton_clicked();
	void on_boradioButton_clicked();
	void on_horadioButton_clicked();
	void on_umradioButton_clicked();
	void on_zpradioButton_clicked();

};

struct Dummy {
	int num;
	char *str;
};

#endif // CRASHME_H
