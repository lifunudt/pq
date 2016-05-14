/********************************************************************************
** Form generated from reading UI file 'exportCloudsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTCLOUDSDIALOG_H
#define UI_EXPORTCLOUDSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportCloudsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_13;
    QGridLayout *gridLayout_8;
    QLabel *label_binaryFile_2;
    QSpinBox *spinBox_normalKSearch;
    QLabel *label_binaryFile;
    QCheckBox *checkBox_binary;
    QCheckBox *checkBox_assemble;
    QLabel *label_voxel;
    QDoubleSpinBox *doubleSpinBox_voxelSize_assembled;
    QLabel *label_normal;
    QLabel *label_12;
    QComboBox *comboBox_pipeline;
    QGroupBox *groupBox_regenerate;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout;
    QSpinBox *spinBox_decimation;
    QLabel *label_108;
    QDoubleSpinBox *doubleSpinBox_maxDepth;
    QLabel *label_132;
    QLabel *label_133;
    QDoubleSpinBox *doubleSpinBox_minDepth;
    QGroupBox *groupBox_subtraction;
    QGridLayout *gridLayout_11;
    QLabel *label_174;
    QLabel *label_193;
    QDoubleSpinBox *doubleSpinBox_subtractPointFilteringRadius;
    QLabel *label_192;
    QSpinBox *spinBox_subtractFilteringMinPts;
    QDoubleSpinBox *doubleSpinBox_subtractPointFilteringAngle;
    QGroupBox *groupBox_filtering;
    QGridLayout *gridLayout_9;
    QDoubleSpinBox *doubleSpinBox_filteringRadius;
    QLabel *label_110;
    QSpinBox *spinBox_filteringMinNeighbors;
    QLabel *label_112;
    QGroupBox *groupBox_mls;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *doubleSpinBox_mlsRadius;
    QComboBox *comboBox_upsamplingMethod;
    QLabel *label_87;
    QLabel *label_88;
    QLabel *label_89;
    QSpinBox *spinBox_polygonialOrder;
    QStackedWidget *stackedWidget_upsampling;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_4;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_sampleRadius;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_sampleStep;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_5;
    QGridLayout *gridLayout_6;
    QSpinBox *spinBox_randomPoints;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_6;
    QGridLayout *gridLayout_7;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_dilationVoxelSize;
    QLabel *label_11;
    QSpinBox *spinBox_dilationSteps;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_meshing;
    QVBoxLayout *verticalLayout_15;
    QGridLayout *gridLayout_10;
    QDoubleSpinBox *doubleSpinBox_meshDecimationFactor;
    QLabel *label_170;
    QCheckBox *checkBox_textureMapping;
    QLabel *label_textureMapping;
    QGroupBox *groupBox_gp3;
    QGridLayout *gridLayout_4;
    QLabel *label_169;
    QDoubleSpinBox *doubleSpinBox_gp3Radius;
    QLabel *label_168;
    QDoubleSpinBox *doubleSpinBox_gp3Mu;
    QGroupBox *groupBox_organized;
    QVBoxLayout *verticalLayout_17;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QCheckBox *checkBox_mesh_quad;
    QLabel *label_quad;
    QSpinBox *spinBox_mesh_triangleSize;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_mesh_angleTolerance;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportCloudsDialog)
    {
        if (ExportCloudsDialog->objectName().isEmpty())
            ExportCloudsDialog->setObjectName(QString::fromUtf8("ExportCloudsDialog"));
        ExportCloudsDialog->resize(814, 667);
        verticalLayout_2 = new QVBoxLayout(ExportCloudsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(ExportCloudsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 778, 1318));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_binaryFile_2 = new QLabel(scrollAreaWidgetContents);
        label_binaryFile_2->setObjectName(QString::fromUtf8("label_binaryFile_2"));
        label_binaryFile_2->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile_2, 2, 1, 1, 1);

        spinBox_normalKSearch = new QSpinBox(scrollAreaWidgetContents);
        spinBox_normalKSearch->setObjectName(QString::fromUtf8("spinBox_normalKSearch"));
        spinBox_normalKSearch->setMinimum(0);
        spinBox_normalKSearch->setValue(20);

        gridLayout_8->addWidget(spinBox_normalKSearch, 3, 0, 1, 1);

        label_binaryFile = new QLabel(scrollAreaWidgetContents);
        label_binaryFile->setObjectName(QString::fromUtf8("label_binaryFile"));
        label_binaryFile->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile, 1, 1, 1, 1);

        checkBox_binary = new QCheckBox(scrollAreaWidgetContents);
        checkBox_binary->setObjectName(QString::fromUtf8("checkBox_binary"));
        checkBox_binary->setChecked(true);

        gridLayout_8->addWidget(checkBox_binary, 1, 0, 1, 1);

        checkBox_assemble = new QCheckBox(scrollAreaWidgetContents);
        checkBox_assemble->setObjectName(QString::fromUtf8("checkBox_assemble"));

        gridLayout_8->addWidget(checkBox_assemble, 2, 0, 1, 1);

        label_voxel = new QLabel(scrollAreaWidgetContents);
        label_voxel->setObjectName(QString::fromUtf8("label_voxel"));
        label_voxel->setWordWrap(true);

        gridLayout_8->addWidget(label_voxel, 4, 1, 1, 1);

        doubleSpinBox_voxelSize_assembled = new QDoubleSpinBox(scrollAreaWidgetContents);
        doubleSpinBox_voxelSize_assembled->setObjectName(QString::fromUtf8("doubleSpinBox_voxelSize_assembled"));
        doubleSpinBox_voxelSize_assembled->setDecimals(3);
        doubleSpinBox_voxelSize_assembled->setMaximum(1);
        doubleSpinBox_voxelSize_assembled->setSingleStep(0.01);
        doubleSpinBox_voxelSize_assembled->setValue(0.005);

        gridLayout_8->addWidget(doubleSpinBox_voxelSize_assembled, 4, 0, 1, 1);

        label_normal = new QLabel(scrollAreaWidgetContents);
        label_normal->setObjectName(QString::fromUtf8("label_normal"));
        label_normal->setWordWrap(true);

        gridLayout_8->addWidget(label_normal, 3, 1, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_8->addWidget(label_12, 0, 1, 1, 1);

        comboBox_pipeline = new QComboBox(scrollAreaWidgetContents);
        comboBox_pipeline->setObjectName(QString::fromUtf8("comboBox_pipeline"));

        gridLayout_8->addWidget(comboBox_pipeline, 0, 0, 1, 1);

        gridLayout_8->setColumnStretch(1, 1);

        verticalLayout_13->addLayout(gridLayout_8);

        groupBox_regenerate = new QGroupBox(scrollAreaWidgetContents);
        groupBox_regenerate->setObjectName(QString::fromUtf8("groupBox_regenerate"));
        groupBox_regenerate->setCheckable(true);
        verticalLayout_14 = new QVBoxLayout(groupBox_regenerate);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBox_decimation = new QSpinBox(groupBox_regenerate);
        spinBox_decimation->setObjectName(QString::fromUtf8("spinBox_decimation"));
        spinBox_decimation->setMinimum(1);
        spinBox_decimation->setMaximum(32);
        spinBox_decimation->setValue(1);

        gridLayout->addWidget(spinBox_decimation, 0, 0, 1, 1);

        label_108 = new QLabel(groupBox_regenerate);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setWordWrap(true);

        gridLayout->addWidget(label_108, 0, 1, 1, 1);

        doubleSpinBox_maxDepth = new QDoubleSpinBox(groupBox_regenerate);
        doubleSpinBox_maxDepth->setObjectName(QString::fromUtf8("doubleSpinBox_maxDepth"));
        doubleSpinBox_maxDepth->setDecimals(1);
        doubleSpinBox_maxDepth->setMaximum(100);
        doubleSpinBox_maxDepth->setSingleStep(0.1);
        doubleSpinBox_maxDepth->setValue(4);

        gridLayout->addWidget(doubleSpinBox_maxDepth, 1, 0, 1, 1);

        label_132 = new QLabel(groupBox_regenerate);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setWordWrap(true);

        gridLayout->addWidget(label_132, 1, 1, 1, 1);

        label_133 = new QLabel(groupBox_regenerate);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        label_133->setWordWrap(true);

        gridLayout->addWidget(label_133, 2, 1, 1, 1);

        doubleSpinBox_minDepth = new QDoubleSpinBox(groupBox_regenerate);
        doubleSpinBox_minDepth->setObjectName(QString::fromUtf8("doubleSpinBox_minDepth"));
        doubleSpinBox_minDepth->setDecimals(1);
        doubleSpinBox_minDepth->setMaximum(100);
        doubleSpinBox_minDepth->setSingleStep(0.1);
        doubleSpinBox_minDepth->setValue(0);

        gridLayout->addWidget(doubleSpinBox_minDepth, 2, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_14->addLayout(gridLayout);

        groupBox_subtraction = new QGroupBox(groupBox_regenerate);
        groupBox_subtraction->setObjectName(QString::fromUtf8("groupBox_subtraction"));
        groupBox_subtraction->setCheckable(true);
        gridLayout_11 = new QGridLayout(groupBox_subtraction);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_174 = new QLabel(groupBox_subtraction);
        label_174->setObjectName(QString::fromUtf8("label_174"));
        label_174->setWordWrap(true);
        label_174->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_174, 2, 1, 1, 1);

        label_193 = new QLabel(groupBox_subtraction);
        label_193->setObjectName(QString::fromUtf8("label_193"));
        label_193->setWordWrap(true);
        label_193->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_193, 1, 1, 1, 1);

        doubleSpinBox_subtractPointFilteringRadius = new QDoubleSpinBox(groupBox_subtraction);
        doubleSpinBox_subtractPointFilteringRadius->setObjectName(QString::fromUtf8("doubleSpinBox_subtractPointFilteringRadius"));
        doubleSpinBox_subtractPointFilteringRadius->setMinimum(0.01);
        doubleSpinBox_subtractPointFilteringRadius->setMaximum(1);
        doubleSpinBox_subtractPointFilteringRadius->setSingleStep(0.01);
        doubleSpinBox_subtractPointFilteringRadius->setValue(0.02);

        gridLayout_11->addWidget(doubleSpinBox_subtractPointFilteringRadius, 0, 0, 1, 1);

        label_192 = new QLabel(groupBox_subtraction);
        label_192->setObjectName(QString::fromUtf8("label_192"));
        label_192->setWordWrap(true);
        label_192->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_192, 0, 1, 1, 1);

        spinBox_subtractFilteringMinPts = new QSpinBox(groupBox_subtraction);
        spinBox_subtractFilteringMinPts->setObjectName(QString::fromUtf8("spinBox_subtractFilteringMinPts"));
        spinBox_subtractFilteringMinPts->setMinimum(1);

        gridLayout_11->addWidget(spinBox_subtractFilteringMinPts, 2, 0, 1, 1);

        doubleSpinBox_subtractPointFilteringAngle = new QDoubleSpinBox(groupBox_subtraction);
        doubleSpinBox_subtractPointFilteringAngle->setObjectName(QString::fromUtf8("doubleSpinBox_subtractPointFilteringAngle"));
        doubleSpinBox_subtractPointFilteringAngle->setDecimals(0);
        doubleSpinBox_subtractPointFilteringAngle->setMaximum(180);
        doubleSpinBox_subtractPointFilteringAngle->setValue(30);

        gridLayout_11->addWidget(doubleSpinBox_subtractPointFilteringAngle, 1, 0, 1, 1);

        gridLayout_11->setColumnStretch(1, 1);

        verticalLayout_14->addWidget(groupBox_subtraction);


        verticalLayout_13->addWidget(groupBox_regenerate);

        groupBox_filtering = new QGroupBox(scrollAreaWidgetContents);
        groupBox_filtering->setObjectName(QString::fromUtf8("groupBox_filtering"));
        groupBox_filtering->setCheckable(true);
        gridLayout_9 = new QGridLayout(groupBox_filtering);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        doubleSpinBox_filteringRadius = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_filteringRadius->setObjectName(QString::fromUtf8("doubleSpinBox_filteringRadius"));
        doubleSpinBox_filteringRadius->setDecimals(3);
        doubleSpinBox_filteringRadius->setMinimum(0.001);
        doubleSpinBox_filteringRadius->setMaximum(1);
        doubleSpinBox_filteringRadius->setSingleStep(0.01);
        doubleSpinBox_filteringRadius->setValue(0.02);

        gridLayout_9->addWidget(doubleSpinBox_filteringRadius, 0, 0, 1, 1);

        label_110 = new QLabel(groupBox_filtering);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setWordWrap(true);

        gridLayout_9->addWidget(label_110, 0, 1, 1, 1);

        spinBox_filteringMinNeighbors = new QSpinBox(groupBox_filtering);
        spinBox_filteringMinNeighbors->setObjectName(QString::fromUtf8("spinBox_filteringMinNeighbors"));
        spinBox_filteringMinNeighbors->setMinimum(1);
        spinBox_filteringMinNeighbors->setMaximum(100);
        spinBox_filteringMinNeighbors->setValue(2);

        gridLayout_9->addWidget(spinBox_filteringMinNeighbors, 1, 0, 1, 1);

        label_112 = new QLabel(groupBox_filtering);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setWordWrap(true);

        gridLayout_9->addWidget(label_112, 1, 1, 1, 1);

        gridLayout_9->setColumnStretch(1, 1);

        verticalLayout_13->addWidget(groupBox_filtering);

        groupBox_mls = new QGroupBox(scrollAreaWidgetContents);
        groupBox_mls->setObjectName(QString::fromUtf8("groupBox_mls"));
        groupBox_mls->setCheckable(true);
        groupBox_mls->setChecked(true);
        verticalLayout = new QVBoxLayout(groupBox_mls);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox_mls);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        doubleSpinBox_mlsRadius = new QDoubleSpinBox(groupBox_mls);
        doubleSpinBox_mlsRadius->setObjectName(QString::fromUtf8("doubleSpinBox_mlsRadius"));
        doubleSpinBox_mlsRadius->setDecimals(3);
        doubleSpinBox_mlsRadius->setMaximum(1);
        doubleSpinBox_mlsRadius->setSingleStep(0.01);
        doubleSpinBox_mlsRadius->setValue(0.04);

        gridLayout_3->addWidget(doubleSpinBox_mlsRadius, 0, 0, 1, 1);

        comboBox_upsamplingMethod = new QComboBox(groupBox_mls);
        comboBox_upsamplingMethod->setObjectName(QString::fromUtf8("comboBox_upsamplingMethod"));

        gridLayout_3->addWidget(comboBox_upsamplingMethod, 2, 0, 1, 1);

        label_87 = new QLabel(groupBox_mls);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setWordWrap(true);

        gridLayout_3->addWidget(label_87, 0, 1, 1, 1);

        label_88 = new QLabel(groupBox_mls);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setWordWrap(true);

        gridLayout_3->addWidget(label_88, 2, 1, 1, 1);

        label_89 = new QLabel(groupBox_mls);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setWordWrap(true);

        gridLayout_3->addWidget(label_89, 1, 1, 1, 1);

        spinBox_polygonialOrder = new QSpinBox(groupBox_mls);
        spinBox_polygonialOrder->setObjectName(QString::fromUtf8("spinBox_polygonialOrder"));
        spinBox_polygonialOrder->setMinimum(0);
        spinBox_polygonialOrder->setMaximum(4);
        spinBox_polygonialOrder->setValue(2);

        gridLayout_3->addWidget(spinBox_polygonialOrder, 1, 0, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_3);

        stackedWidget_upsampling = new QStackedWidget(groupBox_mls);
        stackedWidget_upsampling->setObjectName(QString::fromUtf8("stackedWidget_upsampling"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_8->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);


        verticalLayout_3->addWidget(groupBox);

        stackedWidget_upsampling->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_9->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);


        verticalLayout_4->addWidget(groupBox_2);

        stackedWidget_upsampling->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_7 = new QVBoxLayout(page_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_10 = new QVBoxLayout(groupBox_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_10->addWidget(label_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_5->addWidget(label_8, 1, 1, 1, 1);

        doubleSpinBox_sampleRadius = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_sampleRadius->setObjectName(QString::fromUtf8("doubleSpinBox_sampleRadius"));

        gridLayout_5->addWidget(doubleSpinBox_sampleRadius, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout_5->addWidget(label_7, 0, 1, 1, 1);

        doubleSpinBox_sampleStep = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_sampleStep->setObjectName(QString::fromUtf8("doubleSpinBox_sampleStep"));

        gridLayout_5->addWidget(doubleSpinBox_sampleStep, 1, 0, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_10->addLayout(gridLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);


        verticalLayout_7->addWidget(groupBox_3);

        stackedWidget_upsampling->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_6 = new QVBoxLayout(page_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_11 = new QVBoxLayout(groupBox_4);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_11->addWidget(label_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        spinBox_randomPoints = new QSpinBox(groupBox_4);
        spinBox_randomPoints->setObjectName(QString::fromUtf8("spinBox_randomPoints"));

        gridLayout_6->addWidget(spinBox_randomPoints, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        gridLayout_6->addWidget(label_9, 0, 1, 1, 1);

        gridLayout_6->setColumnStretch(1, 1);

        verticalLayout_11->addLayout(gridLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_5);


        verticalLayout_6->addWidget(groupBox_4);

        stackedWidget_upsampling->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_5 = new QVBoxLayout(page_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_5 = new QGroupBox(page_5);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_12 = new QVBoxLayout(groupBox_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);

        verticalLayout_12->addWidget(label_6);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setWordWrap(true);

        gridLayout_7->addWidget(label_10, 0, 1, 1, 1);

        doubleSpinBox_dilationVoxelSize = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_dilationVoxelSize->setObjectName(QString::fromUtf8("doubleSpinBox_dilationVoxelSize"));

        gridLayout_7->addWidget(doubleSpinBox_dilationVoxelSize, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_7->addWidget(label_11, 1, 1, 1, 1);

        spinBox_dilationSteps = new QSpinBox(groupBox_5);
        spinBox_dilationSteps->setObjectName(QString::fromUtf8("spinBox_dilationSteps"));

        gridLayout_7->addWidget(spinBox_dilationSteps, 1, 0, 1, 1);

        gridLayout_7->setColumnStretch(1, 1);

        verticalLayout_12->addLayout(gridLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_6);


        verticalLayout_5->addWidget(groupBox_5);

        stackedWidget_upsampling->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget_upsampling);


        verticalLayout_13->addWidget(groupBox_mls);

        groupBox_meshing = new QGroupBox(scrollAreaWidgetContents);
        groupBox_meshing->setObjectName(QString::fromUtf8("groupBox_meshing"));
        groupBox_meshing->setCheckable(true);
        verticalLayout_15 = new QVBoxLayout(groupBox_meshing);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        doubleSpinBox_meshDecimationFactor = new QDoubleSpinBox(groupBox_meshing);
        doubleSpinBox_meshDecimationFactor->setObjectName(QString::fromUtf8("doubleSpinBox_meshDecimationFactor"));
        doubleSpinBox_meshDecimationFactor->setDecimals(2);
        doubleSpinBox_meshDecimationFactor->setMinimum(0);
        doubleSpinBox_meshDecimationFactor->setMaximum(0.99);
        doubleSpinBox_meshDecimationFactor->setSingleStep(0.1);
        doubleSpinBox_meshDecimationFactor->setValue(0);

        gridLayout_10->addWidget(doubleSpinBox_meshDecimationFactor, 0, 0, 1, 1);

        label_170 = new QLabel(groupBox_meshing);
        label_170->setObjectName(QString::fromUtf8("label_170"));
        label_170->setWordWrap(true);

        gridLayout_10->addWidget(label_170, 0, 1, 1, 1);

        checkBox_textureMapping = new QCheckBox(groupBox_meshing);
        checkBox_textureMapping->setObjectName(QString::fromUtf8("checkBox_textureMapping"));

        gridLayout_10->addWidget(checkBox_textureMapping, 1, 0, 1, 1);

        label_textureMapping = new QLabel(groupBox_meshing);
        label_textureMapping->setObjectName(QString::fromUtf8("label_textureMapping"));
        label_textureMapping->setWordWrap(true);

        gridLayout_10->addWidget(label_textureMapping, 1, 1, 1, 1);

        gridLayout_10->setColumnStretch(1, 1);

        verticalLayout_15->addLayout(gridLayout_10);

        groupBox_gp3 = new QGroupBox(groupBox_meshing);
        groupBox_gp3->setObjectName(QString::fromUtf8("groupBox_gp3"));
        groupBox_gp3->setCheckable(false);
        groupBox_gp3->setChecked(false);
        gridLayout_4 = new QGridLayout(groupBox_gp3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_169 = new QLabel(groupBox_gp3);
        label_169->setObjectName(QString::fromUtf8("label_169"));
        label_169->setWordWrap(true);

        gridLayout_4->addWidget(label_169, 2, 1, 1, 1);

        doubleSpinBox_gp3Radius = new QDoubleSpinBox(groupBox_gp3);
        doubleSpinBox_gp3Radius->setObjectName(QString::fromUtf8("doubleSpinBox_gp3Radius"));
        doubleSpinBox_gp3Radius->setDecimals(3);
        doubleSpinBox_gp3Radius->setMaximum(1);
        doubleSpinBox_gp3Radius->setSingleStep(0.01);
        doubleSpinBox_gp3Radius->setValue(0.04);

        gridLayout_4->addWidget(doubleSpinBox_gp3Radius, 1, 0, 1, 1);

        label_168 = new QLabel(groupBox_gp3);
        label_168->setObjectName(QString::fromUtf8("label_168"));
        label_168->setWordWrap(true);

        gridLayout_4->addWidget(label_168, 1, 1, 1, 1);

        doubleSpinBox_gp3Mu = new QDoubleSpinBox(groupBox_gp3);
        doubleSpinBox_gp3Mu->setObjectName(QString::fromUtf8("doubleSpinBox_gp3Mu"));
        doubleSpinBox_gp3Mu->setDecimals(1);
        doubleSpinBox_gp3Mu->setMinimum(0.1);
        doubleSpinBox_gp3Mu->setMaximum(100);
        doubleSpinBox_gp3Mu->setSingleStep(1);
        doubleSpinBox_gp3Mu->setValue(2.5);

        gridLayout_4->addWidget(doubleSpinBox_gp3Mu, 2, 0, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(groupBox_gp3);

        groupBox_organized = new QGroupBox(groupBox_meshing);
        groupBox_organized->setObjectName(QString::fromUtf8("groupBox_organized"));
        verticalLayout_17 = new QVBoxLayout(groupBox_organized);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_14 = new QLabel(groupBox_organized);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 0, 1, 1, 1);

        checkBox_mesh_quad = new QCheckBox(groupBox_organized);
        checkBox_mesh_quad->setObjectName(QString::fromUtf8("checkBox_mesh_quad"));
        checkBox_mesh_quad->setChecked(true);

        gridLayout_2->addWidget(checkBox_mesh_quad, 1, 0, 1, 1);

        label_quad = new QLabel(groupBox_organized);
        label_quad->setObjectName(QString::fromUtf8("label_quad"));

        gridLayout_2->addWidget(label_quad, 1, 1, 1, 1);

        spinBox_mesh_triangleSize = new QSpinBox(groupBox_organized);
        spinBox_mesh_triangleSize->setObjectName(QString::fromUtf8("spinBox_mesh_triangleSize"));
        spinBox_mesh_triangleSize->setMinimum(2);
        spinBox_mesh_triangleSize->setMaximum(99);

        gridLayout_2->addWidget(spinBox_mesh_triangleSize, 2, 0, 1, 1);

        label_15 = new QLabel(groupBox_organized);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 2, 1, 1, 1);

        doubleSpinBox_mesh_angleTolerance = new QDoubleSpinBox(groupBox_organized);
        doubleSpinBox_mesh_angleTolerance->setObjectName(QString::fromUtf8("doubleSpinBox_mesh_angleTolerance"));
        doubleSpinBox_mesh_angleTolerance->setDecimals(0);
        doubleSpinBox_mesh_angleTolerance->setMinimum(1);
        doubleSpinBox_mesh_angleTolerance->setMaximum(99);
        doubleSpinBox_mesh_angleTolerance->setValue(15);

        gridLayout_2->addWidget(doubleSpinBox_mesh_angleTolerance, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout_17->addLayout(gridLayout_2);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_8);


        verticalLayout_15->addWidget(groupBox_organized);


        verticalLayout_13->addWidget(groupBox_meshing);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_9);

        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExportCloudsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(buttonBox);

        verticalLayout_2->setStretch(0, 1);

        retranslateUi(ExportCloudsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportCloudsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportCloudsDialog, SLOT(reject()));

        stackedWidget_upsampling->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExportCloudsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportCloudsDialog)
    {
        ExportCloudsDialog->setWindowTitle(QApplication::translate("ExportCloudsDialog", "Export 3D Clouds", 0, QApplication::UnicodeUTF8));
        label_binaryFile_2->setText(QApplication::translate("ExportCloudsDialog", "Assemble clouds/meshes to a single output cloud/mesh.", 0, QApplication::UnicodeUTF8));
        label_binaryFile->setText(QApplication::translate("ExportCloudsDialog", "Binary file.", 0, QApplication::UnicodeUTF8));
        checkBox_binary->setText(QString());
        checkBox_assemble->setText(QString());
        label_voxel->setText(QApplication::translate("ExportCloudsDialog", "Voxel size. Set 0 to disable. When organized meshes are assembled, this is the radius in which the vertices of the polygons are merged.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_voxelSize_assembled->setSuffix(QApplication::translate("ExportCloudsDialog", " m", 0, QApplication::UnicodeUTF8));
        label_normal->setText(QApplication::translate("ExportCloudsDialog", "Set the number of k nearest neighbors to use for the normal estimation.", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ExportCloudsDialog", "Reconstruction flavor.", 0, QApplication::UnicodeUTF8));
        comboBox_pipeline->clear();
        comboBox_pipeline->insertItems(0, QStringList()
         << QApplication::translate("ExportCloudsDialog", "Organized Point Cloud", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCloudsDialog", "Dense Point Cloud", 0, QApplication::UnicodeUTF8)
        );
        groupBox_regenerate->setTitle(QApplication::translate("ExportCloudsDialog", "Regenerate Clouds", 0, QApplication::UnicodeUTF8));
        label_108->setText(QApplication::translate("ExportCloudsDialog", "3D cloud decimation (1-2-4-8-...).", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_maxDepth->setSuffix(QApplication::translate("ExportCloudsDialog", " m", 0, QApplication::UnicodeUTF8));
        label_132->setText(QApplication::translate("ExportCloudsDialog", "3D cloud maximum depth (0 means no limit).", 0, QApplication::UnicodeUTF8));
        label_133->setText(QApplication::translate("ExportCloudsDialog", "3D cloud minimum depth.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_minDepth->setSuffix(QApplication::translate("ExportCloudsDialog", " m", 0, QApplication::UnicodeUTF8));
        groupBox_subtraction->setTitle(QApplication::translate("ExportCloudsDialog", "Cloud Subtraction", 0, QApplication::UnicodeUTF8));
        label_174->setText(QApplication::translate("ExportCloudsDialog", "Minimum points of the previous cloud in the fixed point radius in order to substract the point in the new cloud. Increasing this value reduces the black contours between clouds.", 0, QApplication::UnicodeUTF8));
        label_193->setText(QApplication::translate("ExportCloudsDialog", "Point angle used to keep only points with similar normal between the current cloud and the previous one.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_subtractPointFilteringRadius->setSuffix(QString());
        label_192->setText(QApplication::translate("ExportCloudsDialog", "Point radius used to find close points between the current cloud and the previous one.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_subtractPointFilteringAngle->setSuffix(QApplication::translate("ExportCloudsDialog", " degrees", 0, QApplication::UnicodeUTF8));
        groupBox_filtering->setTitle(QApplication::translate("ExportCloudsDialog", "Cloud Filtering (remove noisy points)", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_filteringRadius->setSuffix(QApplication::translate("ExportCloudsDialog", " m", 0, QApplication::UnicodeUTF8));
        label_110->setText(QApplication::translate("ExportCloudsDialog", "Radius search.", 0, QApplication::UnicodeUTF8));
        label_112->setText(QApplication::translate("ExportCloudsDialog", "Minimum neighbors in the search radius.", 0, QApplication::UnicodeUTF8));
        groupBox_mls->setTitle(QApplication::translate("ExportCloudsDialog", "Cloud Smoothing using Moving Least Squares algorithm (MLS)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExportCloudsDialog", "WARNING: This adds significative time to process, though the clouds will be more smooth.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_mlsRadius->setSuffix(QApplication::translate("ExportCloudsDialog", " m", 0, QApplication::UnicodeUTF8));
        comboBox_upsamplingMethod->clear();
        comboBox_upsamplingMethod->insertItems(0, QStringList()
         << QApplication::translate("ExportCloudsDialog", "NONE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCloudsDialog", "DISTINCT_CLOUD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCloudsDialog", "SAMPLE_LOCAL_PLANE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCloudsDialog", "RANDOM_UNIFORM_DENSITY", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCloudsDialog", "VOXEL_GRID_DILATION", 0, QApplication::UnicodeUTF8)
        );
        label_87->setText(QApplication::translate("ExportCloudsDialog", "MLS search radius: Set the sphere radius that is to be used for determining the k-nearest neighbors used for fitting. \n"
"Guidelines: 4 times the voxel size, 0.025 for voxel=0.", 0, QApplication::UnicodeUTF8));
        label_88->setText(QApplication::translate("ExportCloudsDialog", "Upsampling method.", 0, QApplication::UnicodeUTF8));
        label_89->setText(QApplication::translate("ExportCloudsDialog", "Polygonial order. Sets whether the surface and normal are approximated using a polynomial, or only via tangent estimation (value=0).", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ExportCloudsDialog", "NONE", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ExportCloudsDialog", "No upsampling will be done, only the input points will be projected to their own MLS surfaces.", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ExportCloudsDialog", "DISTINCT_CLOUD", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ExportCloudsDialog", "Will project the points of the distinct cloud to the closest point on the MLS surface.", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ExportCloudsDialog", "SAMPLE_LOCAL_PLANE", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ExportCloudsDialog", "The local plane of each input point will be sampled in a circular fashion.", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ExportCloudsDialog", "Set the step size for the local plane sampling.", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ExportCloudsDialog", "Set the radius of the circle in the local point plane that will be sampled.", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("ExportCloudsDialog", "RANDOM_UNIFORM_DENSITY", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ExportCloudsDialog", "The local plane of each input point will be sampled using an uniform random distribution such that the density of points is constant throughout the cloud.", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ExportCloudsDialog", "Set the parameter that specifies the desired number of points within the search radius.", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("ExportCloudsDialog", "VOXEL_GRID_DILATION", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ExportCloudsDialog", "The input cloud will be inserted into a voxel grid. This voxel grid will be dilated and the resulting points will be projected to the MLS surface of the closest point in the input cloud. The result is a point cloud with filled holes and a constant point density.", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ExportCloudsDialog", "Set the voxel size for the voxel grid.", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ExportCloudsDialog", "Set the number of dilation steps of the voxel grid.", 0, QApplication::UnicodeUTF8));
        groupBox_meshing->setTitle(QApplication::translate("ExportCloudsDialog", "Meshing", 0, QApplication::UnicodeUTF8));
        label_170->setText(QApplication::translate("ExportCloudsDialog", "Mesh quadric decimation factor (0=no decimation). Used to reduce the number of polygons.", 0, QApplication::UnicodeUTF8));
        checkBox_textureMapping->setText(QString());
        label_textureMapping->setText(QApplication::translate("ExportCloudsDialog", "Texture mapping. Images of the cameras will be projected on the mesh(es). Output is a *.obj format.", 0, QApplication::UnicodeUTF8));
        groupBox_gp3->setTitle(QApplication::translate("ExportCloudsDialog", "Greedy Projection Triangulation (GP3) Meshing", 0, QApplication::UnicodeUTF8));
        label_169->setText(QApplication::translate("ExportCloudsDialog", "Set the multiplier of the nearest neighbor distance to obtain the final search radius for each point  (this will make the algorithm adapt to different point densities in the cloud).", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_gp3Radius->setSuffix(QApplication::translate("ExportCloudsDialog", " m", 0, QApplication::UnicodeUTF8));
        label_168->setText(QApplication::translate("ExportCloudsDialog", "Sphere radius that is to be used for determining the k-nearest neighbors used for triangulating (GP3). \n"
"Guidelines: 4 times the voxel size, 0.025 for voxel=0.", 0, QApplication::UnicodeUTF8));
        groupBox_organized->setTitle(QApplication::translate("ExportCloudsDialog", "Organized Meshing", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ExportCloudsDialog", "Angle tolerance", 0, QApplication::UnicodeUTF8));
        checkBox_mesh_quad->setText(QString());
        label_quad->setText(QApplication::translate("ExportCloudsDialog", "Quad", 0, QApplication::UnicodeUTF8));
        spinBox_mesh_triangleSize->setSuffix(QApplication::translate("ExportCloudsDialog", " pix", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ExportCloudsDialog", "Triangle size", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_mesh_angleTolerance->setSuffix(QApplication::translate("ExportCloudsDialog", " deg", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportCloudsDialog: public Ui_ExportCloudsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTCLOUDSDIALOG_H
