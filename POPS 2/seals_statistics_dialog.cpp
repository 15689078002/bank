/****************************************************************************
 **销售统计分析功能
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
#include "seals_statistics_dialog.h"
#include "ui_seals_statistics_dialog.h"

Seals_Statistics_Dialog::Seals_Statistics_Dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Seals_Statistics_Dialog)
{
    /*
     *设置DateEdit显示当日期
    */
    ui->setupUi(this);
    ui->dateEdit_from->setCalendarPopup(true);
    QDate today = QDate::currentDate();
    ui->dateEdit_from->setDateRange(today.addDays(-90),today.addDays(90));
    ui->dateEdit_to->setCalendarPopup(true);
    ui->dateEdit_to->setDateRange(today.addDays(-90),today.addDays(90));
}

Seals_Statistics_Dialog::~Seals_Statistics_Dialog()
{
    delete ui;
}
