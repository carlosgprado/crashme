#include "crashme.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	crashme w;
	w.show();
	return a.exec();
}
