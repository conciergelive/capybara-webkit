#include "JavascriptConfirmMessages.h"
#include "WebPage.h"
#include "WebPageManager.h"

JavascriptConfirmMessages::JavascriptConfirmMessages(WebPageManager *manager, QStringList &arguments, QObject *parent) : SocketCommand(manager, arguments, parent) {}

void JavascriptConfirmMessages::start()
{
  emitFinished(true, page()->confirmMessages());
}
