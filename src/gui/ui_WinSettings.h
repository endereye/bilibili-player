/********************************************************************************
** Form generated from reading UI file 'WinSettingsscxyIR.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WINSETTINGSSCXYIR_H
#define WINSETTINGSSCXYIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_WinSettings
{
public:
    QFormLayout *formLayout;
    QCheckBox *checkAutomaticFullscreen;
    QCheckBox *checkDownloadWhenCreated;
    QDialogButtonBox *buttonBox;
    QLabel *labelSession;
    QLineEdit *lineSession;
    QLabel *labelLibrary;
    QLineEdit *lineLibrary;
    QLabel *labelUserAgent;
    QLineEdit *lineUserAgent;
    QLabel *label;

    void setupUi(QDialog *WinSettings)
    {
        if (WinSettings->objectName().isEmpty())
            WinSettings->setObjectName(QString::fromUtf8("WinSettings"));
        WinSettings->resize(594, 298);
        formLayout = new QFormLayout(WinSettings);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        checkAutomaticFullscreen = new QCheckBox(WinSettings);
        checkAutomaticFullscreen->setObjectName(QString::fromUtf8("checkAutomaticFullscreen"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, checkAutomaticFullscreen);

        checkDownloadWhenCreated = new QCheckBox(WinSettings);
        checkDownloadWhenCreated->setObjectName(QString::fromUtf8("checkDownloadWhenCreated"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, checkDownloadWhenCreated);

        buttonBox = new QDialogButtonBox(WinSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(6, QFormLayout::SpanningRole, buttonBox);

        labelSession = new QLabel(WinSettings);
        labelSession->setObjectName(QString::fromUtf8("labelSession"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelSession);

        lineSession = new QLineEdit(WinSettings);
        lineSession->setObjectName(QString::fromUtf8("lineSession"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineSession);

        labelLibrary = new QLabel(WinSettings);
        labelLibrary->setObjectName(QString::fromUtf8("labelLibrary"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelLibrary);

        lineLibrary = new QLineEdit(WinSettings);
        lineLibrary->setObjectName(QString::fromUtf8("lineLibrary"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineLibrary);

        labelUserAgent = new QLabel(WinSettings);
        labelUserAgent->setObjectName(QString::fromUtf8("labelUserAgent"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelUserAgent);

        lineUserAgent = new QLineEdit(WinSettings);
        lineUserAgent->setObjectName(QString::fromUtf8("lineUserAgent"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineUserAgent);

        label = new QLabel(WinSettings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::SpanningRole, label);


        retranslateUi(WinSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), WinSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WinSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(WinSettings);
    } // setupUi

    void retranslateUi(QDialog *WinSettings)
    {
        WinSettings->setWindowTitle(QCoreApplication::translate("WinSettings", "Settings", nullptr));
        checkAutomaticFullscreen->setText(QCoreApplication::translate("WinSettings", "Automatic fullscreen", nullptr));
        checkDownloadWhenCreated->setText(QCoreApplication::translate("WinSettings", "Download videos when they are created", nullptr));
        labelSession->setText(QCoreApplication::translate("WinSettings", "Session", nullptr));
        labelLibrary->setText(QCoreApplication::translate("WinSettings", "Video location", nullptr));
        labelUserAgent->setText(QCoreApplication::translate("WinSettings", "User agent", nullptr));
        label->setText(QCoreApplication::translate("WinSettings", "Some settings require restart to take effect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinSettings: public Ui_WinSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WINSETTINGSSCXYIR_H