#pragma once
#include "qfl_designer_plugin_combination.h"
#include "qfl_designer_plugin_general.h"

#include <QDesignerCustomWidgetInterface>
#include <QtDesigner/QDesignerTaskMenuExtension>
#include <QtDesigner/QExtensionFactory>

using namespace QflDesignerPlugin;

class NeedleIndicatorInterface : public CustomWidgetInterface {
  Q_OBJECT
  Q_INTERFACES(QDesignerCustomWidgetInterface)

 public:
  NeedleIndicatorInterface(QObject *parent);
  virtual QWidget *createWidget(QWidget *parent);
};
