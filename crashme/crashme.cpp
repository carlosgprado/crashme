#include <QtGui>
#include "crashme.h"

// Creator
crashme::crashme(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this); // this sets up the GUI
	on_boradioButton_clicked(); // initialization
}

/////////////////////////////////////////////////////
// My callbacks come here
/////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////
// Radio button clicked -> display description
/////////////////////////////////////////////////////

void crashme::on_boradioButton_clicked()
{
	char *boDescription = "Buffer overflow selected.\n\n"
		"A small buffer gets allocated (on the stack) and through "
		"strcpy() a way larger buffer is copied, this way overwriting "
		"other metadata on the stack, EIP, SEH, etc.";

	ui.descriptionTextBrowser->setText(boDescription);
}


void crashme::on_horadioButton_clicked()
{
	char *hoDescription = "Heap overflow selected.\n\n"
		"A small buffer gets allocated (on the heap) and through "
		"strcpy() a way larger buffer is copied, this way overwriting "
		"other metadata on the heap.\n"
		"Chunk headers get smashed leading to inconsistences later.";

	ui.descriptionTextBrowser->setText(hoDescription);
}


void crashme::on_umradioButton_clicked()
{
	char *umDescription = "Uninitialized memory access selected.\n\n"
		"Space for the pointer will be allocated on the stack (4 bytes in 32 bits architectures)"
		"but won't be initialized so its value will be whatever garbage happened to" 
		"be there already. MOST PROBABLY this address will be not writable by the application."
		"Even if this is the case, there are good chances this will fuck up something :)";

	ui.descriptionTextBrowser->setText(umDescription);
}


void crashme::on_zpradioButton_clicked()
{
	char *zpDescription = "Zero page access selected.\n\n"
		"Also known as Null dereference.";

	ui.descriptionTextBrowser->setText(zpDescription);
}

/////////////////////////////////////////////////////
// The CRASHERS
/////////////////////////////////////////////////////

void crashme::bufferOverflowCrash()
{
	// Quite a classic
	char buffer[16];
	const char *smasherString = "ILIKETOSMASHBUFFERSANDMAKEAPPLICATIONSCRASHIAMSOEVILMUHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAILIKETOSMASHBUFFERSANDMAKEAPPLICATIONSCRASHIAMSOEVILMUHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHA";

	strcpy(buffer, smasherString);
}


void crashme::heapOverflowCrash()
{
	// This will overflow the data block therefore smashing the 
	// heap chunk metadata
	char *buffer = (char*)malloc(16);
	const char *smasherString = "ILIKETOSMASHBUFFERSANDMAKEAPPLICATIONSCRASHIAMSOEVILMUHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHA";

	strcpy(buffer, smasherString);
}


void crashme::zeroPageCrash()
{
	// Access a member of a structure
	// initialized to NULL (0x00)
	struct Dummy *nullPointer = NULL;
	nullPointer->num = 1;
}


void crashme::uninitializedMemoryCrash()
{
	// The pointer's value will be whatever 
	// garbage was on the stack at the time
	char *dst_buffer;
	memset(dst_buffer, 0x00, 256);
}

// Destructor
crashme::~crashme()
{

}
