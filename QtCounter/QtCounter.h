#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCounter.h"
#include <qpushbutton.h>
#include <qstack.h>

class QtCounter : public QMainWindow
{
	Q_OBJECT

public:
	QtCounter(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtCounterClass ui;

private slots:
	void ButtonClicked();
};
