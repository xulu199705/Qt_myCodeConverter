#include "helloworld.h"
#include "ui_helloworld.h"
#include <QTime>
#include <QApplication>

helloworld::helloworld(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::helloworld)
{
	ui->setupUi(this);

	QObject::connect(ui->ButtonChange, SIGNAL(clicked()), this, SLOT(convert()));
	QObject::connect(ui->ButtonReChange, SIGNAL(clicked()), this, SLOT(reconvert()));
	QObject::connect(ui->ButtonClear, SIGNAL(clicked()), ui->EditInput, SLOT(clear()));
	QObject::connect(ui->ButtonClear, SIGNAL(clicked()), ui->EditOutput, SLOT(clear()));
	QObject::connect(ui->ButtonClear, SIGNAL(clicked()), ui->labelStatus, SLOT(clear()));
	QObject::connect(ui->ButtonQuit, SIGNAL(clicked()), this, SLOT(appclose()));
}

helloworld::~helloworld()
{
    delete ui;
}

void helloworld::convert()
{
	char code[] = "DEFGHIJKLMNOPQRSTUVWXYZABC";
	QString str = ui->EditInput->text();

	delay(QString("Received!"), 1000);
	delay(QString("Translating..."), 1000);
	delay(QString("Converting..."), 1500);
	delay(QString("Completed!!"), 1000);
	
	for (int i = 0; i < str.length(); i++)
	{
		QChar ch = str[i];
		char chr = ch.toLatin1();
		chr = code[chr -65];
		ch = QChar(chr);
		str[i] = ch;
	}

	ui->EditOutput->setText(str);
}

void helloworld::reconvert()
{
	char code[] = "XYZABCDEFGHIJKLMNOPQRSTUVW";
	QString str = ui->EditInput->text();

	delay(QString("Received!"), 1000);
	delay(QString("Translating..."), 1000);
	delay(QString("ReConverting..."), 1500);
	delay(QString("Completed!!"), 1000);

	for (int i = 0; i < str.length(); i++)
	{
		QChar ch = str[i];
		char chr = ch.toLatin1();
		chr = code[chr - 65];
		ch = QChar(chr);
		str[i] = ch;
	}

	ui->EditOutput->setText(str);
}

void sleep(int msec) {
	QTime reachTime = QTime::currentTime().addMSecs(msec);

	while (QTime::currentTime() < reachTime)
	{
		QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
	}
}

void helloworld::delay(QString str, unsigned long sec)
{
	ui->labelStatus->setText(str);
	sleep(sec);
}

void helloworld::appclose()
{
	QWidget::close();
}
