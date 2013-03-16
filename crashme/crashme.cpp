#include <QtGui>
#include "crashme.h"

// Creator
crashme::crashme(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this); // this sets up the GUI
	on_boradioButton_clicked(); // initialization
}

// ------------------------------------
// My callbacks come here
// ------------------------------------

void crashme::on_crashButton_clicked()
{
	// check ratio buttons to determine the crash type
	if(ui.boradioButton->isChecked())
		bufferOverflowCrash();
	else if(ui.horadioButton->isChecked())
		heapOverflowCrash();
	else if(ui.umradioButton->isChecked())
		uninitializedMemoryCrash();
	else if(ui.zpradioButton->isChecked())
		zeroPageCrash();
	else
		bufferOverflowCrash();


	ui.descriptionTextBrowser->setText("It's going to crash hard!");

}

// ------------------------------------
// Radio button clicked -> description
// ------------------------------------

void crashme::on_boradioButton_clicked()
{
	char boDescription[] = "Buffer overflow selected.\n\n"
		"A small buffer gets allocated (on the stack) and through "
		"strcpy() a way larger buffer is copied, this way overwriting "
		"other metadata on the stack, EIP, SEH, etc.";

	ui.descriptionTextBrowser->setText(boDescription);
}


void crashme::on_horadioButton_clicked()
{
	char hoDescription[] = "Heap overflow selected.\n\n"
		"A small buffer gets allocated (on the heap) and through "
		"strcpy() a way larger buffer is copied, this way overwriting "
		"other metadata on the heap.\n"
		"Chunk headers get smashed leading to inconsistences later.";

	ui.descriptionTextBrowser->setText(hoDescription);
}


void crashme::on_umradioButton_clicked()
{
	ui.descriptionTextBrowser->setText("Uninitialized memory access selected.");
}


void crashme::on_zpradioButton_clicked()
{
	ui.descriptionTextBrowser->setText("Zero page access selected.");
}

// ------------------------------------
// The CRASHERS
// ------------------------------------

void crashme::bufferOverflowCrash()
{
	// Quite a classic
	char buffer[16];
	memset(buffer, 0x00, sizeof(buffer));
	const char smasherString[] = "ILIKETOSMASHBUFFERSANDMAKEAPPLICATIONSCRASHIAMSOEVILMUHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAILIKETOSMASHBUFFERSANDMAKEAPPLICATIONSCRASHIAMSOEVILMUHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHA";

	strcpy(buffer, smasherString);
}


void crashme::heapOverflowCrash()
{
	// Quite a classic
	char *buffer;
	buffer = (char*)malloc(16);
	const char smasherString[] = "ILIKETOSMASHBUFFERSANDMAKEAPPLICATIONSCRASHIAMSOEVILMUHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHA";

	strcpy(buffer, smasherString);
}


void crashme::zeroPageCrash()
{
	// Quite a classic

}


void crashme::uninitializedMemoryCrash()
{
	// Quite a classic

}

// Destructor
crashme::~crashme()
{

}
