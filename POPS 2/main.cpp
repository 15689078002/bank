/****************************************************************************
 **
 ** Copyright (C) 2014 Li Corporation and/or its subsidiary(-ies).
 ** All rights reserved.
 ** Contact: Email (creazylq@163.com)
 **
 ** This file is a Cash register system.
 **
 ** "Redistribution and use in source and binary forms, with or without
 ** modification, are permitted provided that the following conditions are
 ** met:
 **   * Redistributions of source code must retain the above copyright
 **     notice, this list of conditions and the following disclaimer.
 **   * Redistributions in binary form must reproduce the above copyright
 **     notice, this list of conditions and the following disclaimer in
 **     the documentation and/or other materials provided with the
 **     distribution.
 **
 ** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 ** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 ** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 ** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 ** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 ** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 ** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 ** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 ** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 ** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
 ** $QT_END_LICENSE$
 **
 ****************************************************************************/
#include <QApplication>
#include <QTextCodec>

#include "widget.h"
#include "logindialog.h"
#include "database.h"
#include <QFile>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);




    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/images/start.jpg"));
    splash->show();
    // Qt::Alignment topRight = Qt::Alignment|Qt::AlignTop;
    splash->showMessage(QObject::tr("Setting up the main window..."),
                        Qt::blue);
    Widget w;
    splash->showMessage(QObject::tr("Loading modules..."),
                        Qt::blue);
    //loadModules();
    splash->showMessage(QObject::tr("Establishing connections..."),
                        Qt::blue);

    //让对话框延迟一段时间显示
    for(int i = 0;i < 100;i++)
    {
        splash->repaint();
    }

    if(!createConnection())
    {
        return 1;
    }

    LoginDialog log;
    delete splash;
    if(log.exec() == QDialog::Accepted)
    {
        w.show();
    }
    else
    {
        return 0;
    }
    closeConnection();

    return a.exec();
}
