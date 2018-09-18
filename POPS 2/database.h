#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QtSql>
#include <QObject>


/*创建数据里并链接*/
static bool createConnection()
{

    QSqlDatabase db;            //创建一个数据库
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
    }
    //db.setHostName("localhost");
    db.setDatabaseName("SupSystem.db");  //设置数据库的名字
    //db.setUserName("root");
    //db.setPassword("123456");
    if(!db.open())
    {
        qCritical("Can't open database: %s(%s)",
                  db.lastError().text().toLocal8Bit().data(),
                  qt_error_string().toLocal8Bit().data());

        return false;
    }

    QSqlQuery query;
    /***************************员  工  表 *****************************/
    query.exec(QObject::tr("create table user(User_Id integer primary key AUTOINCREMENT,"
                           "User_Name vchar(100) ,User_Sex vchar(10),"
                           "User_Age vchar(100),User_Pwd vchar(20))"));
    query.exec(QObject::tr("insert into user values (1000,'admin 超级管理员','男','20','1000')"));
    query.exec(QObject::tr("insert into user values (1001,'小冯 管理员','男','22','1001')"));
    query.exec(QObject::tr("insert into user values (1002,'小周 管理员','男','22','1002')"));
    query.exec(QObject::tr("insert into user values (1003,'小魏 管理员','男','22','1003')"));
    query.exec(QObject::tr("insert into user values (1004,'小徐 管理员','男','22','1004')"));

    /**********************会 员 卡 信 息 表********************/
    query.exec(QObject::tr("create table member(Member_Id integer primary key AUTOINCREMENT,"
                           "Member_Name vchar(10),Member_Phone vchar(20),"
                           "Member_Address vchar(100),Member_Class vchar(10),"
                           "Member_Grade vchar(20) ,Member_Cost vchar(20),"
                           "Member_Register vchar(20),Member_Birthday vchar(20),"
                           "Member_Email vchar(20),Member_Remark vchar(500))"));
    query.exec(QObject::tr("insert into member values (1,'冯晶旭','15689078002',"
                           "'山东省青岛QST基地','黄金级','300','350',"
                           "'2014-08-20','1992-01-01','feng@163.com','null')"));

    query.exec(QObject::tr("insert into member values (2,'顾岩涛','1568078002',"
                           "'山东省青岛QSt基地','黄金级','3000','10000',"
                           "'2014-06-20','1992-11-24','gu@163.com','null')"));

    query.exec(QObject::tr("insert into member values (3,'邱慎谦','15689078002',"
                           "'山东省青岛QST基地','白银级','440','500',"
                           "'2013-06-20','1991-1-4','qiu@163.com','null')"));

    query.exec(QObject::tr("insert into member values (4,'魏广鹏','15689078002',"
                           "'山东省青岛QST基地','白银级','1000','1200',"
                           "'2011-04-12','1992-4-12','wei@163.com','null')"));

    query.exec(QObject::tr("insert into member values (5,'徐浩慧','15689078002',"
                           "'山东省青岛QST基地','普通级','500','700',"
                           "'2001-06-20','1991-3-2','xu@163.com','null')"));



    /**********************商 品 信 息 表*********************************/
    query.exec(QObject::tr("create table Goods(Goods_Id int(10) primary key,Goods_Categories vchar(10),"
                           "Goods_Brand vchar(10),Goods_Name vchar(10),"
                           "Goods_Type vchar(10),Goods_Color vchar(10),"
                           "Goods_Num int(20),Goods_Units vchar(10),"
                           "Goods_Seal_Price int(10),Goods_Sum int(20),"
                           "Goods_Bid_Price int(20),Goods_Total int(20))"));
    query.exec(QObject::tr("insert into Goods values (8000001,'烟','香烟','中华','1x1','红色',100,'包',20,2000,5,500)"));
    query.exec(QObject::tr("insert into Goods values (8000002,'酒','汾酒','1x1','无色',10,'瓶',100,1000,50,500)"));

    /*******************************商品销售表**********************************/
    query.exec(QObject::tr("create table Seals(Seal_Id int primary key,Seal_Name vchar(10),"
                           "Seal_Type vchar(10),Seal_Color vchar(10),"
                           "Seal_Price int,Seal_Discount int,"
                           "Seal_Discount_price int,Seal_num int,"
                           "Seal_Unit vchar(10),Seal_Total_price int,"
                           "Seal_Remark vchar(100),Seal_System_Remark vchar(200))"));

    /**********************供 货 商 表************************************/
    query.exec(QObject::tr("create table Supplier(Supplier_Name vchar(50) primary key,"
                           "Supplier_Person_Name vchar(10),Supplier_Address vchar(10),"
                           "Supplier_Phone int,Supplier_Email vchar(20))"));
    query.exec(QObject::tr("insert into Supplier values(12000001,'QST第一超市','山东青岛',15689078002,'feng@163.com')"));
    query.exec(QObject::tr("insert into Supplier values(12000002,'QST第二超市','山东青岛',15689078002,'gu@163.com')"));

    /***********************生产厂商表*******************************/
    query.exec(QObject::tr("create table producter(Producter_Name vchar(40) primary key,"
                           "Producter_Address vchar(40),Producter_Phone vchar(20))"));


    /**************************商品颜色表********************************/
    query.exec(QObject::tr("create table color(Color_Kind vchar(10) primary key)"));
    query.exec(QObject::tr("insert into color values ('透明')"));
    query.exec(QObject::tr("insert into color values ('红色')"));
    query.exec(QObject::tr("insert into color values ('橙色')"));
    query.exec(QObject::tr("insert into color values ('黄色')"));
    query.exec(QObject::tr("insert into color values ('绿色')"));
    query.exec(QObject::tr("insert into color values ('蓝色')"));
    query.exec(QObject::tr("insert into color values ('靛色')"));
    query.exec(QObject::tr("insert into color values ('紫色')"));

    /**********************商品类别表**********************/
    query.exec(QObject::tr("create table G_Type(Type_d int primary key,Type_Name vchar(4))"));
    query.exec(QObject::trUtf8("insert into G_Type values (1,'日化类')"));

    /******************************VIP折扣表***********************************/
    query.exec(QObject::tr("create table Vip(Vip_Id int PRIMARY KEY,Vip_Name vchar(4)),"
                           "Vip_Discount vchar(10)"));
    return true;
}

/***************关闭数据库****************/
static bool closeConnection()
{
    QSqlDatabase::database().close();
}


#endif // DATABASE_H
