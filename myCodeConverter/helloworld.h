#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QWidget>

namespace Ui {
	class helloworld;
}

class helloworld : public QWidget
{
	Q_OBJECT

public:
	explicit helloworld(QWidget *parent = 0);
	~helloworld();
	Ui::helloworld *ui;

private:
	void delay(QString str, unsigned long sec);

private slots:
	void convert();
	void reconvert();
	void appclose();
};

#endif // HELLOWORLD_H
