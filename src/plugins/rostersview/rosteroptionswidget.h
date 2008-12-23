#ifndef ROSTEROPTIONSWIDGET_H
#define ROSTEROPTIONSWIDGET_H

#include <QWidget>
#include "../../interfaces/irostersview.h"
#include "ui_rosteroptionswidget.h"

class RosterOptionsWidget : 
  public QWidget
{
  Q_OBJECT;

public:
  RosterOptionsWidget(IRostersViewPlugin *ARosterViewPlugin);
  ~RosterOptionsWidget();
  void apply();
private:
  Ui::RosterOptionsWidgetClass ui;
private:
  IRostersViewPlugin *FRostersViewPlugin;
};

#endif // ROSTEROPTIONSWIDGET_H
