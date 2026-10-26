/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionOtherSave;
    QAction *actionExit;
    QAction *actionBack;
    QAction *actionRenew;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionFind;
    QAction *actionReplace;
    QAction *actionSelectall;
    QAction *actionNewline;
    QAction *actionShowline;
    QAction *actionFont;
    QAction *actionFontColor;
    QAction *actionFontBackgroudColor;
    QAction *actionEditorColor;
    QAction *actionToolBar;
    QAction *actionStatusBar;
    QAction *actionAbout;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *TextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(412, 349);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/New.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionNew->setMenuRole(QAction::MenuRole::NoRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionOpen->setMenuRole(QAction::MenuRole::NoRole);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon2);
        actionSave->setMenuRole(QAction::MenuRole::NoRole);
        actionOtherSave = new QAction(MainWindow);
        actionOtherSave->setObjectName("actionOtherSave");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/OtherSave.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOtherSave->setIcon(icon3);
        actionOtherSave->setMenuRole(QAction::MenuRole::NoRole);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/Exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExit->setIcon(icon4);
        actionExit->setMenuRole(QAction::MenuRole::NoRole);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName("actionBack");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBack->setIcon(icon5);
        actionBack->setMenuRole(QAction::MenuRole::NoRole);
        actionRenew = new QAction(MainWindow);
        actionRenew->setObjectName("actionRenew");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/ReNew.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRenew->setIcon(icon6);
        actionRenew->setMenuRole(QAction::MenuRole::NoRole);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/Cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon7);
        actionCut->setMenuRole(QAction::MenuRole::NoRole);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon8);
        actionCopy->setMenuRole(QAction::MenuRole::NoRole);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon9);
        actionPaste->setMenuRole(QAction::MenuRole::NoRole);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/find.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFind->setIcon(icon10);
        actionFind->setMenuRole(QAction::MenuRole::NoRole);
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName("actionReplace");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/Replace.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionReplace->setIcon(icon11);
        actionReplace->setMenuRole(QAction::MenuRole::NoRole);
        actionSelectall = new QAction(MainWindow);
        actionSelectall->setObjectName("actionSelectall");
        actionSelectall->setMenuRole(QAction::MenuRole::NoRole);
        actionNewline = new QAction(MainWindow);
        actionNewline->setObjectName("actionNewline");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/NewLine.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNewline->setIcon(icon12);
        actionNewline->setMenuRole(QAction::MenuRole::NoRole);
        actionShowline = new QAction(MainWindow);
        actionShowline->setObjectName("actionShowline");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/ShowLine.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShowline->setIcon(icon13);
        actionShowline->setMenuRole(QAction::MenuRole::NoRole);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/img/Font.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFont->setIcon(icon14);
        actionFont->setMenuRole(QAction::MenuRole::NoRole);
        actionFontColor = new QAction(MainWindow);
        actionFontColor->setObjectName("actionFontColor");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/img/FontColor.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFontColor->setIcon(icon15);
        actionFontColor->setMenuRole(QAction::MenuRole::NoRole);
        actionFontBackgroudColor = new QAction(MainWindow);
        actionFontBackgroudColor->setObjectName("actionFontBackgroudColor");
        actionFontBackgroudColor->setMenuRole(QAction::MenuRole::NoRole);
        actionEditorColor = new QAction(MainWindow);
        actionEditorColor->setObjectName("actionEditorColor");
        actionEditorColor->setMenuRole(QAction::MenuRole::NoRole);
        actionToolBar = new QAction(MainWindow);
        actionToolBar->setObjectName("actionToolBar");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/img/ToolBar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionToolBar->setIcon(icon16);
        actionToolBar->setMenuRole(QAction::MenuRole::NoRole);
        actionStatusBar = new QAction(MainWindow);
        actionStatusBar->setObjectName("actionStatusBar");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/img/StatusBar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionStatusBar->setIcon(icon17);
        actionStatusBar->setMenuRole(QAction::MenuRole::NoRole);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionAbout->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        TextEdit = new QPlainTextEdit(centralwidget);
        TextEdit->setObjectName("TextEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextEdit->sizePolicy().hasHeightForWidth());
        TextEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(TextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 412, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName("menu_5");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionOtherSave);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_2->addAction(actionBack);
        menu_2->addAction(actionRenew);
        menu_2->addAction(actionCut);
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionPaste);
        menu_2->addSeparator();
        menu_2->addAction(actionFind);
        menu_2->addAction(actionReplace);
        menu_2->addSeparator();
        menu_2->addAction(actionSelectall);
        menu_3->addAction(actionNewline);
        menu_3->addAction(actionShowline);
        menu_3->addAction(actionFont);
        menu_3->addAction(actionFontColor);
        menu_3->addSeparator();
        menu_3->addAction(actionFontBackgroudColor);
        menu_3->addAction(actionEditorColor);
        menu_4->addAction(actionToolBar);
        menu_4->addAction(actionStatusBar);
        menu_5->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionOtherSave);
        toolBar->addAction(actionExit);
        toolBar->addSeparator();
        toolBar->addAction(actionBack);
        toolBar->addAction(actionRenew);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionNewline);
        toolBar->addAction(actionShowline);
        toolBar->addAction(actionFont);
        toolBar->addAction(actionFontColor);
        toolBar->addSeparator();
        toolBar->addAction(actionToolBar);
        toolBar->addAction(actionStatusBar);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
        actionOtherSave->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
        actionBack->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", nullptr));
        actionRenew->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207(&T)", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", nullptr));
        actionFind->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276(&F)", nullptr));
        actionReplace->setText(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242&R)", nullptr));
        actionSelectall->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211(&A)", nullptr));
        actionNewline->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214(&W)", nullptr));
        actionShowline->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\345\217\267(&L)", nullptr));
        actionFont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223(&F)", nullptr));
        actionFontColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        actionFontBackgroudColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\203\214\346\231\257\350\211\262", nullptr));
        actionEditorColor->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\345\231\250\350\203\214\346\231\257\350\211\262", nullptr));
        actionToolBar->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217(&T)", nullptr));
        actionStatusBar->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217(&S)", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&O)", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213(&V)", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
