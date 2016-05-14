/********************************************************************************
** Form generated from reading UI file 'preferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "../include/rtabmap/utilite/UPlot.h"

QT_BEGIN_NAMESPACE

class Ui_preferencesDialog
{
public:
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_18;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout_17;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_24;
    QStackedWidget *stackedWidget;
    QWidget *page_22;
    QVBoxLayout *verticalLayout_29;
    QGroupBox *groupBox_generalSettingsGui0;
    QVBoxLayout *verticalLayout_28;
    QGridLayout *gridLayout_39;
    QCheckBox *general_checkBox_imagesKept;
    QLabel *label_59;
    QCheckBox *checkBox_beep;
    QLabel *label_88;
    QLabel *label_102;
    QCheckBox *checkBox_notifyWhenNewGlobalPathIsReceived;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_31;
    QCheckBox *checkBox_imageRejectedShown;
    QLabel *label_105;
    QCheckBox *checkBox_imageHighestHypShown;
    QLabel *label_73;
    QLabel *label_70;
    QCheckBox *checkBox_verticalLayoutUsed;
    QLabel *label_222;
    QCheckBox *checkBox_posteriorGraphView;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_38;
    QLabel *label_86;
    QSpinBox *spinBox_odomQualityWarnThr;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_loadConfig;
    QPushButton *pushButton_saveConfig;
    QPushButton *pushButton_resetConfig;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_24;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_42;
    QGroupBox *groupBox_cloudRendering1;
    QVBoxLayout *verticalLayout_98;
    QGroupBox *groupBox_filtering;
    QVBoxLayout *verticalLayout_37;
    QLabel *label_160;
    QGridLayout *gridLayout_65;
    QLabel *label_71;
    QRadioButton *radioButton_noFiltering;
    QRadioButton *radioButton_subtractFiltering;
    QGridLayout *gridLayout_17;
    QDoubleSpinBox *doubleSpinBox_cloudFilterRadius;
    QLabel *label_37;
    QDoubleSpinBox *doubleSpinBox_cloudFilterAngle;
    QLabel *label_48;
    QLabel *label_161;
    QLabel *label_33;
    QRadioButton *radioButton_nodeFiltering;
    QGridLayout *gridLayout_69;
    QDoubleSpinBox *doubleSpinBox_subtractFilteringRadius;
    QLabel *label_192;
    QDoubleSpinBox *doubleSpinBox_subtractFilteringAngle;
    QLabel *label_193;
    QSpinBox *spinBox_subtractFilteringMinPts;
    QLabel *label_174;
    QGroupBox *groupBox_gridMap;
    QVBoxLayout *verticalLayout_45;
    QLabel *label_167;
    QGridLayout *gridLayout_20;
    QDoubleSpinBox *doubleSpinBox_map_opacity;
    QCheckBox *checkBox_map_shown;
    QLabel *label_map_shown;
    QDoubleSpinBox *doubleSpinBox_map_resolution;
    QLabel *label_159;
    QLabel *label_170;
    QCheckBox *checkBox_map_occupancyFrom3DCloud;
    QLabel *label_210;
    QLabel *label_224;
    QCheckBox *checkBox_map_erode;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_showScans;
    QDoubleSpinBox *doubleSpinBox_opacity_scan;
    QLabel *label_110;
    QLabel *label_119;
    QCheckBox *checkBox_showOdomFeatures;
    QCheckBox *checkBox_showFeatures;
    QLabel *label_154;
    QSpinBox *spinBox_decimation_odom;
    QDoubleSpinBox *doubleSpinBox_maxDepth;
    QDoubleSpinBox *doubleSpinBox_maxDepth_odom;
    QSpinBox *spinBox_ptsize;
    QDoubleSpinBox *doubleSpinBox_opacity_odom_scan;
    QLabel *label_108;
    QLabel *label_132;
    QLabel *label_155;
    QSpinBox *spinBox_ptsize_odom;
    QSpinBox *spinBox_ptsize_odom_scan;
    QLabel *label_158;
    QDoubleSpinBox *doubleSpinBox_voxelSizeScan;
    QLabel *label_271;
    QSpinBox *spinBox_downsamplingScan_odom;
    QLabel *label_156;
    QCheckBox *checkBox_showOdomClouds;
    QSpinBox *spinBox_decimation;
    QDoubleSpinBox *doubleSpinBox_opacity;
    QCheckBox *checkBox_showOdomScans;
    QLabel *label_213;
    QCheckBox *checkBox_showGraphs;
    QDoubleSpinBox *doubleSpinBox_opacity_odom;
    QSpinBox *spinBox_ptsize_scan;
    QCheckBox *checkBox_showClouds;
    QLabel *label_243;
    QCheckBox *checkBox_showLabels;
    QDoubleSpinBox *doubleSpinBox_voxelSizeScan_odom;
    QLabel *label_273;
    QSpinBox *spinBox_downsamplingScan;
    QLabel *label_157;
    QLabel *label_137;
    QLabel *label_123;
    QLabel *label_166;
    QSpinBox *spinBox_ptsize_odom_features;
    QSpinBox *spinBox_ptsize_features;
    QLabel *label_150;
    QDoubleSpinBox *doubleSpinBox_minDepth;
    QDoubleSpinBox *doubleSpinBox_minDepth_odom;
    QGroupBox *groupBox_organized;
    QVBoxLayout *verticalLayout_31;
    QGridLayout *gridLayout_64;
    QLabel *label_85;
    QCheckBox *checkBox_mesh_quad;
    QLabel *label_quad;
    QSpinBox *spinBox_mesh_triangleSize;
    QLabel *label_87;
    QDoubleSpinBox *doubleSpinBox_mesh_angleTolerance;
    QSpacerItem *verticalSpacer_51;
    QSpacerItem *verticalSpacer;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_43;
    QGroupBox *groupBox_logging1;
    QGridLayout *gridLayout_40;
    QComboBox *comboBox_loggerLevel;
    QLabel *label_60;
    QComboBox *comboBox_loggerEventLevel;
    QLabel *label_61;
    QComboBox *comboBox_loggerPauseLevel;
    QLabel *label_62;
    QCheckBox *checkBox_logger_printTime;
    QLabel *label_67;
    QComboBox *comboBox_loggerType;
    QLabel *label_68;
    QLabel *label_118;
    QCheckBox *checkBox_logger_printThreadId;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *groupBox_source0;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_28;
    QLabel *label_3;
    QLabel *label_42;
    QLabel *label_19;
    QLabel *label_39;
    QLabel *label_244;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *toolButton_source_path_calibration;
    QLineEdit *lineEdit_calibrationFile;
    QDoubleSpinBox *general_doubleSpinBox_imgRate;
    QLabel *label_17;
    QCheckBox *source_mirroring;
    QLineEdit *lineEdit_sourceLocalTransform;
    QComboBox *comboBox_sourceType;
    QPushButton *pushButton_test_camera;
    QPushButton *pushButton_calibrate;
    QLabel *label_24;
    QLineEdit *lineEdit_sourceDevice;
    QPushButton *pushButton_calibrate_simple;
    QLabel *label_18;
    QLabel *label_36;
    QSpinBox *spinBox_source_imageDecimation;
    QStackedWidget *stackedWidget_src;
    QWidget *page_41;
    QVBoxLayout *verticalLayout_64;
    QGroupBox *groupBox_sourceRGBD;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_40;
    QGridLayout *gridLayout_55;
    QComboBox *comboBox_cameraRGBD;
    QLabel *label_228;
    QLabel *label_229;
    QCheckBox *checkbox_rgbd_colorOnly;
    QStackedWidget *stackedWidget_rgbd;
    QWidget *page_32;
    QVBoxLayout *verticalLayout_63;
    QGroupBox *groupBox_openni;
    QGridLayout *gridLayout_57;
    QLineEdit *lineEdit_openniOniPath;
    QLabel *label_245;
    QSpacerItem *verticalSpacer_34;
    QToolButton *toolButton_openniOniPath;
    QWidget *page_33;
    QVBoxLayout *verticalLayout_80;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_34;
    QVBoxLayout *verticalLayout_89;
    QSpacerItem *verticalSpacer_27;
    QWidget *page_35;
    QVBoxLayout *verticalLayout_90;
    QSpacerItem *verticalSpacer_28;
    QWidget *page_36;
    QVBoxLayout *verticalLayout_51;
    QGroupBox *groupBox_openni2;
    QGridLayout *gridLayout_54;
    QCheckBox *openni2_autoWhiteBalance;
    QLabel *label_217;
    QCheckBox *openni2_autoExposure;
    QLabel *label_218;
    QSpinBox *openni2_exposure;
    QLabel *label_219;
    QSpacerItem *verticalSpacer_33;
    QSpinBox *openni2_gain;
    QLabel *label_220;
    QCheckBox *openni2_mirroring;
    QLabel *label_223;
    QLineEdit *lineEdit_openni2OniPath;
    QLabel *label_231;
    QToolButton *toolButton_openni2OniPath;
    QLabel *label_264;
    QCheckBox *openni2_stampsIdsUsed;
    QWidget *page_37;
    QVBoxLayout *verticalLayout_62;
    QGroupBox *groupBox_freenect2;
    QGridLayout *gridLayout_56;
    QLabel *label_230;
    QSpacerItem *verticalSpacer_32;
    QComboBox *comboBox_freenect2Format;
    QLabel *label_268;
    QLabel *label_266;
    QLabel *label_269;
    QDoubleSpinBox *doubleSpinBox_freenect2MaxDepth;
    QCheckBox *checkBox_freenect2BilateralFiltering;
    QCheckBox *checkBox_freenect2EdgeAwareFiltering;
    QLabel *label_267;
    QDoubleSpinBox *doubleSpinBox_freenect2MinDepth;
    QCheckBox *checkBox_freenect2NoiseFiltering;
    QLabel *label_270;
    QWidget *page_47;
    QVBoxLayout *verticalLayout_79;
    QGroupBox *groupBox_cameraRGBDImages;
    QGridLayout *gridLayout_35;
    QLabel *label_252;
    QToolButton *toolButton_cameraRGBDImages_path_rgb;
    QLabel *label_257;
    QToolButton *toolButton_cameraRGBDImages_path_depth;
    QLineEdit *lineEdit_cameraRGBDImages_path_rgb;
    QLineEdit *lineEdit_cameraRGBDImages_path_depth;
    QLabel *label_254;
    QDoubleSpinBox *doubleSpinBox_cameraRGBDImages_scale;
    QSpacerItem *verticalSpacer_40;
    QWidget *page_44;
    QVBoxLayout *verticalLayout_71;
    QGroupBox *groupBox_sourceStereo;
    QVBoxLayout *verticalLayout_67;
    QLabel *label_46;
    QGridLayout *gridLayout_58;
    QComboBox *comboBox_cameraStereo;
    QLabel *label_240;
    QCheckBox *checkbox_stereo_depthGenerated;
    QLabel *label_247;
    QStackedWidget *stackedWidget_stereo;
    QWidget *page_49;
    QVBoxLayout *verticalLayout_91;
    QSpacerItem *verticalSpacer_30;
    QWidget *page_48;
    QVBoxLayout *verticalLayout_92;
    QSpacerItem *verticalSpacer_47;
    QWidget *page_53;
    QVBoxLayout *verticalLayout_70;
    QGroupBox *groupBox_cameraStereoImages;
    QGridLayout *gridLayout_61;
    QCheckBox *checkBox_stereoImages_rectify;
    QToolButton *toolButton_cameraStereoImages_path_left;
    QSpacerItem *verticalSpacer_38;
    QLabel *label_250;
    QLabel *label_249;
    QLineEdit *lineEdit_cameraStereoImages_path_left;
    QLabel *label_253;
    QLineEdit *lineEdit_cameraStereoImages_path_right;
    QToolButton *toolButton_cameraStereoImages_path_right;
    QWidget *page_50;
    QVBoxLayout *verticalLayout_78;
    QGroupBox *groupBox_cameraStereoImages_2;
    QGridLayout *gridLayout_66;
    QSpacerItem *verticalSpacer_39;
    QToolButton *toolButton_cameraStereoVideo_path;
    QLineEdit *lineEdit_cameraStereoVideo_path;
    QCheckBox *checkBox_stereoVideo_rectify;
    QLabel *label_234;
    QWidget *page_42;
    QVBoxLayout *verticalLayout_65;
    QGroupBox *groupBox_sourceRGB;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QComboBox *source_comboBox_image_type;
    QLabel *label_20;
    QStackedWidget *stackedWidget_image;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_30;
    QSpacerItem *verticalSpacer_8;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *source_groupBox_images;
    QGridLayout *gridLayout_7;
    QLineEdit *source_images_lineEdit_path;
    QLabel *label_34;
    QCheckBox *source_images_refreshDir;
    QLabel *label_21;
    QSpinBox *source_images_spinBox_startPos;
    QToolButton *source_images_toolButton_selectSource;
    QLabel *label_242;
    QCheckBox *checkBox_rgbImages_rectify;
    QSpacerItem *verticalSpacer_9;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *source_groupBox_video;
    QGridLayout *gridLayout_8;
    QToolButton *source_video_toolButton_selectSource;
    QLineEdit *source_video_lineEdit_path;
    QLabel *label_241;
    QCheckBox *checkBox_rgbVideo_rectify;
    QSpacerItem *verticalSpacer_10;
    QWidget *page_43;
    QVBoxLayout *verticalLayout_66;
    QGroupBox *groupBox_sourceDatabase;
    QGridLayout *gridLayout_9;
    QLabel *label_263;
    QCheckBox *source_checkBox_ignoreGoals;
    QToolButton *toolButton_dbViewer;
    QSpacerItem *verticalSpacer_35;
    QCheckBox *source_checkBox_ignoreOdometry;
    QToolButton *source_database_toolButton_selectSource;
    QLineEdit *source_database_lineEdit_path;
    QLabel *label_58;
    QSpinBox *source_spinBox_databaseStartPos;
    QLabel *label_72;
    QLabel *label_80;
    QCheckBox *source_checkBox_ignoreGoalDelay;
    QLabel *label_90;
    QCheckBox *source_checkBox_useDbStamps;
    QGroupBox *groupBox_sourceImages_optional;
    QVBoxLayout *verticalLayout_93;
    QGridLayout *gridLayout_68;
    QLabel *label_255;
    QToolButton *toolButton_cameraImages_timestamps;
    QLineEdit *lineEdit_cameraImages_timestamps;
    QLineEdit *lineEdit_cameraImages_gt;
    QLabel *label_288;
    QLabel *label_289;
    QLabel *label_292;
    QLabel *label_256;
    QCheckBox *checkBox_cameraImages_syncTimeStamps;
    QLineEdit *lineEdit_cameraImages_path_scans;
    QCheckBox *checkBox_cameraImages_timestamps;
    QLabel *label_251;
    QToolButton *toolButton_cameraImages_gt;
    QComboBox *comboBox_cameraImages_gtFormat;
    QToolButton *toolButton_cameraImages_path_scans;
    QLabel *label_293;
    QLineEdit *lineEdit_cameraImages_laser_transform;
    QLabel *label_294;
    QSpinBox *spinBox_cameraImages_max_scan_pts;
    QLabel *label_265;
    QComboBox *comboBox_cameraImages_bayerMode;
    QGroupBox *groupBox_depthFromScan;
    QVBoxLayout *verticalLayout_100;
    QGroupBox *groupBox_depthFromScan_fillHoles;
    QVBoxLayout *verticalLayout_99;
    QRadioButton *radioButton_depthFromScan_vertical;
    QRadioButton *radioButton_depthFromScan_horizontal;
    QCheckBox *checkBox_depthFromScan_fillBorders;
    QGroupBox *groupBox_scan;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_16;
    QGroupBox *groupBox_scanFromDepth;
    QGridLayout *gridLayout_63;
    QSpinBox *spinBox_cameraScanFromDepth_decimation;
    QLabel *label_299;
    QDoubleSpinBox *doubleSpinBox_cameraSCanFromDepth_maxDepth;
    QLabel *label_301;
    QGridLayout *gridLayout_62;
    QSpinBox *spinBox_cameraImages_scanNormalsK;
    QLabel *label_300;
    QDoubleSpinBox *doubleSpinBox_cameraImages_scanVoxelSize;
    QSpinBox *spinBox_cameraImages_scanDownsampleStep;
    QLabel *label_302;
    QLabel *label_304;
    QSpacerItem *verticalSpacer_7;
    QWidget *page_20;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_rtabmap_basic0;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *general_doubleSpinBox_detectionRate_2;
    QCheckBox *general_checkBox_SLAM_mode_2;
    QLabel *label_79;
    QCheckBox *general_checkBox_activateRGBD_2;
    QLabel *label_activateRGBD_2;
    QCheckBox *general_checkBox_publishStats_2;
    QLabel *label_publishStat;
    QLabel *label_134;
    QSpinBox *general_spinBox_imagesBufferSize_2;
    QLabel *label_112;
    QDoubleSpinBox *general_doubleSpinBox_timeThr_2;
    QLabel *label_timeLimit_2;
    QDoubleSpinBox *general_doubleSpinBox_hardThr_2;
    QLabel *label_121;
    QDoubleSpinBox *doubleSpinBox_similarityThreshold_2;
    QLabel *label_similarity_2;
    QSpinBox *general_spinBox_maxStMemSize_2;
    QLabel *label_126;
    QSpacerItem *verticalSpacer_5;
    QWidget *page;
    QVBoxLayout *verticalLayout_44;
    QGroupBox *groupBox_rtabmap_advanced0;
    QVBoxLayout *verticalLayout_15;
    QGridLayout *gridLayout_43;
    QCheckBox *general_checkBox_SLAM_mode;
    QLabel *label_92;
    QCheckBox *general_checkBox_startNewMapOnLoopClosure;
    QLabel *label_135;
    QSpinBox *general_spinBox_imagesBufferSize;
    QLabel *label_185;
    QLabel *label_84;
    QDoubleSpinBox *general_doubleSpinBox_detectionRate;
    QLabel *label_165;
    QCheckBox *general_checkBox_createIntermediateNodes;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_44;
    QDoubleSpinBox *general_doubleSpinBox_timeThr;
    QLabel *label_timeLimit;
    QSpinBox *general_spinBox_memoryThr;
    QLabel *label_maxWmSize;
    QDoubleSpinBox *general_doubleSpinBox_hardThr;
    QLabel *label_93;
    QDoubleSpinBox *general_doubleSpinBox_loopRatio;
    QLabel *label_96;
    QGroupBox *groupBox_publishing;
    QGridLayout *gridLayout_45;
    QCheckBox *general_checkBox_publishRawData;
    QLabel *label_91;
    QCheckBox *general_checkBox_publishPdf;
    QLabel *label_106;
    QCheckBox *general_checkBox_publishLikelihood;
    QLabel *label_116;
    QGroupBox *groupBox_statistics;
    QGridLayout *gridLayout_46;
    QCheckBox *general_checkBox_statisticLogsBufferedInRAM;
    QLabel *label_143;
    QCheckBox *general_checkBox_statisticLoggedHeaders;
    QLabel *label_209;
    QGridLayout *gridLayout_4;
    QLabel *label_workingDirectory;
    QToolButton *toolButton_workingDirectory;
    QLineEdit *lineEdit_workingDirectory;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_memory1;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_42;
    QLabel *label_retrieved_2;
    QSpinBox *general_spinBox_maxStMemSize;
    QLabel *label_retrieved;
    QCheckBox *general_checkBox_generateIds;
    QCheckBox *general_checkBox_transferSortingByWeightId;
    QLabel *label_retrieved_9;
    QSpinBox *spinBox_imagePostDecimation;
    QLabel *label_retrieved_10;
    QDoubleSpinBox *general_doubleSpinBox_recentWmRatio;
    QLabel *label_retrieved_4;
    QLabel *label_29;
    QLabel *label_ratioRecent;
    QSpinBox *general_spinBox_maxRetrieved;
    QCheckBox *general_checkBox_badSignaturesIgnored;
    QLabel *label_retrieved_3;
    QCheckBox *general_checkBox_initWMWithAllNodes;
    QLabel *label_retrieved_5;
    QCheckBox *general_checkBox_keepRawData;
    QLabel *label_retrieved_6;
    QLabel *label_retrieved_7;
    QLabel *label_retrieved_8;
    QCheckBox *general_checkBox_reduceGraph;
    QLabel *label_retrieved_11;
    QCheckBox *general_checkBox_createMapLabels;
    QSpinBox *general_spinBox_laserScanDownsample;
    QCheckBox *general_checkBox_saveDepth16bits;
    QLabel *label_retrieved_12;
    QCheckBox *general_checkBox_keepDescriptors;
    QSpinBox *spinBox_imagePreDecimation;
    QLabel *label_retrieved_13;
    QGroupBox *groupBox_rehearsal2;
    QGridLayout *gridLayout_12;
    QCheckBox *general_checkBox_RehearsalIdUpdatedToNewOne;
    QLabel *label_similarity;
    QDoubleSpinBox *doubleSpinBox_similarityThreshold;
    QLabel *label_rehearsalIdUpdate;
    QLabel *label_rehearsalIdUpdate_2;
    QCheckBox *rgdb_rehearsalWeightIgnoredWhileMoving;
    QSpacerItem *verticalSpacer_6;
    QWidget *page_9;
    QVBoxLayout *verticalLayout_58;
    QGroupBox *groupBox_signature_keypoint2;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_useOdomFeatures;
    QLabel *label_145;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_60;
    QGridLayout *gridLayout_32;
    QLabel *label_22;
    QLabel *label_81;
    QLabel *label_99;
    QDoubleSpinBox *surf_doubleSpinBox_ratioBadSign;
    QLabel *label_57;
    QLabel *label_101;
    QLineEdit *lineEdit_kp_roi;
    QComboBox *comboBox_detector_strategy;
    QLabel *label_53;
    QDoubleSpinBox *doubleSpinBox_kp_roi1;
    QLabel *label_117;
    QDoubleSpinBox *surf_doubleSpinBox_maxDepth;
    QSpinBox *surf_spinBox_wordsPerImageTarget;
    QDoubleSpinBox *doubleSpinBox_kp_roi0;
    QLabel *label_97;
    QLabel *label_98;
    QDoubleSpinBox *doubleSpinBox_kp_roi2;
    QDoubleSpinBox *doubleSpinBox_kp_roi3;
    QLabel *label_100;
    QDoubleSpinBox *surf_doubleSpinBox_minDepth;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_76;
    QLabel *label_44;
    QGridLayout *gridLayout_41;
    QSpinBox *subpix_winSize_kp;
    QLabel *label_202;
    QSpinBox *subpix_iterations_kp;
    QLabel *label_225;
    QDoubleSpinBox *subpix_eps_kp;
    QLabel *label_227;
    QGroupBox *groupBox_dictionary_strategy2;
    QGridLayout *gridLayout_18;
    QToolButton *toolButton_dictionaryPath;
    QLabel *label_78;
    QDoubleSpinBox *surf_doubleSpinBox_nndrRatio;
    QLineEdit *lineEdit_dictionaryPath;
    QLabel *label_dictionaryPath;
    QCheckBox *checkBox_dictionary_incremental;
    QLabel *label_12;
    QComboBox *comboBox_dictionary_strategy;
    QLabel *label_incrementalDict;
    QLabel *label_94;
    QCheckBox *checkBox_kp_parallelized;
    QCheckBox *checkBox_kp_newWordsComparedTogether;
    QLabel *label_186;
    QLabel *label_260;
    QCheckBox *checkBox_kp_incrementalFlann;
    QSpacerItem *verticalSpacer_15;
    QWidget *page_24;
    QVBoxLayout *verticalLayout_33;
    QGroupBox *groupBox_database2;
    QGridLayout *gridLayout_11;
    QCheckBox *general_checkBox_keepBinaryData;
    QLabel *label_keepRawData;
    QCheckBox *checkBox_dbInMemory;
    QSpinBox *spinBox_dbCacheSize;
    QLabel *label_75;
    QComboBox *comboBox_dbJournalMode;
    QLabel *label_77;
    QLabel *label_74;
    QLabel *label_89;
    QLabel *label_120;
    QComboBox *comboBox_dbSynchronous;
    QComboBox *comboBox_dbTempStore;
    QLabel *label_keepRehearsed;
    QCheckBox *general_checkBox_keepNotLinkedNodes;
    QSpacerItem *verticalSpacer_12;
    QWidget *page_23;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_bayes1;
    QVBoxLayout *verticalLayout_22;
    QLabel *label;
    QLabel *label_76;
    QGridLayout *gridLayout_24;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_prediction_sum;
    QLineEdit *lineEdit_bayes_predictionLC;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_63;
    UPlot *predictionPlot;
    QGridLayout *gridLayout_22;
    QCheckBox *checkBox_bayes_fullPredictionUpdate;
    QDoubleSpinBox *general_doubleSpinBox_vp;
    QLabel *label_113;
    QLabel *label_142;
    QLabel *label_82;
    QCheckBox *checkBox_kp_tfIdfLikelihoodUsed;
    QGroupBox *groupBox_vh_strategy2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_10;
    QComboBox *comboBox_vh_strategy;
    QLabel *label_50;
    QGroupBox *groupBox_vh_epipolar2;
    QGridLayout *gridLayout;
    QSpinBox *surf_spinBox_matchCountMinAccepted;
    QLabel *label_25;
    QDoubleSpinBox *surf_doubleSpinBox_ransacParam1;
    QLabel *label_27;
    QDoubleSpinBox *surf_doubleSpinBox_ransacParam2;
    QLabel *label_28;
    QSpacerItem *verticalSpacer_23;
    QWidget *page_10;
    QVBoxLayout *verticalLayout_19;
    QGroupBox *groupBox_slam1;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *general_checkBox_activateRGBD;
    QLabel *label_activateRGBD;
    QLabel *label_83;
    QGroupBox *groupBox_slam_update;
    QGridLayout *gridLayout_47;
    QLabel *label_152;
    QLabel *label_space2;
    QDoubleSpinBox *rgdb_localImmunizationRatio;
    QDoubleSpinBox *rgdb_linearUpdate;
    QLabel *label_153;
    QDoubleSpinBox *rgdb_angularUpdate;
    QDoubleSpinBox *rgdb_newMapOdomChange;
    QLabel *label_163;
    QCheckBox *odomScanHistory;
    QLabel *label_scanMatching;
    QLabel *label_scanMatching_3;
    QSpinBox *spinBox_maxLocalLocationsRetrieved;
    QDoubleSpinBox *localDetection_radius;
    QLabel *label_scanMatching_5;
    QLabel *label_scanMatching_9;
    QCheckBox *loopClosure_reextract;
    QSpacerItem *verticalSpacer_11;
    QWidget *page_28;
    QVBoxLayout *verticalLayout_95;
    QGroupBox *groupBox_proximityDetection2;
    QVBoxLayout *verticalLayout_96;
    QGroupBox *groupBox_localDetection_time;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_54;
    QGroupBox *groupBox_localDetection_space;
    QVBoxLayout *verticalLayout_48;
    QLabel *label_space1_2;
    QGridLayout *gridLayout_50;
    QDoubleSpinBox *localDetection_pathFilteringRadius;
    QLabel *label_space3_3;
    QLabel *label_scanMatching_4;
    QCheckBox *checkBox_localSpacePathOdomPosesUsed;
    QSpinBox *localDetection_maxDiffID;
    QLabel *label_space3_2;
    QLabel *label_scanMatching_6;
    QCheckBox *checkBox_localSpaceScanMatchingIDsSaved;
    QLabel *label_scanMatching_7;
    QCheckBox *checkBox_localSpaceAssembleScans;
    QLabel *label_scanMatching_8;
    QDoubleSpinBox *localDetection_angle;
    QSpacerItem *verticalSpacer_49;
    QWidget *page_19;
    QVBoxLayout *verticalLayout_94;
    QGroupBox *groupBox_graphOptimization2;
    QGridLayout *gridLayout_49;
    QComboBox *graphOptimization_type;
    QSpinBox *graphOptimization_iterations;
    QCheckBox *graphOptimization_covarianceIgnored;
    QCheckBox *graphOptimization_fromGraphEnd;
    QLabel *label_151;
    QFrame *line;
    QCheckBox *graphOptimization_slam2d;
    QLabel *label_164;
    QLabel *label_45;
    QLabel *label_183;
    QLabel *label_211;
    QLabel *label_31;
    QLabel *label_64;
    QDoubleSpinBox *graphOptimization_stopEpsilon;
    QLabel *label_141;
    QCheckBox *graphOptimization_robust;
    QLabel *label_258;
    QDoubleSpinBox *graphOptimization_maxError;
    QLabel *label_259;
    QGroupBox *groupBox_g2o;
    QGridLayout *gridLayout_70;
    QComboBox *comboBox_g2o_optimizer;
    QComboBox *comboBox_g2o_solver;
    QLabel *label_107;
    QLabel *label_138;
    QDoubleSpinBox *doubleSpinBox_g2o_variance;
    QLabel *label_148;
    QSpacerItem *verticalSpacer_48;
    QWidget *page_30;
    QVBoxLayout *verticalLayout_97;
    QGroupBox *groupBox_pathPlanning2;
    QVBoxLayout *verticalLayout_61;
    QLabel *label_space2_3;
    QGridLayout *gridLayout_51;
    QDoubleSpinBox *graphPlan_goalReachedRadius;
    QLabel *label_space2_2;
    QLabel *label_space3_5;
    QCheckBox *graphPlan_goalsSavedInUserData;
    QLabel *label_space2_4;
    QSpinBox *graphPlan_stuckIterations;
    QDoubleSpinBox *graphPlan_linearVelocity;
    QDoubleSpinBox *graphPlan_angularVelocity;
    QLabel *label_space3_6;
    QLabel *label_space3_7;
    QSpacerItem *verticalSpacer_50;
    QWidget *page_12;
    QVBoxLayout *verticalLayout_32;
    QGroupBox *groupBox_odometry1;
    QVBoxLayout *verticalLayout_34;
    QLabel *label_114;
    QGridLayout *gridLayout_27;
    QDoubleSpinBox *odom_flow_keyframeThr;
    QCheckBox *odom_flow_guessMotion;
    QLabel *label_233;
    QCheckBox *odom_fillInfoData;
    QLabel *label_103;
    QCheckBox *odom_holonomic;
    QSpinBox *odom_dataBufferSize;
    QLabel *label_238;
    QComboBox *odom_strategy;
    QPushButton *pushButton_testOdometry;
    QLabel *label_221;
    QLabel *label_232;
    QLabel *label_47;
    QSpinBox *odom_countdown;
    QComboBox *odom_filteringStrategy;
    QLabel *label_198;
    QLabel *label_196;
    QLabel *label_246;
    QDoubleSpinBox *odom_flow_scanKeyframeThr;
    QLabel *label_248;
    QSpinBox *odom_imageDecimation;
    QStackedWidget *stackedWidget_odometryType;
    QWidget *page_52;
    QVBoxLayout *verticalLayout_77;
    QGroupBox *groupBox_odometryBOW2;
    QVBoxLayout *verticalLayout_54;
    QLabel *label_226;
    QGridLayout *gridLayout_29;
    QLabel *label_195;
    QLineEdit *odom_fixedLocalMapPath;
    QLabel *label_239;
    QLabel *label_190;
    QSpinBox *odom_localHistory;
    QToolButton *toolButton_odomBowFixedLocalMap;
    QLabel *label_194;
    QSpinBox *spinBox_odom_f2m_maxNewFeatures;
    QLabel *label_215;
    QDoubleSpinBox *doubleSpinBox_odom_f2m_scanRadius;
    QSpinBox *spinBox_odom_f2m_scanMaxSize;
    QSpacerItem *verticalSpacer_46;
    QWidget *page_58;
    QVBoxLayout *verticalLayout_55;
    QGroupBox *groupBox_odometryFlow2;
    QVBoxLayout *verticalLayout_53;
    QLabel *label_199;
    QSpacerItem *verticalSpacer_43;
    QWidget *page_26;
    QVBoxLayout *verticalLayout_88;
    QGroupBox *groupBox_odometryMono2;
    QVBoxLayout *verticalLayout_168;
    QLabel *label_672;
    QLabel *label_661;
    QGridLayout *gridLayout_166;
    QDoubleSpinBox *doubleSpinBox_minFlow;
    QLabel *label_659;
    QDoubleSpinBox *doubleSpinBox_minTranslation;
    QLabel *label_660;
    QLabel *label_662;
    QDoubleSpinBox *doubleSpinBox_minInitTranslation;
    QLabel *label_663;
    QDoubleSpinBox *doubleSpinBox_maxVariance;
    QStackedWidget *stackedWidget_odometryFiltering;
    QWidget *page_31;
    QVBoxLayout *verticalLayout_84;
    QWidget *page_57;
    QVBoxLayout *verticalLayout_49;
    QGroupBox *groupBox_odometryKalmanFilter2;
    QVBoxLayout *verticalLayout_171;
    QLabel *label_673;
    QGridLayout *gridLayout_168;
    QDoubleSpinBox *doubleSpinBox_kalmanMeasurementNoise;
    QDoubleSpinBox *doubleSpinBox_kalmanProcessNoise;
    QLabel *label_674;
    QLabel *label_675;
    QSpacerItem *verticalSpacer_31;
    QWidget *page_56;
    QVBoxLayout *verticalLayout_87;
    QGroupBox *groupBox_odometryParticleFilter2;
    QVBoxLayout *verticalLayout_170;
    QLabel *label_665;
    QGridLayout *gridLayout_167;
    QDoubleSpinBox *doubleSpinBox_particleLambdaT;
    QDoubleSpinBox *doubleSpinBox_particleNoiseR;
    QDoubleSpinBox *doubleSpinBox_particleNoiseT;
    QLabel *label_666;
    QLabel *label_667;
    QLabel *label_668;
    QLabel *label_669;
    QDoubleSpinBox *doubleSpinBox_particleLambdaR;
    QLabel *label_670;
    QSpinBox *spinBox_particleSize;
    QLabel *label_162;
    QSpacerItem *verticalSpacer_14;
    QWidget *page_46;
    QVBoxLayout *verticalLayout_81;
    QGroupBox *groupBox_motionEst1;
    QGridLayout *gridLayout_53;
    QComboBox *comboBox_registrationStrategy;
    QLabel *label_11;
    QCheckBox *loopClosure_bowForce2D;
    QLabel *label_184;
    QSpacerItem *verticalSpacer_41;
    QWidget *page_21;
    QVBoxLayout *verticalLayout_50;
    QGroupBox *groupBox_visualTransform2;
    QVBoxLayout *verticalLayout_41;
    QGridLayout *gridLayout_23;
    QLabel *label_146;
    QLabel *label_262;
    QLabel *label_2;
    QSpinBox *loopClosure_bowIterations;
    QLabel *label_15;
    QComboBox *loopClosure_estimationType;
    QComboBox *loopClosure_correspondencesType;
    QLabel *label_298;
    QCheckBox *loopClosure_forwardEst;
    QCheckBox *loopClosure_bowVarianceFromInliersCount;
    QLabel *label_149;
    QSpinBox *loopClosure_bowMinInliers;
    QStackedWidget *stackedWidget_loopClosureCorrespondences;
    QWidget *page_54;
    QVBoxLayout *verticalLayout_85;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_30;
    QDoubleSpinBox *reextract_nndrRatio;
    QComboBox *reextract_nn;
    QLabel *label_179;
    QLabel *label_181;
    QSpacerItem *verticalSpacer_44;
    QLabel *label_303;
    QSpinBox *spinBox_visCorGuessWinSize;
    QWidget *page_55;
    QVBoxLayout *verticalLayout_86;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_52;
    QSpinBox *odom_flow_winSize_2;
    QLabel *label_201;
    QSpinBox *odom_flow_maxLevel_2;
    QLabel *label_295;
    QLabel *label_296;
    QSpinBox *odom_flow_iterations_2;
    QLabel *label_297;
    QDoubleSpinBox *odom_flow_eps_2;
    QSpacerItem *verticalSpacer_45;
    QStackedWidget *stackedWidget_loopClosureEstimation;
    QWidget *page_38;
    QVBoxLayout *verticalLayout_68;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QDoubleSpinBox *loopClosure_bowInlierDistance;
    QLabel *label_14;
    QSpinBox *loopClosure_bowRefineIterations;
    QLabel *label_38;
    QWidget *page_39;
    QVBoxLayout *verticalLayout_69;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_59;
    QDoubleSpinBox *loopClosure_pnpReprojError;
    QLabel *label_236;
    QComboBox *loopClosure_pnpFlags;
    QLabel *label_235;
    QLabel *label_loopClosure_pnpOpenCV2;
    QSpinBox *loopClosure_pnpRefineIterations;
    QWidget *page_40;
    QVBoxLayout *verticalLayout_72;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_73;
    QLabel *label_671;
    QGridLayout *gridLayout_60;
    QDoubleSpinBox *loopClosure_bowEpipolarGeometryVar;
    QLabel *label_664;
    QSpacerItem *verticalSpacer_52;
    QGroupBox *groupBox_VisExtract;
    QVBoxLayout *verticalLayout_46;
    QLabel *label_182;
    QGridLayout *gridLayout_25;
    QLabel *label_237;
    QLabel *label_261;
    QLineEdit *loopClosure_roi;
    QSpinBox *reextract_maxFeatures;
    QLabel *label_180;
    QLabel *label_275;
    QComboBox *reextract_type;
    QDoubleSpinBox *loopClosure_bowMaxDepth;
    QLabel *label_178;
    QDoubleSpinBox *loopClosure_bowMinDepth;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_59;
    QLabel *label_35;
    QGridLayout *gridLayout_36;
    QSpinBox *subpix_winSize;
    QLabel *label_200;
    QSpinBox *subpix_iterations;
    QLabel *label_203;
    QDoubleSpinBox *subpix_eps;
    QLabel *label_204;
    QSpacerItem *verticalSpacer_37;
    QSpacerItem *verticalSpacer_20;
    QWidget *page_27;
    QVBoxLayout *verticalLayout_52;
    QGroupBox *groupBox_icp2;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_7;
    QGridLayout *gridLayout_48;
    QCheckBox *loopClosure_icpPointToPlane;
    QLabel *label_139;
    QLabel *label_122;
    QLabel *label_51;
    QDoubleSpinBox *loopClosure_icpRatio;
    QLabel *label_133;
    QLabel *label_212;
    QSpinBox *loopClosure_icpPointToPlaneNormals;
    QLabel *label_125;
    QSpinBox *loopClosure_icpDownsamplingStep;
    QDoubleSpinBox *loopClosure_icpVoxelSize;
    QLabel *label_124;
    QSpinBox *loopClosure_icpIterations;
    QDoubleSpinBox *globalDetection_icpMaxTranslation;
    QLabel *label_55;
    QDoubleSpinBox *globalDetection_icpMaxRotation;
    QDoubleSpinBox *loopClosure_icpMaxCorrespondenceDistance;
    QLabel *label_144;
    QLabel *label_136;
    QDoubleSpinBox *loopClosure_icpEpsilon;
    QSpacerItem *verticalSpacer_21;
    QWidget *page_29;
    QVBoxLayout *verticalLayout_57;
    QGroupBox *groupBox_stereo1;
    QVBoxLayout *verticalLayout_56;
    QLabel *label_187;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_33;
    QLabel *label_284;
    QLabel *label_285;
    QSpinBox *stereo_winWidth;
    QLabel *label_205;
    QSpinBox *stereo_minDisparity;
    QLabel *label_206;
    QCheckBox *stereo_ssd;
    QSpinBox *stereo_winHeight;
    QSpinBox *stereo_iterations;
    QDoubleSpinBox *stereo_flow_eps;
    QLabel *label_207;
    QLabel *label_208;
    QSpinBox *stereo_maxLevel;
    QLabel *label_287;
    QLabel *label_214;
    QLabel *label_286;
    QSpinBox *stereo_maxDisparity;
    QCheckBox *stereo_opticalFlow;
    QSpacerItem *verticalSpacer_29;
    QWidget *page_51;
    QVBoxLayout *verticalLayout_83;
    QGroupBox *groupBox_stereoBM2;
    QVBoxLayout *verticalLayout_82;
    QLabel *label_197;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_34;
    QSpinBox *stereobm_uniquessRatio;
    QSpinBox *stereobm_numDisparities;
    QSpinBox *stereobm_preFilterCap;
    QLabel *label_278;
    QLabel *label_276;
    QLabel *label_281;
    QLabel *label_279;
    QSpinBox *stereobm_speckleWinSize;
    QLabel *label_277;
    QLabel *label_216;
    QSpinBox *stereobm_minDisparity;
    QSpinBox *stereobm_blockSize;
    QSpinBox *stereobm_preFilterSize;
    QLabel *label_280;
    QSpinBox *stereobm_tetureThreshold;
    QSpinBox *stereobm_speckleRange;
    QLabel *label_282;
    QLabel *label_283;
    QSpacerItem *verticalSpacer_42;
    QWidget *page_45;
    QVBoxLayout *verticalLayout_74;
    QGroupBox *groupBox_feature1;
    QVBoxLayout *verticalLayout_75;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_36;
    QWidget *page_13;
    QVBoxLayout *verticalLayout_38;
    QGroupBox *groupBox_detector_surf2;
    QGridLayout *gridLayout_15;
    QCheckBox *surf_checkBox_upright;
    QLabel *label_41;
    QLabel *label_8;
    QLabel *label_surf_checkBox_gpuKeypointsRatio;
    QLabel *label_surf_checkBox_gpuVersion;
    QSpinBox *surf_spinBox_octaves;
    QCheckBox *surf_checkBox_gpuVersion;
    QLabel *label_49;
    QDoubleSpinBox *surf_doubleSpinBox_gpuKeypointsRatio;
    QDoubleSpinBox *surf_doubleSpinBox_hessianThr;
    QCheckBox *checkBox_surfExtended;
    QSpinBox *surf_spinBox_octaveLayers;
    QLabel *label_26;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_17;
    QWidget *page_14;
    QVBoxLayout *verticalLayout_39;
    QGroupBox *groupBox_detector_sift2;
    QGridLayout *gridLayout_19;
    QSpinBox *sift_spinBox_nFeatures;
    QLabel *label_129;
    QDoubleSpinBox *sift_doubleSpinBox_contrastThr;
    QLabel *label_5;
    QLabel *label_30;
    QDoubleSpinBox *sift_doubleSpinBox_edgeThr;
    QDoubleSpinBox *sift_doubleSpinBox_sigma;
    QSpinBox *sift_spinBox_nOctaveLayers;
    QLabel *label_130;
    QLabel *label_131;
    QSpacerItem *verticalSpacer_19;
    QWidget *page_17;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_detector_fast2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QSpinBox *fastThreshold;
    QLabel *label_56;
    QCheckBox *fastSuppressNonMax;
    QLabel *label_69;
    QGroupBox *groupBox_fast_opencv2;
    QGridLayout *gridLayout_71;
    QSpinBox *fastThresholdMin;
    QLabel *label_111;
    QSpinBox *fastThresholdMax;
    QLabel *label_115;
    QSpinBox *fastGridRows;
    QLabel *label_104;
    QSpinBox *fastGridCols;
    QLabel *label_109;
    QCheckBox *fastGpu;
    QLabel *label_fastGPU;
    QDoubleSpinBox *fastKeypointRatio;
    QLabel *label_fastGPUKptRatio;
    QSpacerItem *verticalSpacer_16;
    QWidget *page_15;
    QVBoxLayout *verticalLayout_40;
    QGroupBox *groupBox_detector_brief2;
    QGridLayout *gridLayout_16;
    QSpinBox *briefBytes;
    QLabel *label_52;
    QSpacerItem *verticalSpacer_22;
    QWidget *page_18;
    QVBoxLayout *verticalLayout_35;
    QGroupBox *groupBox_detector_orb2;
    QGridLayout *gridLayout_14;
    QDoubleSpinBox *doubleSpinBox_ORBScaleFactor;
    QLabel *label_32;
    QSpinBox *spinBox_ORBNLevels;
    QLabel *label_43;
    QSpinBox *spinBox_ORBEdgeThreshold;
    QLabel *label_95;
    QSpinBox *spinBox_ORBFirstLevel;
    QLabel *label_127;
    QSpinBox *spinBox_ORBWTA_K;
    QLabel *label_128;
    QSpinBox *spinBox_ORBScoreType;
    QLabel *label_140;
    QSpinBox *spinBox_ORBPatchSize;
    QLabel *label_147;
    QCheckBox *checkBox_ORBGpu;
    QLabel *label_orbGpu;
    QSpacerItem *verticalSpacer_18;
    QWidget *page_11;
    QVBoxLayout *verticalLayout_36;
    QGroupBox *groupBox_detector_freak2;
    QGridLayout *gridLayout_13;
    QCheckBox *checkBox_FREAKOrientationNormalized;
    QLabel *label_6;
    QCheckBox *checkBox_FREAKScaleNormalized;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_FREAKPatternScale;
    QLabel *label_13;
    QSpinBox *spinBox_FREAKNOctaves;
    QLabel *label_23;
    QSpacerItem *verticalSpacer_13;
    QWidget *page_16;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_detector_gftt2;
    QGridLayout *gridLayout_21;
    QDoubleSpinBox *doubleSpinBox_GFTT_qualityLevel;
    QDoubleSpinBox *doubleSpinBox_GFTT_minDistance;
    QCheckBox *checkBox_GFTT_useHarrisDetector;
    QLabel *label_172;
    QDoubleSpinBox *doubleSpinBox_GFTT_k;
    QLabel *label_173;
    QSpinBox *spinBox_GFTT_blockSize;
    QLabel *label_175;
    QLabel *label_176;
    QLabel *label_177;
    QSpacerItem *verticalSpacer_25;
    QWidget *page_25;
    QVBoxLayout *verticalLayout_47;
    QGroupBox *groupBox_detector_brisk2;
    QGridLayout *gridLayout_26;
    QLabel *label_191;
    QDoubleSpinBox *doubleSpinBox_BRISK_patterScale;
    QLabel *label_188;
    QSpinBox *spinBox_BRISK_octaves;
    QLabel *label_189;
    QSpinBox *spinBox_BRISK_thresh;
    QSpacerItem *verticalSpacer_26;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox_local;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_basic;
    QRadioButton *radioButton_advanced;
    QDialogButtonBox *buttonBox_global;

    void setupUi(QDialog *preferencesDialog)
    {
        if (preferencesDialog->objectName().isEmpty())
            preferencesDialog->setObjectName(QString::fromUtf8("preferencesDialog"));
        preferencesDialog->resize(984, 693);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preferencesDialog->sizePolicy().hasHeightForWidth());
        preferencesDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/RTAB-Map.ico"), QSize(), QIcon::Normal, QIcon::Off);
        preferencesDialog->setWindowIcon(icon);
        verticalLayout_26 = new QVBoxLayout(preferencesDialog);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        treeView = new QTreeView(preferencesDialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setMinimumSize(QSize(160, 0));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->header()->setVisible(false);

        verticalLayout_18->addWidget(treeView);


        horizontalLayout_2->addLayout(verticalLayout_18);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        scrollArea = new QScrollArea(preferencesDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -466, 686, 2023));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        stackedWidget = new QStackedWidget(scrollAreaWidgetContents);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFrameShadow(QFrame::Raised);
        page_22 = new QWidget();
        page_22->setObjectName(QString::fromUtf8("page_22"));
        verticalLayout_29 = new QVBoxLayout(page_22);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        groupBox_generalSettingsGui0 = new QGroupBox(page_22);
        groupBox_generalSettingsGui0->setObjectName(QString::fromUtf8("groupBox_generalSettingsGui0"));
        verticalLayout_28 = new QVBoxLayout(groupBox_generalSettingsGui0);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        gridLayout_39 = new QGridLayout();
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        general_checkBox_imagesKept = new QCheckBox(groupBox_generalSettingsGui0);
        general_checkBox_imagesKept->setObjectName(QString::fromUtf8("general_checkBox_imagesKept"));
        general_checkBox_imagesKept->setChecked(true);

        gridLayout_39->addWidget(general_checkBox_imagesKept, 0, 0, 1, 1);

        label_59 = new QLabel(groupBox_generalSettingsGui0);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setWordWrap(true);
        label_59->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_39->addWidget(label_59, 0, 1, 1, 1);

        checkBox_beep = new QCheckBox(groupBox_generalSettingsGui0);
        checkBox_beep->setObjectName(QString::fromUtf8("checkBox_beep"));

        gridLayout_39->addWidget(checkBox_beep, 1, 0, 1, 1);

        label_88 = new QLabel(groupBox_generalSettingsGui0);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setWordWrap(true);
        label_88->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_39->addWidget(label_88, 1, 1, 1, 1);

        label_102 = new QLabel(groupBox_generalSettingsGui0);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        label_102->setWordWrap(true);
        label_102->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_39->addWidget(label_102, 2, 1, 1, 1);

        checkBox_notifyWhenNewGlobalPathIsReceived = new QCheckBox(groupBox_generalSettingsGui0);
        checkBox_notifyWhenNewGlobalPathIsReceived->setObjectName(QString::fromUtf8("checkBox_notifyWhenNewGlobalPathIsReceived"));
        checkBox_notifyWhenNewGlobalPathIsReceived->setChecked(true);

        gridLayout_39->addWidget(checkBox_notifyWhenNewGlobalPathIsReceived, 2, 0, 1, 1);

        gridLayout_39->setColumnStretch(1, 1);

        verticalLayout_28->addLayout(gridLayout_39);

        groupBox_5 = new QGroupBox(groupBox_generalSettingsGui0);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_31 = new QGridLayout(groupBox_5);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        checkBox_imageRejectedShown = new QCheckBox(groupBox_5);
        checkBox_imageRejectedShown->setObjectName(QString::fromUtf8("checkBox_imageRejectedShown"));
        checkBox_imageRejectedShown->setChecked(true);

        gridLayout_31->addWidget(checkBox_imageRejectedShown, 1, 0, 1, 1);

        label_105 = new QLabel(groupBox_5);
        label_105->setObjectName(QString::fromUtf8("label_105"));
        label_105->setWordWrap(true);
        label_105->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_31->addWidget(label_105, 2, 1, 1, 1);

        checkBox_imageHighestHypShown = new QCheckBox(groupBox_5);
        checkBox_imageHighestHypShown->setObjectName(QString::fromUtf8("checkBox_imageHighestHypShown"));
        checkBox_imageHighestHypShown->setChecked(false);

        gridLayout_31->addWidget(checkBox_imageHighestHypShown, 2, 0, 1, 1);

        label_73 = new QLabel(groupBox_5);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setWordWrap(true);
        label_73->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_31->addWidget(label_73, 1, 1, 1, 1);

        label_70 = new QLabel(groupBox_5);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setWordWrap(false);
        label_70->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_31->addWidget(label_70, 0, 1, 1, 1);

        checkBox_verticalLayoutUsed = new QCheckBox(groupBox_5);
        checkBox_verticalLayoutUsed->setObjectName(QString::fromUtf8("checkBox_verticalLayoutUsed"));
        checkBox_verticalLayoutUsed->setChecked(true);

        gridLayout_31->addWidget(checkBox_verticalLayoutUsed, 0, 0, 1, 1);

        label_222 = new QLabel(groupBox_5);
        label_222->setObjectName(QString::fromUtf8("label_222"));
        label_222->setWordWrap(true);
        label_222->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_31->addWidget(label_222, 3, 1, 1, 1);

        checkBox_posteriorGraphView = new QCheckBox(groupBox_5);
        checkBox_posteriorGraphView->setObjectName(QString::fromUtf8("checkBox_posteriorGraphView"));
        checkBox_posteriorGraphView->setChecked(true);

        gridLayout_31->addWidget(checkBox_posteriorGraphView, 3, 0, 1, 1);

        gridLayout_31->setColumnStretch(1, 1);

        verticalLayout_28->addWidget(groupBox_5);

        groupBox = new QGroupBox(groupBox_generalSettingsGui0);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_38 = new QGridLayout(groupBox);
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        label_86 = new QLabel(groupBox);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setWordWrap(true);
        label_86->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_38->addWidget(label_86, 0, 1, 1, 1);

        spinBox_odomQualityWarnThr = new QSpinBox(groupBox);
        spinBox_odomQualityWarnThr->setObjectName(QString::fromUtf8("spinBox_odomQualityWarnThr"));
        spinBox_odomQualityWarnThr->setMaximum(9999);
        spinBox_odomQualityWarnThr->setValue(50);

        gridLayout_38->addWidget(spinBox_odomQualityWarnThr, 0, 0, 1, 1);

        gridLayout_38->setColumnStretch(1, 1);

        verticalLayout_28->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_generalSettingsGui0);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_loadConfig = new QPushButton(groupBox_2);
        pushButton_loadConfig->setObjectName(QString::fromUtf8("pushButton_loadConfig"));

        horizontalLayout_9->addWidget(pushButton_loadConfig);

        pushButton_saveConfig = new QPushButton(groupBox_2);
        pushButton_saveConfig->setObjectName(QString::fromUtf8("pushButton_saveConfig"));

        horizontalLayout_9->addWidget(pushButton_saveConfig);

        pushButton_resetConfig = new QPushButton(groupBox_2);
        pushButton_resetConfig->setObjectName(QString::fromUtf8("pushButton_resetConfig"));

        horizontalLayout_9->addWidget(pushButton_resetConfig);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout_28->addWidget(groupBox_2);


        verticalLayout_29->addWidget(groupBox_generalSettingsGui0);

        verticalSpacer_24 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_29->addItem(verticalSpacer_24);

        verticalLayout_29->setStretch(1, 1);
        stackedWidget->addWidget(page_22);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_42 = new QVBoxLayout(page_2);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        groupBox_cloudRendering1 = new QGroupBox(page_2);
        groupBox_cloudRendering1->setObjectName(QString::fromUtf8("groupBox_cloudRendering1"));
        verticalLayout_98 = new QVBoxLayout(groupBox_cloudRendering1);
        verticalLayout_98->setObjectName(QString::fromUtf8("verticalLayout_98"));
        groupBox_filtering = new QGroupBox(groupBox_cloudRendering1);
        groupBox_filtering->setObjectName(QString::fromUtf8("groupBox_filtering"));
        groupBox_filtering->setCheckable(false);
        groupBox_filtering->setChecked(false);
        verticalLayout_37 = new QVBoxLayout(groupBox_filtering);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        label_160 = new QLabel(groupBox_filtering);
        label_160->setObjectName(QString::fromUtf8("label_160"));
        label_160->setWordWrap(true);
        label_160->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_37->addWidget(label_160);

        gridLayout_65 = new QGridLayout();
        gridLayout_65->setObjectName(QString::fromUtf8("gridLayout_65"));
        label_71 = new QLabel(groupBox_filtering);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setWordWrap(true);
        label_71->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_65->addWidget(label_71, 0, 1, 1, 1);

        radioButton_noFiltering = new QRadioButton(groupBox_filtering);
        radioButton_noFiltering->setObjectName(QString::fromUtf8("radioButton_noFiltering"));
        radioButton_noFiltering->setChecked(false);

        gridLayout_65->addWidget(radioButton_noFiltering, 0, 0, 1, 1);

        radioButton_subtractFiltering = new QRadioButton(groupBox_filtering);
        radioButton_subtractFiltering->setObjectName(QString::fromUtf8("radioButton_subtractFiltering"));

        gridLayout_65->addWidget(radioButton_subtractFiltering, 3, 0, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        doubleSpinBox_cloudFilterRadius = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_cloudFilterRadius->setObjectName(QString::fromUtf8("doubleSpinBox_cloudFilterRadius"));
        doubleSpinBox_cloudFilterRadius->setMinimum(0.01);
        doubleSpinBox_cloudFilterRadius->setValue(0.1);

        gridLayout_17->addWidget(doubleSpinBox_cloudFilterRadius, 0, 0, 1, 1);

        label_37 = new QLabel(groupBox_filtering);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setWordWrap(true);
        label_37->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_17->addWidget(label_37, 0, 1, 1, 1);

        doubleSpinBox_cloudFilterAngle = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_cloudFilterAngle->setObjectName(QString::fromUtf8("doubleSpinBox_cloudFilterAngle"));
        doubleSpinBox_cloudFilterAngle->setDecimals(0);
        doubleSpinBox_cloudFilterAngle->setMaximum(180);
        doubleSpinBox_cloudFilterAngle->setValue(30);

        gridLayout_17->addWidget(doubleSpinBox_cloudFilterAngle, 1, 0, 1, 1);

        label_48 = new QLabel(groupBox_filtering);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setWordWrap(true);
        label_48->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_17->addWidget(label_48, 1, 1, 1, 1);

        gridLayout_17->setColumnStretch(1, 1);

        gridLayout_65->addLayout(gridLayout_17, 2, 1, 1, 1);

        label_161 = new QLabel(groupBox_filtering);
        label_161->setObjectName(QString::fromUtf8("label_161"));
        label_161->setTextFormat(Qt::PlainText);
        label_161->setWordWrap(true);
        label_161->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_65->addWidget(label_161, 3, 1, 1, 1);

        label_33 = new QLabel(groupBox_filtering);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setWordWrap(true);
        label_33->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_65->addWidget(label_33, 1, 1, 1, 1);

        radioButton_nodeFiltering = new QRadioButton(groupBox_filtering);
        radioButton_nodeFiltering->setObjectName(QString::fromUtf8("radioButton_nodeFiltering"));
        radioButton_nodeFiltering->setChecked(false);

        gridLayout_65->addWidget(radioButton_nodeFiltering, 1, 0, 1, 1);

        gridLayout_69 = new QGridLayout();
        gridLayout_69->setObjectName(QString::fromUtf8("gridLayout_69"));
        doubleSpinBox_subtractFilteringRadius = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_subtractFilteringRadius->setObjectName(QString::fromUtf8("doubleSpinBox_subtractFilteringRadius"));
        doubleSpinBox_subtractFilteringRadius->setMinimum(0.01);
        doubleSpinBox_subtractFilteringRadius->setMaximum(1);
        doubleSpinBox_subtractFilteringRadius->setSingleStep(0.01);
        doubleSpinBox_subtractFilteringRadius->setValue(0.02);

        gridLayout_69->addWidget(doubleSpinBox_subtractFilteringRadius, 0, 0, 1, 1);

        label_192 = new QLabel(groupBox_filtering);
        label_192->setObjectName(QString::fromUtf8("label_192"));
        label_192->setWordWrap(true);
        label_192->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_69->addWidget(label_192, 0, 1, 1, 1);

        doubleSpinBox_subtractFilteringAngle = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_subtractFilteringAngle->setObjectName(QString::fromUtf8("doubleSpinBox_subtractFilteringAngle"));
        doubleSpinBox_subtractFilteringAngle->setDecimals(0);
        doubleSpinBox_subtractFilteringAngle->setMaximum(180);
        doubleSpinBox_subtractFilteringAngle->setValue(30);

        gridLayout_69->addWidget(doubleSpinBox_subtractFilteringAngle, 1, 0, 1, 1);

        label_193 = new QLabel(groupBox_filtering);
        label_193->setObjectName(QString::fromUtf8("label_193"));
        label_193->setWordWrap(true);
        label_193->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_69->addWidget(label_193, 1, 1, 1, 1);

        spinBox_subtractFilteringMinPts = new QSpinBox(groupBox_filtering);
        spinBox_subtractFilteringMinPts->setObjectName(QString::fromUtf8("spinBox_subtractFilteringMinPts"));
        spinBox_subtractFilteringMinPts->setMinimum(1);

        gridLayout_69->addWidget(spinBox_subtractFilteringMinPts, 2, 0, 1, 1);

        label_174 = new QLabel(groupBox_filtering);
        label_174->setObjectName(QString::fromUtf8("label_174"));
        label_174->setWordWrap(true);
        label_174->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_69->addWidget(label_174, 2, 1, 1, 1);

        gridLayout_69->setColumnStretch(1, 1);

        gridLayout_65->addLayout(gridLayout_69, 4, 1, 1, 1);

        gridLayout_65->setColumnStretch(1, 1);

        verticalLayout_37->addLayout(gridLayout_65);


        verticalLayout_98->addWidget(groupBox_filtering);

        groupBox_gridMap = new QGroupBox(groupBox_cloudRendering1);
        groupBox_gridMap->setObjectName(QString::fromUtf8("groupBox_gridMap"));
        groupBox_gridMap->setCheckable(false);
        groupBox_gridMap->setChecked(false);
        verticalLayout_45 = new QVBoxLayout(groupBox_gridMap);
        verticalLayout_45->setObjectName(QString::fromUtf8("verticalLayout_45"));
        label_167 = new QLabel(groupBox_gridMap);
        label_167->setObjectName(QString::fromUtf8("label_167"));
        label_167->setWordWrap(true);
        label_167->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_45->addWidget(label_167);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        doubleSpinBox_map_opacity = new QDoubleSpinBox(groupBox_gridMap);
        doubleSpinBox_map_opacity->setObjectName(QString::fromUtf8("doubleSpinBox_map_opacity"));
        doubleSpinBox_map_opacity->setMinimum(0.75);
        doubleSpinBox_map_opacity->setMaximum(1);
        doubleSpinBox_map_opacity->setValue(0.75);

        gridLayout_20->addWidget(doubleSpinBox_map_opacity, 2, 0, 1, 1);

        checkBox_map_shown = new QCheckBox(groupBox_gridMap);
        checkBox_map_shown->setObjectName(QString::fromUtf8("checkBox_map_shown"));
        checkBox_map_shown->setChecked(false);

        gridLayout_20->addWidget(checkBox_map_shown, 0, 0, 1, 1);

        label_map_shown = new QLabel(groupBox_gridMap);
        label_map_shown->setObjectName(QString::fromUtf8("label_map_shown"));
        label_map_shown->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_20->addWidget(label_map_shown, 0, 1, 1, 1);

        doubleSpinBox_map_resolution = new QDoubleSpinBox(groupBox_gridMap);
        doubleSpinBox_map_resolution->setObjectName(QString::fromUtf8("doubleSpinBox_map_resolution"));
        doubleSpinBox_map_resolution->setMinimum(0.01);
        doubleSpinBox_map_resolution->setMaximum(1);
        doubleSpinBox_map_resolution->setValue(0.05);

        gridLayout_20->addWidget(doubleSpinBox_map_resolution, 1, 0, 1, 1);

        label_159 = new QLabel(groupBox_gridMap);
        label_159->setObjectName(QString::fromUtf8("label_159"));
        label_159->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_20->addWidget(label_159, 1, 1, 1, 1);

        label_170 = new QLabel(groupBox_gridMap);
        label_170->setObjectName(QString::fromUtf8("label_170"));
        label_170->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_20->addWidget(label_170, 2, 1, 1, 1);

        checkBox_map_occupancyFrom3DCloud = new QCheckBox(groupBox_gridMap);
        checkBox_map_occupancyFrom3DCloud->setObjectName(QString::fromUtf8("checkBox_map_occupancyFrom3DCloud"));
        checkBox_map_occupancyFrom3DCloud->setChecked(false);

        gridLayout_20->addWidget(checkBox_map_occupancyFrom3DCloud, 3, 0, 1, 1);

        label_210 = new QLabel(groupBox_gridMap);
        label_210->setObjectName(QString::fromUtf8("label_210"));
        label_210->setWordWrap(true);
        label_210->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_20->addWidget(label_210, 3, 1, 1, 1);

        label_224 = new QLabel(groupBox_gridMap);
        label_224->setObjectName(QString::fromUtf8("label_224"));
        label_224->setWordWrap(true);
        label_224->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_20->addWidget(label_224, 4, 1, 1, 1);

        checkBox_map_erode = new QCheckBox(groupBox_gridMap);
        checkBox_map_erode->setObjectName(QString::fromUtf8("checkBox_map_erode"));
        checkBox_map_erode->setChecked(false);

        gridLayout_20->addWidget(checkBox_map_erode, 4, 0, 1, 1);

        gridLayout_20->setColumnStretch(1, 1);

        verticalLayout_45->addLayout(gridLayout_20);


        verticalLayout_98->addWidget(groupBox_gridMap);

        frame = new QFrame(groupBox_cloudRendering1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBox_showScans = new QCheckBox(frame);
        checkBox_showScans->setObjectName(QString::fromUtf8("checkBox_showScans"));
        checkBox_showScans->setChecked(true);

        gridLayout_2->addWidget(checkBox_showScans, 9, 0, 1, 1);

        doubleSpinBox_opacity_scan = new QDoubleSpinBox(frame);
        doubleSpinBox_opacity_scan->setObjectName(QString::fromUtf8("doubleSpinBox_opacity_scan"));
        doubleSpinBox_opacity_scan->setDecimals(2);
        doubleSpinBox_opacity_scan->setMaximum(1);
        doubleSpinBox_opacity_scan->setSingleStep(0.1);
        doubleSpinBox_opacity_scan->setValue(1);

        gridLayout_2->addWidget(doubleSpinBox_opacity_scan, 12, 0, 1, 1);

        label_110 = new QLabel(frame);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setWordWrap(true);
        label_110->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_110, 9, 2, 1, 1);

        label_119 = new QLabel(frame);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setWordWrap(true);
        label_119->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_119, 1, 2, 1, 1);

        checkBox_showOdomFeatures = new QCheckBox(frame);
        checkBox_showOdomFeatures->setObjectName(QString::fromUtf8("checkBox_showOdomFeatures"));
        checkBox_showOdomFeatures->setChecked(true);

        gridLayout_2->addWidget(checkBox_showOdomFeatures, 14, 1, 1, 1);

        checkBox_showFeatures = new QCheckBox(frame);
        checkBox_showFeatures->setObjectName(QString::fromUtf8("checkBox_showFeatures"));
        checkBox_showFeatures->setChecked(true);

        gridLayout_2->addWidget(checkBox_showFeatures, 14, 0, 1, 1);

        label_154 = new QLabel(frame);
        label_154->setObjectName(QString::fromUtf8("label_154"));
        label_154->setAlignment(Qt::AlignCenter);
        label_154->setWordWrap(true);

        gridLayout_2->addWidget(label_154, 0, 0, 1, 1);

        spinBox_decimation_odom = new QSpinBox(frame);
        spinBox_decimation_odom->setObjectName(QString::fromUtf8("spinBox_decimation_odom"));
        spinBox_decimation_odom->setMinimum(1);
        spinBox_decimation_odom->setMaximum(32);
        spinBox_decimation_odom->setValue(2);

        gridLayout_2->addWidget(spinBox_decimation_odom, 3, 1, 1, 1);

        doubleSpinBox_maxDepth = new QDoubleSpinBox(frame);
        doubleSpinBox_maxDepth->setObjectName(QString::fromUtf8("doubleSpinBox_maxDepth"));
        doubleSpinBox_maxDepth->setDecimals(1);
        doubleSpinBox_maxDepth->setMaximum(100);
        doubleSpinBox_maxDepth->setSingleStep(0.1);
        doubleSpinBox_maxDepth->setValue(4);

        gridLayout_2->addWidget(doubleSpinBox_maxDepth, 4, 0, 1, 1);

        doubleSpinBox_maxDepth_odom = new QDoubleSpinBox(frame);
        doubleSpinBox_maxDepth_odom->setObjectName(QString::fromUtf8("doubleSpinBox_maxDepth_odom"));
        doubleSpinBox_maxDepth_odom->setDecimals(1);
        doubleSpinBox_maxDepth_odom->setMaximum(100);
        doubleSpinBox_maxDepth_odom->setSingleStep(0.1);
        doubleSpinBox_maxDepth_odom->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_maxDepth_odom, 4, 1, 1, 1);

        spinBox_ptsize = new QSpinBox(frame);
        spinBox_ptsize->setObjectName(QString::fromUtf8("spinBox_ptsize"));
        spinBox_ptsize->setMinimum(1);
        spinBox_ptsize->setMaximum(64);
        spinBox_ptsize->setValue(2);

        gridLayout_2->addWidget(spinBox_ptsize, 7, 0, 1, 1);

        doubleSpinBox_opacity_odom_scan = new QDoubleSpinBox(frame);
        doubleSpinBox_opacity_odom_scan->setObjectName(QString::fromUtf8("doubleSpinBox_opacity_odom_scan"));
        doubleSpinBox_opacity_odom_scan->setDecimals(2);
        doubleSpinBox_opacity_odom_scan->setMaximum(1);
        doubleSpinBox_opacity_odom_scan->setSingleStep(0.1);
        doubleSpinBox_opacity_odom_scan->setValue(1);

        gridLayout_2->addWidget(doubleSpinBox_opacity_odom_scan, 12, 1, 1, 1);

        label_108 = new QLabel(frame);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setWordWrap(true);
        label_108->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_108, 3, 2, 1, 1);

        label_132 = new QLabel(frame);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setWordWrap(true);
        label_132->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_132, 4, 2, 1, 1);

        label_155 = new QLabel(frame);
        label_155->setObjectName(QString::fromUtf8("label_155"));
        label_155->setWordWrap(true);
        label_155->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_155, 6, 2, 1, 1);

        spinBox_ptsize_odom = new QSpinBox(frame);
        spinBox_ptsize_odom->setObjectName(QString::fromUtf8("spinBox_ptsize_odom"));
        spinBox_ptsize_odom->setMinimum(1);
        spinBox_ptsize_odom->setMaximum(64);
        spinBox_ptsize_odom->setValue(2);

        gridLayout_2->addWidget(spinBox_ptsize_odom, 7, 1, 1, 1);

        spinBox_ptsize_odom_scan = new QSpinBox(frame);
        spinBox_ptsize_odom_scan->setObjectName(QString::fromUtf8("spinBox_ptsize_odom_scan"));
        spinBox_ptsize_odom_scan->setMinimum(1);
        spinBox_ptsize_odom_scan->setMaximum(64);

        gridLayout_2->addWidget(spinBox_ptsize_odom_scan, 13, 1, 1, 1);

        label_158 = new QLabel(frame);
        label_158->setObjectName(QString::fromUtf8("label_158"));
        label_158->setWordWrap(true);
        label_158->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_158, 13, 2, 1, 1);

        doubleSpinBox_voxelSizeScan = new QDoubleSpinBox(frame);
        doubleSpinBox_voxelSizeScan->setObjectName(QString::fromUtf8("doubleSpinBox_voxelSizeScan"));
        doubleSpinBox_voxelSizeScan->setDecimals(3);
        doubleSpinBox_voxelSizeScan->setMaximum(1);
        doubleSpinBox_voxelSizeScan->setSingleStep(0.01);
        doubleSpinBox_voxelSizeScan->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_voxelSizeScan, 11, 0, 1, 1);

        label_271 = new QLabel(frame);
        label_271->setObjectName(QString::fromUtf8("label_271"));
        label_271->setWordWrap(true);
        label_271->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_271, 11, 2, 1, 1);

        spinBox_downsamplingScan_odom = new QSpinBox(frame);
        spinBox_downsamplingScan_odom->setObjectName(QString::fromUtf8("spinBox_downsamplingScan_odom"));
        spinBox_downsamplingScan_odom->setMinimum(1);
        spinBox_downsamplingScan_odom->setMaximum(9999);

        gridLayout_2->addWidget(spinBox_downsamplingScan_odom, 10, 1, 1, 1);

        label_156 = new QLabel(frame);
        label_156->setObjectName(QString::fromUtf8("label_156"));
        label_156->setWordWrap(true);
        label_156->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_156, 12, 2, 1, 1);

        checkBox_showOdomClouds = new QCheckBox(frame);
        checkBox_showOdomClouds->setObjectName(QString::fromUtf8("checkBox_showOdomClouds"));
        checkBox_showOdomClouds->setChecked(true);

        gridLayout_2->addWidget(checkBox_showOdomClouds, 1, 1, 1, 1);

        spinBox_decimation = new QSpinBox(frame);
        spinBox_decimation->setObjectName(QString::fromUtf8("spinBox_decimation"));
        spinBox_decimation->setMinimum(1);
        spinBox_decimation->setMaximum(32);
        spinBox_decimation->setValue(4);

        gridLayout_2->addWidget(spinBox_decimation, 3, 0, 1, 1);

        doubleSpinBox_opacity = new QDoubleSpinBox(frame);
        doubleSpinBox_opacity->setObjectName(QString::fromUtf8("doubleSpinBox_opacity"));
        doubleSpinBox_opacity->setDecimals(2);
        doubleSpinBox_opacity->setMaximum(1);
        doubleSpinBox_opacity->setSingleStep(0.1);
        doubleSpinBox_opacity->setValue(1);

        gridLayout_2->addWidget(doubleSpinBox_opacity, 6, 0, 1, 1);

        checkBox_showOdomScans = new QCheckBox(frame);
        checkBox_showOdomScans->setObjectName(QString::fromUtf8("checkBox_showOdomScans"));
        checkBox_showOdomScans->setChecked(true);

        gridLayout_2->addWidget(checkBox_showOdomScans, 9, 1, 1, 1);

        label_213 = new QLabel(frame);
        label_213->setObjectName(QString::fromUtf8("label_213"));
        label_213->setWordWrap(true);
        label_213->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_213, 16, 2, 1, 1);

        checkBox_showGraphs = new QCheckBox(frame);
        checkBox_showGraphs->setObjectName(QString::fromUtf8("checkBox_showGraphs"));
        checkBox_showGraphs->setChecked(true);

        gridLayout_2->addWidget(checkBox_showGraphs, 16, 0, 1, 1);

        doubleSpinBox_opacity_odom = new QDoubleSpinBox(frame);
        doubleSpinBox_opacity_odom->setObjectName(QString::fromUtf8("doubleSpinBox_opacity_odom"));
        doubleSpinBox_opacity_odom->setDecimals(2);
        doubleSpinBox_opacity_odom->setMaximum(1);
        doubleSpinBox_opacity_odom->setSingleStep(0.1);
        doubleSpinBox_opacity_odom->setValue(1);

        gridLayout_2->addWidget(doubleSpinBox_opacity_odom, 6, 1, 1, 1);

        spinBox_ptsize_scan = new QSpinBox(frame);
        spinBox_ptsize_scan->setObjectName(QString::fromUtf8("spinBox_ptsize_scan"));
        spinBox_ptsize_scan->setMinimum(1);
        spinBox_ptsize_scan->setMaximum(64);

        gridLayout_2->addWidget(spinBox_ptsize_scan, 13, 0, 1, 1);

        checkBox_showClouds = new QCheckBox(frame);
        checkBox_showClouds->setObjectName(QString::fromUtf8("checkBox_showClouds"));
        checkBox_showClouds->setChecked(true);

        gridLayout_2->addWidget(checkBox_showClouds, 1, 0, 1, 1);

        label_243 = new QLabel(frame);
        label_243->setObjectName(QString::fromUtf8("label_243"));
        label_243->setWordWrap(true);
        label_243->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_243, 17, 2, 1, 1);

        checkBox_showLabels = new QCheckBox(frame);
        checkBox_showLabels->setObjectName(QString::fromUtf8("checkBox_showLabels"));
        checkBox_showLabels->setChecked(true);

        gridLayout_2->addWidget(checkBox_showLabels, 17, 0, 1, 1);

        doubleSpinBox_voxelSizeScan_odom = new QDoubleSpinBox(frame);
        doubleSpinBox_voxelSizeScan_odom->setObjectName(QString::fromUtf8("doubleSpinBox_voxelSizeScan_odom"));
        doubleSpinBox_voxelSizeScan_odom->setDecimals(3);
        doubleSpinBox_voxelSizeScan_odom->setMaximum(1);
        doubleSpinBox_voxelSizeScan_odom->setSingleStep(0.01);
        doubleSpinBox_voxelSizeScan_odom->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_voxelSizeScan_odom, 11, 1, 1, 1);

        label_273 = new QLabel(frame);
        label_273->setObjectName(QString::fromUtf8("label_273"));
        label_273->setWordWrap(true);
        label_273->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_273, 10, 2, 1, 1);

        spinBox_downsamplingScan = new QSpinBox(frame);
        spinBox_downsamplingScan->setObjectName(QString::fromUtf8("spinBox_downsamplingScan"));
        spinBox_downsamplingScan->setMinimum(1);
        spinBox_downsamplingScan->setMaximum(9999);

        gridLayout_2->addWidget(spinBox_downsamplingScan, 10, 0, 1, 1);

        label_157 = new QLabel(frame);
        label_157->setObjectName(QString::fromUtf8("label_157"));
        label_157->setWordWrap(true);
        label_157->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_157, 7, 2, 1, 1);

        label_137 = new QLabel(frame);
        label_137->setObjectName(QString::fromUtf8("label_137"));
        label_137->setAlignment(Qt::AlignCenter);
        label_137->setWordWrap(true);

        gridLayout_2->addWidget(label_137, 0, 1, 1, 1);

        label_123 = new QLabel(frame);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setWordWrap(true);
        label_123->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_123, 14, 2, 1, 1);

        label_166 = new QLabel(frame);
        label_166->setObjectName(QString::fromUtf8("label_166"));
        label_166->setWordWrap(true);
        label_166->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_166, 15, 2, 1, 1);

        spinBox_ptsize_odom_features = new QSpinBox(frame);
        spinBox_ptsize_odom_features->setObjectName(QString::fromUtf8("spinBox_ptsize_odom_features"));
        spinBox_ptsize_odom_features->setMinimum(1);
        spinBox_ptsize_odom_features->setMaximum(64);

        gridLayout_2->addWidget(spinBox_ptsize_odom_features, 15, 1, 1, 1);

        spinBox_ptsize_features = new QSpinBox(frame);
        spinBox_ptsize_features->setObjectName(QString::fromUtf8("spinBox_ptsize_features"));
        spinBox_ptsize_features->setMinimum(1);
        spinBox_ptsize_features->setMaximum(64);

        gridLayout_2->addWidget(spinBox_ptsize_features, 15, 0, 1, 1);

        label_150 = new QLabel(frame);
        label_150->setObjectName(QString::fromUtf8("label_150"));
        label_150->setWordWrap(true);
        label_150->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_150, 5, 2, 1, 1);

        doubleSpinBox_minDepth = new QDoubleSpinBox(frame);
        doubleSpinBox_minDepth->setObjectName(QString::fromUtf8("doubleSpinBox_minDepth"));
        doubleSpinBox_minDepth->setDecimals(1);
        doubleSpinBox_minDepth->setMaximum(100);
        doubleSpinBox_minDepth->setSingleStep(0.1);
        doubleSpinBox_minDepth->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_minDepth, 5, 0, 1, 1);

        doubleSpinBox_minDepth_odom = new QDoubleSpinBox(frame);
        doubleSpinBox_minDepth_odom->setObjectName(QString::fromUtf8("doubleSpinBox_minDepth_odom"));
        doubleSpinBox_minDepth_odom->setDecimals(1);
        doubleSpinBox_minDepth_odom->setMinimum(0);
        doubleSpinBox_minDepth_odom->setMaximum(100);
        doubleSpinBox_minDepth_odom->setSingleStep(0.1);
        doubleSpinBox_minDepth_odom->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_minDepth_odom, 5, 1, 1, 1);

        gridLayout_2->setColumnStretch(2, 1);

        verticalLayout_98->addWidget(frame);

        groupBox_organized = new QGroupBox(groupBox_cloudRendering1);
        groupBox_organized->setObjectName(QString::fromUtf8("groupBox_organized"));
        groupBox_organized->setCheckable(true);
        verticalLayout_31 = new QVBoxLayout(groupBox_organized);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        gridLayout_64 = new QGridLayout();
        gridLayout_64->setObjectName(QString::fromUtf8("gridLayout_64"));
        label_85 = new QLabel(groupBox_organized);
        label_85->setObjectName(QString::fromUtf8("label_85"));

        gridLayout_64->addWidget(label_85, 0, 1, 1, 1);

        checkBox_mesh_quad = new QCheckBox(groupBox_organized);
        checkBox_mesh_quad->setObjectName(QString::fromUtf8("checkBox_mesh_quad"));
        checkBox_mesh_quad->setChecked(true);

        gridLayout_64->addWidget(checkBox_mesh_quad, 1, 0, 1, 1);

        label_quad = new QLabel(groupBox_organized);
        label_quad->setObjectName(QString::fromUtf8("label_quad"));

        gridLayout_64->addWidget(label_quad, 1, 1, 1, 1);

        spinBox_mesh_triangleSize = new QSpinBox(groupBox_organized);
        spinBox_mesh_triangleSize->setObjectName(QString::fromUtf8("spinBox_mesh_triangleSize"));
        spinBox_mesh_triangleSize->setMinimum(2);
        spinBox_mesh_triangleSize->setMaximum(99);

        gridLayout_64->addWidget(spinBox_mesh_triangleSize, 2, 0, 1, 1);

        label_87 = new QLabel(groupBox_organized);
        label_87->setObjectName(QString::fromUtf8("label_87"));

        gridLayout_64->addWidget(label_87, 2, 1, 1, 1);

        doubleSpinBox_mesh_angleTolerance = new QDoubleSpinBox(groupBox_organized);
        doubleSpinBox_mesh_angleTolerance->setObjectName(QString::fromUtf8("doubleSpinBox_mesh_angleTolerance"));
        doubleSpinBox_mesh_angleTolerance->setDecimals(0);
        doubleSpinBox_mesh_angleTolerance->setMinimum(1);
        doubleSpinBox_mesh_angleTolerance->setMaximum(99);
        doubleSpinBox_mesh_angleTolerance->setValue(15);

        gridLayout_64->addWidget(doubleSpinBox_mesh_angleTolerance, 0, 0, 1, 1);

        gridLayout_64->setColumnStretch(1, 1);

        verticalLayout_31->addLayout(gridLayout_64);

        verticalSpacer_51 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_51);


        verticalLayout_98->addWidget(groupBox_organized);


        verticalLayout_42->addWidget(groupBox_cloudRendering1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_42->addItem(verticalSpacer);

        stackedWidget->addWidget(page_2);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        verticalLayout_43 = new QVBoxLayout(page_8);
        verticalLayout_43->setObjectName(QString::fromUtf8("verticalLayout_43"));
        groupBox_logging1 = new QGroupBox(page_8);
        groupBox_logging1->setObjectName(QString::fromUtf8("groupBox_logging1"));
        gridLayout_40 = new QGridLayout(groupBox_logging1);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        comboBox_loggerLevel = new QComboBox(groupBox_logging1);
        comboBox_loggerLevel->setObjectName(QString::fromUtf8("comboBox_loggerLevel"));
        comboBox_loggerLevel->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_40->addWidget(comboBox_loggerLevel, 0, 0, 1, 1);

        label_60 = new QLabel(groupBox_logging1);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setWordWrap(true);
        label_60->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_40->addWidget(label_60, 0, 1, 1, 1);

        comboBox_loggerEventLevel = new QComboBox(groupBox_logging1);
        comboBox_loggerEventLevel->setObjectName(QString::fromUtf8("comboBox_loggerEventLevel"));
        comboBox_loggerEventLevel->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_40->addWidget(comboBox_loggerEventLevel, 1, 0, 1, 1);

        label_61 = new QLabel(groupBox_logging1);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setWordWrap(true);
        label_61->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_40->addWidget(label_61, 1, 1, 1, 1);

        comboBox_loggerPauseLevel = new QComboBox(groupBox_logging1);
        comboBox_loggerPauseLevel->setObjectName(QString::fromUtf8("comboBox_loggerPauseLevel"));
        comboBox_loggerPauseLevel->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_40->addWidget(comboBox_loggerPauseLevel, 2, 0, 1, 1);

        label_62 = new QLabel(groupBox_logging1);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setWordWrap(true);
        label_62->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_40->addWidget(label_62, 2, 1, 1, 1);

        checkBox_logger_printTime = new QCheckBox(groupBox_logging1);
        checkBox_logger_printTime->setObjectName(QString::fromUtf8("checkBox_logger_printTime"));
        checkBox_logger_printTime->setChecked(true);

        gridLayout_40->addWidget(checkBox_logger_printTime, 3, 0, 1, 1);

        label_67 = new QLabel(groupBox_logging1);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setWordWrap(true);
        label_67->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_40->addWidget(label_67, 3, 1, 1, 1);

        comboBox_loggerType = new QComboBox(groupBox_logging1);
        comboBox_loggerType->setObjectName(QString::fromUtf8("comboBox_loggerType"));
        comboBox_loggerType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_40->addWidget(comboBox_loggerType, 5, 0, 1, 1);

        label_68 = new QLabel(groupBox_logging1);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setWordWrap(true);
        label_68->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_40->addWidget(label_68, 5, 1, 1, 1);

        label_118 = new QLabel(groupBox_logging1);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        label_118->setWordWrap(true);
        label_118->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_40->addWidget(label_118, 4, 1, 1, 1);

        checkBox_logger_printThreadId = new QCheckBox(groupBox_logging1);
        checkBox_logger_printThreadId->setObjectName(QString::fromUtf8("checkBox_logger_printThreadId"));
        checkBox_logger_printThreadId->setChecked(false);

        gridLayout_40->addWidget(checkBox_logger_printThreadId, 4, 0, 1, 1);

        gridLayout_40->setColumnStretch(1, 1);

        verticalLayout_43->addWidget(groupBox_logging1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_43->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page_8);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_27 = new QVBoxLayout(page_4);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        groupBox_source0 = new QGroupBox(page_4);
        groupBox_source0->setObjectName(QString::fromUtf8("groupBox_source0"));
        verticalLayout_7 = new QVBoxLayout(groupBox_source0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gridLayout_28 = new QGridLayout();
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        label_3 = new QLabel(groupBox_source0);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_3, 1, 1, 1, 1);

        label_42 = new QLabel(groupBox_source0);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setWordWrap(true);
        label_42->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_42, 3, 1, 1, 1);

        label_19 = new QLabel(groupBox_source0);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setWordWrap(true);
        label_19->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_19, 0, 1, 1, 1);

        label_39 = new QLabel(groupBox_source0);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setWordWrap(true);
        label_39->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_39, 2, 1, 1, 1);

        label_244 = new QLabel(groupBox_source0);
        label_244->setObjectName(QString::fromUtf8("label_244"));
        label_244->setWordWrap(true);
        label_244->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_244, 9, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        toolButton_source_path_calibration = new QToolButton(groupBox_source0);
        toolButton_source_path_calibration->setObjectName(QString::fromUtf8("toolButton_source_path_calibration"));

        horizontalLayout_5->addWidget(toolButton_source_path_calibration);

        lineEdit_calibrationFile = new QLineEdit(groupBox_source0);
        lineEdit_calibrationFile->setObjectName(QString::fromUtf8("lineEdit_calibrationFile"));
        lineEdit_calibrationFile->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(lineEdit_calibrationFile);

        horizontalLayout_5->setStretch(1, 1);

        gridLayout_28->addLayout(horizontalLayout_5, 6, 0, 1, 1);

        general_doubleSpinBox_imgRate = new QDoubleSpinBox(groupBox_source0);
        general_doubleSpinBox_imgRate->setObjectName(QString::fromUtf8("general_doubleSpinBox_imgRate"));
        general_doubleSpinBox_imgRate->setDecimals(1);
        general_doubleSpinBox_imgRate->setMaximum(100);
        general_doubleSpinBox_imgRate->setSingleStep(0.1);
        general_doubleSpinBox_imgRate->setValue(0);

        gridLayout_28->addWidget(general_doubleSpinBox_imgRate, 1, 0, 1, 1);

        label_17 = new QLabel(groupBox_source0);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setWordWrap(true);
        label_17->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_17, 4, 1, 1, 1);

        source_mirroring = new QCheckBox(groupBox_source0);
        source_mirroring->setObjectName(QString::fromUtf8("source_mirroring"));

        gridLayout_28->addWidget(source_mirroring, 4, 0, 1, 1);

        lineEdit_sourceLocalTransform = new QLineEdit(groupBox_source0);
        lineEdit_sourceLocalTransform->setObjectName(QString::fromUtf8("lineEdit_sourceLocalTransform"));

        gridLayout_28->addWidget(lineEdit_sourceLocalTransform, 3, 0, 1, 1);

        comboBox_sourceType = new QComboBox(groupBox_source0);
        comboBox_sourceType->setObjectName(QString::fromUtf8("comboBox_sourceType"));
        comboBox_sourceType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_28->addWidget(comboBox_sourceType, 0, 0, 1, 1);

        pushButton_test_camera = new QPushButton(groupBox_source0);
        pushButton_test_camera->setObjectName(QString::fromUtf8("pushButton_test_camera"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_test_camera->sizePolicy().hasHeightForWidth());
        pushButton_test_camera->setSizePolicy(sizePolicy1);

        gridLayout_28->addWidget(pushButton_test_camera, 10, 0, 1, 1);

        pushButton_calibrate = new QPushButton(groupBox_source0);
        pushButton_calibrate->setObjectName(QString::fromUtf8("pushButton_calibrate"));
        sizePolicy1.setHeightForWidth(pushButton_calibrate->sizePolicy().hasHeightForWidth());
        pushButton_calibrate->setSizePolicy(sizePolicy1);

        gridLayout_28->addWidget(pushButton_calibrate, 8, 0, 1, 1);

        label_24 = new QLabel(groupBox_source0);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setWordWrap(true);
        label_24->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_24, 8, 1, 1, 1);

        lineEdit_sourceDevice = new QLineEdit(groupBox_source0);
        lineEdit_sourceDevice->setObjectName(QString::fromUtf8("lineEdit_sourceDevice"));

        gridLayout_28->addWidget(lineEdit_sourceDevice, 2, 0, 1, 1);

        pushButton_calibrate_simple = new QPushButton(groupBox_source0);
        pushButton_calibrate_simple->setObjectName(QString::fromUtf8("pushButton_calibrate_simple"));
        sizePolicy1.setHeightForWidth(pushButton_calibrate_simple->sizePolicy().hasHeightForWidth());
        pushButton_calibrate_simple->setSizePolicy(sizePolicy1);

        gridLayout_28->addWidget(pushButton_calibrate_simple, 9, 0, 1, 1);

        label_18 = new QLabel(groupBox_source0);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setWordWrap(true);
        label_18->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_18, 6, 1, 1, 1);

        label_36 = new QLabel(groupBox_source0);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setWordWrap(true);
        label_36->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_28->addWidget(label_36, 5, 1, 1, 1);

        spinBox_source_imageDecimation = new QSpinBox(groupBox_source0);
        spinBox_source_imageDecimation->setObjectName(QString::fromUtf8("spinBox_source_imageDecimation"));
        spinBox_source_imageDecimation->setMinimum(1);

        gridLayout_28->addWidget(spinBox_source_imageDecimation, 5, 0, 1, 1);

        gridLayout_28->setColumnStretch(1, 1);

        verticalLayout_7->addLayout(gridLayout_28);

        stackedWidget_src = new QStackedWidget(groupBox_source0);
        stackedWidget_src->setObjectName(QString::fromUtf8("stackedWidget_src"));
        page_41 = new QWidget();
        page_41->setObjectName(QString::fromUtf8("page_41"));
        verticalLayout_64 = new QVBoxLayout(page_41);
        verticalLayout_64->setObjectName(QString::fromUtf8("verticalLayout_64"));
        groupBox_sourceRGBD = new QGroupBox(page_41);
        groupBox_sourceRGBD->setObjectName(QString::fromUtf8("groupBox_sourceRGBD"));
        groupBox_sourceRGBD->setCheckable(false);
        groupBox_sourceRGBD->setChecked(false);
        verticalLayout_11 = new QVBoxLayout(groupBox_sourceRGBD);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_40 = new QLabel(groupBox_sourceRGBD);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setWordWrap(true);

        verticalLayout_11->addWidget(label_40);

        gridLayout_55 = new QGridLayout();
        gridLayout_55->setObjectName(QString::fromUtf8("gridLayout_55"));
        comboBox_cameraRGBD = new QComboBox(groupBox_sourceRGBD);
        comboBox_cameraRGBD->setObjectName(QString::fromUtf8("comboBox_cameraRGBD"));
        comboBox_cameraRGBD->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_55->addWidget(comboBox_cameraRGBD, 0, 1, 1, 1);

        label_228 = new QLabel(groupBox_sourceRGBD);
        label_228->setObjectName(QString::fromUtf8("label_228"));
        label_228->setWordWrap(true);

        gridLayout_55->addWidget(label_228, 0, 2, 1, 1);

        label_229 = new QLabel(groupBox_sourceRGBD);
        label_229->setObjectName(QString::fromUtf8("label_229"));
        label_229->setWordWrap(true);

        gridLayout_55->addWidget(label_229, 3, 2, 1, 1);

        checkbox_rgbd_colorOnly = new QCheckBox(groupBox_sourceRGBD);
        checkbox_rgbd_colorOnly->setObjectName(QString::fromUtf8("checkbox_rgbd_colorOnly"));
        checkbox_rgbd_colorOnly->setChecked(false);

        gridLayout_55->addWidget(checkbox_rgbd_colorOnly, 3, 1, 1, 1);

        gridLayout_55->setColumnStretch(2, 1);

        verticalLayout_11->addLayout(gridLayout_55);

        stackedWidget_rgbd = new QStackedWidget(groupBox_sourceRGBD);
        stackedWidget_rgbd->setObjectName(QString::fromUtf8("stackedWidget_rgbd"));
        page_32 = new QWidget();
        page_32->setObjectName(QString::fromUtf8("page_32"));
        verticalLayout_63 = new QVBoxLayout(page_32);
        verticalLayout_63->setObjectName(QString::fromUtf8("verticalLayout_63"));
        groupBox_openni = new QGroupBox(page_32);
        groupBox_openni->setObjectName(QString::fromUtf8("groupBox_openni"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_openni->sizePolicy().hasHeightForWidth());
        groupBox_openni->setSizePolicy(sizePolicy2);
        gridLayout_57 = new QGridLayout(groupBox_openni);
        gridLayout_57->setObjectName(QString::fromUtf8("gridLayout_57"));
        lineEdit_openniOniPath = new QLineEdit(groupBox_openni);
        lineEdit_openniOniPath->setObjectName(QString::fromUtf8("lineEdit_openniOniPath"));

        gridLayout_57->addWidget(lineEdit_openniOniPath, 0, 1, 1, 1);

        label_245 = new QLabel(groupBox_openni);
        label_245->setObjectName(QString::fromUtf8("label_245"));
        label_245->setWordWrap(true);
        label_245->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_57->addWidget(label_245, 0, 2, 1, 1);

        verticalSpacer_34 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_57->addItem(verticalSpacer_34, 1, 0, 1, 1);

        toolButton_openniOniPath = new QToolButton(groupBox_openni);
        toolButton_openniOniPath->setObjectName(QString::fromUtf8("toolButton_openniOniPath"));

        gridLayout_57->addWidget(toolButton_openniOniPath, 0, 0, 1, 1);


        verticalLayout_63->addWidget(groupBox_openni);

        stackedWidget_rgbd->addWidget(page_32);
        page_33 = new QWidget();
        page_33->setObjectName(QString::fromUtf8("page_33"));
        verticalLayout_80 = new QVBoxLayout(page_33);
        verticalLayout_80->setObjectName(QString::fromUtf8("verticalLayout_80"));
        verticalSpacer_3 = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_80->addItem(verticalSpacer_3);

        stackedWidget_rgbd->addWidget(page_33);
        page_34 = new QWidget();
        page_34->setObjectName(QString::fromUtf8("page_34"));
        verticalLayout_89 = new QVBoxLayout(page_34);
        verticalLayout_89->setObjectName(QString::fromUtf8("verticalLayout_89"));
        verticalSpacer_27 = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_89->addItem(verticalSpacer_27);

        stackedWidget_rgbd->addWidget(page_34);
        page_35 = new QWidget();
        page_35->setObjectName(QString::fromUtf8("page_35"));
        verticalLayout_90 = new QVBoxLayout(page_35);
        verticalLayout_90->setObjectName(QString::fromUtf8("verticalLayout_90"));
        verticalSpacer_28 = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_90->addItem(verticalSpacer_28);

        stackedWidget_rgbd->addWidget(page_35);
        page_36 = new QWidget();
        page_36->setObjectName(QString::fromUtf8("page_36"));
        verticalLayout_51 = new QVBoxLayout(page_36);
        verticalLayout_51->setObjectName(QString::fromUtf8("verticalLayout_51"));
        groupBox_openni2 = new QGroupBox(page_36);
        groupBox_openni2->setObjectName(QString::fromUtf8("groupBox_openni2"));
        sizePolicy2.setHeightForWidth(groupBox_openni2->sizePolicy().hasHeightForWidth());
        groupBox_openni2->setSizePolicy(sizePolicy2);
        gridLayout_54 = new QGridLayout(groupBox_openni2);
        gridLayout_54->setObjectName(QString::fromUtf8("gridLayout_54"));
        openni2_autoWhiteBalance = new QCheckBox(groupBox_openni2);
        openni2_autoWhiteBalance->setObjectName(QString::fromUtf8("openni2_autoWhiteBalance"));
        openni2_autoWhiteBalance->setChecked(true);

        gridLayout_54->addWidget(openni2_autoWhiteBalance, 1, 0, 1, 1);

        label_217 = new QLabel(groupBox_openni2);
        label_217->setObjectName(QString::fromUtf8("label_217"));
        label_217->setWordWrap(true);

        gridLayout_54->addWidget(label_217, 1, 1, 1, 1);

        openni2_autoExposure = new QCheckBox(groupBox_openni2);
        openni2_autoExposure->setObjectName(QString::fromUtf8("openni2_autoExposure"));
        openni2_autoExposure->setChecked(true);

        gridLayout_54->addWidget(openni2_autoExposure, 2, 0, 1, 1);

        label_218 = new QLabel(groupBox_openni2);
        label_218->setObjectName(QString::fromUtf8("label_218"));
        label_218->setWordWrap(true);

        gridLayout_54->addWidget(label_218, 2, 1, 1, 1);

        openni2_exposure = new QSpinBox(groupBox_openni2);
        openni2_exposure->setObjectName(QString::fromUtf8("openni2_exposure"));
        openni2_exposure->setMaximum(65535);

        gridLayout_54->addWidget(openni2_exposure, 3, 0, 1, 1);

        label_219 = new QLabel(groupBox_openni2);
        label_219->setObjectName(QString::fromUtf8("label_219"));
        label_219->setWordWrap(true);

        gridLayout_54->addWidget(label_219, 3, 1, 1, 1);

        verticalSpacer_33 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_54->addItem(verticalSpacer_33, 7, 0, 1, 1);

        openni2_gain = new QSpinBox(groupBox_openni2);
        openni2_gain->setObjectName(QString::fromUtf8("openni2_gain"));
        openni2_gain->setMaximum(1000);
        openni2_gain->setValue(100);

        gridLayout_54->addWidget(openni2_gain, 4, 0, 1, 1);

        label_220 = new QLabel(groupBox_openni2);
        label_220->setObjectName(QString::fromUtf8("label_220"));
        label_220->setWordWrap(true);

        gridLayout_54->addWidget(label_220, 4, 1, 1, 1);

        openni2_mirroring = new QCheckBox(groupBox_openni2);
        openni2_mirroring->setObjectName(QString::fromUtf8("openni2_mirroring"));
        openni2_mirroring->setChecked(false);

        gridLayout_54->addWidget(openni2_mirroring, 6, 0, 1, 1);

        label_223 = new QLabel(groupBox_openni2);
        label_223->setObjectName(QString::fromUtf8("label_223"));
        label_223->setWordWrap(true);

        gridLayout_54->addWidget(label_223, 6, 1, 1, 1);

        lineEdit_openni2OniPath = new QLineEdit(groupBox_openni2);
        lineEdit_openni2OniPath->setObjectName(QString::fromUtf8("lineEdit_openni2OniPath"));

        gridLayout_54->addWidget(lineEdit_openni2OniPath, 0, 1, 1, 1);

        label_231 = new QLabel(groupBox_openni2);
        label_231->setObjectName(QString::fromUtf8("label_231"));
        label_231->setWordWrap(true);

        gridLayout_54->addWidget(label_231, 0, 2, 1, 1);

        toolButton_openni2OniPath = new QToolButton(groupBox_openni2);
        toolButton_openni2OniPath->setObjectName(QString::fromUtf8("toolButton_openni2OniPath"));

        gridLayout_54->addWidget(toolButton_openni2OniPath, 0, 0, 1, 1);

        label_264 = new QLabel(groupBox_openni2);
        label_264->setObjectName(QString::fromUtf8("label_264"));
        label_264->setWordWrap(true);

        gridLayout_54->addWidget(label_264, 5, 1, 1, 1);

        openni2_stampsIdsUsed = new QCheckBox(groupBox_openni2);
        openni2_stampsIdsUsed->setObjectName(QString::fromUtf8("openni2_stampsIdsUsed"));
        openni2_stampsIdsUsed->setChecked(false);

        gridLayout_54->addWidget(openni2_stampsIdsUsed, 5, 0, 1, 1);

        gridLayout_54->setColumnStretch(1, 1);

        verticalLayout_51->addWidget(groupBox_openni2);

        stackedWidget_rgbd->addWidget(page_36);
        page_37 = new QWidget();
        page_37->setObjectName(QString::fromUtf8("page_37"));
        verticalLayout_62 = new QVBoxLayout(page_37);
        verticalLayout_62->setObjectName(QString::fromUtf8("verticalLayout_62"));
        groupBox_freenect2 = new QGroupBox(page_37);
        groupBox_freenect2->setObjectName(QString::fromUtf8("groupBox_freenect2"));
        sizePolicy2.setHeightForWidth(groupBox_freenect2->sizePolicy().hasHeightForWidth());
        groupBox_freenect2->setSizePolicy(sizePolicy2);
        gridLayout_56 = new QGridLayout(groupBox_freenect2);
        gridLayout_56->setObjectName(QString::fromUtf8("gridLayout_56"));
        label_230 = new QLabel(groupBox_freenect2);
        label_230->setObjectName(QString::fromUtf8("label_230"));
        label_230->setWordWrap(true);
        label_230->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_56->addWidget(label_230, 0, 1, 1, 1);

        verticalSpacer_32 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_56->addItem(verticalSpacer_32, 6, 0, 1, 1);

        comboBox_freenect2Format = new QComboBox(groupBox_freenect2);
        comboBox_freenect2Format->setObjectName(QString::fromUtf8("comboBox_freenect2Format"));
        comboBox_freenect2Format->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_56->addWidget(comboBox_freenect2Format, 0, 0, 1, 1);

        label_268 = new QLabel(groupBox_freenect2);
        label_268->setObjectName(QString::fromUtf8("label_268"));
        label_268->setWordWrap(true);
        label_268->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_56->addWidget(label_268, 3, 1, 1, 1);

        label_266 = new QLabel(groupBox_freenect2);
        label_266->setObjectName(QString::fromUtf8("label_266"));
        label_266->setWordWrap(true);
        label_266->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_56->addWidget(label_266, 1, 1, 1, 1);

        label_269 = new QLabel(groupBox_freenect2);
        label_269->setObjectName(QString::fromUtf8("label_269"));
        label_269->setWordWrap(true);
        label_269->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_56->addWidget(label_269, 4, 1, 1, 1);

        doubleSpinBox_freenect2MaxDepth = new QDoubleSpinBox(groupBox_freenect2);
        doubleSpinBox_freenect2MaxDepth->setObjectName(QString::fromUtf8("doubleSpinBox_freenect2MaxDepth"));
        doubleSpinBox_freenect2MaxDepth->setMaximum(65);
        doubleSpinBox_freenect2MaxDepth->setValue(12);

        gridLayout_56->addWidget(doubleSpinBox_freenect2MaxDepth, 2, 0, 1, 1);

        checkBox_freenect2BilateralFiltering = new QCheckBox(groupBox_freenect2);
        checkBox_freenect2BilateralFiltering->setObjectName(QString::fromUtf8("checkBox_freenect2BilateralFiltering"));
        checkBox_freenect2BilateralFiltering->setChecked(true);

        gridLayout_56->addWidget(checkBox_freenect2BilateralFiltering, 3, 0, 1, 1);

        checkBox_freenect2EdgeAwareFiltering = new QCheckBox(groupBox_freenect2);
        checkBox_freenect2EdgeAwareFiltering->setObjectName(QString::fromUtf8("checkBox_freenect2EdgeAwareFiltering"));
        checkBox_freenect2EdgeAwareFiltering->setChecked(true);

        gridLayout_56->addWidget(checkBox_freenect2EdgeAwareFiltering, 4, 0, 1, 1);

        label_267 = new QLabel(groupBox_freenect2);
        label_267->setObjectName(QString::fromUtf8("label_267"));
        label_267->setWordWrap(true);
        label_267->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_56->addWidget(label_267, 2, 1, 1, 1);

        doubleSpinBox_freenect2MinDepth = new QDoubleSpinBox(groupBox_freenect2);
        doubleSpinBox_freenect2MinDepth->setObjectName(QString::fromUtf8("doubleSpinBox_freenect2MinDepth"));
        doubleSpinBox_freenect2MinDepth->setMaximum(64);
        doubleSpinBox_freenect2MinDepth->setSingleStep(0.1);
        doubleSpinBox_freenect2MinDepth->setValue(0.3);

        gridLayout_56->addWidget(doubleSpinBox_freenect2MinDepth, 1, 0, 1, 1);

        checkBox_freenect2NoiseFiltering = new QCheckBox(groupBox_freenect2);
        checkBox_freenect2NoiseFiltering->setObjectName(QString::fromUtf8("checkBox_freenect2NoiseFiltering"));
        checkBox_freenect2NoiseFiltering->setChecked(true);

        gridLayout_56->addWidget(checkBox_freenect2NoiseFiltering, 5, 0, 1, 1);

        label_270 = new QLabel(groupBox_freenect2);
        label_270->setObjectName(QString::fromUtf8("label_270"));
        label_270->setWordWrap(true);
        label_270->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_56->addWidget(label_270, 5, 1, 1, 1);

        gridLayout_56->setColumnStretch(1, 1);

        verticalLayout_62->addWidget(groupBox_freenect2);

        stackedWidget_rgbd->addWidget(page_37);
        page_47 = new QWidget();
        page_47->setObjectName(QString::fromUtf8("page_47"));
        verticalLayout_79 = new QVBoxLayout(page_47);
        verticalLayout_79->setObjectName(QString::fromUtf8("verticalLayout_79"));
        groupBox_cameraRGBDImages = new QGroupBox(page_47);
        groupBox_cameraRGBDImages->setObjectName(QString::fromUtf8("groupBox_cameraRGBDImages"));
        sizePolicy2.setHeightForWidth(groupBox_cameraRGBDImages->sizePolicy().hasHeightForWidth());
        groupBox_cameraRGBDImages->setSizePolicy(sizePolicy2);
        gridLayout_35 = new QGridLayout(groupBox_cameraRGBDImages);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        label_252 = new QLabel(groupBox_cameraRGBDImages);
        label_252->setObjectName(QString::fromUtf8("label_252"));
        label_252->setWordWrap(true);
        label_252->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_35->addWidget(label_252, 0, 2, 1, 1);

        toolButton_cameraRGBDImages_path_rgb = new QToolButton(groupBox_cameraRGBDImages);
        toolButton_cameraRGBDImages_path_rgb->setObjectName(QString::fromUtf8("toolButton_cameraRGBDImages_path_rgb"));

        gridLayout_35->addWidget(toolButton_cameraRGBDImages_path_rgb, 0, 0, 1, 1);

        label_257 = new QLabel(groupBox_cameraRGBDImages);
        label_257->setObjectName(QString::fromUtf8("label_257"));
        label_257->setWordWrap(true);
        label_257->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_35->addWidget(label_257, 2, 2, 1, 1);

        toolButton_cameraRGBDImages_path_depth = new QToolButton(groupBox_cameraRGBDImages);
        toolButton_cameraRGBDImages_path_depth->setObjectName(QString::fromUtf8("toolButton_cameraRGBDImages_path_depth"));

        gridLayout_35->addWidget(toolButton_cameraRGBDImages_path_depth, 1, 0, 1, 1);

        lineEdit_cameraRGBDImages_path_rgb = new QLineEdit(groupBox_cameraRGBDImages);
        lineEdit_cameraRGBDImages_path_rgb->setObjectName(QString::fromUtf8("lineEdit_cameraRGBDImages_path_rgb"));

        gridLayout_35->addWidget(lineEdit_cameraRGBDImages_path_rgb, 0, 1, 1, 1);

        lineEdit_cameraRGBDImages_path_depth = new QLineEdit(groupBox_cameraRGBDImages);
        lineEdit_cameraRGBDImages_path_depth->setObjectName(QString::fromUtf8("lineEdit_cameraRGBDImages_path_depth"));

        gridLayout_35->addWidget(lineEdit_cameraRGBDImages_path_depth, 1, 1, 1, 1);

        label_254 = new QLabel(groupBox_cameraRGBDImages);
        label_254->setObjectName(QString::fromUtf8("label_254"));
        label_254->setWordWrap(true);
        label_254->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_35->addWidget(label_254, 1, 2, 1, 1);

        doubleSpinBox_cameraRGBDImages_scale = new QDoubleSpinBox(groupBox_cameraRGBDImages);
        doubleSpinBox_cameraRGBDImages_scale->setObjectName(QString::fromUtf8("doubleSpinBox_cameraRGBDImages_scale"));
        doubleSpinBox_cameraRGBDImages_scale->setDecimals(1);
        doubleSpinBox_cameraRGBDImages_scale->setMinimum(1);
        doubleSpinBox_cameraRGBDImages_scale->setMaximum(999999);

        gridLayout_35->addWidget(doubleSpinBox_cameraRGBDImages_scale, 2, 1, 1, 1);

        verticalSpacer_40 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_35->addItem(verticalSpacer_40, 3, 1, 1, 1);

        gridLayout_35->setColumnStretch(2, 1);

        verticalLayout_79->addWidget(groupBox_cameraRGBDImages);

        stackedWidget_rgbd->addWidget(page_47);

        verticalLayout_11->addWidget(stackedWidget_rgbd);


        verticalLayout_64->addWidget(groupBox_sourceRGBD);

        stackedWidget_src->addWidget(page_41);
        page_44 = new QWidget();
        page_44->setObjectName(QString::fromUtf8("page_44"));
        verticalLayout_71 = new QVBoxLayout(page_44);
        verticalLayout_71->setObjectName(QString::fromUtf8("verticalLayout_71"));
        groupBox_sourceStereo = new QGroupBox(page_44);
        groupBox_sourceStereo->setObjectName(QString::fromUtf8("groupBox_sourceStereo"));
        groupBox_sourceStereo->setCheckable(false);
        groupBox_sourceStereo->setChecked(false);
        verticalLayout_67 = new QVBoxLayout(groupBox_sourceStereo);
        verticalLayout_67->setObjectName(QString::fromUtf8("verticalLayout_67"));
        label_46 = new QLabel(groupBox_sourceStereo);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setWordWrap(true);

        verticalLayout_67->addWidget(label_46);

        gridLayout_58 = new QGridLayout();
        gridLayout_58->setObjectName(QString::fromUtf8("gridLayout_58"));
        comboBox_cameraStereo = new QComboBox(groupBox_sourceStereo);
        comboBox_cameraStereo->setObjectName(QString::fromUtf8("comboBox_cameraStereo"));
        comboBox_cameraStereo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_58->addWidget(comboBox_cameraStereo, 0, 1, 1, 1);

        label_240 = new QLabel(groupBox_sourceStereo);
        label_240->setObjectName(QString::fromUtf8("label_240"));
        label_240->setWordWrap(true);

        gridLayout_58->addWidget(label_240, 0, 2, 1, 1);

        checkbox_stereo_depthGenerated = new QCheckBox(groupBox_sourceStereo);
        checkbox_stereo_depthGenerated->setObjectName(QString::fromUtf8("checkbox_stereo_depthGenerated"));

        gridLayout_58->addWidget(checkbox_stereo_depthGenerated, 1, 1, 1, 1);

        label_247 = new QLabel(groupBox_sourceStereo);
        label_247->setObjectName(QString::fromUtf8("label_247"));
        label_247->setWordWrap(true);

        gridLayout_58->addWidget(label_247, 1, 2, 1, 1);

        gridLayout_58->setColumnStretch(2, 1);

        verticalLayout_67->addLayout(gridLayout_58);

        stackedWidget_stereo = new QStackedWidget(groupBox_sourceStereo);
        stackedWidget_stereo->setObjectName(QString::fromUtf8("stackedWidget_stereo"));
        page_49 = new QWidget();
        page_49->setObjectName(QString::fromUtf8("page_49"));
        verticalLayout_91 = new QVBoxLayout(page_49);
        verticalLayout_91->setObjectName(QString::fromUtf8("verticalLayout_91"));
        verticalSpacer_30 = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_91->addItem(verticalSpacer_30);

        stackedWidget_stereo->addWidget(page_49);
        page_48 = new QWidget();
        page_48->setObjectName(QString::fromUtf8("page_48"));
        verticalLayout_92 = new QVBoxLayout(page_48);
        verticalLayout_92->setObjectName(QString::fromUtf8("verticalLayout_92"));
        verticalSpacer_47 = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_92->addItem(verticalSpacer_47);

        stackedWidget_stereo->addWidget(page_48);
        page_53 = new QWidget();
        page_53->setObjectName(QString::fromUtf8("page_53"));
        verticalLayout_70 = new QVBoxLayout(page_53);
        verticalLayout_70->setObjectName(QString::fromUtf8("verticalLayout_70"));
        groupBox_cameraStereoImages = new QGroupBox(page_53);
        groupBox_cameraStereoImages->setObjectName(QString::fromUtf8("groupBox_cameraStereoImages"));
        sizePolicy2.setHeightForWidth(groupBox_cameraStereoImages->sizePolicy().hasHeightForWidth());
        groupBox_cameraStereoImages->setSizePolicy(sizePolicy2);
        gridLayout_61 = new QGridLayout(groupBox_cameraStereoImages);
        gridLayout_61->setObjectName(QString::fromUtf8("gridLayout_61"));
        checkBox_stereoImages_rectify = new QCheckBox(groupBox_cameraStereoImages);
        checkBox_stereoImages_rectify->setObjectName(QString::fromUtf8("checkBox_stereoImages_rectify"));

        gridLayout_61->addWidget(checkBox_stereoImages_rectify, 2, 1, 1, 1);

        toolButton_cameraStereoImages_path_left = new QToolButton(groupBox_cameraStereoImages);
        toolButton_cameraStereoImages_path_left->setObjectName(QString::fromUtf8("toolButton_cameraStereoImages_path_left"));

        gridLayout_61->addWidget(toolButton_cameraStereoImages_path_left, 0, 0, 1, 1);

        verticalSpacer_38 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_61->addItem(verticalSpacer_38, 3, 0, 1, 1);

        label_250 = new QLabel(groupBox_cameraStereoImages);
        label_250->setObjectName(QString::fromUtf8("label_250"));
        label_250->setWordWrap(true);
        label_250->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_61->addWidget(label_250, 2, 2, 1, 1);

        label_249 = new QLabel(groupBox_cameraStereoImages);
        label_249->setObjectName(QString::fromUtf8("label_249"));
        label_249->setWordWrap(true);
        label_249->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_61->addWidget(label_249, 0, 2, 1, 1);

        lineEdit_cameraStereoImages_path_left = new QLineEdit(groupBox_cameraStereoImages);
        lineEdit_cameraStereoImages_path_left->setObjectName(QString::fromUtf8("lineEdit_cameraStereoImages_path_left"));

        gridLayout_61->addWidget(lineEdit_cameraStereoImages_path_left, 0, 1, 1, 1);

        label_253 = new QLabel(groupBox_cameraStereoImages);
        label_253->setObjectName(QString::fromUtf8("label_253"));
        label_253->setWordWrap(true);
        label_253->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_61->addWidget(label_253, 1, 2, 1, 1);

        lineEdit_cameraStereoImages_path_right = new QLineEdit(groupBox_cameraStereoImages);
        lineEdit_cameraStereoImages_path_right->setObjectName(QString::fromUtf8("lineEdit_cameraStereoImages_path_right"));

        gridLayout_61->addWidget(lineEdit_cameraStereoImages_path_right, 1, 1, 1, 1);

        toolButton_cameraStereoImages_path_right = new QToolButton(groupBox_cameraStereoImages);
        toolButton_cameraStereoImages_path_right->setObjectName(QString::fromUtf8("toolButton_cameraStereoImages_path_right"));

        gridLayout_61->addWidget(toolButton_cameraStereoImages_path_right, 1, 0, 1, 1);

        gridLayout_61->setColumnStretch(2, 1);

        verticalLayout_70->addWidget(groupBox_cameraStereoImages);

        stackedWidget_stereo->addWidget(page_53);
        page_50 = new QWidget();
        page_50->setObjectName(QString::fromUtf8("page_50"));
        verticalLayout_78 = new QVBoxLayout(page_50);
        verticalLayout_78->setObjectName(QString::fromUtf8("verticalLayout_78"));
        groupBox_cameraStereoImages_2 = new QGroupBox(page_50);
        groupBox_cameraStereoImages_2->setObjectName(QString::fromUtf8("groupBox_cameraStereoImages_2"));
        sizePolicy2.setHeightForWidth(groupBox_cameraStereoImages_2->sizePolicy().hasHeightForWidth());
        groupBox_cameraStereoImages_2->setSizePolicy(sizePolicy2);
        gridLayout_66 = new QGridLayout(groupBox_cameraStereoImages_2);
        gridLayout_66->setObjectName(QString::fromUtf8("gridLayout_66"));
        verticalSpacer_39 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_66->addItem(verticalSpacer_39, 2, 0, 1, 1);

        toolButton_cameraStereoVideo_path = new QToolButton(groupBox_cameraStereoImages_2);
        toolButton_cameraStereoVideo_path->setObjectName(QString::fromUtf8("toolButton_cameraStereoVideo_path"));

        gridLayout_66->addWidget(toolButton_cameraStereoVideo_path, 0, 0, 1, 1);

        lineEdit_cameraStereoVideo_path = new QLineEdit(groupBox_cameraStereoImages_2);
        lineEdit_cameraStereoVideo_path->setObjectName(QString::fromUtf8("lineEdit_cameraStereoVideo_path"));

        gridLayout_66->addWidget(lineEdit_cameraStereoVideo_path, 0, 1, 1, 1);

        checkBox_stereoVideo_rectify = new QCheckBox(groupBox_cameraStereoImages_2);
        checkBox_stereoVideo_rectify->setObjectName(QString::fromUtf8("checkBox_stereoVideo_rectify"));

        gridLayout_66->addWidget(checkBox_stereoVideo_rectify, 1, 0, 1, 1);

        label_234 = new QLabel(groupBox_cameraStereoImages_2);
        label_234->setObjectName(QString::fromUtf8("label_234"));
        label_234->setWordWrap(true);
        label_234->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_66->addWidget(label_234, 1, 1, 1, 1);


        verticalLayout_78->addWidget(groupBox_cameraStereoImages_2);

        stackedWidget_stereo->addWidget(page_50);

        verticalLayout_67->addWidget(stackedWidget_stereo);


        verticalLayout_71->addWidget(groupBox_sourceStereo);

        stackedWidget_src->addWidget(page_44);
        page_42 = new QWidget();
        page_42->setObjectName(QString::fromUtf8("page_42"));
        verticalLayout_65 = new QVBoxLayout(page_42);
        verticalLayout_65->setObjectName(QString::fromUtf8("verticalLayout_65"));
        groupBox_sourceRGB = new QGroupBox(page_42);
        groupBox_sourceRGB->setObjectName(QString::fromUtf8("groupBox_sourceRGB"));
        groupBox_sourceRGB->setCheckable(false);
        groupBox_sourceRGB->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(groupBox_sourceRGB);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        source_comboBox_image_type = new QComboBox(groupBox_sourceRGB);
        source_comboBox_image_type->setObjectName(QString::fromUtf8("source_comboBox_image_type"));

        gridLayout_5->addWidget(source_comboBox_image_type, 0, 0, 1, 1);

        label_20 = new QLabel(groupBox_sourceRGB);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setWordWrap(true);
        label_20->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_20, 0, 1, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_5->addLayout(gridLayout_5);

        stackedWidget_image = new QStackedWidget(groupBox_sourceRGB);
        stackedWidget_image->setObjectName(QString::fromUtf8("stackedWidget_image"));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_30 = new QVBoxLayout(page_7);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_8);

        stackedWidget_image->addWidget(page_7);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_6 = new QVBoxLayout(page_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        source_groupBox_images = new QGroupBox(page_5);
        source_groupBox_images->setObjectName(QString::fromUtf8("source_groupBox_images"));
        gridLayout_7 = new QGridLayout(source_groupBox_images);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        source_images_lineEdit_path = new QLineEdit(source_groupBox_images);
        source_images_lineEdit_path->setObjectName(QString::fromUtf8("source_images_lineEdit_path"));
        source_images_lineEdit_path->setReadOnly(false);

        gridLayout_7->addWidget(source_images_lineEdit_path, 0, 1, 1, 1);

        label_34 = new QLabel(source_groupBox_images);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setWordWrap(true);
        label_34->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_7->addWidget(label_34, 2, 1, 1, 1);

        source_images_refreshDir = new QCheckBox(source_groupBox_images);
        source_images_refreshDir->setObjectName(QString::fromUtf8("source_images_refreshDir"));

        gridLayout_7->addWidget(source_images_refreshDir, 2, 0, 1, 1);

        label_21 = new QLabel(source_groupBox_images);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setWordWrap(true);
        label_21->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_7->addWidget(label_21, 1, 1, 1, 1);

        source_images_spinBox_startPos = new QSpinBox(source_groupBox_images);
        source_images_spinBox_startPos->setObjectName(QString::fromUtf8("source_images_spinBox_startPos"));
        source_images_spinBox_startPos->setMinimum(0);
        source_images_spinBox_startPos->setMaximum(999999999);

        gridLayout_7->addWidget(source_images_spinBox_startPos, 1, 0, 1, 1);

        source_images_toolButton_selectSource = new QToolButton(source_groupBox_images);
        source_images_toolButton_selectSource->setObjectName(QString::fromUtf8("source_images_toolButton_selectSource"));

        gridLayout_7->addWidget(source_images_toolButton_selectSource, 0, 0, 1, 1);

        label_242 = new QLabel(source_groupBox_images);
        label_242->setObjectName(QString::fromUtf8("label_242"));
        label_242->setWordWrap(true);
        label_242->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_7->addWidget(label_242, 3, 1, 1, 1);

        checkBox_rgbImages_rectify = new QCheckBox(source_groupBox_images);
        checkBox_rgbImages_rectify->setObjectName(QString::fromUtf8("checkBox_rgbImages_rectify"));

        gridLayout_7->addWidget(checkBox_rgbImages_rectify, 3, 0, 1, 1);


        verticalLayout_6->addWidget(source_groupBox_images);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_9);

        stackedWidget_image->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_8 = new QVBoxLayout(page_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        source_groupBox_video = new QGroupBox(page_6);
        source_groupBox_video->setObjectName(QString::fromUtf8("source_groupBox_video"));
        gridLayout_8 = new QGridLayout(source_groupBox_video);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        source_video_toolButton_selectSource = new QToolButton(source_groupBox_video);
        source_video_toolButton_selectSource->setObjectName(QString::fromUtf8("source_video_toolButton_selectSource"));

        gridLayout_8->addWidget(source_video_toolButton_selectSource, 0, 0, 1, 1);

        source_video_lineEdit_path = new QLineEdit(source_groupBox_video);
        source_video_lineEdit_path->setObjectName(QString::fromUtf8("source_video_lineEdit_path"));
        source_video_lineEdit_path->setReadOnly(false);

        gridLayout_8->addWidget(source_video_lineEdit_path, 0, 1, 1, 1);

        label_241 = new QLabel(source_groupBox_video);
        label_241->setObjectName(QString::fromUtf8("label_241"));
        label_241->setWordWrap(true);
        label_241->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_8->addWidget(label_241, 1, 1, 1, 1);

        checkBox_rgbVideo_rectify = new QCheckBox(source_groupBox_video);
        checkBox_rgbVideo_rectify->setObjectName(QString::fromUtf8("checkBox_rgbVideo_rectify"));

        gridLayout_8->addWidget(checkBox_rgbVideo_rectify, 1, 0, 1, 1);

        gridLayout_8->setColumnStretch(1, 10);

        verticalLayout_8->addWidget(source_groupBox_video);

        verticalSpacer_10 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_10);

        stackedWidget_image->addWidget(page_6);

        verticalLayout_5->addWidget(stackedWidget_image);


        verticalLayout_65->addWidget(groupBox_sourceRGB);

        stackedWidget_src->addWidget(page_42);
        page_43 = new QWidget();
        page_43->setObjectName(QString::fromUtf8("page_43"));
        verticalLayout_66 = new QVBoxLayout(page_43);
        verticalLayout_66->setObjectName(QString::fromUtf8("verticalLayout_66"));
        groupBox_sourceDatabase = new QGroupBox(page_43);
        groupBox_sourceDatabase->setObjectName(QString::fromUtf8("groupBox_sourceDatabase"));
        groupBox_sourceDatabase->setCheckable(false);
        groupBox_sourceDatabase->setChecked(false);
        gridLayout_9 = new QGridLayout(groupBox_sourceDatabase);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_263 = new QLabel(groupBox_sourceDatabase);
        label_263->setObjectName(QString::fromUtf8("label_263"));
        label_263->setWordWrap(true);
        label_263->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_9->addWidget(label_263, 3, 1, 1, 1);

        source_checkBox_ignoreGoals = new QCheckBox(groupBox_sourceDatabase);
        source_checkBox_ignoreGoals->setObjectName(QString::fromUtf8("source_checkBox_ignoreGoals"));

        gridLayout_9->addWidget(source_checkBox_ignoreGoals, 3, 0, 1, 1);

        toolButton_dbViewer = new QToolButton(groupBox_sourceDatabase);
        toolButton_dbViewer->setObjectName(QString::fromUtf8("toolButton_dbViewer"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/mag_glass.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_dbViewer->setIcon(icon1);

        gridLayout_9->addWidget(toolButton_dbViewer, 0, 2, 1, 1);

        verticalSpacer_35 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_35, 6, 1, 1, 1);

        source_checkBox_ignoreOdometry = new QCheckBox(groupBox_sourceDatabase);
        source_checkBox_ignoreOdometry->setObjectName(QString::fromUtf8("source_checkBox_ignoreOdometry"));

        gridLayout_9->addWidget(source_checkBox_ignoreOdometry, 1, 0, 1, 1);

        source_database_toolButton_selectSource = new QToolButton(groupBox_sourceDatabase);
        source_database_toolButton_selectSource->setObjectName(QString::fromUtf8("source_database_toolButton_selectSource"));

        gridLayout_9->addWidget(source_database_toolButton_selectSource, 0, 0, 1, 1);

        source_database_lineEdit_path = new QLineEdit(groupBox_sourceDatabase);
        source_database_lineEdit_path->setObjectName(QString::fromUtf8("source_database_lineEdit_path"));

        gridLayout_9->addWidget(source_database_lineEdit_path, 0, 1, 1, 1);

        label_58 = new QLabel(groupBox_sourceDatabase);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_9->addWidget(label_58, 5, 1, 1, 1);

        source_spinBox_databaseStartPos = new QSpinBox(groupBox_sourceDatabase);
        source_spinBox_databaseStartPos->setObjectName(QString::fromUtf8("source_spinBox_databaseStartPos"));
        source_spinBox_databaseStartPos->setMinimum(0);
        source_spinBox_databaseStartPos->setMaximum(999999999);

        gridLayout_9->addWidget(source_spinBox_databaseStartPos, 5, 0, 1, 1);

        label_72 = new QLabel(groupBox_sourceDatabase);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setWordWrap(true);
        label_72->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_9->addWidget(label_72, 1, 1, 1, 1);

        label_80 = new QLabel(groupBox_sourceDatabase);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setWordWrap(true);
        label_80->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_9->addWidget(label_80, 4, 1, 1, 1);

        source_checkBox_ignoreGoalDelay = new QCheckBox(groupBox_sourceDatabase);
        source_checkBox_ignoreGoalDelay->setObjectName(QString::fromUtf8("source_checkBox_ignoreGoalDelay"));

        gridLayout_9->addWidget(source_checkBox_ignoreGoalDelay, 4, 0, 1, 1);

        label_90 = new QLabel(groupBox_sourceDatabase);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setWordWrap(true);
        label_90->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_9->addWidget(label_90, 2, 1, 1, 1);

        source_checkBox_useDbStamps = new QCheckBox(groupBox_sourceDatabase);
        source_checkBox_useDbStamps->setObjectName(QString::fromUtf8("source_checkBox_useDbStamps"));

        gridLayout_9->addWidget(source_checkBox_useDbStamps, 2, 0, 1, 1);


        verticalLayout_66->addWidget(groupBox_sourceDatabase);

        stackedWidget_src->addWidget(page_43);

        verticalLayout_7->addWidget(stackedWidget_src);

        groupBox_sourceImages_optional = new QGroupBox(groupBox_source0);
        groupBox_sourceImages_optional->setObjectName(QString::fromUtf8("groupBox_sourceImages_optional"));
        verticalLayout_93 = new QVBoxLayout(groupBox_sourceImages_optional);
        verticalLayout_93->setContentsMargins(0, 0, 0, 0);
        verticalLayout_93->setObjectName(QString::fromUtf8("verticalLayout_93"));
        gridLayout_68 = new QGridLayout();
        gridLayout_68->setObjectName(QString::fromUtf8("gridLayout_68"));
        label_255 = new QLabel(groupBox_sourceImages_optional);
        label_255->setObjectName(QString::fromUtf8("label_255"));
        label_255->setWordWrap(true);
        label_255->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_255, 1, 2, 1, 1);

        toolButton_cameraImages_timestamps = new QToolButton(groupBox_sourceImages_optional);
        toolButton_cameraImages_timestamps->setObjectName(QString::fromUtf8("toolButton_cameraImages_timestamps"));

        gridLayout_68->addWidget(toolButton_cameraImages_timestamps, 3, 0, 1, 1);

        lineEdit_cameraImages_timestamps = new QLineEdit(groupBox_sourceImages_optional);
        lineEdit_cameraImages_timestamps->setObjectName(QString::fromUtf8("lineEdit_cameraImages_timestamps"));

        gridLayout_68->addWidget(lineEdit_cameraImages_timestamps, 3, 1, 1, 1);

        lineEdit_cameraImages_gt = new QLineEdit(groupBox_sourceImages_optional);
        lineEdit_cameraImages_gt->setObjectName(QString::fromUtf8("lineEdit_cameraImages_gt"));

        gridLayout_68->addWidget(lineEdit_cameraImages_gt, 4, 1, 1, 1);

        label_288 = new QLabel(groupBox_sourceImages_optional);
        label_288->setObjectName(QString::fromUtf8("label_288"));
        label_288->setWordWrap(true);
        label_288->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_288, 4, 2, 1, 1);

        label_289 = new QLabel(groupBox_sourceImages_optional);
        label_289->setObjectName(QString::fromUtf8("label_289"));
        label_289->setWordWrap(true);
        label_289->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_289, 5, 2, 1, 1);

        label_292 = new QLabel(groupBox_sourceImages_optional);
        label_292->setObjectName(QString::fromUtf8("label_292"));
        label_292->setWordWrap(true);
        label_292->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_292, 8, 2, 1, 1);

        label_256 = new QLabel(groupBox_sourceImages_optional);
        label_256->setObjectName(QString::fromUtf8("label_256"));
        label_256->setWordWrap(true);
        label_256->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_256, 2, 2, 1, 1);

        checkBox_cameraImages_syncTimeStamps = new QCheckBox(groupBox_sourceImages_optional);
        checkBox_cameraImages_syncTimeStamps->setObjectName(QString::fromUtf8("checkBox_cameraImages_syncTimeStamps"));

        gridLayout_68->addWidget(checkBox_cameraImages_syncTimeStamps, 2, 1, 1, 1);

        lineEdit_cameraImages_path_scans = new QLineEdit(groupBox_sourceImages_optional);
        lineEdit_cameraImages_path_scans->setObjectName(QString::fromUtf8("lineEdit_cameraImages_path_scans"));

        gridLayout_68->addWidget(lineEdit_cameraImages_path_scans, 6, 1, 1, 1);

        checkBox_cameraImages_timestamps = new QCheckBox(groupBox_sourceImages_optional);
        checkBox_cameraImages_timestamps->setObjectName(QString::fromUtf8("checkBox_cameraImages_timestamps"));

        gridLayout_68->addWidget(checkBox_cameraImages_timestamps, 1, 1, 1, 1);

        label_251 = new QLabel(groupBox_sourceImages_optional);
        label_251->setObjectName(QString::fromUtf8("label_251"));
        label_251->setWordWrap(true);
        label_251->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_251, 3, 2, 1, 1);

        toolButton_cameraImages_gt = new QToolButton(groupBox_sourceImages_optional);
        toolButton_cameraImages_gt->setObjectName(QString::fromUtf8("toolButton_cameraImages_gt"));

        gridLayout_68->addWidget(toolButton_cameraImages_gt, 4, 0, 1, 1);

        comboBox_cameraImages_gtFormat = new QComboBox(groupBox_sourceImages_optional);
        comboBox_cameraImages_gtFormat->setObjectName(QString::fromUtf8("comboBox_cameraImages_gtFormat"));
        comboBox_cameraImages_gtFormat->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_68->addWidget(comboBox_cameraImages_gtFormat, 5, 1, 1, 1);

        toolButton_cameraImages_path_scans = new QToolButton(groupBox_sourceImages_optional);
        toolButton_cameraImages_path_scans->setObjectName(QString::fromUtf8("toolButton_cameraImages_path_scans"));

        gridLayout_68->addWidget(toolButton_cameraImages_path_scans, 6, 0, 1, 1);

        label_293 = new QLabel(groupBox_sourceImages_optional);
        label_293->setObjectName(QString::fromUtf8("label_293"));
        label_293->setWordWrap(true);
        label_293->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_293, 6, 2, 1, 1);

        lineEdit_cameraImages_laser_transform = new QLineEdit(groupBox_sourceImages_optional);
        lineEdit_cameraImages_laser_transform->setObjectName(QString::fromUtf8("lineEdit_cameraImages_laser_transform"));

        gridLayout_68->addWidget(lineEdit_cameraImages_laser_transform, 7, 1, 1, 1);

        label_294 = new QLabel(groupBox_sourceImages_optional);
        label_294->setObjectName(QString::fromUtf8("label_294"));
        label_294->setWordWrap(true);
        label_294->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_294, 7, 2, 1, 1);

        spinBox_cameraImages_max_scan_pts = new QSpinBox(groupBox_sourceImages_optional);
        spinBox_cameraImages_max_scan_pts->setObjectName(QString::fromUtf8("spinBox_cameraImages_max_scan_pts"));
        spinBox_cameraImages_max_scan_pts->setMaximum(99999999);

        gridLayout_68->addWidget(spinBox_cameraImages_max_scan_pts, 8, 1, 1, 1);

        label_265 = new QLabel(groupBox_sourceImages_optional);
        label_265->setObjectName(QString::fromUtf8("label_265"));
        label_265->setWordWrap(true);
        label_265->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_68->addWidget(label_265, 0, 2, 1, 1);

        comboBox_cameraImages_bayerMode = new QComboBox(groupBox_sourceImages_optional);
        comboBox_cameraImages_bayerMode->setObjectName(QString::fromUtf8("comboBox_cameraImages_bayerMode"));
        comboBox_cameraImages_bayerMode->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_68->addWidget(comboBox_cameraImages_bayerMode, 0, 1, 1, 1);

        gridLayout_68->setColumnStretch(2, 1);

        verticalLayout_93->addLayout(gridLayout_68);

        groupBox_depthFromScan = new QGroupBox(groupBox_sourceImages_optional);
        groupBox_depthFromScan->setObjectName(QString::fromUtf8("groupBox_depthFromScan"));
        groupBox_depthFromScan->setCheckable(true);
        groupBox_depthFromScan->setChecked(false);
        verticalLayout_100 = new QVBoxLayout(groupBox_depthFromScan);
        verticalLayout_100->setObjectName(QString::fromUtf8("verticalLayout_100"));
        groupBox_depthFromScan_fillHoles = new QGroupBox(groupBox_depthFromScan);
        groupBox_depthFromScan_fillHoles->setObjectName(QString::fromUtf8("groupBox_depthFromScan_fillHoles"));
        groupBox_depthFromScan_fillHoles->setCheckable(true);
        verticalLayout_99 = new QVBoxLayout(groupBox_depthFromScan_fillHoles);
        verticalLayout_99->setObjectName(QString::fromUtf8("verticalLayout_99"));
        radioButton_depthFromScan_vertical = new QRadioButton(groupBox_depthFromScan_fillHoles);
        radioButton_depthFromScan_vertical->setObjectName(QString::fromUtf8("radioButton_depthFromScan_vertical"));
        radioButton_depthFromScan_vertical->setChecked(true);

        verticalLayout_99->addWidget(radioButton_depthFromScan_vertical);

        radioButton_depthFromScan_horizontal = new QRadioButton(groupBox_depthFromScan_fillHoles);
        radioButton_depthFromScan_horizontal->setObjectName(QString::fromUtf8("radioButton_depthFromScan_horizontal"));

        verticalLayout_99->addWidget(radioButton_depthFromScan_horizontal);


        verticalLayout_100->addWidget(groupBox_depthFromScan_fillHoles);

        checkBox_depthFromScan_fillBorders = new QCheckBox(groupBox_depthFromScan);
        checkBox_depthFromScan_fillBorders->setObjectName(QString::fromUtf8("checkBox_depthFromScan_fillBorders"));

        verticalLayout_100->addWidget(checkBox_depthFromScan_fillBorders);


        verticalLayout_93->addWidget(groupBox_depthFromScan);


        verticalLayout_7->addWidget(groupBox_sourceImages_optional);

        groupBox_scan = new QGroupBox(groupBox_source0);
        groupBox_scan->setObjectName(QString::fromUtf8("groupBox_scan"));
        groupBox_scan->setCheckable(false);
        groupBox_scan->setChecked(false);
        verticalLayout_13 = new QVBoxLayout(groupBox_scan);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_16 = new QLabel(groupBox_scan);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setWordWrap(true);

        verticalLayout_13->addWidget(label_16);

        groupBox_scanFromDepth = new QGroupBox(groupBox_scan);
        groupBox_scanFromDepth->setObjectName(QString::fromUtf8("groupBox_scanFromDepth"));
        groupBox_scanFromDepth->setCheckable(true);
        groupBox_scanFromDepth->setChecked(false);
        gridLayout_63 = new QGridLayout(groupBox_scanFromDepth);
        gridLayout_63->setObjectName(QString::fromUtf8("gridLayout_63"));
        spinBox_cameraScanFromDepth_decimation = new QSpinBox(groupBox_scanFromDepth);
        spinBox_cameraScanFromDepth_decimation->setObjectName(QString::fromUtf8("spinBox_cameraScanFromDepth_decimation"));
        spinBox_cameraScanFromDepth_decimation->setMaximum(99999);
        spinBox_cameraScanFromDepth_decimation->setValue(1);

        gridLayout_63->addWidget(spinBox_cameraScanFromDepth_decimation, 0, 0, 1, 1);

        label_299 = new QLabel(groupBox_scanFromDepth);
        label_299->setObjectName(QString::fromUtf8("label_299"));
        label_299->setWordWrap(true);
        label_299->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_63->addWidget(label_299, 0, 1, 1, 1);

        doubleSpinBox_cameraSCanFromDepth_maxDepth = new QDoubleSpinBox(groupBox_scanFromDepth);
        doubleSpinBox_cameraSCanFromDepth_maxDepth->setObjectName(QString::fromUtf8("doubleSpinBox_cameraSCanFromDepth_maxDepth"));
        doubleSpinBox_cameraSCanFromDepth_maxDepth->setMaximum(9999);

        gridLayout_63->addWidget(doubleSpinBox_cameraSCanFromDepth_maxDepth, 1, 0, 1, 1);

        label_301 = new QLabel(groupBox_scanFromDepth);
        label_301->setObjectName(QString::fromUtf8("label_301"));
        label_301->setWordWrap(true);
        label_301->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_63->addWidget(label_301, 1, 1, 1, 1);

        gridLayout_63->setColumnStretch(1, 1);

        verticalLayout_13->addWidget(groupBox_scanFromDepth);

        gridLayout_62 = new QGridLayout();
        gridLayout_62->setObjectName(QString::fromUtf8("gridLayout_62"));
        spinBox_cameraImages_scanNormalsK = new QSpinBox(groupBox_scan);
        spinBox_cameraImages_scanNormalsK->setObjectName(QString::fromUtf8("spinBox_cameraImages_scanNormalsK"));
        spinBox_cameraImages_scanNormalsK->setMinimum(0);
        spinBox_cameraImages_scanNormalsK->setMaximum(99999999);
        spinBox_cameraImages_scanNormalsK->setValue(0);

        gridLayout_62->addWidget(spinBox_cameraImages_scanNormalsK, 2, 0, 1, 1);

        label_300 = new QLabel(groupBox_scan);
        label_300->setObjectName(QString::fromUtf8("label_300"));
        label_300->setWordWrap(true);
        label_300->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_62->addWidget(label_300, 0, 1, 1, 1);

        doubleSpinBox_cameraImages_scanVoxelSize = new QDoubleSpinBox(groupBox_scan);
        doubleSpinBox_cameraImages_scanVoxelSize->setObjectName(QString::fromUtf8("doubleSpinBox_cameraImages_scanVoxelSize"));
        doubleSpinBox_cameraImages_scanVoxelSize->setDecimals(3);
        doubleSpinBox_cameraImages_scanVoxelSize->setSingleStep(0.01);

        gridLayout_62->addWidget(doubleSpinBox_cameraImages_scanVoxelSize, 1, 0, 1, 1);

        spinBox_cameraImages_scanDownsampleStep = new QSpinBox(groupBox_scan);
        spinBox_cameraImages_scanDownsampleStep->setObjectName(QString::fromUtf8("spinBox_cameraImages_scanDownsampleStep"));
        spinBox_cameraImages_scanDownsampleStep->setMinimum(1);
        spinBox_cameraImages_scanDownsampleStep->setMaximum(99999999);

        gridLayout_62->addWidget(spinBox_cameraImages_scanDownsampleStep, 0, 0, 1, 1);

        label_302 = new QLabel(groupBox_scan);
        label_302->setObjectName(QString::fromUtf8("label_302"));
        label_302->setWordWrap(true);
        label_302->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_62->addWidget(label_302, 1, 1, 1, 1);

        label_304 = new QLabel(groupBox_scan);
        label_304->setObjectName(QString::fromUtf8("label_304"));
        label_304->setWordWrap(true);
        label_304->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_62->addWidget(label_304, 2, 1, 1, 1);

        gridLayout_62->setColumnStretch(1, 1);

        verticalLayout_13->addLayout(gridLayout_62);


        verticalLayout_7->addWidget(groupBox_scan);

        verticalLayout_7->setStretch(3, 1);

        verticalLayout_27->addWidget(groupBox_source0);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_7);

        verticalLayout_27->setStretch(1, 1);
        stackedWidget->addWidget(page_4);
        page_20 = new QWidget();
        page_20->setObjectName(QString::fromUtf8("page_20"));
        verticalLayout_23 = new QVBoxLayout(page_20);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        groupBox_rtabmap_basic0 = new QGroupBox(page_20);
        groupBox_rtabmap_basic0->setObjectName(QString::fromUtf8("groupBox_rtabmap_basic0"));
        gridLayout_3 = new QGridLayout(groupBox_rtabmap_basic0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        general_doubleSpinBox_detectionRate_2 = new QDoubleSpinBox(groupBox_rtabmap_basic0);
        general_doubleSpinBox_detectionRate_2->setObjectName(QString::fromUtf8("general_doubleSpinBox_detectionRate_2"));
        general_doubleSpinBox_detectionRate_2->setDecimals(3);
        general_doubleSpinBox_detectionRate_2->setValue(1);

        gridLayout_3->addWidget(general_doubleSpinBox_detectionRate_2, 3, 0, 1, 1);

        general_checkBox_SLAM_mode_2 = new QCheckBox(groupBox_rtabmap_basic0);
        general_checkBox_SLAM_mode_2->setObjectName(QString::fromUtf8("general_checkBox_SLAM_mode_2"));
        general_checkBox_SLAM_mode_2->setChecked(true);

        gridLayout_3->addWidget(general_checkBox_SLAM_mode_2, 0, 0, 1, 1);

        label_79 = new QLabel(groupBox_rtabmap_basic0);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setWordWrap(true);
        label_79->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_79, 0, 1, 1, 1);

        general_checkBox_activateRGBD_2 = new QCheckBox(groupBox_rtabmap_basic0);
        general_checkBox_activateRGBD_2->setObjectName(QString::fromUtf8("general_checkBox_activateRGBD_2"));
        general_checkBox_activateRGBD_2->setChecked(true);

        gridLayout_3->addWidget(general_checkBox_activateRGBD_2, 1, 0, 1, 1);

        label_activateRGBD_2 = new QLabel(groupBox_rtabmap_basic0);
        label_activateRGBD_2->setObjectName(QString::fromUtf8("label_activateRGBD_2"));
        label_activateRGBD_2->setWordWrap(true);
        label_activateRGBD_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_activateRGBD_2, 1, 1, 1, 1);

        general_checkBox_publishStats_2 = new QCheckBox(groupBox_rtabmap_basic0);
        general_checkBox_publishStats_2->setObjectName(QString::fromUtf8("general_checkBox_publishStats_2"));
        general_checkBox_publishStats_2->setChecked(true);

        gridLayout_3->addWidget(general_checkBox_publishStats_2, 2, 0, 1, 1);

        label_publishStat = new QLabel(groupBox_rtabmap_basic0);
        label_publishStat->setObjectName(QString::fromUtf8("label_publishStat"));
        label_publishStat->setWordWrap(true);
        label_publishStat->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_publishStat, 2, 1, 1, 1);

        label_134 = new QLabel(groupBox_rtabmap_basic0);
        label_134->setObjectName(QString::fromUtf8("label_134"));
        label_134->setWordWrap(true);
        label_134->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_134, 3, 1, 1, 1);

        general_spinBox_imagesBufferSize_2 = new QSpinBox(groupBox_rtabmap_basic0);
        general_spinBox_imagesBufferSize_2->setObjectName(QString::fromUtf8("general_spinBox_imagesBufferSize_2"));
        general_spinBox_imagesBufferSize_2->setMaximum(999);
        general_spinBox_imagesBufferSize_2->setValue(1);

        gridLayout_3->addWidget(general_spinBox_imagesBufferSize_2, 4, 0, 1, 1);

        label_112 = new QLabel(groupBox_rtabmap_basic0);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setWordWrap(true);
        label_112->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_112, 4, 1, 1, 1);

        general_doubleSpinBox_timeThr_2 = new QDoubleSpinBox(groupBox_rtabmap_basic0);
        general_doubleSpinBox_timeThr_2->setObjectName(QString::fromUtf8("general_doubleSpinBox_timeThr_2"));
        general_doubleSpinBox_timeThr_2->setDecimals(0);
        general_doubleSpinBox_timeThr_2->setMaximum(10000);
        general_doubleSpinBox_timeThr_2->setSingleStep(50);
        general_doubleSpinBox_timeThr_2->setValue(700);

        gridLayout_3->addWidget(general_doubleSpinBox_timeThr_2, 5, 0, 1, 1);

        label_timeLimit_2 = new QLabel(groupBox_rtabmap_basic0);
        label_timeLimit_2->setObjectName(QString::fromUtf8("label_timeLimit_2"));
        label_timeLimit_2->setWordWrap(true);
        label_timeLimit_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_timeLimit_2, 5, 1, 1, 1);

        general_doubleSpinBox_hardThr_2 = new QDoubleSpinBox(groupBox_rtabmap_basic0);
        general_doubleSpinBox_hardThr_2->setObjectName(QString::fromUtf8("general_doubleSpinBox_hardThr_2"));
        general_doubleSpinBox_hardThr_2->setMaximum(1);
        general_doubleSpinBox_hardThr_2->setSingleStep(0.01);
        general_doubleSpinBox_hardThr_2->setValue(0.95);

        gridLayout_3->addWidget(general_doubleSpinBox_hardThr_2, 6, 0, 1, 1);

        label_121 = new QLabel(groupBox_rtabmap_basic0);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        label_121->setWordWrap(true);
        label_121->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_121, 6, 1, 1, 1);

        doubleSpinBox_similarityThreshold_2 = new QDoubleSpinBox(groupBox_rtabmap_basic0);
        doubleSpinBox_similarityThreshold_2->setObjectName(QString::fromUtf8("doubleSpinBox_similarityThreshold_2"));
        doubleSpinBox_similarityThreshold_2->setMaximum(1);
        doubleSpinBox_similarityThreshold_2->setValue(0.2);

        gridLayout_3->addWidget(doubleSpinBox_similarityThreshold_2, 7, 0, 1, 1);

        label_similarity_2 = new QLabel(groupBox_rtabmap_basic0);
        label_similarity_2->setObjectName(QString::fromUtf8("label_similarity_2"));
        label_similarity_2->setWordWrap(true);
        label_similarity_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_similarity_2, 7, 1, 1, 1);

        general_spinBox_maxStMemSize_2 = new QSpinBox(groupBox_rtabmap_basic0);
        general_spinBox_maxStMemSize_2->setObjectName(QString::fromUtf8("general_spinBox_maxStMemSize_2"));
        general_spinBox_maxStMemSize_2->setMinimum(1);
        general_spinBox_maxStMemSize_2->setMaximum(9999);
        general_spinBox_maxStMemSize_2->setValue(15);

        gridLayout_3->addWidget(general_spinBox_maxStMemSize_2, 8, 0, 1, 1);

        label_126 = new QLabel(groupBox_rtabmap_basic0);
        label_126->setObjectName(QString::fromUtf8("label_126"));
        label_126->setWordWrap(true);
        label_126->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_126, 8, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout_23->addWidget(groupBox_rtabmap_basic0);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_5);

        stackedWidget->addWidget(page_20);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_44 = new QVBoxLayout(page);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        groupBox_rtabmap_advanced0 = new QGroupBox(page);
        groupBox_rtabmap_advanced0->setObjectName(QString::fromUtf8("groupBox_rtabmap_advanced0"));
        verticalLayout_15 = new QVBoxLayout(groupBox_rtabmap_advanced0);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        gridLayout_43 = new QGridLayout();
        gridLayout_43->setObjectName(QString::fromUtf8("gridLayout_43"));
        general_checkBox_SLAM_mode = new QCheckBox(groupBox_rtabmap_advanced0);
        general_checkBox_SLAM_mode->setObjectName(QString::fromUtf8("general_checkBox_SLAM_mode"));
        general_checkBox_SLAM_mode->setChecked(true);

        gridLayout_43->addWidget(general_checkBox_SLAM_mode, 0, 0, 1, 1);

        label_92 = new QLabel(groupBox_rtabmap_advanced0);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setWordWrap(true);
        label_92->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_43->addWidget(label_92, 0, 1, 1, 1);

        general_checkBox_startNewMapOnLoopClosure = new QCheckBox(groupBox_rtabmap_advanced0);
        general_checkBox_startNewMapOnLoopClosure->setObjectName(QString::fromUtf8("general_checkBox_startNewMapOnLoopClosure"));
        general_checkBox_startNewMapOnLoopClosure->setChecked(true);

        gridLayout_43->addWidget(general_checkBox_startNewMapOnLoopClosure, 4, 0, 1, 1);

        label_135 = new QLabel(groupBox_rtabmap_advanced0);
        label_135->setObjectName(QString::fromUtf8("label_135"));
        label_135->setWordWrap(true);
        label_135->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_43->addWidget(label_135, 1, 1, 1, 1);

        general_spinBox_imagesBufferSize = new QSpinBox(groupBox_rtabmap_advanced0);
        general_spinBox_imagesBufferSize->setObjectName(QString::fromUtf8("general_spinBox_imagesBufferSize"));
        general_spinBox_imagesBufferSize->setMaximum(999);
        general_spinBox_imagesBufferSize->setValue(1);

        gridLayout_43->addWidget(general_spinBox_imagesBufferSize, 2, 0, 1, 1);

        label_185 = new QLabel(groupBox_rtabmap_advanced0);
        label_185->setObjectName(QString::fromUtf8("label_185"));
        label_185->setWordWrap(true);
        label_185->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_43->addWidget(label_185, 4, 1, 1, 1);

        label_84 = new QLabel(groupBox_rtabmap_advanced0);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setWordWrap(true);
        label_84->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_43->addWidget(label_84, 2, 1, 1, 1);

        general_doubleSpinBox_detectionRate = new QDoubleSpinBox(groupBox_rtabmap_advanced0);
        general_doubleSpinBox_detectionRate->setObjectName(QString::fromUtf8("general_doubleSpinBox_detectionRate"));
        general_doubleSpinBox_detectionRate->setDecimals(3);
        general_doubleSpinBox_detectionRate->setValue(1);

        gridLayout_43->addWidget(general_doubleSpinBox_detectionRate, 1, 0, 1, 1);

        label_165 = new QLabel(groupBox_rtabmap_advanced0);
        label_165->setObjectName(QString::fromUtf8("label_165"));
        label_165->setWordWrap(true);
        label_165->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_43->addWidget(label_165, 3, 1, 1, 1);

        general_checkBox_createIntermediateNodes = new QCheckBox(groupBox_rtabmap_advanced0);
        general_checkBox_createIntermediateNodes->setObjectName(QString::fromUtf8("general_checkBox_createIntermediateNodes"));
        general_checkBox_createIntermediateNodes->setChecked(false);

        gridLayout_43->addWidget(general_checkBox_createIntermediateNodes, 3, 0, 1, 1);

        gridLayout_43->setColumnStretch(1, 1);

        verticalLayout_15->addLayout(gridLayout_43);

        groupBox_6 = new QGroupBox(groupBox_rtabmap_advanced0);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_44 = new QGridLayout(groupBox_6);
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        general_doubleSpinBox_timeThr = new QDoubleSpinBox(groupBox_6);
        general_doubleSpinBox_timeThr->setObjectName(QString::fromUtf8("general_doubleSpinBox_timeThr"));
        general_doubleSpinBox_timeThr->setDecimals(0);
        general_doubleSpinBox_timeThr->setMaximum(10000);
        general_doubleSpinBox_timeThr->setSingleStep(50);
        general_doubleSpinBox_timeThr->setValue(700);

        gridLayout_44->addWidget(general_doubleSpinBox_timeThr, 0, 0, 1, 1);

        label_timeLimit = new QLabel(groupBox_6);
        label_timeLimit->setObjectName(QString::fromUtf8("label_timeLimit"));
        label_timeLimit->setWordWrap(true);
        label_timeLimit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_44->addWidget(label_timeLimit, 0, 1, 1, 1);

        general_spinBox_memoryThr = new QSpinBox(groupBox_6);
        general_spinBox_memoryThr->setObjectName(QString::fromUtf8("general_spinBox_memoryThr"));
        general_spinBox_memoryThr->setMaximum(99999);
        general_spinBox_memoryThr->setValue(0);

        gridLayout_44->addWidget(general_spinBox_memoryThr, 1, 0, 1, 1);

        label_maxWmSize = new QLabel(groupBox_6);
        label_maxWmSize->setObjectName(QString::fromUtf8("label_maxWmSize"));
        label_maxWmSize->setWordWrap(true);
        label_maxWmSize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_44->addWidget(label_maxWmSize, 1, 1, 1, 1);

        general_doubleSpinBox_hardThr = new QDoubleSpinBox(groupBox_6);
        general_doubleSpinBox_hardThr->setObjectName(QString::fromUtf8("general_doubleSpinBox_hardThr"));
        general_doubleSpinBox_hardThr->setMaximum(1);
        general_doubleSpinBox_hardThr->setSingleStep(0.01);
        general_doubleSpinBox_hardThr->setValue(0.95);

        gridLayout_44->addWidget(general_doubleSpinBox_hardThr, 2, 0, 1, 1);

        label_93 = new QLabel(groupBox_6);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setWordWrap(true);
        label_93->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_44->addWidget(label_93, 2, 1, 1, 1);

        general_doubleSpinBox_loopRatio = new QDoubleSpinBox(groupBox_6);
        general_doubleSpinBox_loopRatio->setObjectName(QString::fromUtf8("general_doubleSpinBox_loopRatio"));
        general_doubleSpinBox_loopRatio->setMaximum(1);
        general_doubleSpinBox_loopRatio->setSingleStep(0.01);
        general_doubleSpinBox_loopRatio->setValue(0.7);

        gridLayout_44->addWidget(general_doubleSpinBox_loopRatio, 3, 0, 1, 1);

        label_96 = new QLabel(groupBox_6);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setWordWrap(true);
        label_96->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_44->addWidget(label_96, 3, 1, 1, 1);

        gridLayout_44->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(groupBox_6);

        groupBox_publishing = new QGroupBox(groupBox_rtabmap_advanced0);
        groupBox_publishing->setObjectName(QString::fromUtf8("groupBox_publishing"));
        groupBox_publishing->setCheckable(true);
        gridLayout_45 = new QGridLayout(groupBox_publishing);
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        general_checkBox_publishRawData = new QCheckBox(groupBox_publishing);
        general_checkBox_publishRawData->setObjectName(QString::fromUtf8("general_checkBox_publishRawData"));
        general_checkBox_publishRawData->setChecked(true);

        gridLayout_45->addWidget(general_checkBox_publishRawData, 0, 0, 1, 1);

        label_91 = new QLabel(groupBox_publishing);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_45->addWidget(label_91, 0, 1, 1, 1);

        general_checkBox_publishPdf = new QCheckBox(groupBox_publishing);
        general_checkBox_publishPdf->setObjectName(QString::fromUtf8("general_checkBox_publishPdf"));
        general_checkBox_publishPdf->setChecked(true);

        gridLayout_45->addWidget(general_checkBox_publishPdf, 1, 0, 1, 1);

        label_106 = new QLabel(groupBox_publishing);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_45->addWidget(label_106, 1, 1, 1, 1);

        general_checkBox_publishLikelihood = new QCheckBox(groupBox_publishing);
        general_checkBox_publishLikelihood->setObjectName(QString::fromUtf8("general_checkBox_publishLikelihood"));
        general_checkBox_publishLikelihood->setChecked(true);

        gridLayout_45->addWidget(general_checkBox_publishLikelihood, 2, 0, 1, 1);

        label_116 = new QLabel(groupBox_publishing);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_45->addWidget(label_116, 2, 1, 1, 1);

        gridLayout_45->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(groupBox_publishing);

        groupBox_statistics = new QGroupBox(groupBox_rtabmap_advanced0);
        groupBox_statistics->setObjectName(QString::fromUtf8("groupBox_statistics"));
        groupBox_statistics->setCheckable(true);
        gridLayout_46 = new QGridLayout(groupBox_statistics);
        gridLayout_46->setObjectName(QString::fromUtf8("gridLayout_46"));
        general_checkBox_statisticLogsBufferedInRAM = new QCheckBox(groupBox_statistics);
        general_checkBox_statisticLogsBufferedInRAM->setObjectName(QString::fromUtf8("general_checkBox_statisticLogsBufferedInRAM"));
        general_checkBox_statisticLogsBufferedInRAM->setChecked(true);

        gridLayout_46->addWidget(general_checkBox_statisticLogsBufferedInRAM, 0, 0, 1, 1);

        label_143 = new QLabel(groupBox_statistics);
        label_143->setObjectName(QString::fromUtf8("label_143"));
        label_143->setWordWrap(true);
        label_143->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_46->addWidget(label_143, 0, 1, 1, 1);

        general_checkBox_statisticLoggedHeaders = new QCheckBox(groupBox_statistics);
        general_checkBox_statisticLoggedHeaders->setObjectName(QString::fromUtf8("general_checkBox_statisticLoggedHeaders"));
        general_checkBox_statisticLoggedHeaders->setChecked(true);

        gridLayout_46->addWidget(general_checkBox_statisticLoggedHeaders, 1, 0, 1, 1);

        label_209 = new QLabel(groupBox_statistics);
        label_209->setObjectName(QString::fromUtf8("label_209"));
        label_209->setWordWrap(true);
        label_209->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_46->addWidget(label_209, 1, 1, 1, 1);

        gridLayout_46->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(groupBox_statistics);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_workingDirectory = new QLabel(groupBox_rtabmap_advanced0);
        label_workingDirectory->setObjectName(QString::fromUtf8("label_workingDirectory"));
        label_workingDirectory->setWordWrap(true);
        label_workingDirectory->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(label_workingDirectory, 0, 0, 1, 1);

        toolButton_workingDirectory = new QToolButton(groupBox_rtabmap_advanced0);
        toolButton_workingDirectory->setObjectName(QString::fromUtf8("toolButton_workingDirectory"));

        gridLayout_4->addWidget(toolButton_workingDirectory, 0, 1, 1, 1);

        lineEdit_workingDirectory = new QLineEdit(groupBox_rtabmap_advanced0);
        lineEdit_workingDirectory->setObjectName(QString::fromUtf8("lineEdit_workingDirectory"));
        lineEdit_workingDirectory->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_workingDirectory, 0, 2, 1, 1);


        verticalLayout_15->addLayout(gridLayout_4);


        verticalLayout_44->addWidget(groupBox_rtabmap_advanced0);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_44->addItem(verticalSpacer_4);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_memory1 = new QGroupBox(page_3);
        groupBox_memory1->setObjectName(QString::fromUtf8("groupBox_memory1"));
        verticalLayout_10 = new QVBoxLayout(groupBox_memory1);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        gridLayout_42 = new QGridLayout();
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        label_retrieved_2 = new QLabel(groupBox_memory1);
        label_retrieved_2->setObjectName(QString::fromUtf8("label_retrieved_2"));
        label_retrieved_2->setWordWrap(true);
        label_retrieved_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_2, 4, 1, 1, 1);

        general_spinBox_maxStMemSize = new QSpinBox(groupBox_memory1);
        general_spinBox_maxStMemSize->setObjectName(QString::fromUtf8("general_spinBox_maxStMemSize"));
        general_spinBox_maxStMemSize->setMinimum(1);
        general_spinBox_maxStMemSize->setMaximum(9999);
        general_spinBox_maxStMemSize->setValue(15);

        gridLayout_42->addWidget(general_spinBox_maxStMemSize, 0, 0, 1, 1);

        label_retrieved = new QLabel(groupBox_memory1);
        label_retrieved->setObjectName(QString::fromUtf8("label_retrieved"));
        label_retrieved->setWordWrap(true);
        label_retrieved->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved, 2, 1, 1, 1);

        general_checkBox_generateIds = new QCheckBox(groupBox_memory1);
        general_checkBox_generateIds->setObjectName(QString::fromUtf8("general_checkBox_generateIds"));
        general_checkBox_generateIds->setChecked(true);

        gridLayout_42->addWidget(general_checkBox_generateIds, 4, 0, 1, 1);

        general_checkBox_transferSortingByWeightId = new QCheckBox(groupBox_memory1);
        general_checkBox_transferSortingByWeightId->setObjectName(QString::fromUtf8("general_checkBox_transferSortingByWeightId"));
        general_checkBox_transferSortingByWeightId->setChecked(true);

        gridLayout_42->addWidget(general_checkBox_transferSortingByWeightId, 3, 0, 1, 1);

        label_retrieved_9 = new QLabel(groupBox_memory1);
        label_retrieved_9->setObjectName(QString::fromUtf8("label_retrieved_9"));
        label_retrieved_9->setWordWrap(true);
        label_retrieved_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_9, 11, 1, 1, 1);

        spinBox_imagePostDecimation = new QSpinBox(groupBox_memory1);
        spinBox_imagePostDecimation->setObjectName(QString::fromUtf8("spinBox_imagePostDecimation"));
        spinBox_imagePostDecimation->setMinimum(1);
        spinBox_imagePostDecimation->setMaximum(16);

        gridLayout_42->addWidget(spinBox_imagePostDecimation, 13, 0, 1, 1);

        label_retrieved_10 = new QLabel(groupBox_memory1);
        label_retrieved_10->setObjectName(QString::fromUtf8("label_retrieved_10"));
        label_retrieved_10->setWordWrap(true);
        label_retrieved_10->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_10, 7, 1, 1, 1);

        general_doubleSpinBox_recentWmRatio = new QDoubleSpinBox(groupBox_memory1);
        general_doubleSpinBox_recentWmRatio->setObjectName(QString::fromUtf8("general_doubleSpinBox_recentWmRatio"));
        general_doubleSpinBox_recentWmRatio->setMinimumSize(QSize(50, 0));
        general_doubleSpinBox_recentWmRatio->setMaximum(1);
        general_doubleSpinBox_recentWmRatio->setSingleStep(0.01);
        general_doubleSpinBox_recentWmRatio->setValue(0.2);

        gridLayout_42->addWidget(general_doubleSpinBox_recentWmRatio, 1, 0, 1, 1);

        label_retrieved_4 = new QLabel(groupBox_memory1);
        label_retrieved_4->setObjectName(QString::fromUtf8("label_retrieved_4"));
        label_retrieved_4->setWordWrap(true);
        label_retrieved_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_4, 8, 1, 1, 1);

        label_29 = new QLabel(groupBox_memory1);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setWordWrap(false);
        label_29->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_29, 0, 1, 1, 1);

        label_ratioRecent = new QLabel(groupBox_memory1);
        label_ratioRecent->setObjectName(QString::fromUtf8("label_ratioRecent"));
        label_ratioRecent->setWordWrap(true);
        label_ratioRecent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_ratioRecent, 1, 1, 1, 1);

        general_spinBox_maxRetrieved = new QSpinBox(groupBox_memory1);
        general_spinBox_maxRetrieved->setObjectName(QString::fromUtf8("general_spinBox_maxRetrieved"));
        general_spinBox_maxRetrieved->setMaximum(999);
        general_spinBox_maxRetrieved->setSingleStep(1);
        general_spinBox_maxRetrieved->setValue(2);

        gridLayout_42->addWidget(general_spinBox_maxRetrieved, 2, 0, 1, 1);

        general_checkBox_badSignaturesIgnored = new QCheckBox(groupBox_memory1);
        general_checkBox_badSignaturesIgnored->setObjectName(QString::fromUtf8("general_checkBox_badSignaturesIgnored"));
        general_checkBox_badSignaturesIgnored->setChecked(false);

        gridLayout_42->addWidget(general_checkBox_badSignaturesIgnored, 6, 0, 1, 1);

        label_retrieved_3 = new QLabel(groupBox_memory1);
        label_retrieved_3->setObjectName(QString::fromUtf8("label_retrieved_3"));
        label_retrieved_3->setWordWrap(true);
        label_retrieved_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_3, 6, 1, 1, 1);

        general_checkBox_initWMWithAllNodes = new QCheckBox(groupBox_memory1);
        general_checkBox_initWMWithAllNodes->setObjectName(QString::fromUtf8("general_checkBox_initWMWithAllNodes"));
        general_checkBox_initWMWithAllNodes->setChecked(false);

        gridLayout_42->addWidget(general_checkBox_initWMWithAllNodes, 8, 0, 1, 1);

        label_retrieved_5 = new QLabel(groupBox_memory1);
        label_retrieved_5->setObjectName(QString::fromUtf8("label_retrieved_5"));
        label_retrieved_5->setWordWrap(true);
        label_retrieved_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_5, 9, 1, 1, 1);

        general_checkBox_keepRawData = new QCheckBox(groupBox_memory1);
        general_checkBox_keepRawData->setObjectName(QString::fromUtf8("general_checkBox_keepRawData"));
        general_checkBox_keepRawData->setChecked(false);

        gridLayout_42->addWidget(general_checkBox_keepRawData, 9, 0, 1, 1);

        label_retrieved_6 = new QLabel(groupBox_memory1);
        label_retrieved_6->setObjectName(QString::fromUtf8("label_retrieved_6"));
        label_retrieved_6->setWordWrap(true);
        label_retrieved_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_6, 13, 1, 1, 1);

        label_retrieved_7 = new QLabel(groupBox_memory1);
        label_retrieved_7->setObjectName(QString::fromUtf8("label_retrieved_7"));
        label_retrieved_7->setWordWrap(true);
        label_retrieved_7->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_7, 3, 1, 1, 1);

        label_retrieved_8 = new QLabel(groupBox_memory1);
        label_retrieved_8->setObjectName(QString::fromUtf8("label_retrieved_8"));
        label_retrieved_8->setWordWrap(true);
        label_retrieved_8->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_8, 14, 1, 1, 1);

        general_checkBox_reduceGraph = new QCheckBox(groupBox_memory1);
        general_checkBox_reduceGraph->setObjectName(QString::fromUtf8("general_checkBox_reduceGraph"));
        general_checkBox_reduceGraph->setChecked(false);

        gridLayout_42->addWidget(general_checkBox_reduceGraph, 7, 0, 1, 1);

        label_retrieved_11 = new QLabel(groupBox_memory1);
        label_retrieved_11->setObjectName(QString::fromUtf8("label_retrieved_11"));
        label_retrieved_11->setWordWrap(true);
        label_retrieved_11->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_11, 5, 1, 1, 1);

        general_checkBox_createMapLabels = new QCheckBox(groupBox_memory1);
        general_checkBox_createMapLabels->setObjectName(QString::fromUtf8("general_checkBox_createMapLabels"));
        general_checkBox_createMapLabels->setChecked(false);

        gridLayout_42->addWidget(general_checkBox_createMapLabels, 5, 0, 1, 1);

        general_spinBox_laserScanDownsample = new QSpinBox(groupBox_memory1);
        general_spinBox_laserScanDownsample->setObjectName(QString::fromUtf8("general_spinBox_laserScanDownsample"));
        general_spinBox_laserScanDownsample->setMinimumSize(QSize(50, 0));
        general_spinBox_laserScanDownsample->setMinimum(1);
        general_spinBox_laserScanDownsample->setMaximum(9999);

        gridLayout_42->addWidget(general_spinBox_laserScanDownsample, 14, 0, 1, 1);

        general_checkBox_saveDepth16bits = new QCheckBox(groupBox_memory1);
        general_checkBox_saveDepth16bits->setObjectName(QString::fromUtf8("general_checkBox_saveDepth16bits"));
        general_checkBox_saveDepth16bits->setChecked(false);

        gridLayout_42->addWidget(general_checkBox_saveDepth16bits, 11, 0, 1, 1);

        label_retrieved_12 = new QLabel(groupBox_memory1);
        label_retrieved_12->setObjectName(QString::fromUtf8("label_retrieved_12"));
        label_retrieved_12->setWordWrap(true);
        label_retrieved_12->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_12, 10, 1, 1, 1);

        general_checkBox_keepDescriptors = new QCheckBox(groupBox_memory1);
        general_checkBox_keepDescriptors->setObjectName(QString::fromUtf8("general_checkBox_keepDescriptors"));
        general_checkBox_keepDescriptors->setChecked(false);

        gridLayout_42->addWidget(general_checkBox_keepDescriptors, 10, 0, 1, 1);

        spinBox_imagePreDecimation = new QSpinBox(groupBox_memory1);
        spinBox_imagePreDecimation->setObjectName(QString::fromUtf8("spinBox_imagePreDecimation"));
        spinBox_imagePreDecimation->setMinimum(1);
        spinBox_imagePreDecimation->setMaximum(16);

        gridLayout_42->addWidget(spinBox_imagePreDecimation, 12, 0, 1, 1);

        label_retrieved_13 = new QLabel(groupBox_memory1);
        label_retrieved_13->setObjectName(QString::fromUtf8("label_retrieved_13"));
        label_retrieved_13->setWordWrap(true);
        label_retrieved_13->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_42->addWidget(label_retrieved_13, 12, 1, 1, 1);

        gridLayout_42->setColumnStretch(1, 1);

        verticalLayout_10->addLayout(gridLayout_42);

        groupBox_rehearsal2 = new QGroupBox(groupBox_memory1);
        groupBox_rehearsal2->setObjectName(QString::fromUtf8("groupBox_rehearsal2"));
        gridLayout_12 = new QGridLayout(groupBox_rehearsal2);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        general_checkBox_RehearsalIdUpdatedToNewOne = new QCheckBox(groupBox_rehearsal2);
        general_checkBox_RehearsalIdUpdatedToNewOne->setObjectName(QString::fromUtf8("general_checkBox_RehearsalIdUpdatedToNewOne"));

        gridLayout_12->addWidget(general_checkBox_RehearsalIdUpdatedToNewOne, 2, 0, 1, 1);

        label_similarity = new QLabel(groupBox_rehearsal2);
        label_similarity->setObjectName(QString::fromUtf8("label_similarity"));
        label_similarity->setWordWrap(true);
        label_similarity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_12->addWidget(label_similarity, 0, 1, 1, 1);

        doubleSpinBox_similarityThreshold = new QDoubleSpinBox(groupBox_rehearsal2);
        doubleSpinBox_similarityThreshold->setObjectName(QString::fromUtf8("doubleSpinBox_similarityThreshold"));
        doubleSpinBox_similarityThreshold->setMaximum(1);
        doubleSpinBox_similarityThreshold->setValue(0.2);

        gridLayout_12->addWidget(doubleSpinBox_similarityThreshold, 0, 0, 1, 1);

        label_rehearsalIdUpdate = new QLabel(groupBox_rehearsal2);
        label_rehearsalIdUpdate->setObjectName(QString::fromUtf8("label_rehearsalIdUpdate"));
        label_rehearsalIdUpdate->setWordWrap(true);
        label_rehearsalIdUpdate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_12->addWidget(label_rehearsalIdUpdate, 2, 1, 1, 1);

        label_rehearsalIdUpdate_2 = new QLabel(groupBox_rehearsal2);
        label_rehearsalIdUpdate_2->setObjectName(QString::fromUtf8("label_rehearsalIdUpdate_2"));
        label_rehearsalIdUpdate_2->setWordWrap(true);
        label_rehearsalIdUpdate_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_12->addWidget(label_rehearsalIdUpdate_2, 3, 1, 1, 1);

        rgdb_rehearsalWeightIgnoredWhileMoving = new QCheckBox(groupBox_rehearsal2);
        rgdb_rehearsalWeightIgnoredWhileMoving->setObjectName(QString::fromUtf8("rgdb_rehearsalWeightIgnoredWhileMoving"));

        gridLayout_12->addWidget(rgdb_rehearsalWeightIgnoredWhileMoving, 3, 0, 1, 1);

        gridLayout_12->setColumnStretch(1, 1);

        verticalLayout_10->addWidget(groupBox_rehearsal2);


        verticalLayout_4->addWidget(groupBox_memory1);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        stackedWidget->addWidget(page_3);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        verticalLayout_58 = new QVBoxLayout(page_9);
        verticalLayout_58->setObjectName(QString::fromUtf8("verticalLayout_58"));
        groupBox_signature_keypoint2 = new QGroupBox(page_9);
        groupBox_signature_keypoint2->setObjectName(QString::fromUtf8("groupBox_signature_keypoint2"));
        verticalLayout_12 = new QVBoxLayout(groupBox_signature_keypoint2);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        checkBox_useOdomFeatures = new QCheckBox(groupBox_signature_keypoint2);
        checkBox_useOdomFeatures->setObjectName(QString::fromUtf8("checkBox_useOdomFeatures"));
        checkBox_useOdomFeatures->setChecked(false);

        horizontalLayout_7->addWidget(checkBox_useOdomFeatures);

        label_145 = new QLabel(groupBox_signature_keypoint2);
        label_145->setObjectName(QString::fromUtf8("label_145"));
        label_145->setWordWrap(true);
        label_145->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_7->addWidget(label_145);

        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_12->addLayout(horizontalLayout_7);

        groupBox_8 = new QGroupBox(groupBox_signature_keypoint2);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_60 = new QVBoxLayout(groupBox_8);
        verticalLayout_60->setObjectName(QString::fromUtf8("verticalLayout_60"));
        gridLayout_32 = new QGridLayout();
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        label_22 = new QLabel(groupBox_8);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setWordWrap(true);
        label_22->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_22, 3, 1, 1, 1);

        label_81 = new QLabel(groupBox_8);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setWordWrap(true);
        label_81->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_81, 4, 1, 1, 1);

        label_99 = new QLabel(groupBox_8);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setWordWrap(true);
        label_99->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_99, 8, 1, 1, 1);

        surf_doubleSpinBox_ratioBadSign = new QDoubleSpinBox(groupBox_8);
        surf_doubleSpinBox_ratioBadSign->setObjectName(QString::fromUtf8("surf_doubleSpinBox_ratioBadSign"));
        surf_doubleSpinBox_ratioBadSign->setDecimals(2);
        surf_doubleSpinBox_ratioBadSign->setMinimum(0);
        surf_doubleSpinBox_ratioBadSign->setMaximum(1);
        surf_doubleSpinBox_ratioBadSign->setSingleStep(0.05);
        surf_doubleSpinBox_ratioBadSign->setValue(0.25);

        gridLayout_32->addWidget(surf_doubleSpinBox_ratioBadSign, 4, 0, 1, 1);

        label_57 = new QLabel(groupBox_8);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setWordWrap(true);
        label_57->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_57, 2, 1, 1, 1);

        label_101 = new QLabel(groupBox_8);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        label_101->setWordWrap(true);
        label_101->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_101, 5, 1, 1, 1);

        lineEdit_kp_roi = new QLineEdit(groupBox_8);
        lineEdit_kp_roi->setObjectName(QString::fromUtf8("lineEdit_kp_roi"));
        lineEdit_kp_roi->setReadOnly(true);

        gridLayout_32->addWidget(lineEdit_kp_roi, 5, 0, 1, 1);

        comboBox_detector_strategy = new QComboBox(groupBox_8);
        comboBox_detector_strategy->setObjectName(QString::fromUtf8("comboBox_detector_strategy"));

        gridLayout_32->addWidget(comboBox_detector_strategy, 0, 0, 1, 1);

        label_53 = new QLabel(groupBox_8);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setWordWrap(true);
        label_53->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_53, 1, 1, 1, 1);

        doubleSpinBox_kp_roi1 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBox_kp_roi1->setObjectName(QString::fromUtf8("doubleSpinBox_kp_roi1"));
        doubleSpinBox_kp_roi1->setDecimals(0);

        gridLayout_32->addWidget(doubleSpinBox_kp_roi1, 7, 0, 1, 1);

        label_117 = new QLabel(groupBox_8);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setWordWrap(true);
        label_117->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_117, 0, 1, 1, 1);

        surf_doubleSpinBox_maxDepth = new QDoubleSpinBox(groupBox_8);
        surf_doubleSpinBox_maxDepth->setObjectName(QString::fromUtf8("surf_doubleSpinBox_maxDepth"));
        surf_doubleSpinBox_maxDepth->setDecimals(2);
        surf_doubleSpinBox_maxDepth->setMinimum(0);
        surf_doubleSpinBox_maxDepth->setMaximum(99);
        surf_doubleSpinBox_maxDepth->setSingleStep(1);
        surf_doubleSpinBox_maxDepth->setValue(0);

        gridLayout_32->addWidget(surf_doubleSpinBox_maxDepth, 1, 0, 1, 1);

        surf_spinBox_wordsPerImageTarget = new QSpinBox(groupBox_8);
        surf_spinBox_wordsPerImageTarget->setObjectName(QString::fromUtf8("surf_spinBox_wordsPerImageTarget"));
        surf_spinBox_wordsPerImageTarget->setMinimum(-1);
        surf_spinBox_wordsPerImageTarget->setMaximum(2000);
        surf_spinBox_wordsPerImageTarget->setValue(150);

        gridLayout_32->addWidget(surf_spinBox_wordsPerImageTarget, 3, 0, 1, 1);

        doubleSpinBox_kp_roi0 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBox_kp_roi0->setObjectName(QString::fromUtf8("doubleSpinBox_kp_roi0"));
        doubleSpinBox_kp_roi0->setDecimals(0);

        gridLayout_32->addWidget(doubleSpinBox_kp_roi0, 6, 0, 1, 1);

        label_97 = new QLabel(groupBox_8);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setWordWrap(true);
        label_97->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_97, 6, 1, 1, 1);

        label_98 = new QLabel(groupBox_8);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setWordWrap(true);
        label_98->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_98, 7, 1, 1, 1);

        doubleSpinBox_kp_roi2 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBox_kp_roi2->setObjectName(QString::fromUtf8("doubleSpinBox_kp_roi2"));
        doubleSpinBox_kp_roi2->setDecimals(0);

        gridLayout_32->addWidget(doubleSpinBox_kp_roi2, 8, 0, 1, 1);

        doubleSpinBox_kp_roi3 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBox_kp_roi3->setObjectName(QString::fromUtf8("doubleSpinBox_kp_roi3"));
        doubleSpinBox_kp_roi3->setDecimals(0);

        gridLayout_32->addWidget(doubleSpinBox_kp_roi3, 9, 0, 1, 1);

        label_100 = new QLabel(groupBox_8);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setWordWrap(true);
        label_100->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_32->addWidget(label_100, 9, 1, 1, 1);

        surf_doubleSpinBox_minDepth = new QDoubleSpinBox(groupBox_8);
        surf_doubleSpinBox_minDepth->setObjectName(QString::fromUtf8("surf_doubleSpinBox_minDepth"));
        surf_doubleSpinBox_minDepth->setDecimals(2);
        surf_doubleSpinBox_minDepth->setMinimum(0);
        surf_doubleSpinBox_minDepth->setMaximum(99);
        surf_doubleSpinBox_minDepth->setSingleStep(1);
        surf_doubleSpinBox_minDepth->setValue(0);

        gridLayout_32->addWidget(surf_doubleSpinBox_minDepth, 2, 0, 1, 1);

        gridLayout_32->setColumnStretch(1, 1);

        verticalLayout_60->addLayout(gridLayout_32);

        groupBox_15 = new QGroupBox(groupBox_8);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        verticalLayout_76 = new QVBoxLayout(groupBox_15);
        verticalLayout_76->setObjectName(QString::fromUtf8("verticalLayout_76"));
        label_44 = new QLabel(groupBox_15);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setWordWrap(true);
        label_44->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_76->addWidget(label_44);

        gridLayout_41 = new QGridLayout();
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        subpix_winSize_kp = new QSpinBox(groupBox_15);
        subpix_winSize_kp->setObjectName(QString::fromUtf8("subpix_winSize_kp"));
        subpix_winSize_kp->setMinimum(0);
        subpix_winSize_kp->setMaximum(999999);
        subpix_winSize_kp->setSingleStep(1);
        subpix_winSize_kp->setValue(5);

        gridLayout_41->addWidget(subpix_winSize_kp, 0, 0, 1, 1);

        label_202 = new QLabel(groupBox_15);
        label_202->setObjectName(QString::fromUtf8("label_202"));
        label_202->setWordWrap(true);
        label_202->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_41->addWidget(label_202, 0, 1, 1, 1);

        subpix_iterations_kp = new QSpinBox(groupBox_15);
        subpix_iterations_kp->setObjectName(QString::fromUtf8("subpix_iterations_kp"));
        subpix_iterations_kp->setMinimum(0);
        subpix_iterations_kp->setMaximum(999999);
        subpix_iterations_kp->setSingleStep(1);
        subpix_iterations_kp->setValue(20);

        gridLayout_41->addWidget(subpix_iterations_kp, 1, 0, 1, 1);

        label_225 = new QLabel(groupBox_15);
        label_225->setObjectName(QString::fromUtf8("label_225"));
        label_225->setWordWrap(true);
        label_225->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_41->addWidget(label_225, 1, 1, 1, 1);

        subpix_eps_kp = new QDoubleSpinBox(groupBox_15);
        subpix_eps_kp->setObjectName(QString::fromUtf8("subpix_eps_kp"));
        subpix_eps_kp->setDecimals(3);
        subpix_eps_kp->setMinimum(0.001);
        subpix_eps_kp->setMaximum(0.1);
        subpix_eps_kp->setSingleStep(0.01);
        subpix_eps_kp->setValue(0.03);

        gridLayout_41->addWidget(subpix_eps_kp, 2, 0, 1, 1);

        label_227 = new QLabel(groupBox_15);
        label_227->setObjectName(QString::fromUtf8("label_227"));
        label_227->setWordWrap(true);
        label_227->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_41->addWidget(label_227, 2, 1, 1, 1);

        gridLayout_41->setColumnStretch(1, 1);

        verticalLayout_76->addLayout(gridLayout_41);


        verticalLayout_60->addWidget(groupBox_15);


        verticalLayout_12->addWidget(groupBox_8);

        groupBox_dictionary_strategy2 = new QGroupBox(groupBox_signature_keypoint2);
        groupBox_dictionary_strategy2->setObjectName(QString::fromUtf8("groupBox_dictionary_strategy2"));
        gridLayout_18 = new QGridLayout(groupBox_dictionary_strategy2);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        toolButton_dictionaryPath = new QToolButton(groupBox_dictionary_strategy2);
        toolButton_dictionaryPath->setObjectName(QString::fromUtf8("toolButton_dictionaryPath"));

        gridLayout_18->addWidget(toolButton_dictionaryPath, 3, 1, 1, 1);

        label_78 = new QLabel(groupBox_dictionary_strategy2);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setWordWrap(true);
        label_78->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_18->addWidget(label_78, 4, 2, 1, 1);

        surf_doubleSpinBox_nndrRatio = new QDoubleSpinBox(groupBox_dictionary_strategy2);
        surf_doubleSpinBox_nndrRatio->setObjectName(QString::fromUtf8("surf_doubleSpinBox_nndrRatio"));
        surf_doubleSpinBox_nndrRatio->setDecimals(1);
        surf_doubleSpinBox_nndrRatio->setMinimum(0.1);
        surf_doubleSpinBox_nndrRatio->setMaximum(1);
        surf_doubleSpinBox_nndrRatio->setSingleStep(0.1);
        surf_doubleSpinBox_nndrRatio->setValue(0.7);

        gridLayout_18->addWidget(surf_doubleSpinBox_nndrRatio, 4, 0, 1, 1);

        lineEdit_dictionaryPath = new QLineEdit(groupBox_dictionary_strategy2);
        lineEdit_dictionaryPath->setObjectName(QString::fromUtf8("lineEdit_dictionaryPath"));

        gridLayout_18->addWidget(lineEdit_dictionaryPath, 3, 0, 1, 1);

        label_dictionaryPath = new QLabel(groupBox_dictionary_strategy2);
        label_dictionaryPath->setObjectName(QString::fromUtf8("label_dictionaryPath"));
        label_dictionaryPath->setWordWrap(true);
        label_dictionaryPath->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_18->addWidget(label_dictionaryPath, 3, 2, 1, 1);

        checkBox_dictionary_incremental = new QCheckBox(groupBox_dictionary_strategy2);
        checkBox_dictionary_incremental->setObjectName(QString::fromUtf8("checkBox_dictionary_incremental"));
        checkBox_dictionary_incremental->setChecked(true);

        gridLayout_18->addWidget(checkBox_dictionary_incremental, 1, 0, 1, 1);

        label_12 = new QLabel(groupBox_dictionary_strategy2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_18->addWidget(label_12, 5, 2, 1, 1);

        comboBox_dictionary_strategy = new QComboBox(groupBox_dictionary_strategy2);
        comboBox_dictionary_strategy->setObjectName(QString::fromUtf8("comboBox_dictionary_strategy"));
        comboBox_dictionary_strategy->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_18->addWidget(comboBox_dictionary_strategy, 5, 0, 1, 1);

        label_incrementalDict = new QLabel(groupBox_dictionary_strategy2);
        label_incrementalDict->setObjectName(QString::fromUtf8("label_incrementalDict"));
        label_incrementalDict->setWordWrap(true);
        label_incrementalDict->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_18->addWidget(label_incrementalDict, 1, 2, 1, 1);

        label_94 = new QLabel(groupBox_dictionary_strategy2);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setWordWrap(true);
        label_94->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_18->addWidget(label_94, 2, 2, 1, 1);

        checkBox_kp_parallelized = new QCheckBox(groupBox_dictionary_strategy2);
        checkBox_kp_parallelized->setObjectName(QString::fromUtf8("checkBox_kp_parallelized"));
        checkBox_kp_parallelized->setChecked(true);

        gridLayout_18->addWidget(checkBox_kp_parallelized, 2, 0, 1, 1);

        checkBox_kp_newWordsComparedTogether = new QCheckBox(groupBox_dictionary_strategy2);
        checkBox_kp_newWordsComparedTogether->setObjectName(QString::fromUtf8("checkBox_kp_newWordsComparedTogether"));
        checkBox_kp_newWordsComparedTogether->setChecked(true);

        gridLayout_18->addWidget(checkBox_kp_newWordsComparedTogether, 6, 0, 1, 1);

        label_186 = new QLabel(groupBox_dictionary_strategy2);
        label_186->setObjectName(QString::fromUtf8("label_186"));
        label_186->setWordWrap(true);
        label_186->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_18->addWidget(label_186, 6, 2, 1, 1);

        label_260 = new QLabel(groupBox_dictionary_strategy2);
        label_260->setObjectName(QString::fromUtf8("label_260"));
        label_260->setWordWrap(true);
        label_260->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_18->addWidget(label_260, 7, 2, 1, 1);

        checkBox_kp_incrementalFlann = new QCheckBox(groupBox_dictionary_strategy2);
        checkBox_kp_incrementalFlann->setObjectName(QString::fromUtf8("checkBox_kp_incrementalFlann"));
        checkBox_kp_incrementalFlann->setChecked(true);

        gridLayout_18->addWidget(checkBox_kp_incrementalFlann, 7, 0, 1, 1);

        gridLayout_18->setColumnStretch(2, 1);

        verticalLayout_12->addWidget(groupBox_dictionary_strategy2);


        verticalLayout_58->addWidget(groupBox_signature_keypoint2);

        verticalSpacer_15 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_58->addItem(verticalSpacer_15);

        stackedWidget->addWidget(page_9);
        page_24 = new QWidget();
        page_24->setObjectName(QString::fromUtf8("page_24"));
        verticalLayout_33 = new QVBoxLayout(page_24);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        groupBox_database2 = new QGroupBox(page_24);
        groupBox_database2->setObjectName(QString::fromUtf8("groupBox_database2"));
        gridLayout_11 = new QGridLayout(groupBox_database2);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        general_checkBox_keepBinaryData = new QCheckBox(groupBox_database2);
        general_checkBox_keepBinaryData->setObjectName(QString::fromUtf8("general_checkBox_keepBinaryData"));
        general_checkBox_keepBinaryData->setChecked(true);

        gridLayout_11->addWidget(general_checkBox_keepBinaryData, 0, 0, 1, 1);

        label_keepRawData = new QLabel(groupBox_database2);
        label_keepRawData->setObjectName(QString::fromUtf8("label_keepRawData"));
        label_keepRawData->setWordWrap(true);
        label_keepRawData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_keepRawData, 0, 1, 1, 1);

        checkBox_dbInMemory = new QCheckBox(groupBox_database2);
        checkBox_dbInMemory->setObjectName(QString::fromUtf8("checkBox_dbInMemory"));

        gridLayout_11->addWidget(checkBox_dbInMemory, 2, 0, 1, 1);

        spinBox_dbCacheSize = new QSpinBox(groupBox_database2);
        spinBox_dbCacheSize->setObjectName(QString::fromUtf8("spinBox_dbCacheSize"));
        spinBox_dbCacheSize->setMinimum(10);
        spinBox_dbCacheSize->setMaximum(999999);
        spinBox_dbCacheSize->setSingleStep(100);
        spinBox_dbCacheSize->setValue(2000);

        gridLayout_11->addWidget(spinBox_dbCacheSize, 3, 0, 1, 1);

        label_75 = new QLabel(groupBox_database2);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setWordWrap(true);
        label_75->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_75, 3, 1, 1, 1);

        comboBox_dbJournalMode = new QComboBox(groupBox_database2);
        comboBox_dbJournalMode->setObjectName(QString::fromUtf8("comboBox_dbJournalMode"));

        gridLayout_11->addWidget(comboBox_dbJournalMode, 4, 0, 1, 1);

        label_77 = new QLabel(groupBox_database2);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setWordWrap(true);
        label_77->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_77, 4, 1, 1, 1);

        label_74 = new QLabel(groupBox_database2);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setWordWrap(true);
        label_74->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_74, 2, 1, 1, 1);

        label_89 = new QLabel(groupBox_database2);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setWordWrap(true);
        label_89->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_89, 5, 1, 1, 1);

        label_120 = new QLabel(groupBox_database2);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        label_120->setWordWrap(true);
        label_120->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_120, 6, 1, 1, 1);

        comboBox_dbSynchronous = new QComboBox(groupBox_database2);
        comboBox_dbSynchronous->setObjectName(QString::fromUtf8("comboBox_dbSynchronous"));

        gridLayout_11->addWidget(comboBox_dbSynchronous, 5, 0, 1, 1);

        comboBox_dbTempStore = new QComboBox(groupBox_database2);
        comboBox_dbTempStore->setObjectName(QString::fromUtf8("comboBox_dbTempStore"));

        gridLayout_11->addWidget(comboBox_dbTempStore, 6, 0, 1, 1);

        label_keepRehearsed = new QLabel(groupBox_database2);
        label_keepRehearsed->setObjectName(QString::fromUtf8("label_keepRehearsed"));
        label_keepRehearsed->setWordWrap(true);
        label_keepRehearsed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_keepRehearsed, 1, 1, 1, 1);

        general_checkBox_keepNotLinkedNodes = new QCheckBox(groupBox_database2);
        general_checkBox_keepNotLinkedNodes->setObjectName(QString::fromUtf8("general_checkBox_keepNotLinkedNodes"));
        general_checkBox_keepNotLinkedNodes->setChecked(true);

        gridLayout_11->addWidget(general_checkBox_keepNotLinkedNodes, 1, 0, 1, 1);

        gridLayout_11->setColumnStretch(1, 1);

        verticalLayout_33->addWidget(groupBox_database2);

        verticalSpacer_12 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_33->addItem(verticalSpacer_12);

        stackedWidget->addWidget(page_24);
        page_23 = new QWidget();
        page_23->setObjectName(QString::fromUtf8("page_23"));
        verticalLayout_2 = new QVBoxLayout(page_23);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_bayes1 = new QGroupBox(page_23);
        groupBox_bayes1->setObjectName(QString::fromUtf8("groupBox_bayes1"));
        verticalLayout_22 = new QVBoxLayout(groupBox_bayes1);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        label = new QLabel(groupBox_bayes1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_22->addWidget(label);

        label_76 = new QLabel(groupBox_bayes1);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setWordWrap(true);
        label_76->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_22->addWidget(label_76);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        label_65 = new QLabel(groupBox_bayes1);
        label_65->setObjectName(QString::fromUtf8("label_65"));

        gridLayout_24->addWidget(label_65, 0, 0, 1, 1);

        label_66 = new QLabel(groupBox_bayes1);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        gridLayout_24->addWidget(label_66, 1, 0, 1, 1);

        label_prediction_sum = new QLabel(groupBox_bayes1);
        label_prediction_sum->setObjectName(QString::fromUtf8("label_prediction_sum"));

        gridLayout_24->addWidget(label_prediction_sum, 1, 1, 1, 1);

        lineEdit_bayes_predictionLC = new QLineEdit(groupBox_bayes1);
        lineEdit_bayes_predictionLC->setObjectName(QString::fromUtf8("lineEdit_bayes_predictionLC"));
        lineEdit_bayes_predictionLC->setReadOnly(false);

        gridLayout_24->addWidget(lineEdit_bayes_predictionLC, 0, 1, 1, 1);


        verticalLayout_22->addLayout(gridLayout_24);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_63 = new QLabel(groupBox_bayes1);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        horizontalLayout_6->addWidget(label_63);

        predictionPlot = new UPlot(groupBox_bayes1);
        predictionPlot->setObjectName(QString::fromUtf8("predictionPlot"));

        horizontalLayout_6->addWidget(predictionPlot);

        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_22->addLayout(horizontalLayout_6);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        checkBox_bayes_fullPredictionUpdate = new QCheckBox(groupBox_bayes1);
        checkBox_bayes_fullPredictionUpdate->setObjectName(QString::fromUtf8("checkBox_bayes_fullPredictionUpdate"));

        gridLayout_22->addWidget(checkBox_bayes_fullPredictionUpdate, 0, 0, 1, 1);

        general_doubleSpinBox_vp = new QDoubleSpinBox(groupBox_bayes1);
        general_doubleSpinBox_vp->setObjectName(QString::fromUtf8("general_doubleSpinBox_vp"));
        general_doubleSpinBox_vp->setMaximum(1);
        general_doubleSpinBox_vp->setSingleStep(0.01);
        general_doubleSpinBox_vp->setValue(0.9);

        gridLayout_22->addWidget(general_doubleSpinBox_vp, 1, 0, 1, 1);

        label_113 = new QLabel(groupBox_bayes1);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setWordWrap(true);
        label_113->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_113, 1, 1, 1, 1);

        label_142 = new QLabel(groupBox_bayes1);
        label_142->setObjectName(QString::fromUtf8("label_142"));
        label_142->setWordWrap(true);
        label_142->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_142, 0, 1, 1, 1);

        label_82 = new QLabel(groupBox_bayes1);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setWordWrap(true);
        label_82->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_82, 2, 1, 1, 1);

        checkBox_kp_tfIdfLikelihoodUsed = new QCheckBox(groupBox_bayes1);
        checkBox_kp_tfIdfLikelihoodUsed->setObjectName(QString::fromUtf8("checkBox_kp_tfIdfLikelihoodUsed"));
        checkBox_kp_tfIdfLikelihoodUsed->setChecked(true);

        gridLayout_22->addWidget(checkBox_kp_tfIdfLikelihoodUsed, 2, 0, 1, 1);

        gridLayout_22->setColumnStretch(1, 1);

        verticalLayout_22->addLayout(gridLayout_22);

        groupBox_vh_strategy2 = new QGroupBox(groupBox_bayes1);
        groupBox_vh_strategy2->setObjectName(QString::fromUtf8("groupBox_vh_strategy2"));
        groupBox_vh_strategy2->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(groupBox_vh_strategy2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        comboBox_vh_strategy = new QComboBox(groupBox_vh_strategy2);
        comboBox_vh_strategy->setObjectName(QString::fromUtf8("comboBox_vh_strategy"));
        comboBox_vh_strategy->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_10->addWidget(comboBox_vh_strategy, 0, 0, 1, 1);

        label_50 = new QLabel(groupBox_vh_strategy2);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_10->addWidget(label_50, 0, 1, 1, 1);

        gridLayout_10->setColumnStretch(1, 1);

        verticalLayout_3->addLayout(gridLayout_10);

        groupBox_vh_epipolar2 = new QGroupBox(groupBox_vh_strategy2);
        groupBox_vh_epipolar2->setObjectName(QString::fromUtf8("groupBox_vh_epipolar2"));
        gridLayout = new QGridLayout(groupBox_vh_epipolar2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        surf_spinBox_matchCountMinAccepted = new QSpinBox(groupBox_vh_epipolar2);
        surf_spinBox_matchCountMinAccepted->setObjectName(QString::fromUtf8("surf_spinBox_matchCountMinAccepted"));
        surf_spinBox_matchCountMinAccepted->setMinimum(8);
        surf_spinBox_matchCountMinAccepted->setMaximum(100000);
        surf_spinBox_matchCountMinAccepted->setValue(11);

        gridLayout->addWidget(surf_spinBox_matchCountMinAccepted, 0, 0, 1, 1);

        label_25 = new QLabel(groupBox_vh_epipolar2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setWordWrap(true);
        label_25->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_25, 0, 1, 1, 1);

        surf_doubleSpinBox_ransacParam1 = new QDoubleSpinBox(groupBox_vh_epipolar2);
        surf_doubleSpinBox_ransacParam1->setObjectName(QString::fromUtf8("surf_doubleSpinBox_ransacParam1"));
        surf_doubleSpinBox_ransacParam1->setDecimals(1);
        surf_doubleSpinBox_ransacParam1->setMaximum(10);
        surf_doubleSpinBox_ransacParam1->setSingleStep(0.1);
        surf_doubleSpinBox_ransacParam1->setValue(3);

        gridLayout->addWidget(surf_doubleSpinBox_ransacParam1, 1, 0, 1, 1);

        label_27 = new QLabel(groupBox_vh_epipolar2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setWordWrap(true);
        label_27->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_27, 1, 1, 1, 1);

        surf_doubleSpinBox_ransacParam2 = new QDoubleSpinBox(groupBox_vh_epipolar2);
        surf_doubleSpinBox_ransacParam2->setObjectName(QString::fromUtf8("surf_doubleSpinBox_ransacParam2"));
        surf_doubleSpinBox_ransacParam2->setDecimals(2);
        surf_doubleSpinBox_ransacParam2->setMaximum(0.99);
        surf_doubleSpinBox_ransacParam2->setSingleStep(0.01);
        surf_doubleSpinBox_ransacParam2->setValue(0.99);

        gridLayout->addWidget(surf_doubleSpinBox_ransacParam2, 2, 0, 1, 1);

        label_28 = new QLabel(groupBox_vh_epipolar2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setWordWrap(true);
        label_28->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_28, 2, 1, 1, 1);

        gridLayout->setColumnStretch(1, 10);

        verticalLayout_3->addWidget(groupBox_vh_epipolar2);


        verticalLayout_22->addWidget(groupBox_vh_strategy2);


        verticalLayout_2->addWidget(groupBox_bayes1);

        verticalSpacer_23 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_23);

        stackedWidget->addWidget(page_23);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        verticalLayout_19 = new QVBoxLayout(page_10);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        groupBox_slam1 = new QGroupBox(page_10);
        groupBox_slam1->setObjectName(QString::fromUtf8("groupBox_slam1"));
        groupBox_slam1->setCheckable(false);
        verticalLayout_25 = new QVBoxLayout(groupBox_slam1);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        general_checkBox_activateRGBD = new QCheckBox(groupBox_slam1);
        general_checkBox_activateRGBD->setObjectName(QString::fromUtf8("general_checkBox_activateRGBD"));

        horizontalLayout_4->addWidget(general_checkBox_activateRGBD);

        label_activateRGBD = new QLabel(groupBox_slam1);
        label_activateRGBD->setObjectName(QString::fromUtf8("label_activateRGBD"));
        label_activateRGBD->setWordWrap(true);
        label_activateRGBD->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(label_activateRGBD);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_25->addLayout(horizontalLayout_4);

        label_83 = new QLabel(groupBox_slam1);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setWordWrap(true);
        label_83->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_25->addWidget(label_83);

        groupBox_slam_update = new QGroupBox(groupBox_slam1);
        groupBox_slam_update->setObjectName(QString::fromUtf8("groupBox_slam_update"));
        gridLayout_47 = new QGridLayout(groupBox_slam_update);
        gridLayout_47->setObjectName(QString::fromUtf8("gridLayout_47"));
        label_152 = new QLabel(groupBox_slam_update);
        label_152->setObjectName(QString::fromUtf8("label_152"));
        label_152->setWordWrap(true);
        label_152->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_47->addWidget(label_152, 1, 1, 1, 1);

        label_space2 = new QLabel(groupBox_slam_update);
        label_space2->setObjectName(QString::fromUtf8("label_space2"));
        label_space2->setWordWrap(true);
        label_space2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_47->addWidget(label_space2, 7, 1, 1, 1);

        rgdb_localImmunizationRatio = new QDoubleSpinBox(groupBox_slam_update);
        rgdb_localImmunizationRatio->setObjectName(QString::fromUtf8("rgdb_localImmunizationRatio"));
        rgdb_localImmunizationRatio->setDecimals(2);
        rgdb_localImmunizationRatio->setMaximum(1);
        rgdb_localImmunizationRatio->setSingleStep(0.1);
        rgdb_localImmunizationRatio->setValue(0.1);

        gridLayout_47->addWidget(rgdb_localImmunizationRatio, 6, 0, 1, 1);

        rgdb_linearUpdate = new QDoubleSpinBox(groupBox_slam_update);
        rgdb_linearUpdate->setObjectName(QString::fromUtf8("rgdb_linearUpdate"));
        rgdb_linearUpdate->setDecimals(3);
        rgdb_linearUpdate->setSingleStep(0.1);

        gridLayout_47->addWidget(rgdb_linearUpdate, 0, 0, 1, 1);

        label_153 = new QLabel(groupBox_slam_update);
        label_153->setObjectName(QString::fromUtf8("label_153"));
        label_153->setWordWrap(true);
        label_153->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_47->addWidget(label_153, 0, 1, 1, 1);

        rgdb_angularUpdate = new QDoubleSpinBox(groupBox_slam_update);
        rgdb_angularUpdate->setObjectName(QString::fromUtf8("rgdb_angularUpdate"));
        rgdb_angularUpdate->setDecimals(2);
        rgdb_angularUpdate->setMaximum(3.14);
        rgdb_angularUpdate->setSingleStep(0.1);

        gridLayout_47->addWidget(rgdb_angularUpdate, 1, 0, 1, 1);

        rgdb_newMapOdomChange = new QDoubleSpinBox(groupBox_slam_update);
        rgdb_newMapOdomChange->setObjectName(QString::fromUtf8("rgdb_newMapOdomChange"));
        rgdb_newMapOdomChange->setDecimals(1);
        rgdb_newMapOdomChange->setMaximum(99);
        rgdb_newMapOdomChange->setSingleStep(0.1);
        rgdb_newMapOdomChange->setValue(1);

        gridLayout_47->addWidget(rgdb_newMapOdomChange, 2, 0, 1, 1);

        label_163 = new QLabel(groupBox_slam_update);
        label_163->setObjectName(QString::fromUtf8("label_163"));
        label_163->setWordWrap(true);
        label_163->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_47->addWidget(label_163, 2, 1, 1, 1);

        odomScanHistory = new QCheckBox(groupBox_slam_update);
        odomScanHistory->setObjectName(QString::fromUtf8("odomScanHistory"));

        gridLayout_47->addWidget(odomScanHistory, 3, 0, 1, 1);

        label_scanMatching = new QLabel(groupBox_slam_update);
        label_scanMatching->setObjectName(QString::fromUtf8("label_scanMatching"));
        label_scanMatching->setWordWrap(true);
        label_scanMatching->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_47->addWidget(label_scanMatching, 3, 1, 1, 1);

        label_scanMatching_3 = new QLabel(groupBox_slam_update);
        label_scanMatching_3->setObjectName(QString::fromUtf8("label_scanMatching_3"));
        label_scanMatching_3->setWordWrap(true);
        label_scanMatching_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_47->addWidget(label_scanMatching_3, 5, 1, 1, 1);

        spinBox_maxLocalLocationsRetrieved = new QSpinBox(groupBox_slam_update);
        spinBox_maxLocalLocationsRetrieved->setObjectName(QString::fromUtf8("spinBox_maxLocalLocationsRetrieved"));

        gridLayout_47->addWidget(spinBox_maxLocalLocationsRetrieved, 5, 0, 1, 1);

        localDetection_radius = new QDoubleSpinBox(groupBox_slam_update);
        localDetection_radius->setObjectName(QString::fromUtf8("localDetection_radius"));
        localDetection_radius->setValue(1);

        gridLayout_47->addWidget(localDetection_radius, 7, 0, 1, 1);

        label_scanMatching_5 = new QLabel(groupBox_slam_update);
        label_scanMatching_5->setObjectName(QString::fromUtf8("label_scanMatching_5"));
        label_scanMatching_5->setWordWrap(true);
        label_scanMatching_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_47->addWidget(label_scanMatching_5, 6, 1, 1, 1);

        label_scanMatching_9 = new QLabel(groupBox_slam_update);
        label_scanMatching_9->setObjectName(QString::fromUtf8("label_scanMatching_9"));
        label_scanMatching_9->setWordWrap(true);
        label_scanMatching_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_47->addWidget(label_scanMatching_9, 4, 1, 1, 1);

        loopClosure_reextract = new QCheckBox(groupBox_slam_update);
        loopClosure_reextract->setObjectName(QString::fromUtf8("loopClosure_reextract"));

        gridLayout_47->addWidget(loopClosure_reextract, 4, 0, 1, 1);

        gridLayout_47->setColumnStretch(1, 1);

        verticalLayout_25->addWidget(groupBox_slam_update);


        verticalLayout_19->addWidget(groupBox_slam1);

        verticalSpacer_11 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_11);

        stackedWidget->addWidget(page_10);
        page_28 = new QWidget();
        page_28->setObjectName(QString::fromUtf8("page_28"));
        verticalLayout_95 = new QVBoxLayout(page_28);
        verticalLayout_95->setObjectName(QString::fromUtf8("verticalLayout_95"));
        groupBox_proximityDetection2 = new QGroupBox(page_28);
        groupBox_proximityDetection2->setObjectName(QString::fromUtf8("groupBox_proximityDetection2"));
        verticalLayout_96 = new QVBoxLayout(groupBox_proximityDetection2);
        verticalLayout_96->setObjectName(QString::fromUtf8("verticalLayout_96"));
        groupBox_localDetection_time = new QGroupBox(groupBox_proximityDetection2);
        groupBox_localDetection_time->setObjectName(QString::fromUtf8("groupBox_localDetection_time"));
        groupBox_localDetection_time->setCheckable(true);
        verticalLayout_21 = new QVBoxLayout(groupBox_localDetection_time);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        label_54 = new QLabel(groupBox_localDetection_time);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setWordWrap(true);
        label_54->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_21->addWidget(label_54);


        verticalLayout_96->addWidget(groupBox_localDetection_time);

        groupBox_localDetection_space = new QGroupBox(groupBox_proximityDetection2);
        groupBox_localDetection_space->setObjectName(QString::fromUtf8("groupBox_localDetection_space"));
        groupBox_localDetection_space->setCheckable(true);
        verticalLayout_48 = new QVBoxLayout(groupBox_localDetection_space);
        verticalLayout_48->setObjectName(QString::fromUtf8("verticalLayout_48"));
        label_space1_2 = new QLabel(groupBox_localDetection_space);
        label_space1_2->setObjectName(QString::fromUtf8("label_space1_2"));
        label_space1_2->setWordWrap(true);
        label_space1_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_48->addWidget(label_space1_2);

        gridLayout_50 = new QGridLayout();
        gridLayout_50->setObjectName(QString::fromUtf8("gridLayout_50"));
        localDetection_pathFilteringRadius = new QDoubleSpinBox(groupBox_localDetection_space);
        localDetection_pathFilteringRadius->setObjectName(QString::fromUtf8("localDetection_pathFilteringRadius"));
        localDetection_pathFilteringRadius->setDecimals(2);
        localDetection_pathFilteringRadius->setSingleStep(0.1);
        localDetection_pathFilteringRadius->setValue(1);

        gridLayout_50->addWidget(localDetection_pathFilteringRadius, 3, 0, 1, 1);

        label_space3_3 = new QLabel(groupBox_localDetection_space);
        label_space3_3->setObjectName(QString::fromUtf8("label_space3_3"));
        label_space3_3->setWordWrap(true);
        label_space3_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_50->addWidget(label_space3_3, 3, 1, 1, 1);

        label_scanMatching_4 = new QLabel(groupBox_localDetection_space);
        label_scanMatching_4->setObjectName(QString::fromUtf8("label_scanMatching_4"));
        label_scanMatching_4->setWordWrap(true);
        label_scanMatching_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_50->addWidget(label_scanMatching_4, 4, 1, 1, 1);

        checkBox_localSpacePathOdomPosesUsed = new QCheckBox(groupBox_localDetection_space);
        checkBox_localSpacePathOdomPosesUsed->setObjectName(QString::fromUtf8("checkBox_localSpacePathOdomPosesUsed"));

        gridLayout_50->addWidget(checkBox_localSpacePathOdomPosesUsed, 4, 0, 1, 1);

        localDetection_maxDiffID = new QSpinBox(groupBox_localDetection_space);
        localDetection_maxDiffID->setObjectName(QString::fromUtf8("localDetection_maxDiffID"));
        localDetection_maxDiffID->setMaximum(999);
        localDetection_maxDiffID->setValue(0);

        gridLayout_50->addWidget(localDetection_maxDiffID, 0, 0, 1, 1);

        label_space3_2 = new QLabel(groupBox_localDetection_space);
        label_space3_2->setObjectName(QString::fromUtf8("label_space3_2"));
        label_space3_2->setWordWrap(true);
        label_space3_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_50->addWidget(label_space3_2, 0, 1, 1, 1);

        label_scanMatching_6 = new QLabel(groupBox_localDetection_space);
        label_scanMatching_6->setObjectName(QString::fromUtf8("label_scanMatching_6"));
        label_scanMatching_6->setWordWrap(true);
        label_scanMatching_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_50->addWidget(label_scanMatching_6, 6, 1, 1, 1);

        checkBox_localSpaceScanMatchingIDsSaved = new QCheckBox(groupBox_localDetection_space);
        checkBox_localSpaceScanMatchingIDsSaved->setObjectName(QString::fromUtf8("checkBox_localSpaceScanMatchingIDsSaved"));

        gridLayout_50->addWidget(checkBox_localSpaceScanMatchingIDsSaved, 6, 0, 1, 1);

        label_scanMatching_7 = new QLabel(groupBox_localDetection_space);
        label_scanMatching_7->setObjectName(QString::fromUtf8("label_scanMatching_7"));
        label_scanMatching_7->setWordWrap(true);
        label_scanMatching_7->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_50->addWidget(label_scanMatching_7, 2, 1, 1, 1);

        checkBox_localSpaceAssembleScans = new QCheckBox(groupBox_localDetection_space);
        checkBox_localSpaceAssembleScans->setObjectName(QString::fromUtf8("checkBox_localSpaceAssembleScans"));

        gridLayout_50->addWidget(checkBox_localSpaceAssembleScans, 2, 0, 1, 1);

        label_scanMatching_8 = new QLabel(groupBox_localDetection_space);
        label_scanMatching_8->setObjectName(QString::fromUtf8("label_scanMatching_8"));
        label_scanMatching_8->setWordWrap(true);
        label_scanMatching_8->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_50->addWidget(label_scanMatching_8, 1, 1, 1, 1);

        localDetection_angle = new QDoubleSpinBox(groupBox_localDetection_space);
        localDetection_angle->setObjectName(QString::fromUtf8("localDetection_angle"));
        localDetection_angle->setDecimals(0);
        localDetection_angle->setMaximum(360);
        localDetection_angle->setSingleStep(10);

        gridLayout_50->addWidget(localDetection_angle, 1, 0, 1, 1);

        gridLayout_50->setColumnStretch(1, 1);

        verticalLayout_48->addLayout(gridLayout_50);


        verticalLayout_96->addWidget(groupBox_localDetection_space);


        verticalLayout_95->addWidget(groupBox_proximityDetection2);

        verticalSpacer_49 = new QSpacerItem(20, 1396, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_95->addItem(verticalSpacer_49);

        stackedWidget->addWidget(page_28);
        page_19 = new QWidget();
        page_19->setObjectName(QString::fromUtf8("page_19"));
        verticalLayout_94 = new QVBoxLayout(page_19);
        verticalLayout_94->setObjectName(QString::fromUtf8("verticalLayout_94"));
        groupBox_graphOptimization2 = new QGroupBox(page_19);
        groupBox_graphOptimization2->setObjectName(QString::fromUtf8("groupBox_graphOptimization2"));
        gridLayout_49 = new QGridLayout(groupBox_graphOptimization2);
        gridLayout_49->setObjectName(QString::fromUtf8("gridLayout_49"));
        graphOptimization_type = new QComboBox(groupBox_graphOptimization2);
        graphOptimization_type->setObjectName(QString::fromUtf8("graphOptimization_type"));

        gridLayout_49->addWidget(graphOptimization_type, 0, 0, 1, 1);

        graphOptimization_iterations = new QSpinBox(groupBox_graphOptimization2);
        graphOptimization_iterations->setObjectName(QString::fromUtf8("graphOptimization_iterations"));
        graphOptimization_iterations->setMinimum(0);
        graphOptimization_iterations->setMaximum(10000);
        graphOptimization_iterations->setValue(100);

        gridLayout_49->addWidget(graphOptimization_iterations, 2, 0, 1, 1);

        graphOptimization_covarianceIgnored = new QCheckBox(groupBox_graphOptimization2);
        graphOptimization_covarianceIgnored->setObjectName(QString::fromUtf8("graphOptimization_covarianceIgnored"));

        gridLayout_49->addWidget(graphOptimization_covarianceIgnored, 4, 0, 1, 1);

        graphOptimization_fromGraphEnd = new QCheckBox(groupBox_graphOptimization2);
        graphOptimization_fromGraphEnd->setObjectName(QString::fromUtf8("graphOptimization_fromGraphEnd"));

        gridLayout_49->addWidget(graphOptimization_fromGraphEnd, 9, 0, 1, 1);

        label_151 = new QLabel(groupBox_graphOptimization2);
        label_151->setObjectName(QString::fromUtf8("label_151"));
        label_151->setWordWrap(true);
        label_151->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_151, 9, 1, 1, 1);

        line = new QFrame(groupBox_graphOptimization2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_49->addWidget(line, 8, 1, 1, 1);

        graphOptimization_slam2d = new QCheckBox(groupBox_graphOptimization2);
        graphOptimization_slam2d->setObjectName(QString::fromUtf8("graphOptimization_slam2d"));

        gridLayout_49->addWidget(graphOptimization_slam2d, 5, 0, 1, 1);

        label_164 = new QLabel(groupBox_graphOptimization2);
        label_164->setObjectName(QString::fromUtf8("label_164"));
        label_164->setWordWrap(true);
        label_164->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_164, 5, 1, 1, 1);

        label_45 = new QLabel(groupBox_graphOptimization2);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_45, 0, 1, 1, 1);

        label_183 = new QLabel(groupBox_graphOptimization2);
        label_183->setObjectName(QString::fromUtf8("label_183"));
        label_183->setWordWrap(true);
        label_183->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_183, 11, 1, 1, 1);

        label_211 = new QLabel(groupBox_graphOptimization2);
        label_211->setObjectName(QString::fromUtf8("label_211"));
        label_211->setWordWrap(true);
        label_211->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_211, 10, 1, 1, 1);

        label_31 = new QLabel(groupBox_graphOptimization2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_31, 2, 1, 1, 1);

        label_64 = new QLabel(groupBox_graphOptimization2);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_64, 3, 1, 1, 1);

        graphOptimization_stopEpsilon = new QDoubleSpinBox(groupBox_graphOptimization2);
        graphOptimization_stopEpsilon->setObjectName(QString::fromUtf8("graphOptimization_stopEpsilon"));
        graphOptimization_stopEpsilon->setDecimals(5);
        graphOptimization_stopEpsilon->setMinimum(0);
        graphOptimization_stopEpsilon->setMaximum(1);
        graphOptimization_stopEpsilon->setSingleStep(0.001);
        graphOptimization_stopEpsilon->setValue(0.001);

        gridLayout_49->addWidget(graphOptimization_stopEpsilon, 3, 0, 1, 1);

        label_141 = new QLabel(groupBox_graphOptimization2);
        label_141->setObjectName(QString::fromUtf8("label_141"));
        label_141->setWordWrap(true);
        label_141->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_141, 4, 1, 1, 1);

        graphOptimization_robust = new QCheckBox(groupBox_graphOptimization2);
        graphOptimization_robust->setObjectName(QString::fromUtf8("graphOptimization_robust"));

        gridLayout_49->addWidget(graphOptimization_robust, 6, 0, 1, 1);

        label_258 = new QLabel(groupBox_graphOptimization2);
        label_258->setObjectName(QString::fromUtf8("label_258"));
        label_258->setWordWrap(true);
        label_258->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_258, 6, 1, 1, 1);

        graphOptimization_maxError = new QDoubleSpinBox(groupBox_graphOptimization2);
        graphOptimization_maxError->setObjectName(QString::fromUtf8("graphOptimization_maxError"));
        graphOptimization_maxError->setDecimals(2);
        graphOptimization_maxError->setMinimum(0);
        graphOptimization_maxError->setMaximum(100);
        graphOptimization_maxError->setSingleStep(1);
        graphOptimization_maxError->setValue(1);

        gridLayout_49->addWidget(graphOptimization_maxError, 7, 0, 1, 1);

        label_259 = new QLabel(groupBox_graphOptimization2);
        label_259->setObjectName(QString::fromUtf8("label_259"));
        label_259->setWordWrap(true);
        label_259->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_49->addWidget(label_259, 7, 1, 1, 1);

        groupBox_g2o = new QGroupBox(groupBox_graphOptimization2);
        groupBox_g2o->setObjectName(QString::fromUtf8("groupBox_g2o"));
        gridLayout_70 = new QGridLayout(groupBox_g2o);
        gridLayout_70->setObjectName(QString::fromUtf8("gridLayout_70"));
        comboBox_g2o_optimizer = new QComboBox(groupBox_g2o);
        comboBox_g2o_optimizer->setObjectName(QString::fromUtf8("comboBox_g2o_optimizer"));

        gridLayout_70->addWidget(comboBox_g2o_optimizer, 1, 0, 1, 1);

        comboBox_g2o_solver = new QComboBox(groupBox_g2o);
        comboBox_g2o_solver->setObjectName(QString::fromUtf8("comboBox_g2o_solver"));

        gridLayout_70->addWidget(comboBox_g2o_solver, 0, 0, 1, 1);

        label_107 = new QLabel(groupBox_g2o);
        label_107->setObjectName(QString::fromUtf8("label_107"));

        gridLayout_70->addWidget(label_107, 0, 1, 1, 1);

        label_138 = new QLabel(groupBox_g2o);
        label_138->setObjectName(QString::fromUtf8("label_138"));

        gridLayout_70->addWidget(label_138, 1, 1, 1, 1);

        doubleSpinBox_g2o_variance = new QDoubleSpinBox(groupBox_g2o);
        doubleSpinBox_g2o_variance->setObjectName(QString::fromUtf8("doubleSpinBox_g2o_variance"));
        doubleSpinBox_g2o_variance->setEnabled(false);
        doubleSpinBox_g2o_variance->setDecimals(4);
        doubleSpinBox_g2o_variance->setMinimum(0.0001);
        doubleSpinBox_g2o_variance->setMaximum(10);
        doubleSpinBox_g2o_variance->setValue(1);

        gridLayout_70->addWidget(doubleSpinBox_g2o_variance, 2, 0, 1, 1);

        label_148 = new QLabel(groupBox_g2o);
        label_148->setObjectName(QString::fromUtf8("label_148"));
        label_148->setEnabled(false);

        gridLayout_70->addWidget(label_148, 2, 1, 1, 1);

        gridLayout_70->setColumnStretch(1, 1);

        gridLayout_49->addWidget(groupBox_g2o, 1, 1, 1, 1);

        gridLayout_49->setColumnStretch(1, 1);

        verticalLayout_94->addWidget(groupBox_graphOptimization2);

        verticalSpacer_48 = new QSpacerItem(20, 1338, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_94->addItem(verticalSpacer_48);

        stackedWidget->addWidget(page_19);
        page_30 = new QWidget();
        page_30->setObjectName(QString::fromUtf8("page_30"));
        verticalLayout_97 = new QVBoxLayout(page_30);
        verticalLayout_97->setObjectName(QString::fromUtf8("verticalLayout_97"));
        groupBox_pathPlanning2 = new QGroupBox(page_30);
        groupBox_pathPlanning2->setObjectName(QString::fromUtf8("groupBox_pathPlanning2"));
        verticalLayout_61 = new QVBoxLayout(groupBox_pathPlanning2);
        verticalLayout_61->setObjectName(QString::fromUtf8("verticalLayout_61"));
        label_space2_3 = new QLabel(groupBox_pathPlanning2);
        label_space2_3->setObjectName(QString::fromUtf8("label_space2_3"));
        label_space2_3->setWordWrap(true);
        label_space2_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_61->addWidget(label_space2_3);

        gridLayout_51 = new QGridLayout();
        gridLayout_51->setObjectName(QString::fromUtf8("gridLayout_51"));
        graphPlan_goalReachedRadius = new QDoubleSpinBox(groupBox_pathPlanning2);
        graphPlan_goalReachedRadius->setObjectName(QString::fromUtf8("graphPlan_goalReachedRadius"));
        graphPlan_goalReachedRadius->setValue(1);

        gridLayout_51->addWidget(graphPlan_goalReachedRadius, 0, 0, 1, 1);

        label_space2_2 = new QLabel(groupBox_pathPlanning2);
        label_space2_2->setObjectName(QString::fromUtf8("label_space2_2"));
        label_space2_2->setWordWrap(true);
        label_space2_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_51->addWidget(label_space2_2, 0, 1, 1, 1);

        label_space3_5 = new QLabel(groupBox_pathPlanning2);
        label_space3_5->setObjectName(QString::fromUtf8("label_space3_5"));
        label_space3_5->setWordWrap(true);
        label_space3_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_51->addWidget(label_space3_5, 2, 1, 1, 1);

        graphPlan_goalsSavedInUserData = new QCheckBox(groupBox_pathPlanning2);
        graphPlan_goalsSavedInUserData->setObjectName(QString::fromUtf8("graphPlan_goalsSavedInUserData"));

        gridLayout_51->addWidget(graphPlan_goalsSavedInUserData, 2, 0, 1, 1);

        label_space2_4 = new QLabel(groupBox_pathPlanning2);
        label_space2_4->setObjectName(QString::fromUtf8("label_space2_4"));
        label_space2_4->setWordWrap(true);
        label_space2_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_51->addWidget(label_space2_4, 1, 1, 1, 1);

        graphPlan_stuckIterations = new QSpinBox(groupBox_pathPlanning2);
        graphPlan_stuckIterations->setObjectName(QString::fromUtf8("graphPlan_stuckIterations"));
        graphPlan_stuckIterations->setMaximum(9999);

        gridLayout_51->addWidget(graphPlan_stuckIterations, 1, 0, 1, 1);

        graphPlan_linearVelocity = new QDoubleSpinBox(groupBox_pathPlanning2);
        graphPlan_linearVelocity->setObjectName(QString::fromUtf8("graphPlan_linearVelocity"));
        graphPlan_linearVelocity->setSingleStep(0.1);
        graphPlan_linearVelocity->setValue(0);

        gridLayout_51->addWidget(graphPlan_linearVelocity, 3, 0, 1, 1);

        graphPlan_angularVelocity = new QDoubleSpinBox(groupBox_pathPlanning2);
        graphPlan_angularVelocity->setObjectName(QString::fromUtf8("graphPlan_angularVelocity"));
        graphPlan_angularVelocity->setMaximum(10);
        graphPlan_angularVelocity->setValue(0);

        gridLayout_51->addWidget(graphPlan_angularVelocity, 4, 0, 1, 1);

        label_space3_6 = new QLabel(groupBox_pathPlanning2);
        label_space3_6->setObjectName(QString::fromUtf8("label_space3_6"));
        label_space3_6->setWordWrap(true);
        label_space3_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_51->addWidget(label_space3_6, 3, 1, 1, 1);

        label_space3_7 = new QLabel(groupBox_pathPlanning2);
        label_space3_7->setObjectName(QString::fromUtf8("label_space3_7"));
        label_space3_7->setWordWrap(true);
        label_space3_7->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_51->addWidget(label_space3_7, 4, 1, 1, 1);

        gridLayout_51->setColumnStretch(1, 1);

        verticalLayout_61->addLayout(gridLayout_51);


        verticalLayout_97->addWidget(groupBox_pathPlanning2);

        verticalSpacer_50 = new QSpacerItem(20, 1529, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_97->addItem(verticalSpacer_50);

        stackedWidget->addWidget(page_30);
        page_12 = new QWidget();
        page_12->setObjectName(QString::fromUtf8("page_12"));
        verticalLayout_32 = new QVBoxLayout(page_12);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        groupBox_odometry1 = new QGroupBox(page_12);
        groupBox_odometry1->setObjectName(QString::fromUtf8("groupBox_odometry1"));
        verticalLayout_34 = new QVBoxLayout(groupBox_odometry1);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        label_114 = new QLabel(groupBox_odometry1);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setWordWrap(true);
        label_114->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_34->addWidget(label_114);

        gridLayout_27 = new QGridLayout();
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        odom_flow_keyframeThr = new QDoubleSpinBox(groupBox_odometry1);
        odom_flow_keyframeThr->setObjectName(QString::fromUtf8("odom_flow_keyframeThr"));
        odom_flow_keyframeThr->setMaximum(1);
        odom_flow_keyframeThr->setSingleStep(0.1);
        odom_flow_keyframeThr->setValue(0.5);

        gridLayout_27->addWidget(odom_flow_keyframeThr, 8, 0, 1, 1);

        odom_flow_guessMotion = new QCheckBox(groupBox_odometry1);
        odom_flow_guessMotion->setObjectName(QString::fromUtf8("odom_flow_guessMotion"));

        gridLayout_27->addWidget(odom_flow_guessMotion, 6, 0, 1, 1);

        label_233 = new QLabel(groupBox_odometry1);
        label_233->setObjectName(QString::fromUtf8("label_233"));
        label_233->setWordWrap(true);
        label_233->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_233, 4, 1, 1, 1);

        odom_fillInfoData = new QCheckBox(groupBox_odometry1);
        odom_fillInfoData->setObjectName(QString::fromUtf8("odom_fillInfoData"));

        gridLayout_27->addWidget(odom_fillInfoData, 5, 0, 1, 1);

        label_103 = new QLabel(groupBox_odometry1);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        label_103->setWordWrap(true);
        label_103->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_103, 0, 1, 1, 1);

        odom_holonomic = new QCheckBox(groupBox_odometry1);
        odom_holonomic->setObjectName(QString::fromUtf8("odom_holonomic"));

        gridLayout_27->addWidget(odom_holonomic, 3, 0, 1, 1);

        odom_dataBufferSize = new QSpinBox(groupBox_odometry1);
        odom_dataBufferSize->setObjectName(QString::fromUtf8("odom_dataBufferSize"));
        odom_dataBufferSize->setMaximum(999999);

        gridLayout_27->addWidget(odom_dataBufferSize, 10, 0, 1, 1);

        label_238 = new QLabel(groupBox_odometry1);
        label_238->setObjectName(QString::fromUtf8("label_238"));
        label_238->setWordWrap(true);
        label_238->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_238, 3, 1, 1, 1);

        odom_strategy = new QComboBox(groupBox_odometry1);
        odom_strategy->setObjectName(QString::fromUtf8("odom_strategy"));
        odom_strategy->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_27->addWidget(odom_strategy, 0, 0, 1, 1);

        pushButton_testOdometry = new QPushButton(groupBox_odometry1);
        pushButton_testOdometry->setObjectName(QString::fromUtf8("pushButton_testOdometry"));

        gridLayout_27->addWidget(pushButton_testOdometry, 11, 0, 1, 1);

        label_221 = new QLabel(groupBox_odometry1);
        label_221->setObjectName(QString::fromUtf8("label_221"));
        label_221->setWordWrap(true);
        label_221->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_221, 5, 1, 1, 1);

        label_232 = new QLabel(groupBox_odometry1);
        label_232->setObjectName(QString::fromUtf8("label_232"));
        label_232->setWordWrap(true);
        label_232->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_232, 10, 1, 1, 1);

        label_47 = new QLabel(groupBox_odometry1);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setWordWrap(true);
        label_47->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_47, 2, 1, 1, 1);

        odom_countdown = new QSpinBox(groupBox_odometry1);
        odom_countdown->setObjectName(QString::fromUtf8("odom_countdown"));
        odom_countdown->setMaximum(999999);

        gridLayout_27->addWidget(odom_countdown, 2, 0, 1, 1);

        odom_filteringStrategy = new QComboBox(groupBox_odometry1);
        odom_filteringStrategy->setObjectName(QString::fromUtf8("odom_filteringStrategy"));
        odom_filteringStrategy->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_27->addWidget(odom_filteringStrategy, 4, 0, 1, 1);

        label_198 = new QLabel(groupBox_odometry1);
        label_198->setObjectName(QString::fromUtf8("label_198"));
        label_198->setWordWrap(true);
        label_198->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_198, 6, 1, 1, 1);

        label_196 = new QLabel(groupBox_odometry1);
        label_196->setObjectName(QString::fromUtf8("label_196"));
        label_196->setWordWrap(true);
        label_196->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_196, 8, 1, 1, 1);

        label_246 = new QLabel(groupBox_odometry1);
        label_246->setObjectName(QString::fromUtf8("label_246"));
        label_246->setWordWrap(true);
        label_246->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_246, 9, 1, 1, 1);

        odom_flow_scanKeyframeThr = new QDoubleSpinBox(groupBox_odometry1);
        odom_flow_scanKeyframeThr->setObjectName(QString::fromUtf8("odom_flow_scanKeyframeThr"));
        odom_flow_scanKeyframeThr->setMaximum(1);
        odom_flow_scanKeyframeThr->setSingleStep(0.1);
        odom_flow_scanKeyframeThr->setValue(0.5);

        gridLayout_27->addWidget(odom_flow_scanKeyframeThr, 9, 0, 1, 1);

        label_248 = new QLabel(groupBox_odometry1);
        label_248->setObjectName(QString::fromUtf8("label_248"));
        label_248->setWordWrap(true);
        label_248->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_27->addWidget(label_248, 7, 1, 1, 1);

        odom_imageDecimation = new QSpinBox(groupBox_odometry1);
        odom_imageDecimation->setObjectName(QString::fromUtf8("odom_imageDecimation"));
        odom_imageDecimation->setMinimum(1);

        gridLayout_27->addWidget(odom_imageDecimation, 7, 0, 1, 1);

        gridLayout_27->setColumnStretch(1, 1);

        verticalLayout_34->addLayout(gridLayout_27);

        stackedWidget_odometryType = new QStackedWidget(groupBox_odometry1);
        stackedWidget_odometryType->setObjectName(QString::fromUtf8("stackedWidget_odometryType"));
        page_52 = new QWidget();
        page_52->setObjectName(QString::fromUtf8("page_52"));
        verticalLayout_77 = new QVBoxLayout(page_52);
        verticalLayout_77->setObjectName(QString::fromUtf8("verticalLayout_77"));
        groupBox_odometryBOW2 = new QGroupBox(page_52);
        groupBox_odometryBOW2->setObjectName(QString::fromUtf8("groupBox_odometryBOW2"));
        verticalLayout_54 = new QVBoxLayout(groupBox_odometryBOW2);
        verticalLayout_54->setObjectName(QString::fromUtf8("verticalLayout_54"));
        label_226 = new QLabel(groupBox_odometryBOW2);
        label_226->setObjectName(QString::fromUtf8("label_226"));
        label_226->setWordWrap(true);
        label_226->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_54->addWidget(label_226);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        label_195 = new QLabel(groupBox_odometryBOW2);
        label_195->setObjectName(QString::fromUtf8("label_195"));
        label_195->setWordWrap(true);
        label_195->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_29->addWidget(label_195, 2, 2, 1, 1);

        odom_fixedLocalMapPath = new QLineEdit(groupBox_odometryBOW2);
        odom_fixedLocalMapPath->setObjectName(QString::fromUtf8("odom_fixedLocalMapPath"));

        gridLayout_29->addWidget(odom_fixedLocalMapPath, 4, 0, 1, 1);

        label_239 = new QLabel(groupBox_odometryBOW2);
        label_239->setObjectName(QString::fromUtf8("label_239"));
        label_239->setWordWrap(true);
        label_239->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_29->addWidget(label_239, 4, 2, 1, 1);

        label_190 = new QLabel(groupBox_odometryBOW2);
        label_190->setObjectName(QString::fromUtf8("label_190"));
        label_190->setWordWrap(true);
        label_190->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_29->addWidget(label_190, 0, 2, 1, 1);

        odom_localHistory = new QSpinBox(groupBox_odometryBOW2);
        odom_localHistory->setObjectName(QString::fromUtf8("odom_localHistory"));
        odom_localHistory->setMinimum(0);
        odom_localHistory->setMaximum(999999999);
        odom_localHistory->setSingleStep(1);
        odom_localHistory->setValue(0);

        gridLayout_29->addWidget(odom_localHistory, 0, 0, 1, 1);

        toolButton_odomBowFixedLocalMap = new QToolButton(groupBox_odometryBOW2);
        toolButton_odomBowFixedLocalMap->setObjectName(QString::fromUtf8("toolButton_odomBowFixedLocalMap"));

        gridLayout_29->addWidget(toolButton_odomBowFixedLocalMap, 4, 1, 1, 1);

        label_194 = new QLabel(groupBox_odometryBOW2);
        label_194->setObjectName(QString::fromUtf8("label_194"));
        label_194->setWordWrap(true);
        label_194->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_29->addWidget(label_194, 1, 2, 1, 1);

        spinBox_odom_f2m_maxNewFeatures = new QSpinBox(groupBox_odometryBOW2);
        spinBox_odom_f2m_maxNewFeatures->setObjectName(QString::fromUtf8("spinBox_odom_f2m_maxNewFeatures"));
        spinBox_odom_f2m_maxNewFeatures->setMinimum(0);
        spinBox_odom_f2m_maxNewFeatures->setMaximum(999999);
        spinBox_odom_f2m_maxNewFeatures->setSingleStep(1);
        spinBox_odom_f2m_maxNewFeatures->setValue(0);

        gridLayout_29->addWidget(spinBox_odom_f2m_maxNewFeatures, 1, 0, 1, 1);

        label_215 = new QLabel(groupBox_odometryBOW2);
        label_215->setObjectName(QString::fromUtf8("label_215"));
        label_215->setWordWrap(true);
        label_215->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_29->addWidget(label_215, 3, 2, 1, 1);

        doubleSpinBox_odom_f2m_scanRadius = new QDoubleSpinBox(groupBox_odometryBOW2);
        doubleSpinBox_odom_f2m_scanRadius->setObjectName(QString::fromUtf8("doubleSpinBox_odom_f2m_scanRadius"));
        doubleSpinBox_odom_f2m_scanRadius->setDecimals(3);
        doubleSpinBox_odom_f2m_scanRadius->setValue(0.025);

        gridLayout_29->addWidget(doubleSpinBox_odom_f2m_scanRadius, 3, 0, 1, 1);

        spinBox_odom_f2m_scanMaxSize = new QSpinBox(groupBox_odometryBOW2);
        spinBox_odom_f2m_scanMaxSize->setObjectName(QString::fromUtf8("spinBox_odom_f2m_scanMaxSize"));
        spinBox_odom_f2m_scanMaxSize->setMaximum(999999999);

        gridLayout_29->addWidget(spinBox_odom_f2m_scanMaxSize, 2, 0, 1, 1);

        gridLayout_29->setColumnStretch(2, 1);

        verticalLayout_54->addLayout(gridLayout_29);

        verticalSpacer_46 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_54->addItem(verticalSpacer_46);


        verticalLayout_77->addWidget(groupBox_odometryBOW2);

        stackedWidget_odometryType->addWidget(page_52);
        page_58 = new QWidget();
        page_58->setObjectName(QString::fromUtf8("page_58"));
        verticalLayout_55 = new QVBoxLayout(page_58);
        verticalLayout_55->setObjectName(QString::fromUtf8("verticalLayout_55"));
        groupBox_odometryFlow2 = new QGroupBox(page_58);
        groupBox_odometryFlow2->setObjectName(QString::fromUtf8("groupBox_odometryFlow2"));
        verticalLayout_53 = new QVBoxLayout(groupBox_odometryFlow2);
        verticalLayout_53->setObjectName(QString::fromUtf8("verticalLayout_53"));
        label_199 = new QLabel(groupBox_odometryFlow2);
        label_199->setObjectName(QString::fromUtf8("label_199"));
        label_199->setWordWrap(true);
        label_199->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_53->addWidget(label_199);

        verticalSpacer_43 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_53->addItem(verticalSpacer_43);


        verticalLayout_55->addWidget(groupBox_odometryFlow2);

        stackedWidget_odometryType->addWidget(page_58);
        page_26 = new QWidget();
        page_26->setObjectName(QString::fromUtf8("page_26"));
        verticalLayout_88 = new QVBoxLayout(page_26);
        verticalLayout_88->setObjectName(QString::fromUtf8("verticalLayout_88"));
        groupBox_odometryMono2 = new QGroupBox(page_26);
        groupBox_odometryMono2->setObjectName(QString::fromUtf8("groupBox_odometryMono2"));
        verticalLayout_168 = new QVBoxLayout(groupBox_odometryMono2);
        verticalLayout_168->setObjectName(QString::fromUtf8("verticalLayout_168"));
        label_672 = new QLabel(groupBox_odometryMono2);
        label_672->setObjectName(QString::fromUtf8("label_672"));
        label_672->setWordWrap(true);
        label_672->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_168->addWidget(label_672);

        label_661 = new QLabel(groupBox_odometryMono2);
        label_661->setObjectName(QString::fromUtf8("label_661"));
        label_661->setWordWrap(true);
        label_661->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_168->addWidget(label_661);

        gridLayout_166 = new QGridLayout();
        gridLayout_166->setObjectName(QString::fromUtf8("gridLayout_166"));
        doubleSpinBox_minFlow = new QDoubleSpinBox(groupBox_odometryMono2);
        doubleSpinBox_minFlow->setObjectName(QString::fromUtf8("doubleSpinBox_minFlow"));
        doubleSpinBox_minFlow->setDecimals(0);
        doubleSpinBox_minFlow->setMaximum(1000);
        doubleSpinBox_minFlow->setSingleStep(10);
        doubleSpinBox_minFlow->setValue(100);

        gridLayout_166->addWidget(doubleSpinBox_minFlow, 0, 0, 1, 1);

        label_659 = new QLabel(groupBox_odometryMono2);
        label_659->setObjectName(QString::fromUtf8("label_659"));
        label_659->setWordWrap(true);
        label_659->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_166->addWidget(label_659, 0, 1, 1, 1);

        doubleSpinBox_minTranslation = new QDoubleSpinBox(groupBox_odometryMono2);
        doubleSpinBox_minTranslation->setObjectName(QString::fromUtf8("doubleSpinBox_minTranslation"));
        doubleSpinBox_minTranslation->setMinimum(0);
        doubleSpinBox_minTranslation->setSingleStep(0.01);
        doubleSpinBox_minTranslation->setValue(0.02);

        gridLayout_166->addWidget(doubleSpinBox_minTranslation, 2, 0, 1, 1);

        label_660 = new QLabel(groupBox_odometryMono2);
        label_660->setObjectName(QString::fromUtf8("label_660"));
        label_660->setWordWrap(true);
        label_660->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_166->addWidget(label_660, 2, 1, 1, 1);

        label_662 = new QLabel(groupBox_odometryMono2);
        label_662->setObjectName(QString::fromUtf8("label_662"));
        label_662->setWordWrap(true);
        label_662->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_166->addWidget(label_662, 1, 1, 1, 1);

        doubleSpinBox_minInitTranslation = new QDoubleSpinBox(groupBox_odometryMono2);
        doubleSpinBox_minInitTranslation->setObjectName(QString::fromUtf8("doubleSpinBox_minInitTranslation"));
        doubleSpinBox_minInitTranslation->setMinimum(0);
        doubleSpinBox_minInitTranslation->setSingleStep(0.01);
        doubleSpinBox_minInitTranslation->setValue(0.1);

        gridLayout_166->addWidget(doubleSpinBox_minInitTranslation, 1, 0, 1, 1);

        label_663 = new QLabel(groupBox_odometryMono2);
        label_663->setObjectName(QString::fromUtf8("label_663"));
        label_663->setWordWrap(true);
        label_663->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_166->addWidget(label_663, 3, 1, 1, 1);

        doubleSpinBox_maxVariance = new QDoubleSpinBox(groupBox_odometryMono2);
        doubleSpinBox_maxVariance->setObjectName(QString::fromUtf8("doubleSpinBox_maxVariance"));
        doubleSpinBox_maxVariance->setDecimals(3);
        doubleSpinBox_maxVariance->setMinimum(0);
        doubleSpinBox_maxVariance->setSingleStep(0.001);
        doubleSpinBox_maxVariance->setValue(0.01);

        gridLayout_166->addWidget(doubleSpinBox_maxVariance, 3, 0, 1, 1);

        gridLayout_166->setColumnStretch(1, 1);

        verticalLayout_168->addLayout(gridLayout_166);


        verticalLayout_88->addWidget(groupBox_odometryMono2);

        stackedWidget_odometryType->addWidget(page_26);

        verticalLayout_34->addWidget(stackedWidget_odometryType);

        stackedWidget_odometryFiltering = new QStackedWidget(groupBox_odometry1);
        stackedWidget_odometryFiltering->setObjectName(QString::fromUtf8("stackedWidget_odometryFiltering"));
        page_31 = new QWidget();
        page_31->setObjectName(QString::fromUtf8("page_31"));
        verticalLayout_84 = new QVBoxLayout(page_31);
        verticalLayout_84->setObjectName(QString::fromUtf8("verticalLayout_84"));
        stackedWidget_odometryFiltering->addWidget(page_31);
        page_57 = new QWidget();
        page_57->setObjectName(QString::fromUtf8("page_57"));
        verticalLayout_49 = new QVBoxLayout(page_57);
        verticalLayout_49->setObjectName(QString::fromUtf8("verticalLayout_49"));
        groupBox_odometryKalmanFilter2 = new QGroupBox(page_57);
        groupBox_odometryKalmanFilter2->setObjectName(QString::fromUtf8("groupBox_odometryKalmanFilter2"));
        verticalLayout_171 = new QVBoxLayout(groupBox_odometryKalmanFilter2);
        verticalLayout_171->setObjectName(QString::fromUtf8("verticalLayout_171"));
        label_673 = new QLabel(groupBox_odometryKalmanFilter2);
        label_673->setObjectName(QString::fromUtf8("label_673"));
        label_673->setWordWrap(true);
        label_673->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_171->addWidget(label_673);

        gridLayout_168 = new QGridLayout();
        gridLayout_168->setObjectName(QString::fromUtf8("gridLayout_168"));
        doubleSpinBox_kalmanMeasurementNoise = new QDoubleSpinBox(groupBox_odometryKalmanFilter2);
        doubleSpinBox_kalmanMeasurementNoise->setObjectName(QString::fromUtf8("doubleSpinBox_kalmanMeasurementNoise"));
        doubleSpinBox_kalmanMeasurementNoise->setDecimals(5);
        doubleSpinBox_kalmanMeasurementNoise->setMinimum(0);
        doubleSpinBox_kalmanMeasurementNoise->setMaximum(1);
        doubleSpinBox_kalmanMeasurementNoise->setSingleStep(0.01);
        doubleSpinBox_kalmanMeasurementNoise->setValue(0.01);

        gridLayout_168->addWidget(doubleSpinBox_kalmanMeasurementNoise, 1, 0, 1, 1);

        doubleSpinBox_kalmanProcessNoise = new QDoubleSpinBox(groupBox_odometryKalmanFilter2);
        doubleSpinBox_kalmanProcessNoise->setObjectName(QString::fromUtf8("doubleSpinBox_kalmanProcessNoise"));
        doubleSpinBox_kalmanProcessNoise->setDecimals(5);
        doubleSpinBox_kalmanProcessNoise->setMinimum(0);
        doubleSpinBox_kalmanProcessNoise->setMaximum(1);
        doubleSpinBox_kalmanProcessNoise->setSingleStep(0.001);
        doubleSpinBox_kalmanProcessNoise->setValue(0.001);

        gridLayout_168->addWidget(doubleSpinBox_kalmanProcessNoise, 0, 0, 1, 1);

        label_674 = new QLabel(groupBox_odometryKalmanFilter2);
        label_674->setObjectName(QString::fromUtf8("label_674"));
        label_674->setWordWrap(true);
        label_674->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_168->addWidget(label_674, 0, 1, 1, 1);

        label_675 = new QLabel(groupBox_odometryKalmanFilter2);
        label_675->setObjectName(QString::fromUtf8("label_675"));
        label_675->setWordWrap(true);
        label_675->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_168->addWidget(label_675, 1, 1, 1, 1);

        gridLayout_168->setColumnStretch(1, 1);

        verticalLayout_171->addLayout(gridLayout_168);

        verticalSpacer_31 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_171->addItem(verticalSpacer_31);


        verticalLayout_49->addWidget(groupBox_odometryKalmanFilter2);

        stackedWidget_odometryFiltering->addWidget(page_57);
        page_56 = new QWidget();
        page_56->setObjectName(QString::fromUtf8("page_56"));
        verticalLayout_87 = new QVBoxLayout(page_56);
        verticalLayout_87->setObjectName(QString::fromUtf8("verticalLayout_87"));
        groupBox_odometryParticleFilter2 = new QGroupBox(page_56);
        groupBox_odometryParticleFilter2->setObjectName(QString::fromUtf8("groupBox_odometryParticleFilter2"));
        verticalLayout_170 = new QVBoxLayout(groupBox_odometryParticleFilter2);
        verticalLayout_170->setObjectName(QString::fromUtf8("verticalLayout_170"));
        label_665 = new QLabel(groupBox_odometryParticleFilter2);
        label_665->setObjectName(QString::fromUtf8("label_665"));
        label_665->setWordWrap(true);
        label_665->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_170->addWidget(label_665);

        gridLayout_167 = new QGridLayout();
        gridLayout_167->setObjectName(QString::fromUtf8("gridLayout_167"));
        doubleSpinBox_particleLambdaT = new QDoubleSpinBox(groupBox_odometryParticleFilter2);
        doubleSpinBox_particleLambdaT->setObjectName(QString::fromUtf8("doubleSpinBox_particleLambdaT"));
        doubleSpinBox_particleLambdaT->setDecimals(1);
        doubleSpinBox_particleLambdaT->setMinimum(0);
        doubleSpinBox_particleLambdaT->setMaximum(1000);
        doubleSpinBox_particleLambdaT->setSingleStep(1);
        doubleSpinBox_particleLambdaT->setValue(15);

        gridLayout_167->addWidget(doubleSpinBox_particleLambdaT, 2, 0, 1, 1);

        doubleSpinBox_particleNoiseR = new QDoubleSpinBox(groupBox_odometryParticleFilter2);
        doubleSpinBox_particleNoiseR->setObjectName(QString::fromUtf8("doubleSpinBox_particleNoiseR"));
        doubleSpinBox_particleNoiseR->setDecimals(3);
        doubleSpinBox_particleNoiseR->setMinimum(0.001);
        doubleSpinBox_particleNoiseR->setMaximum(1);
        doubleSpinBox_particleNoiseR->setSingleStep(0.01);
        doubleSpinBox_particleNoiseR->setValue(0.005);

        gridLayout_167->addWidget(doubleSpinBox_particleNoiseR, 3, 0, 1, 1);

        doubleSpinBox_particleNoiseT = new QDoubleSpinBox(groupBox_odometryParticleFilter2);
        doubleSpinBox_particleNoiseT->setObjectName(QString::fromUtf8("doubleSpinBox_particleNoiseT"));
        doubleSpinBox_particleNoiseT->setDecimals(3);
        doubleSpinBox_particleNoiseT->setMinimum(0.001);
        doubleSpinBox_particleNoiseT->setMaximum(1);
        doubleSpinBox_particleNoiseT->setSingleStep(0.01);
        doubleSpinBox_particleNoiseT->setValue(0.05);

        gridLayout_167->addWidget(doubleSpinBox_particleNoiseT, 1, 0, 1, 1);

        label_666 = new QLabel(groupBox_odometryParticleFilter2);
        label_666->setObjectName(QString::fromUtf8("label_666"));
        label_666->setWordWrap(true);
        label_666->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_167->addWidget(label_666, 1, 1, 1, 1);

        label_667 = new QLabel(groupBox_odometryParticleFilter2);
        label_667->setObjectName(QString::fromUtf8("label_667"));
        label_667->setWordWrap(true);
        label_667->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_167->addWidget(label_667, 3, 1, 1, 1);

        label_668 = new QLabel(groupBox_odometryParticleFilter2);
        label_668->setObjectName(QString::fromUtf8("label_668"));
        label_668->setWordWrap(true);
        label_668->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_167->addWidget(label_668, 2, 1, 1, 1);

        label_669 = new QLabel(groupBox_odometryParticleFilter2);
        label_669->setObjectName(QString::fromUtf8("label_669"));
        label_669->setWordWrap(true);
        label_669->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_167->addWidget(label_669, 4, 1, 1, 1);

        doubleSpinBox_particleLambdaR = new QDoubleSpinBox(groupBox_odometryParticleFilter2);
        doubleSpinBox_particleLambdaR->setObjectName(QString::fromUtf8("doubleSpinBox_particleLambdaR"));
        doubleSpinBox_particleLambdaR->setDecimals(1);
        doubleSpinBox_particleLambdaR->setMinimum(0);
        doubleSpinBox_particleLambdaR->setMaximum(1000);
        doubleSpinBox_particleLambdaR->setSingleStep(1);
        doubleSpinBox_particleLambdaR->setValue(15);

        gridLayout_167->addWidget(doubleSpinBox_particleLambdaR, 4, 0, 1, 1);

        label_670 = new QLabel(groupBox_odometryParticleFilter2);
        label_670->setObjectName(QString::fromUtf8("label_670"));
        label_670->setWordWrap(true);
        label_670->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_167->addWidget(label_670, 0, 1, 1, 1);

        spinBox_particleSize = new QSpinBox(groupBox_odometryParticleFilter2);
        spinBox_particleSize->setObjectName(QString::fromUtf8("spinBox_particleSize"));
        spinBox_particleSize->setMinimum(1);
        spinBox_particleSize->setMaximum(10000);
        spinBox_particleSize->setValue(400);

        gridLayout_167->addWidget(spinBox_particleSize, 0, 0, 1, 1);

        gridLayout_167->setColumnStretch(1, 1);

        verticalLayout_170->addLayout(gridLayout_167);


        verticalLayout_87->addWidget(groupBox_odometryParticleFilter2);

        stackedWidget_odometryFiltering->addWidget(page_56);

        verticalLayout_34->addWidget(stackedWidget_odometryFiltering);

        label_162 = new QLabel(groupBox_odometry1);
        label_162->setObjectName(QString::fromUtf8("label_162"));
        label_162->setWordWrap(true);

        verticalLayout_34->addWidget(label_162);


        verticalLayout_32->addWidget(groupBox_odometry1);

        verticalSpacer_14 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_32->addItem(verticalSpacer_14);

        verticalLayout_32->setStretch(1, 1);
        stackedWidget->addWidget(page_12);
        page_46 = new QWidget();
        page_46->setObjectName(QString::fromUtf8("page_46"));
        verticalLayout_81 = new QVBoxLayout(page_46);
        verticalLayout_81->setObjectName(QString::fromUtf8("verticalLayout_81"));
        groupBox_motionEst1 = new QGroupBox(page_46);
        groupBox_motionEst1->setObjectName(QString::fromUtf8("groupBox_motionEst1"));
        gridLayout_53 = new QGridLayout(groupBox_motionEst1);
        gridLayout_53->setObjectName(QString::fromUtf8("gridLayout_53"));
        comboBox_registrationStrategy = new QComboBox(groupBox_motionEst1);
        comboBox_registrationStrategy->setObjectName(QString::fromUtf8("comboBox_registrationStrategy"));

        gridLayout_53->addWidget(comboBox_registrationStrategy, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox_motionEst1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_53->addWidget(label_11, 0, 1, 1, 1);

        loopClosure_bowForce2D = new QCheckBox(groupBox_motionEst1);
        loopClosure_bowForce2D->setObjectName(QString::fromUtf8("loopClosure_bowForce2D"));

        gridLayout_53->addWidget(loopClosure_bowForce2D, 1, 0, 1, 1);

        label_184 = new QLabel(groupBox_motionEst1);
        label_184->setObjectName(QString::fromUtf8("label_184"));
        label_184->setWordWrap(true);
        label_184->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_53->addWidget(label_184, 1, 1, 1, 1);

        gridLayout_53->setColumnStretch(1, 1);

        verticalLayout_81->addWidget(groupBox_motionEst1);

        verticalSpacer_41 = new QSpacerItem(20, 1221, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_81->addItem(verticalSpacer_41);

        stackedWidget->addWidget(page_46);
        page_21 = new QWidget();
        page_21->setObjectName(QString::fromUtf8("page_21"));
        verticalLayout_50 = new QVBoxLayout(page_21);
        verticalLayout_50->setObjectName(QString::fromUtf8("verticalLayout_50"));
        groupBox_visualTransform2 = new QGroupBox(page_21);
        groupBox_visualTransform2->setObjectName(QString::fromUtf8("groupBox_visualTransform2"));
        verticalLayout_41 = new QVBoxLayout(groupBox_visualTransform2);
        verticalLayout_41->setObjectName(QString::fromUtf8("verticalLayout_41"));
        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label_146 = new QLabel(groupBox_visualTransform2);
        label_146->setObjectName(QString::fromUtf8("label_146"));
        label_146->setWordWrap(true);
        label_146->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_23->addWidget(label_146, 1, 1, 1, 1);

        label_262 = new QLabel(groupBox_visualTransform2);
        label_262->setObjectName(QString::fromUtf8("label_262"));
        label_262->setWordWrap(true);
        label_262->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_23->addWidget(label_262, 5, 1, 1, 1);

        label_2 = new QLabel(groupBox_visualTransform2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_23->addWidget(label_2, 2, 1, 1, 1);

        loopClosure_bowIterations = new QSpinBox(groupBox_visualTransform2);
        loopClosure_bowIterations->setObjectName(QString::fromUtf8("loopClosure_bowIterations"));
        loopClosure_bowIterations->setMinimum(1);
        loopClosure_bowIterations->setMaximum(10000);
        loopClosure_bowIterations->setSingleStep(1);
        loopClosure_bowIterations->setValue(100);

        gridLayout_23->addWidget(loopClosure_bowIterations, 4, 0, 1, 1);

        label_15 = new QLabel(groupBox_visualTransform2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_23->addWidget(label_15, 4, 1, 1, 1);

        loopClosure_estimationType = new QComboBox(groupBox_visualTransform2);
        loopClosure_estimationType->setObjectName(QString::fromUtf8("loopClosure_estimationType"));
        loopClosure_estimationType->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_23->addWidget(loopClosure_estimationType, 1, 0, 1, 1);

        loopClosure_correspondencesType = new QComboBox(groupBox_visualTransform2);
        loopClosure_correspondencesType->setObjectName(QString::fromUtf8("loopClosure_correspondencesType"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(loopClosure_correspondencesType->sizePolicy().hasHeightForWidth());
        loopClosure_correspondencesType->setSizePolicy(sizePolicy3);
        loopClosure_correspondencesType->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_23->addWidget(loopClosure_correspondencesType, 0, 0, 1, 1);

        label_298 = new QLabel(groupBox_visualTransform2);
        label_298->setObjectName(QString::fromUtf8("label_298"));
        label_298->setWordWrap(true);
        label_298->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_23->addWidget(label_298, 6, 1, 1, 1);

        loopClosure_forwardEst = new QCheckBox(groupBox_visualTransform2);
        loopClosure_forwardEst->setObjectName(QString::fromUtf8("loopClosure_forwardEst"));

        gridLayout_23->addWidget(loopClosure_forwardEst, 6, 0, 1, 1);

        loopClosure_bowVarianceFromInliersCount = new QCheckBox(groupBox_visualTransform2);
        loopClosure_bowVarianceFromInliersCount->setObjectName(QString::fromUtf8("loopClosure_bowVarianceFromInliersCount"));

        gridLayout_23->addWidget(loopClosure_bowVarianceFromInliersCount, 5, 0, 1, 1);

        label_149 = new QLabel(groupBox_visualTransform2);
        label_149->setObjectName(QString::fromUtf8("label_149"));
        label_149->setWordWrap(true);
        label_149->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_23->addWidget(label_149, 0, 1, 1, 1);

        loopClosure_bowMinInliers = new QSpinBox(groupBox_visualTransform2);
        loopClosure_bowMinInliers->setObjectName(QString::fromUtf8("loopClosure_bowMinInliers"));
        loopClosure_bowMinInliers->setMinimum(1);
        loopClosure_bowMinInliers->setMaximum(1000);
        loopClosure_bowMinInliers->setValue(10);

        gridLayout_23->addWidget(loopClosure_bowMinInliers, 2, 0, 1, 1);

        gridLayout_23->setColumnStretch(1, 1);

        verticalLayout_41->addLayout(gridLayout_23);

        stackedWidget_loopClosureCorrespondences = new QStackedWidget(groupBox_visualTransform2);
        stackedWidget_loopClosureCorrespondences->setObjectName(QString::fromUtf8("stackedWidget_loopClosureCorrespondences"));
        page_54 = new QWidget();
        page_54->setObjectName(QString::fromUtf8("page_54"));
        verticalLayout_85 = new QVBoxLayout(page_54);
        verticalLayout_85->setContentsMargins(0, 0, 0, 0);
        verticalLayout_85->setObjectName(QString::fromUtf8("verticalLayout_85"));
        groupBox_4 = new QGroupBox(page_54);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_30 = new QGridLayout(groupBox_4);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        reextract_nndrRatio = new QDoubleSpinBox(groupBox_4);
        reextract_nndrRatio->setObjectName(QString::fromUtf8("reextract_nndrRatio"));
        reextract_nndrRatio->setDecimals(1);
        reextract_nndrRatio->setMinimum(0.1);
        reextract_nndrRatio->setMaximum(1);
        reextract_nndrRatio->setSingleStep(0.1);
        reextract_nndrRatio->setValue(0.7);

        gridLayout_30->addWidget(reextract_nndrRatio, 1, 0, 1, 1);

        reextract_nn = new QComboBox(groupBox_4);
        reextract_nn->setObjectName(QString::fromUtf8("reextract_nn"));
        reextract_nn->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_30->addWidget(reextract_nn, 0, 0, 1, 1);

        label_179 = new QLabel(groupBox_4);
        label_179->setObjectName(QString::fromUtf8("label_179"));
        label_179->setWordWrap(true);
        label_179->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_30->addWidget(label_179, 0, 1, 1, 1);

        label_181 = new QLabel(groupBox_4);
        label_181->setObjectName(QString::fromUtf8("label_181"));
        label_181->setWordWrap(true);
        label_181->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_30->addWidget(label_181, 1, 1, 1, 1);

        verticalSpacer_44 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_30->addItem(verticalSpacer_44, 3, 0, 1, 1);

        label_303 = new QLabel(groupBox_4);
        label_303->setObjectName(QString::fromUtf8("label_303"));
        label_303->setWordWrap(true);
        label_303->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_30->addWidget(label_303, 2, 1, 1, 1);

        spinBox_visCorGuessWinSize = new QSpinBox(groupBox_4);
        spinBox_visCorGuessWinSize->setObjectName(QString::fromUtf8("spinBox_visCorGuessWinSize"));
        spinBox_visCorGuessWinSize->setMinimum(0);
        spinBox_visCorGuessWinSize->setMaximum(1000);
        spinBox_visCorGuessWinSize->setValue(16);

        gridLayout_30->addWidget(spinBox_visCorGuessWinSize, 2, 0, 1, 1);

        gridLayout_30->setColumnStretch(1, 1);

        verticalLayout_85->addWidget(groupBox_4);

        stackedWidget_loopClosureCorrespondences->addWidget(page_54);
        page_55 = new QWidget();
        page_55->setObjectName(QString::fromUtf8("page_55"));
        verticalLayout_86 = new QVBoxLayout(page_55);
        verticalLayout_86->setContentsMargins(0, 0, 0, 0);
        verticalLayout_86->setObjectName(QString::fromUtf8("verticalLayout_86"));
        groupBox_7 = new QGroupBox(page_55);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_52 = new QGridLayout(groupBox_7);
        gridLayout_52->setObjectName(QString::fromUtf8("gridLayout_52"));
        odom_flow_winSize_2 = new QSpinBox(groupBox_7);
        odom_flow_winSize_2->setObjectName(QString::fromUtf8("odom_flow_winSize_2"));
        odom_flow_winSize_2->setMinimum(1);
        odom_flow_winSize_2->setMaximum(999999);
        odom_flow_winSize_2->setSingleStep(1);
        odom_flow_winSize_2->setValue(21);

        gridLayout_52->addWidget(odom_flow_winSize_2, 0, 0, 1, 1);

        label_201 = new QLabel(groupBox_7);
        label_201->setObjectName(QString::fromUtf8("label_201"));
        label_201->setWordWrap(true);
        label_201->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_52->addWidget(label_201, 0, 1, 1, 1);

        odom_flow_maxLevel_2 = new QSpinBox(groupBox_7);
        odom_flow_maxLevel_2->setObjectName(QString::fromUtf8("odom_flow_maxLevel_2"));
        odom_flow_maxLevel_2->setMinimum(0);
        odom_flow_maxLevel_2->setMaximum(999999);
        odom_flow_maxLevel_2->setSingleStep(1);
        odom_flow_maxLevel_2->setValue(3);

        gridLayout_52->addWidget(odom_flow_maxLevel_2, 3, 0, 1, 1);

        label_295 = new QLabel(groupBox_7);
        label_295->setObjectName(QString::fromUtf8("label_295"));
        label_295->setWordWrap(true);
        label_295->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_52->addWidget(label_295, 1, 1, 1, 1);

        label_296 = new QLabel(groupBox_7);
        label_296->setObjectName(QString::fromUtf8("label_296"));
        label_296->setWordWrap(true);
        label_296->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_52->addWidget(label_296, 2, 1, 1, 1);

        odom_flow_iterations_2 = new QSpinBox(groupBox_7);
        odom_flow_iterations_2->setObjectName(QString::fromUtf8("odom_flow_iterations_2"));
        odom_flow_iterations_2->setMinimum(1);
        odom_flow_iterations_2->setMaximum(999999);
        odom_flow_iterations_2->setSingleStep(1);
        odom_flow_iterations_2->setValue(30);

        gridLayout_52->addWidget(odom_flow_iterations_2, 1, 0, 1, 1);

        label_297 = new QLabel(groupBox_7);
        label_297->setObjectName(QString::fromUtf8("label_297"));
        label_297->setWordWrap(true);
        label_297->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_52->addWidget(label_297, 3, 1, 1, 1);

        odom_flow_eps_2 = new QDoubleSpinBox(groupBox_7);
        odom_flow_eps_2->setObjectName(QString::fromUtf8("odom_flow_eps_2"));
        odom_flow_eps_2->setDecimals(3);
        odom_flow_eps_2->setMinimum(0.001);
        odom_flow_eps_2->setMaximum(1);
        odom_flow_eps_2->setSingleStep(0.01);
        odom_flow_eps_2->setValue(0.01);

        gridLayout_52->addWidget(odom_flow_eps_2, 2, 0, 1, 1);

        verticalSpacer_45 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_52->addItem(verticalSpacer_45, 4, 0, 1, 1);

        gridLayout_52->setColumnStretch(1, 1);

        verticalLayout_86->addWidget(groupBox_7);

        stackedWidget_loopClosureCorrespondences->addWidget(page_55);

        verticalLayout_41->addWidget(stackedWidget_loopClosureCorrespondences);

        stackedWidget_loopClosureEstimation = new QStackedWidget(groupBox_visualTransform2);
        stackedWidget_loopClosureEstimation->setObjectName(QString::fromUtf8("stackedWidget_loopClosureEstimation"));
        page_38 = new QWidget();
        page_38->setObjectName(QString::fromUtf8("page_38"));
        verticalLayout_68 = new QVBoxLayout(page_38);
        verticalLayout_68->setSpacing(0);
        verticalLayout_68->setContentsMargins(0, 0, 0, 0);
        verticalLayout_68->setObjectName(QString::fromUtf8("verticalLayout_68"));
        groupBox_3 = new QGroupBox(page_38);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        loopClosure_bowInlierDistance = new QDoubleSpinBox(groupBox_3);
        loopClosure_bowInlierDistance->setObjectName(QString::fromUtf8("loopClosure_bowInlierDistance"));
        loopClosure_bowInlierDistance->setDecimals(3);
        loopClosure_bowInlierDistance->setMinimum(0.001);
        loopClosure_bowInlierDistance->setSingleStep(0.01);
        loopClosure_bowInlierDistance->setValue(0.02);

        gridLayout_6->addWidget(loopClosure_bowInlierDistance, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);
        label_14->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(label_14, 0, 1, 1, 1);

        loopClosure_bowRefineIterations = new QSpinBox(groupBox_3);
        loopClosure_bowRefineIterations->setObjectName(QString::fromUtf8("loopClosure_bowRefineIterations"));
        loopClosure_bowRefineIterations->setMinimum(0);
        loopClosure_bowRefineIterations->setMaximum(10000);
        loopClosure_bowRefineIterations->setSingleStep(1);
        loopClosure_bowRefineIterations->setValue(10);

        gridLayout_6->addWidget(loopClosure_bowRefineIterations, 1, 0, 1, 1);

        label_38 = new QLabel(groupBox_3);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setWordWrap(true);
        label_38->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(label_38, 1, 1, 1, 1);

        gridLayout_6->setColumnStretch(1, 1);

        verticalLayout_68->addWidget(groupBox_3);

        stackedWidget_loopClosureEstimation->addWidget(page_38);
        page_39 = new QWidget();
        page_39->setObjectName(QString::fromUtf8("page_39"));
        verticalLayout_69 = new QVBoxLayout(page_39);
        verticalLayout_69->setSpacing(0);
        verticalLayout_69->setContentsMargins(0, 0, 0, 0);
        verticalLayout_69->setObjectName(QString::fromUtf8("verticalLayout_69"));
        groupBox_13 = new QGroupBox(page_39);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        gridLayout_59 = new QGridLayout(groupBox_13);
        gridLayout_59->setObjectName(QString::fromUtf8("gridLayout_59"));
        loopClosure_pnpReprojError = new QDoubleSpinBox(groupBox_13);
        loopClosure_pnpReprojError->setObjectName(QString::fromUtf8("loopClosure_pnpReprojError"));
        loopClosure_pnpReprojError->setDecimals(1);
        loopClosure_pnpReprojError->setMinimum(0.1);
        loopClosure_pnpReprojError->setSingleStep(1);
        loopClosure_pnpReprojError->setValue(8);

        gridLayout_59->addWidget(loopClosure_pnpReprojError, 0, 0, 1, 1);

        label_236 = new QLabel(groupBox_13);
        label_236->setObjectName(QString::fromUtf8("label_236"));
        label_236->setWordWrap(true);
        label_236->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_59->addWidget(label_236, 0, 1, 1, 1);

        loopClosure_pnpFlags = new QComboBox(groupBox_13);
        loopClosure_pnpFlags->setObjectName(QString::fromUtf8("loopClosure_pnpFlags"));

        gridLayout_59->addWidget(loopClosure_pnpFlags, 1, 0, 1, 1);

        label_235 = new QLabel(groupBox_13);
        label_235->setObjectName(QString::fromUtf8("label_235"));
        label_235->setWordWrap(true);
        label_235->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_59->addWidget(label_235, 1, 1, 1, 1);

        label_loopClosure_pnpOpenCV2 = new QLabel(groupBox_13);
        label_loopClosure_pnpOpenCV2->setObjectName(QString::fromUtf8("label_loopClosure_pnpOpenCV2"));
        label_loopClosure_pnpOpenCV2->setWordWrap(true);
        label_loopClosure_pnpOpenCV2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_59->addWidget(label_loopClosure_pnpOpenCV2, 2, 1, 1, 1);

        loopClosure_pnpRefineIterations = new QSpinBox(groupBox_13);
        loopClosure_pnpRefineIterations->setObjectName(QString::fromUtf8("loopClosure_pnpRefineIterations"));
        loopClosure_pnpRefineIterations->setMinimum(0);
        loopClosure_pnpRefineIterations->setMaximum(999999);
        loopClosure_pnpRefineIterations->setSingleStep(1);
        loopClosure_pnpRefineIterations->setValue(1);

        gridLayout_59->addWidget(loopClosure_pnpRefineIterations, 2, 0, 1, 1);

        gridLayout_59->setColumnStretch(1, 1);

        verticalLayout_69->addWidget(groupBox_13);

        stackedWidget_loopClosureEstimation->addWidget(page_39);
        page_40 = new QWidget();
        page_40->setObjectName(QString::fromUtf8("page_40"));
        verticalLayout_72 = new QVBoxLayout(page_40);
        verticalLayout_72->setSpacing(0);
        verticalLayout_72->setContentsMargins(0, 0, 0, 0);
        verticalLayout_72->setObjectName(QString::fromUtf8("verticalLayout_72"));
        groupBox_14 = new QGroupBox(page_40);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        verticalLayout_73 = new QVBoxLayout(groupBox_14);
        verticalLayout_73->setObjectName(QString::fromUtf8("verticalLayout_73"));
        label_671 = new QLabel(groupBox_14);
        label_671->setObjectName(QString::fromUtf8("label_671"));
        label_671->setWordWrap(true);
        label_671->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_73->addWidget(label_671);

        gridLayout_60 = new QGridLayout();
        gridLayout_60->setObjectName(QString::fromUtf8("gridLayout_60"));
        loopClosure_bowEpipolarGeometryVar = new QDoubleSpinBox(groupBox_14);
        loopClosure_bowEpipolarGeometryVar->setObjectName(QString::fromUtf8("loopClosure_bowEpipolarGeometryVar"));
        loopClosure_bowEpipolarGeometryVar->setDecimals(3);
        loopClosure_bowEpipolarGeometryVar->setMinimum(0);
        loopClosure_bowEpipolarGeometryVar->setSingleStep(0.001);
        loopClosure_bowEpipolarGeometryVar->setValue(0.02);

        gridLayout_60->addWidget(loopClosure_bowEpipolarGeometryVar, 0, 0, 1, 1);

        label_664 = new QLabel(groupBox_14);
        label_664->setObjectName(QString::fromUtf8("label_664"));
        label_664->setWordWrap(true);
        label_664->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_60->addWidget(label_664, 0, 1, 1, 1);

        gridLayout_60->setColumnStretch(1, 1);

        verticalLayout_73->addLayout(gridLayout_60);

        verticalSpacer_52 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_73->addItem(verticalSpacer_52);


        verticalLayout_72->addWidget(groupBox_14);

        stackedWidget_loopClosureEstimation->addWidget(page_40);

        verticalLayout_41->addWidget(stackedWidget_loopClosureEstimation);

        groupBox_VisExtract = new QGroupBox(groupBox_visualTransform2);
        groupBox_VisExtract->setObjectName(QString::fromUtf8("groupBox_VisExtract"));
        groupBox_VisExtract->setCheckable(false);
        groupBox_VisExtract->setChecked(false);
        verticalLayout_46 = new QVBoxLayout(groupBox_VisExtract);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        label_182 = new QLabel(groupBox_VisExtract);
        label_182->setObjectName(QString::fromUtf8("label_182"));
        label_182->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_46->addWidget(label_182);

        gridLayout_25 = new QGridLayout();
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        label_237 = new QLabel(groupBox_VisExtract);
        label_237->setObjectName(QString::fromUtf8("label_237"));
        label_237->setWordWrap(true);
        label_237->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_25->addWidget(label_237, 3, 1, 1, 1);

        label_261 = new QLabel(groupBox_VisExtract);
        label_261->setObjectName(QString::fromUtf8("label_261"));
        label_261->setWordWrap(true);
        label_261->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_25->addWidget(label_261, 5, 1, 1, 1);

        loopClosure_roi = new QLineEdit(groupBox_VisExtract);
        loopClosure_roi->setObjectName(QString::fromUtf8("loopClosure_roi"));

        gridLayout_25->addWidget(loopClosure_roi, 5, 0, 1, 1);

        reextract_maxFeatures = new QSpinBox(groupBox_VisExtract);
        reextract_maxFeatures->setObjectName(QString::fromUtf8("reextract_maxFeatures"));
        reextract_maxFeatures->setMaximum(999999);

        gridLayout_25->addWidget(reextract_maxFeatures, 2, 0, 1, 1);

        label_180 = new QLabel(groupBox_VisExtract);
        label_180->setObjectName(QString::fromUtf8("label_180"));
        label_180->setWordWrap(true);
        label_180->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_25->addWidget(label_180, 2, 1, 1, 1);

        label_275 = new QLabel(groupBox_VisExtract);
        label_275->setObjectName(QString::fromUtf8("label_275"));
        label_275->setWordWrap(true);
        label_275->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_25->addWidget(label_275, 4, 1, 1, 1);

        reextract_type = new QComboBox(groupBox_VisExtract);
        reextract_type->setObjectName(QString::fromUtf8("reextract_type"));
        reextract_type->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_25->addWidget(reextract_type, 1, 0, 1, 1);

        loopClosure_bowMaxDepth = new QDoubleSpinBox(groupBox_VisExtract);
        loopClosure_bowMaxDepth->setObjectName(QString::fromUtf8("loopClosure_bowMaxDepth"));
        loopClosure_bowMaxDepth->setMinimum(0);
        loopClosure_bowMaxDepth->setValue(5);

        gridLayout_25->addWidget(loopClosure_bowMaxDepth, 3, 0, 1, 1);

        label_178 = new QLabel(groupBox_VisExtract);
        label_178->setObjectName(QString::fromUtf8("label_178"));
        label_178->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_25->addWidget(label_178, 1, 1, 1, 1);

        loopClosure_bowMinDepth = new QDoubleSpinBox(groupBox_VisExtract);
        loopClosure_bowMinDepth->setObjectName(QString::fromUtf8("loopClosure_bowMinDepth"));
        loopClosure_bowMinDepth->setMinimum(0);
        loopClosure_bowMinDepth->setValue(5);

        gridLayout_25->addWidget(loopClosure_bowMinDepth, 4, 0, 1, 1);

        gridLayout_25->setColumnStretch(1, 1);

        verticalLayout_46->addLayout(gridLayout_25);

        groupBox_11 = new QGroupBox(groupBox_VisExtract);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        verticalLayout_59 = new QVBoxLayout(groupBox_11);
        verticalLayout_59->setObjectName(QString::fromUtf8("verticalLayout_59"));
        label_35 = new QLabel(groupBox_11);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setWordWrap(true);
        label_35->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_59->addWidget(label_35);

        gridLayout_36 = new QGridLayout();
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        subpix_winSize = new QSpinBox(groupBox_11);
        subpix_winSize->setObjectName(QString::fromUtf8("subpix_winSize"));
        subpix_winSize->setMinimum(0);
        subpix_winSize->setMaximum(999999);
        subpix_winSize->setSingleStep(1);
        subpix_winSize->setValue(5);

        gridLayout_36->addWidget(subpix_winSize, 0, 0, 1, 1);

        label_200 = new QLabel(groupBox_11);
        label_200->setObjectName(QString::fromUtf8("label_200"));
        label_200->setWordWrap(true);
        label_200->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_36->addWidget(label_200, 0, 1, 1, 1);

        subpix_iterations = new QSpinBox(groupBox_11);
        subpix_iterations->setObjectName(QString::fromUtf8("subpix_iterations"));
        subpix_iterations->setMinimum(0);
        subpix_iterations->setMaximum(999999);
        subpix_iterations->setSingleStep(1);
        subpix_iterations->setValue(20);

        gridLayout_36->addWidget(subpix_iterations, 1, 0, 1, 1);

        label_203 = new QLabel(groupBox_11);
        label_203->setObjectName(QString::fromUtf8("label_203"));
        label_203->setWordWrap(true);
        label_203->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_36->addWidget(label_203, 1, 1, 1, 1);

        subpix_eps = new QDoubleSpinBox(groupBox_11);
        subpix_eps->setObjectName(QString::fromUtf8("subpix_eps"));
        subpix_eps->setDecimals(3);
        subpix_eps->setMinimum(0.001);
        subpix_eps->setMaximum(0.1);
        subpix_eps->setSingleStep(0.01);
        subpix_eps->setValue(0.03);

        gridLayout_36->addWidget(subpix_eps, 2, 0, 1, 1);

        label_204 = new QLabel(groupBox_11);
        label_204->setObjectName(QString::fromUtf8("label_204"));
        label_204->setWordWrap(true);
        label_204->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_36->addWidget(label_204, 2, 1, 1, 1);

        gridLayout_36->setColumnStretch(1, 1);

        verticalLayout_59->addLayout(gridLayout_36);


        verticalLayout_46->addWidget(groupBox_11);

        verticalSpacer_37 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_46->addItem(verticalSpacer_37);

        verticalLayout_46->setStretch(2, 1);

        verticalLayout_41->addWidget(groupBox_VisExtract);

        verticalLayout_41->setStretch(3, 1);

        verticalLayout_50->addWidget(groupBox_visualTransform2);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_50->addItem(verticalSpacer_20);

        stackedWidget->addWidget(page_21);
        page_27 = new QWidget();
        page_27->setObjectName(QString::fromUtf8("page_27"));
        verticalLayout_52 = new QVBoxLayout(page_27);
        verticalLayout_52->setObjectName(QString::fromUtf8("verticalLayout_52"));
        groupBox_icp2 = new QGroupBox(page_27);
        groupBox_icp2->setObjectName(QString::fromUtf8("groupBox_icp2"));
        verticalLayout_20 = new QVBoxLayout(groupBox_icp2);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label_7 = new QLabel(groupBox_icp2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_20->addWidget(label_7);

        gridLayout_48 = new QGridLayout();
        gridLayout_48->setObjectName(QString::fromUtf8("gridLayout_48"));
        loopClosure_icpPointToPlane = new QCheckBox(groupBox_icp2);
        loopClosure_icpPointToPlane->setObjectName(QString::fromUtf8("loopClosure_icpPointToPlane"));

        gridLayout_48->addWidget(loopClosure_icpPointToPlane, 8, 0, 1, 1);

        label_139 = new QLabel(groupBox_icp2);
        label_139->setObjectName(QString::fromUtf8("label_139"));
        label_139->setWordWrap(true);
        label_139->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_139, 2, 1, 1, 1);

        label_122 = new QLabel(groupBox_icp2);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        label_122->setWordWrap(true);
        label_122->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_122, 4, 1, 1, 1);

        label_51 = new QLabel(groupBox_icp2);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setWordWrap(true);
        label_51->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_51, 0, 1, 1, 1);

        loopClosure_icpRatio = new QDoubleSpinBox(groupBox_icp2);
        loopClosure_icpRatio->setObjectName(QString::fromUtf8("loopClosure_icpRatio"));
        loopClosure_icpRatio->setMinimum(0);
        loopClosure_icpRatio->setMaximum(1);
        loopClosure_icpRatio->setSingleStep(0.01);
        loopClosure_icpRatio->setValue(0.7);

        gridLayout_48->addWidget(loopClosure_icpRatio, 7, 0, 1, 1);

        label_133 = new QLabel(groupBox_icp2);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        label_133->setWordWrap(true);
        label_133->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_133, 7, 1, 1, 1);

        label_212 = new QLabel(groupBox_icp2);
        label_212->setObjectName(QString::fromUtf8("label_212"));
        label_212->setWordWrap(true);
        label_212->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_212, 9, 1, 1, 1);

        loopClosure_icpPointToPlaneNormals = new QSpinBox(groupBox_icp2);
        loopClosure_icpPointToPlaneNormals->setObjectName(QString::fromUtf8("loopClosure_icpPointToPlaneNormals"));
        loopClosure_icpPointToPlaneNormals->setMinimum(1);
        loopClosure_icpPointToPlaneNormals->setMaximum(1000);
        loopClosure_icpPointToPlaneNormals->setValue(20);

        gridLayout_48->addWidget(loopClosure_icpPointToPlaneNormals, 9, 0, 1, 1);

        label_125 = new QLabel(groupBox_icp2);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        label_125->setWordWrap(true);
        label_125->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_125, 3, 1, 1, 1);

        loopClosure_icpDownsamplingStep = new QSpinBox(groupBox_icp2);
        loopClosure_icpDownsamplingStep->setObjectName(QString::fromUtf8("loopClosure_icpDownsamplingStep"));
        loopClosure_icpDownsamplingStep->setMinimum(1);
        loopClosure_icpDownsamplingStep->setMaximum(999999);
        loopClosure_icpDownsamplingStep->setSingleStep(1);
        loopClosure_icpDownsamplingStep->setValue(1);

        gridLayout_48->addWidget(loopClosure_icpDownsamplingStep, 2, 0, 1, 1);

        loopClosure_icpVoxelSize = new QDoubleSpinBox(groupBox_icp2);
        loopClosure_icpVoxelSize->setObjectName(QString::fromUtf8("loopClosure_icpVoxelSize"));
        loopClosure_icpVoxelSize->setDecimals(3);
        loopClosure_icpVoxelSize->setMinimum(0);
        loopClosure_icpVoxelSize->setSingleStep(0.01);
        loopClosure_icpVoxelSize->setValue(0.005);

        gridLayout_48->addWidget(loopClosure_icpVoxelSize, 3, 0, 1, 1);

        label_124 = new QLabel(groupBox_icp2);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        label_124->setWordWrap(true);
        label_124->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_124, 5, 1, 1, 1);

        loopClosure_icpIterations = new QSpinBox(groupBox_icp2);
        loopClosure_icpIterations->setObjectName(QString::fromUtf8("loopClosure_icpIterations"));
        loopClosure_icpIterations->setMinimum(1);
        loopClosure_icpIterations->setMaximum(1000);
        loopClosure_icpIterations->setValue(10);

        gridLayout_48->addWidget(loopClosure_icpIterations, 5, 0, 1, 1);

        globalDetection_icpMaxTranslation = new QDoubleSpinBox(groupBox_icp2);
        globalDetection_icpMaxTranslation->setObjectName(QString::fromUtf8("globalDetection_icpMaxTranslation"));
        globalDetection_icpMaxTranslation->setDecimals(2);
        globalDetection_icpMaxTranslation->setMaximum(1);
        globalDetection_icpMaxTranslation->setSingleStep(0.01);
        globalDetection_icpMaxTranslation->setValue(0.2);

        gridLayout_48->addWidget(globalDetection_icpMaxTranslation, 0, 0, 1, 1);

        label_55 = new QLabel(groupBox_icp2);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setWordWrap(true);
        label_55->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_55, 1, 1, 1, 1);

        globalDetection_icpMaxRotation = new QDoubleSpinBox(groupBox_icp2);
        globalDetection_icpMaxRotation->setObjectName(QString::fromUtf8("globalDetection_icpMaxRotation"));
        globalDetection_icpMaxRotation->setDecimals(2);
        globalDetection_icpMaxRotation->setMaximum(3.14);
        globalDetection_icpMaxRotation->setSingleStep(0.01);
        globalDetection_icpMaxRotation->setValue(0.78);

        gridLayout_48->addWidget(globalDetection_icpMaxRotation, 1, 0, 1, 1);

        loopClosure_icpMaxCorrespondenceDistance = new QDoubleSpinBox(groupBox_icp2);
        loopClosure_icpMaxCorrespondenceDistance->setObjectName(QString::fromUtf8("loopClosure_icpMaxCorrespondenceDistance"));
        loopClosure_icpMaxCorrespondenceDistance->setDecimals(3);
        loopClosure_icpMaxCorrespondenceDistance->setMinimum(0.01);
        loopClosure_icpMaxCorrespondenceDistance->setSingleStep(0.01);
        loopClosure_icpMaxCorrespondenceDistance->setValue(0.1);

        gridLayout_48->addWidget(loopClosure_icpMaxCorrespondenceDistance, 4, 0, 1, 1);

        label_144 = new QLabel(groupBox_icp2);
        label_144->setObjectName(QString::fromUtf8("label_144"));
        label_144->setWordWrap(true);
        label_144->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_144, 8, 1, 1, 1);

        label_136 = new QLabel(groupBox_icp2);
        label_136->setObjectName(QString::fromUtf8("label_136"));
        label_136->setWordWrap(true);
        label_136->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_48->addWidget(label_136, 6, 1, 1, 1);

        loopClosure_icpEpsilon = new QDoubleSpinBox(groupBox_icp2);
        loopClosure_icpEpsilon->setObjectName(QString::fromUtf8("loopClosure_icpEpsilon"));
        loopClosure_icpEpsilon->setDecimals(4);
        loopClosure_icpEpsilon->setMinimum(0);
        loopClosure_icpEpsilon->setMaximum(1);
        loopClosure_icpEpsilon->setSingleStep(0.01);
        loopClosure_icpEpsilon->setValue(0);

        gridLayout_48->addWidget(loopClosure_icpEpsilon, 6, 0, 1, 1);

        gridLayout_48->setColumnStretch(1, 1);

        verticalLayout_20->addLayout(gridLayout_48);


        verticalLayout_52->addWidget(groupBox_icp2);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_52->addItem(verticalSpacer_21);

        stackedWidget->addWidget(page_27);
        page_29 = new QWidget();
        page_29->setObjectName(QString::fromUtf8("page_29"));
        verticalLayout_57 = new QVBoxLayout(page_29);
        verticalLayout_57->setObjectName(QString::fromUtf8("verticalLayout_57"));
        groupBox_stereo1 = new QGroupBox(page_29);
        groupBox_stereo1->setObjectName(QString::fromUtf8("groupBox_stereo1"));
        verticalLayout_56 = new QVBoxLayout(groupBox_stereo1);
        verticalLayout_56->setObjectName(QString::fromUtf8("verticalLayout_56"));
        label_187 = new QLabel(groupBox_stereo1);
        label_187->setObjectName(QString::fromUtf8("label_187"));
        label_187->setWordWrap(true);
        label_187->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_56->addWidget(label_187);

        groupBox_10 = new QGroupBox(groupBox_stereo1);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_33 = new QGridLayout(groupBox_10);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        label_284 = new QLabel(groupBox_10);
        label_284->setObjectName(QString::fromUtf8("label_284"));
        label_284->setWordWrap(true);
        label_284->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_284, 2, 1, 1, 1);

        label_285 = new QLabel(groupBox_10);
        label_285->setObjectName(QString::fromUtf8("label_285"));
        label_285->setWordWrap(true);
        label_285->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_285, 5, 1, 1, 1);

        stereo_winWidth = new QSpinBox(groupBox_10);
        stereo_winWidth->setObjectName(QString::fromUtf8("stereo_winWidth"));
        stereo_winWidth->setMinimum(3);
        stereo_winWidth->setMaximum(999999);
        stereo_winWidth->setSingleStep(1);
        stereo_winWidth->setValue(21);

        gridLayout_33->addWidget(stereo_winWidth, 1, 0, 1, 1);

        label_205 = new QLabel(groupBox_10);
        label_205->setObjectName(QString::fromUtf8("label_205"));
        label_205->setWordWrap(true);
        label_205->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_205, 1, 1, 1, 1);

        stereo_minDisparity = new QSpinBox(groupBox_10);
        stereo_minDisparity->setObjectName(QString::fromUtf8("stereo_minDisparity"));
        stereo_minDisparity->setMinimum(0);
        stereo_minDisparity->setMaximum(999999);
        stereo_minDisparity->setSingleStep(1);
        stereo_minDisparity->setValue(0);

        gridLayout_33->addWidget(stereo_minDisparity, 5, 0, 1, 1);

        label_206 = new QLabel(groupBox_10);
        label_206->setObjectName(QString::fromUtf8("label_206"));
        label_206->setWordWrap(true);
        label_206->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_206, 4, 1, 1, 1);

        stereo_ssd = new QCheckBox(groupBox_10);
        stereo_ssd->setObjectName(QString::fromUtf8("stereo_ssd"));

        gridLayout_33->addWidget(stereo_ssd, 8, 0, 1, 1);

        stereo_winHeight = new QSpinBox(groupBox_10);
        stereo_winHeight->setObjectName(QString::fromUtf8("stereo_winHeight"));
        stereo_winHeight->setMinimum(3);
        stereo_winHeight->setMaximum(999999);
        stereo_winHeight->setSingleStep(1);
        stereo_winHeight->setValue(21);

        gridLayout_33->addWidget(stereo_winHeight, 2, 0, 1, 1);

        stereo_iterations = new QSpinBox(groupBox_10);
        stereo_iterations->setObjectName(QString::fromUtf8("stereo_iterations"));
        stereo_iterations->setMinimum(1);
        stereo_iterations->setMaximum(999999);
        stereo_iterations->setSingleStep(1);
        stereo_iterations->setValue(30);

        gridLayout_33->addWidget(stereo_iterations, 4, 0, 1, 1);

        stereo_flow_eps = new QDoubleSpinBox(groupBox_10);
        stereo_flow_eps->setObjectName(QString::fromUtf8("stereo_flow_eps"));
        stereo_flow_eps->setDecimals(4);
        stereo_flow_eps->setMinimum(0.0001);
        stereo_flow_eps->setMaximum(0.1);
        stereo_flow_eps->setSingleStep(0.01);
        stereo_flow_eps->setValue(0.01);

        gridLayout_33->addWidget(stereo_flow_eps, 9, 0, 1, 1);

        label_207 = new QLabel(groupBox_10);
        label_207->setObjectName(QString::fromUtf8("label_207"));
        label_207->setWordWrap(true);
        label_207->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_207, 9, 1, 1, 1);

        label_208 = new QLabel(groupBox_10);
        label_208->setObjectName(QString::fromUtf8("label_208"));
        label_208->setWordWrap(true);
        label_208->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_208, 3, 1, 1, 1);

        stereo_maxLevel = new QSpinBox(groupBox_10);
        stereo_maxLevel->setObjectName(QString::fromUtf8("stereo_maxLevel"));
        stereo_maxLevel->setMinimum(0);
        stereo_maxLevel->setMaximum(999999);
        stereo_maxLevel->setSingleStep(1);
        stereo_maxLevel->setValue(3);

        gridLayout_33->addWidget(stereo_maxLevel, 3, 0, 1, 1);

        label_287 = new QLabel(groupBox_10);
        label_287->setObjectName(QString::fromUtf8("label_287"));
        label_287->setWordWrap(true);
        label_287->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_287, 8, 1, 1, 1);

        label_214 = new QLabel(groupBox_10);
        label_214->setObjectName(QString::fromUtf8("label_214"));
        label_214->setWordWrap(true);
        label_214->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_214, 7, 1, 1, 1);

        label_286 = new QLabel(groupBox_10);
        label_286->setObjectName(QString::fromUtf8("label_286"));
        label_286->setWordWrap(true);
        label_286->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_33->addWidget(label_286, 6, 1, 1, 1);

        stereo_maxDisparity = new QSpinBox(groupBox_10);
        stereo_maxDisparity->setObjectName(QString::fromUtf8("stereo_maxDisparity"));
        stereo_maxDisparity->setMinimum(1);
        stereo_maxDisparity->setMaximum(999999);
        stereo_maxDisparity->setSingleStep(1);
        stereo_maxDisparity->setValue(30);

        gridLayout_33->addWidget(stereo_maxDisparity, 6, 0, 1, 1);

        stereo_opticalFlow = new QCheckBox(groupBox_10);
        stereo_opticalFlow->setObjectName(QString::fromUtf8("stereo_opticalFlow"));

        gridLayout_33->addWidget(stereo_opticalFlow, 7, 0, 1, 1);

        gridLayout_33->setColumnStretch(1, 1);

        verticalLayout_56->addWidget(groupBox_10);


        verticalLayout_57->addWidget(groupBox_stereo1);

        verticalSpacer_29 = new QSpacerItem(20, 464, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_57->addItem(verticalSpacer_29);

        stackedWidget->addWidget(page_29);
        page_51 = new QWidget();
        page_51->setObjectName(QString::fromUtf8("page_51"));
        verticalLayout_83 = new QVBoxLayout(page_51);
        verticalLayout_83->setObjectName(QString::fromUtf8("verticalLayout_83"));
        groupBox_stereoBM2 = new QGroupBox(page_51);
        groupBox_stereoBM2->setObjectName(QString::fromUtf8("groupBox_stereoBM2"));
        verticalLayout_82 = new QVBoxLayout(groupBox_stereoBM2);
        verticalLayout_82->setObjectName(QString::fromUtf8("verticalLayout_82"));
        label_197 = new QLabel(groupBox_stereoBM2);
        label_197->setObjectName(QString::fromUtf8("label_197"));
        label_197->setWordWrap(true);
        label_197->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_82->addWidget(label_197);

        groupBox_16 = new QGroupBox(groupBox_stereoBM2);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        gridLayout_34 = new QGridLayout(groupBox_16);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        stereobm_uniquessRatio = new QSpinBox(groupBox_16);
        stereobm_uniquessRatio->setObjectName(QString::fromUtf8("stereobm_uniquessRatio"));
        stereobm_uniquessRatio->setMinimum(1);
        stereobm_uniquessRatio->setMaximum(999999);
        stereobm_uniquessRatio->setSingleStep(1);
        stereobm_uniquessRatio->setValue(21);

        gridLayout_34->addWidget(stereobm_uniquessRatio, 6, 0, 1, 1);

        stereobm_numDisparities = new QSpinBox(groupBox_16);
        stereobm_numDisparities->setObjectName(QString::fromUtf8("stereobm_numDisparities"));
        stereobm_numDisparities->setMinimum(0);
        stereobm_numDisparities->setMaximum(999999);
        stereobm_numDisparities->setSingleStep(1);
        stereobm_numDisparities->setValue(21);

        gridLayout_34->addWidget(stereobm_numDisparities, 3, 0, 1, 1);

        stereobm_preFilterCap = new QSpinBox(groupBox_16);
        stereobm_preFilterCap->setObjectName(QString::fromUtf8("stereobm_preFilterCap"));
        stereobm_preFilterCap->setMinimum(1);
        stereobm_preFilterCap->setMaximum(999999);
        stereobm_preFilterCap->setSingleStep(1);
        stereobm_preFilterCap->setValue(21);

        gridLayout_34->addWidget(stereobm_preFilterCap, 5, 0, 1, 1);

        label_278 = new QLabel(groupBox_16);
        label_278->setObjectName(QString::fromUtf8("label_278"));
        label_278->setWordWrap(true);
        label_278->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_278, 4, 1, 1, 1);

        label_276 = new QLabel(groupBox_16);
        label_276->setObjectName(QString::fromUtf8("label_276"));
        label_276->setWordWrap(true);
        label_276->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_276, 2, 1, 1, 1);

        label_281 = new QLabel(groupBox_16);
        label_281->setObjectName(QString::fromUtf8("label_281"));
        label_281->setWordWrap(true);
        label_281->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_281, 7, 1, 1, 1);

        label_279 = new QLabel(groupBox_16);
        label_279->setObjectName(QString::fromUtf8("label_279"));
        label_279->setWordWrap(true);
        label_279->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_279, 5, 1, 1, 1);

        stereobm_speckleWinSize = new QSpinBox(groupBox_16);
        stereobm_speckleWinSize->setObjectName(QString::fromUtf8("stereobm_speckleWinSize"));
        stereobm_speckleWinSize->setMinimum(0);
        stereobm_speckleWinSize->setMaximum(999999);
        stereobm_speckleWinSize->setSingleStep(1);
        stereobm_speckleWinSize->setValue(21);

        gridLayout_34->addWidget(stereobm_speckleWinSize, 8, 0, 1, 1);

        label_277 = new QLabel(groupBox_16);
        label_277->setObjectName(QString::fromUtf8("label_277"));
        label_277->setWordWrap(true);
        label_277->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_277, 3, 1, 1, 1);

        label_216 = new QLabel(groupBox_16);
        label_216->setObjectName(QString::fromUtf8("label_216"));
        label_216->setWordWrap(true);
        label_216->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_216, 1, 1, 1, 1);

        stereobm_minDisparity = new QSpinBox(groupBox_16);
        stereobm_minDisparity->setObjectName(QString::fromUtf8("stereobm_minDisparity"));
        stereobm_minDisparity->setMinimum(0);
        stereobm_minDisparity->setMaximum(999999);
        stereobm_minDisparity->setSingleStep(1);
        stereobm_minDisparity->setValue(21);

        gridLayout_34->addWidget(stereobm_minDisparity, 2, 0, 1, 1);

        stereobm_blockSize = new QSpinBox(groupBox_16);
        stereobm_blockSize->setObjectName(QString::fromUtf8("stereobm_blockSize"));
        stereobm_blockSize->setMinimum(3);
        stereobm_blockSize->setMaximum(999999);
        stereobm_blockSize->setSingleStep(1);
        stereobm_blockSize->setValue(21);

        gridLayout_34->addWidget(stereobm_blockSize, 1, 0, 1, 1);

        stereobm_preFilterSize = new QSpinBox(groupBox_16);
        stereobm_preFilterSize->setObjectName(QString::fromUtf8("stereobm_preFilterSize"));
        stereobm_preFilterSize->setMinimum(1);
        stereobm_preFilterSize->setMaximum(999999);
        stereobm_preFilterSize->setSingleStep(1);
        stereobm_preFilterSize->setValue(21);

        gridLayout_34->addWidget(stereobm_preFilterSize, 4, 0, 1, 1);

        label_280 = new QLabel(groupBox_16);
        label_280->setObjectName(QString::fromUtf8("label_280"));
        label_280->setWordWrap(true);
        label_280->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_280, 6, 1, 1, 1);

        stereobm_tetureThreshold = new QSpinBox(groupBox_16);
        stereobm_tetureThreshold->setObjectName(QString::fromUtf8("stereobm_tetureThreshold"));
        stereobm_tetureThreshold->setMinimum(1);
        stereobm_tetureThreshold->setMaximum(999999);
        stereobm_tetureThreshold->setSingleStep(1);
        stereobm_tetureThreshold->setValue(21);

        gridLayout_34->addWidget(stereobm_tetureThreshold, 7, 0, 1, 1);

        stereobm_speckleRange = new QSpinBox(groupBox_16);
        stereobm_speckleRange->setObjectName(QString::fromUtf8("stereobm_speckleRange"));
        stereobm_speckleRange->setMinimum(0);
        stereobm_speckleRange->setMaximum(999999);
        stereobm_speckleRange->setSingleStep(1);
        stereobm_speckleRange->setValue(21);

        gridLayout_34->addWidget(stereobm_speckleRange, 9, 0, 1, 1);

        label_282 = new QLabel(groupBox_16);
        label_282->setObjectName(QString::fromUtf8("label_282"));
        label_282->setWordWrap(true);
        label_282->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_282, 8, 1, 1, 1);

        label_283 = new QLabel(groupBox_16);
        label_283->setObjectName(QString::fromUtf8("label_283"));
        label_283->setWordWrap(true);
        label_283->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_34->addWidget(label_283, 9, 1, 1, 1);

        gridLayout_34->setColumnStretch(1, 1);

        verticalLayout_82->addWidget(groupBox_16);


        verticalLayout_83->addWidget(groupBox_stereoBM2);

        verticalSpacer_42 = new QSpacerItem(20, 1375, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_83->addItem(verticalSpacer_42);

        stackedWidget->addWidget(page_51);
        page_45 = new QWidget();
        page_45->setObjectName(QString::fromUtf8("page_45"));
        verticalLayout_74 = new QVBoxLayout(page_45);
        verticalLayout_74->setObjectName(QString::fromUtf8("verticalLayout_74"));
        groupBox_feature1 = new QGroupBox(page_45);
        groupBox_feature1->setObjectName(QString::fromUtf8("groupBox_feature1"));
        verticalLayout_75 = new QVBoxLayout(groupBox_feature1);
        verticalLayout_75->setObjectName(QString::fromUtf8("verticalLayout_75"));
        label_10 = new QLabel(groupBox_feature1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_75->addWidget(label_10);


        verticalLayout_74->addWidget(groupBox_feature1);

        verticalSpacer_36 = new QSpacerItem(20, 1197, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_74->addItem(verticalSpacer_36);

        stackedWidget->addWidget(page_45);
        page_13 = new QWidget();
        page_13->setObjectName(QString::fromUtf8("page_13"));
        verticalLayout_38 = new QVBoxLayout(page_13);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        groupBox_detector_surf2 = new QGroupBox(page_13);
        groupBox_detector_surf2->setObjectName(QString::fromUtf8("groupBox_detector_surf2"));
        gridLayout_15 = new QGridLayout(groupBox_detector_surf2);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        surf_checkBox_upright = new QCheckBox(groupBox_detector_surf2);
        surf_checkBox_upright->setObjectName(QString::fromUtf8("surf_checkBox_upright"));
        surf_checkBox_upright->setEnabled(true);

        gridLayout_15->addWidget(surf_checkBox_upright, 4, 0, 1, 1);

        label_41 = new QLabel(groupBox_detector_surf2);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_15->addWidget(label_41, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox_detector_surf2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);
        label_8->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_15->addWidget(label_8, 3, 1, 1, 1);

        label_surf_checkBox_gpuKeypointsRatio = new QLabel(groupBox_detector_surf2);
        label_surf_checkBox_gpuKeypointsRatio->setObjectName(QString::fromUtf8("label_surf_checkBox_gpuKeypointsRatio"));
        label_surf_checkBox_gpuKeypointsRatio->setEnabled(true);
        label_surf_checkBox_gpuKeypointsRatio->setWordWrap(true);
        label_surf_checkBox_gpuKeypointsRatio->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_15->addWidget(label_surf_checkBox_gpuKeypointsRatio, 6, 1, 1, 1);

        label_surf_checkBox_gpuVersion = new QLabel(groupBox_detector_surf2);
        label_surf_checkBox_gpuVersion->setObjectName(QString::fromUtf8("label_surf_checkBox_gpuVersion"));
        label_surf_checkBox_gpuVersion->setEnabled(true);
        label_surf_checkBox_gpuVersion->setWordWrap(true);
        label_surf_checkBox_gpuVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_15->addWidget(label_surf_checkBox_gpuVersion, 5, 1, 1, 1);

        surf_spinBox_octaves = new QSpinBox(groupBox_detector_surf2);
        surf_spinBox_octaves->setObjectName(QString::fromUtf8("surf_spinBox_octaves"));
        surf_spinBox_octaves->setMinimum(1);
        surf_spinBox_octaves->setMaximum(100000);
        surf_spinBox_octaves->setValue(4);

        gridLayout_15->addWidget(surf_spinBox_octaves, 1, 0, 1, 1);

        surf_checkBox_gpuVersion = new QCheckBox(groupBox_detector_surf2);
        surf_checkBox_gpuVersion->setObjectName(QString::fromUtf8("surf_checkBox_gpuVersion"));
        surf_checkBox_gpuVersion->setEnabled(true);

        gridLayout_15->addWidget(surf_checkBox_gpuVersion, 5, 0, 1, 1);

        label_49 = new QLabel(groupBox_detector_surf2);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_15->addWidget(label_49, 4, 1, 1, 1);

        surf_doubleSpinBox_gpuKeypointsRatio = new QDoubleSpinBox(groupBox_detector_surf2);
        surf_doubleSpinBox_gpuKeypointsRatio->setObjectName(QString::fromUtf8("surf_doubleSpinBox_gpuKeypointsRatio"));
        surf_doubleSpinBox_gpuKeypointsRatio->setValue(0.01);

        gridLayout_15->addWidget(surf_doubleSpinBox_gpuKeypointsRatio, 6, 0, 1, 1);

        surf_doubleSpinBox_hessianThr = new QDoubleSpinBox(groupBox_detector_surf2);
        surf_doubleSpinBox_hessianThr->setObjectName(QString::fromUtf8("surf_doubleSpinBox_hessianThr"));
        surf_doubleSpinBox_hessianThr->setDecimals(0);
        surf_doubleSpinBox_hessianThr->setMaximum(50000);
        surf_doubleSpinBox_hessianThr->setValue(500);

        gridLayout_15->addWidget(surf_doubleSpinBox_hessianThr, 0, 0, 1, 1);

        checkBox_surfExtended = new QCheckBox(groupBox_detector_surf2);
        checkBox_surfExtended->setObjectName(QString::fromUtf8("checkBox_surfExtended"));

        gridLayout_15->addWidget(checkBox_surfExtended, 3, 0, 1, 1);

        surf_spinBox_octaveLayers = new QSpinBox(groupBox_detector_surf2);
        surf_spinBox_octaveLayers->setObjectName(QString::fromUtf8("surf_spinBox_octaveLayers"));
        surf_spinBox_octaveLayers->setMinimum(1);
        surf_spinBox_octaveLayers->setMaximum(100000);
        surf_spinBox_octaveLayers->setValue(2);

        gridLayout_15->addWidget(surf_spinBox_octaveLayers, 2, 0, 1, 1);

        label_26 = new QLabel(groupBox_detector_surf2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_15->addWidget(label_26, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_detector_surf2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_15->addWidget(label_4, 0, 1, 1, 1);

        gridLayout_15->setColumnStretch(1, 1);

        verticalLayout_38->addWidget(groupBox_detector_surf2);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_17);

        stackedWidget->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QString::fromUtf8("page_14"));
        verticalLayout_39 = new QVBoxLayout(page_14);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        groupBox_detector_sift2 = new QGroupBox(page_14);
        groupBox_detector_sift2->setObjectName(QString::fromUtf8("groupBox_detector_sift2"));
        gridLayout_19 = new QGridLayout(groupBox_detector_sift2);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        sift_spinBox_nFeatures = new QSpinBox(groupBox_detector_sift2);
        sift_spinBox_nFeatures->setObjectName(QString::fromUtf8("sift_spinBox_nFeatures"));

        gridLayout_19->addWidget(sift_spinBox_nFeatures, 0, 0, 1, 1);

        label_129 = new QLabel(groupBox_detector_sift2);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        label_129->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_19->addWidget(label_129, 4, 1, 1, 1);

        sift_doubleSpinBox_contrastThr = new QDoubleSpinBox(groupBox_detector_sift2);
        sift_doubleSpinBox_contrastThr->setObjectName(QString::fromUtf8("sift_doubleSpinBox_contrastThr"));
        sift_doubleSpinBox_contrastThr->setDecimals(6);
        sift_doubleSpinBox_contrastThr->setMinimum(0);
        sift_doubleSpinBox_contrastThr->setMaximum(50000);
        sift_doubleSpinBox_contrastThr->setSingleStep(0.001);
        sift_doubleSpinBox_contrastThr->setValue(0.006667);

        gridLayout_19->addWidget(sift_doubleSpinBox_contrastThr, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_detector_sift2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_19->addWidget(label_5, 2, 1, 1, 1);

        label_30 = new QLabel(groupBox_detector_sift2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_19->addWidget(label_30, 3, 1, 1, 1);

        sift_doubleSpinBox_edgeThr = new QDoubleSpinBox(groupBox_detector_sift2);
        sift_doubleSpinBox_edgeThr->setObjectName(QString::fromUtf8("sift_doubleSpinBox_edgeThr"));
        sift_doubleSpinBox_edgeThr->setSingleStep(0.1);
        sift_doubleSpinBox_edgeThr->setValue(10);

        gridLayout_19->addWidget(sift_doubleSpinBox_edgeThr, 3, 0, 1, 1);

        sift_doubleSpinBox_sigma = new QDoubleSpinBox(groupBox_detector_sift2);
        sift_doubleSpinBox_sigma->setObjectName(QString::fromUtf8("sift_doubleSpinBox_sigma"));
        sift_doubleSpinBox_sigma->setSingleStep(0.1);
        sift_doubleSpinBox_sigma->setValue(10);

        gridLayout_19->addWidget(sift_doubleSpinBox_sigma, 4, 0, 1, 1);

        sift_spinBox_nOctaveLayers = new QSpinBox(groupBox_detector_sift2);
        sift_spinBox_nOctaveLayers->setObjectName(QString::fromUtf8("sift_spinBox_nOctaveLayers"));

        gridLayout_19->addWidget(sift_spinBox_nOctaveLayers, 1, 0, 1, 1);

        label_130 = new QLabel(groupBox_detector_sift2);
        label_130->setObjectName(QString::fromUtf8("label_130"));
        label_130->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_19->addWidget(label_130, 1, 1, 1, 1);

        label_131 = new QLabel(groupBox_detector_sift2);
        label_131->setObjectName(QString::fromUtf8("label_131"));
        label_131->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_19->addWidget(label_131, 0, 1, 1, 1);

        gridLayout_19->setColumnStretch(1, 1);

        verticalLayout_39->addWidget(groupBox_detector_sift2);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_39->addItem(verticalSpacer_19);

        stackedWidget->addWidget(page_14);
        page_17 = new QWidget();
        page_17->setObjectName(QString::fromUtf8("page_17"));
        verticalLayout_14 = new QVBoxLayout(page_17);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        groupBox_detector_fast2 = new QGroupBox(page_17);
        groupBox_detector_fast2->setObjectName(QString::fromUtf8("groupBox_detector_fast2"));
        groupBox_detector_fast2->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox_detector_fast2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        fastThreshold = new QSpinBox(groupBox_detector_fast2);
        fastThreshold->setObjectName(QString::fromUtf8("fastThreshold"));
        fastThreshold->setMinimum(1);
        fastThreshold->setMaximum(9999);
        fastThreshold->setValue(50);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, fastThreshold);

        label_56 = new QLabel(groupBox_detector_fast2);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setWordWrap(true);
        label_56->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_56);

        fastSuppressNonMax = new QCheckBox(groupBox_detector_fast2);
        fastSuppressNonMax->setObjectName(QString::fromUtf8("fastSuppressNonMax"));
        fastSuppressNonMax->setChecked(true);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, fastSuppressNonMax);

        label_69 = new QLabel(groupBox_detector_fast2);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setWordWrap(true);
        label_69->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, label_69);


        verticalLayout->addLayout(formLayout_2);

        groupBox_fast_opencv2 = new QGroupBox(groupBox_detector_fast2);
        groupBox_fast_opencv2->setObjectName(QString::fromUtf8("groupBox_fast_opencv2"));
        gridLayout_71 = new QGridLayout(groupBox_fast_opencv2);
        gridLayout_71->setObjectName(QString::fromUtf8("gridLayout_71"));
        fastThresholdMin = new QSpinBox(groupBox_fast_opencv2);
        fastThresholdMin->setObjectName(QString::fromUtf8("fastThresholdMin"));
        fastThresholdMin->setMinimum(1);
        fastThresholdMin->setMaximum(9999);
        fastThresholdMin->setValue(50);

        gridLayout_71->addWidget(fastThresholdMin, 0, 0, 1, 1);

        label_111 = new QLabel(groupBox_fast_opencv2);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setWordWrap(true);
        label_111->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_71->addWidget(label_111, 0, 1, 1, 1);

        fastThresholdMax = new QSpinBox(groupBox_fast_opencv2);
        fastThresholdMax->setObjectName(QString::fromUtf8("fastThresholdMax"));
        fastThresholdMax->setMinimum(1);
        fastThresholdMax->setMaximum(9999);
        fastThresholdMax->setValue(50);

        gridLayout_71->addWidget(fastThresholdMax, 1, 0, 1, 1);

        label_115 = new QLabel(groupBox_fast_opencv2);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setWordWrap(true);
        label_115->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_71->addWidget(label_115, 1, 1, 1, 1);

        fastGridRows = new QSpinBox(groupBox_fast_opencv2);
        fastGridRows->setObjectName(QString::fromUtf8("fastGridRows"));
        fastGridRows->setMinimum(0);
        fastGridRows->setMaximum(9999);
        fastGridRows->setValue(0);

        gridLayout_71->addWidget(fastGridRows, 2, 0, 1, 1);

        label_104 = new QLabel(groupBox_fast_opencv2);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        label_104->setWordWrap(true);
        label_104->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_71->addWidget(label_104, 2, 1, 1, 1);

        fastGridCols = new QSpinBox(groupBox_fast_opencv2);
        fastGridCols->setObjectName(QString::fromUtf8("fastGridCols"));
        fastGridCols->setMinimum(0);
        fastGridCols->setMaximum(9999);
        fastGridCols->setValue(0);

        gridLayout_71->addWidget(fastGridCols, 3, 0, 1, 1);

        label_109 = new QLabel(groupBox_fast_opencv2);
        label_109->setObjectName(QString::fromUtf8("label_109"));
        label_109->setWordWrap(true);
        label_109->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_71->addWidget(label_109, 3, 1, 1, 1);

        fastGpu = new QCheckBox(groupBox_fast_opencv2);
        fastGpu->setObjectName(QString::fromUtf8("fastGpu"));
        fastGpu->setChecked(true);

        gridLayout_71->addWidget(fastGpu, 4, 0, 1, 1);

        label_fastGPU = new QLabel(groupBox_fast_opencv2);
        label_fastGPU->setObjectName(QString::fromUtf8("label_fastGPU"));
        label_fastGPU->setWordWrap(true);
        label_fastGPU->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_71->addWidget(label_fastGPU, 4, 1, 1, 1);

        fastKeypointRatio = new QDoubleSpinBox(groupBox_fast_opencv2);
        fastKeypointRatio->setObjectName(QString::fromUtf8("fastKeypointRatio"));
        fastKeypointRatio->setMaximum(1);
        fastKeypointRatio->setSingleStep(0.01);
        fastKeypointRatio->setValue(0.05);

        gridLayout_71->addWidget(fastKeypointRatio, 5, 0, 1, 1);

        label_fastGPUKptRatio = new QLabel(groupBox_fast_opencv2);
        label_fastGPUKptRatio->setObjectName(QString::fromUtf8("label_fastGPUKptRatio"));
        label_fastGPUKptRatio->setWordWrap(true);
        label_fastGPUKptRatio->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_71->addWidget(label_fastGPUKptRatio, 5, 1, 1, 1);

        gridLayout_71->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_fast_opencv2);

        verticalSpacer_16 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_16);


        verticalLayout_14->addWidget(groupBox_detector_fast2);

        stackedWidget->addWidget(page_17);
        page_15 = new QWidget();
        page_15->setObjectName(QString::fromUtf8("page_15"));
        verticalLayout_40 = new QVBoxLayout(page_15);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        groupBox_detector_brief2 = new QGroupBox(page_15);
        groupBox_detector_brief2->setObjectName(QString::fromUtf8("groupBox_detector_brief2"));
        gridLayout_16 = new QGridLayout(groupBox_detector_brief2);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        briefBytes = new QSpinBox(groupBox_detector_brief2);
        briefBytes->setObjectName(QString::fromUtf8("briefBytes"));
        briefBytes->setMinimum(1);
        briefBytes->setMaximum(1000);
        briefBytes->setValue(32);

        gridLayout_16->addWidget(briefBytes, 0, 0, 1, 1);

        label_52 = new QLabel(groupBox_detector_brief2);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setWordWrap(true);
        label_52->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_16->addWidget(label_52, 0, 1, 1, 1);

        gridLayout_16->setColumnStretch(1, 1);

        verticalLayout_40->addWidget(groupBox_detector_brief2);

        verticalSpacer_22 = new QSpacerItem(20, 660, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_40->addItem(verticalSpacer_22);

        stackedWidget->addWidget(page_15);
        page_18 = new QWidget();
        page_18->setObjectName(QString::fromUtf8("page_18"));
        verticalLayout_35 = new QVBoxLayout(page_18);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        groupBox_detector_orb2 = new QGroupBox(page_18);
        groupBox_detector_orb2->setObjectName(QString::fromUtf8("groupBox_detector_orb2"));
        gridLayout_14 = new QGridLayout(groupBox_detector_orb2);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        doubleSpinBox_ORBScaleFactor = new QDoubleSpinBox(groupBox_detector_orb2);
        doubleSpinBox_ORBScaleFactor->setObjectName(QString::fromUtf8("doubleSpinBox_ORBScaleFactor"));
        doubleSpinBox_ORBScaleFactor->setDecimals(1);
        doubleSpinBox_ORBScaleFactor->setValue(1.2);

        gridLayout_14->addWidget(doubleSpinBox_ORBScaleFactor, 0, 0, 1, 1);

        label_32 = new QLabel(groupBox_detector_orb2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setWordWrap(true);
        label_32->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_14->addWidget(label_32, 0, 1, 1, 1);

        spinBox_ORBNLevels = new QSpinBox(groupBox_detector_orb2);
        spinBox_ORBNLevels->setObjectName(QString::fromUtf8("spinBox_ORBNLevels"));
        spinBox_ORBNLevels->setValue(8);

        gridLayout_14->addWidget(spinBox_ORBNLevels, 1, 0, 1, 1);

        label_43 = new QLabel(groupBox_detector_orb2);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setWordWrap(true);
        label_43->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_14->addWidget(label_43, 1, 1, 1, 1);

        spinBox_ORBEdgeThreshold = new QSpinBox(groupBox_detector_orb2);
        spinBox_ORBEdgeThreshold->setObjectName(QString::fromUtf8("spinBox_ORBEdgeThreshold"));
        spinBox_ORBEdgeThreshold->setValue(31);

        gridLayout_14->addWidget(spinBox_ORBEdgeThreshold, 2, 0, 1, 1);

        label_95 = new QLabel(groupBox_detector_orb2);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setWordWrap(true);
        label_95->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_14->addWidget(label_95, 2, 1, 1, 1);

        spinBox_ORBFirstLevel = new QSpinBox(groupBox_detector_orb2);
        spinBox_ORBFirstLevel->setObjectName(QString::fromUtf8("spinBox_ORBFirstLevel"));
        spinBox_ORBFirstLevel->setMaximum(0);

        gridLayout_14->addWidget(spinBox_ORBFirstLevel, 3, 0, 1, 1);

        label_127 = new QLabel(groupBox_detector_orb2);
        label_127->setObjectName(QString::fromUtf8("label_127"));
        label_127->setWordWrap(true);
        label_127->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_14->addWidget(label_127, 3, 1, 1, 1);

        spinBox_ORBWTA_K = new QSpinBox(groupBox_detector_orb2);
        spinBox_ORBWTA_K->setObjectName(QString::fromUtf8("spinBox_ORBWTA_K"));
        spinBox_ORBWTA_K->setValue(2);

        gridLayout_14->addWidget(spinBox_ORBWTA_K, 4, 0, 1, 1);

        label_128 = new QLabel(groupBox_detector_orb2);
        label_128->setObjectName(QString::fromUtf8("label_128"));
        label_128->setWordWrap(true);
        label_128->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_14->addWidget(label_128, 4, 1, 1, 1);

        spinBox_ORBScoreType = new QSpinBox(groupBox_detector_orb2);
        spinBox_ORBScoreType->setObjectName(QString::fromUtf8("spinBox_ORBScoreType"));

        gridLayout_14->addWidget(spinBox_ORBScoreType, 5, 0, 1, 1);

        label_140 = new QLabel(groupBox_detector_orb2);
        label_140->setObjectName(QString::fromUtf8("label_140"));
        label_140->setWordWrap(true);
        label_140->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_14->addWidget(label_140, 5, 1, 1, 1);

        spinBox_ORBPatchSize = new QSpinBox(groupBox_detector_orb2);
        spinBox_ORBPatchSize->setObjectName(QString::fromUtf8("spinBox_ORBPatchSize"));
        spinBox_ORBPatchSize->setValue(31);

        gridLayout_14->addWidget(spinBox_ORBPatchSize, 6, 0, 1, 1);

        label_147 = new QLabel(groupBox_detector_orb2);
        label_147->setObjectName(QString::fromUtf8("label_147"));
        label_147->setWordWrap(true);
        label_147->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_14->addWidget(label_147, 6, 1, 1, 1);

        checkBox_ORBGpu = new QCheckBox(groupBox_detector_orb2);
        checkBox_ORBGpu->setObjectName(QString::fromUtf8("checkBox_ORBGpu"));

        gridLayout_14->addWidget(checkBox_ORBGpu, 7, 0, 1, 1);

        label_orbGpu = new QLabel(groupBox_detector_orb2);
        label_orbGpu->setObjectName(QString::fromUtf8("label_orbGpu"));
        label_orbGpu->setWordWrap(true);
        label_orbGpu->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_14->addWidget(label_orbGpu, 7, 1, 1, 1);

        gridLayout_14->setColumnStretch(1, 1);

        verticalLayout_35->addWidget(groupBox_detector_orb2);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_35->addItem(verticalSpacer_18);

        stackedWidget->addWidget(page_18);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        verticalLayout_36 = new QVBoxLayout(page_11);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        groupBox_detector_freak2 = new QGroupBox(page_11);
        groupBox_detector_freak2->setObjectName(QString::fromUtf8("groupBox_detector_freak2"));
        gridLayout_13 = new QGridLayout(groupBox_detector_freak2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        checkBox_FREAKOrientationNormalized = new QCheckBox(groupBox_detector_freak2);
        checkBox_FREAKOrientationNormalized->setObjectName(QString::fromUtf8("checkBox_FREAKOrientationNormalized"));
        checkBox_FREAKOrientationNormalized->setChecked(true);

        gridLayout_13->addWidget(checkBox_FREAKOrientationNormalized, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox_detector_freak2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);
        label_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_13->addWidget(label_6, 0, 1, 1, 1);

        checkBox_FREAKScaleNormalized = new QCheckBox(groupBox_detector_freak2);
        checkBox_FREAKScaleNormalized->setObjectName(QString::fromUtf8("checkBox_FREAKScaleNormalized"));
        checkBox_FREAKScaleNormalized->setChecked(true);

        gridLayout_13->addWidget(checkBox_FREAKScaleNormalized, 1, 0, 1, 1);

        label_9 = new QLabel(groupBox_detector_freak2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);
        label_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_13->addWidget(label_9, 1, 1, 1, 1);

        doubleSpinBox_FREAKPatternScale = new QDoubleSpinBox(groupBox_detector_freak2);
        doubleSpinBox_FREAKPatternScale->setObjectName(QString::fromUtf8("doubleSpinBox_FREAKPatternScale"));
        doubleSpinBox_FREAKPatternScale->setValue(22);

        gridLayout_13->addWidget(doubleSpinBox_FREAKPatternScale, 2, 0, 1, 1);

        label_13 = new QLabel(groupBox_detector_freak2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setWordWrap(true);
        label_13->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_13->addWidget(label_13, 2, 1, 1, 1);

        spinBox_FREAKNOctaves = new QSpinBox(groupBox_detector_freak2);
        spinBox_FREAKNOctaves->setObjectName(QString::fromUtf8("spinBox_FREAKNOctaves"));
        spinBox_FREAKNOctaves->setValue(4);

        gridLayout_13->addWidget(spinBox_FREAKNOctaves, 3, 0, 1, 1);

        label_23 = new QLabel(groupBox_detector_freak2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setWordWrap(true);
        label_23->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_13->addWidget(label_23, 3, 1, 1, 1);

        gridLayout_13->setColumnStretch(1, 1);

        verticalLayout_36->addWidget(groupBox_detector_freak2);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_13);

        stackedWidget->addWidget(page_11);
        page_16 = new QWidget();
        page_16->setObjectName(QString::fromUtf8("page_16"));
        verticalLayout_9 = new QVBoxLayout(page_16);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupBox_detector_gftt2 = new QGroupBox(page_16);
        groupBox_detector_gftt2->setObjectName(QString::fromUtf8("groupBox_detector_gftt2"));
        gridLayout_21 = new QGridLayout(groupBox_detector_gftt2);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        doubleSpinBox_GFTT_qualityLevel = new QDoubleSpinBox(groupBox_detector_gftt2);
        doubleSpinBox_GFTT_qualityLevel->setObjectName(QString::fromUtf8("doubleSpinBox_GFTT_qualityLevel"));
        doubleSpinBox_GFTT_qualityLevel->setDecimals(4);
        doubleSpinBox_GFTT_qualityLevel->setMinimum(0.0001);
        doubleSpinBox_GFTT_qualityLevel->setMaximum(1);
        doubleSpinBox_GFTT_qualityLevel->setSingleStep(0.01);
        doubleSpinBox_GFTT_qualityLevel->setValue(0.01);

        gridLayout_21->addWidget(doubleSpinBox_GFTT_qualityLevel, 0, 0, 1, 1);

        doubleSpinBox_GFTT_minDistance = new QDoubleSpinBox(groupBox_detector_gftt2);
        doubleSpinBox_GFTT_minDistance->setObjectName(QString::fromUtf8("doubleSpinBox_GFTT_minDistance"));
        doubleSpinBox_GFTT_minDistance->setDecimals(1);
        doubleSpinBox_GFTT_minDistance->setValue(1);

        gridLayout_21->addWidget(doubleSpinBox_GFTT_minDistance, 1, 0, 1, 1);

        checkBox_GFTT_useHarrisDetector = new QCheckBox(groupBox_detector_gftt2);
        checkBox_GFTT_useHarrisDetector->setObjectName(QString::fromUtf8("checkBox_GFTT_useHarrisDetector"));
        checkBox_GFTT_useHarrisDetector->setChecked(true);

        gridLayout_21->addWidget(checkBox_GFTT_useHarrisDetector, 3, 0, 1, 1);

        label_172 = new QLabel(groupBox_detector_gftt2);
        label_172->setObjectName(QString::fromUtf8("label_172"));
        label_172->setWordWrap(true);
        label_172->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_21->addWidget(label_172, 3, 1, 1, 1);

        doubleSpinBox_GFTT_k = new QDoubleSpinBox(groupBox_detector_gftt2);
        doubleSpinBox_GFTT_k->setObjectName(QString::fromUtf8("doubleSpinBox_GFTT_k"));
        doubleSpinBox_GFTT_k->setMaximum(1);
        doubleSpinBox_GFTT_k->setSingleStep(0.01);
        doubleSpinBox_GFTT_k->setValue(0.04);

        gridLayout_21->addWidget(doubleSpinBox_GFTT_k, 4, 0, 1, 1);

        label_173 = new QLabel(groupBox_detector_gftt2);
        label_173->setObjectName(QString::fromUtf8("label_173"));
        label_173->setWordWrap(true);
        label_173->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_21->addWidget(label_173, 4, 1, 1, 1);

        spinBox_GFTT_blockSize = new QSpinBox(groupBox_detector_gftt2);
        spinBox_GFTT_blockSize->setObjectName(QString::fromUtf8("spinBox_GFTT_blockSize"));
        spinBox_GFTT_blockSize->setValue(3);

        gridLayout_21->addWidget(spinBox_GFTT_blockSize, 2, 0, 1, 1);

        label_175 = new QLabel(groupBox_detector_gftt2);
        label_175->setObjectName(QString::fromUtf8("label_175"));
        label_175->setWordWrap(true);
        label_175->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_21->addWidget(label_175, 0, 1, 1, 1);

        label_176 = new QLabel(groupBox_detector_gftt2);
        label_176->setObjectName(QString::fromUtf8("label_176"));
        label_176->setWordWrap(true);
        label_176->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_21->addWidget(label_176, 1, 1, 1, 1);

        label_177 = new QLabel(groupBox_detector_gftt2);
        label_177->setObjectName(QString::fromUtf8("label_177"));
        label_177->setWordWrap(true);
        label_177->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_21->addWidget(label_177, 2, 1, 1, 1);

        gridLayout_21->setColumnStretch(1, 1);

        verticalLayout_9->addWidget(groupBox_detector_gftt2);

        verticalSpacer_25 = new QSpacerItem(20, 644, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_25);

        stackedWidget->addWidget(page_16);
        page_25 = new QWidget();
        page_25->setObjectName(QString::fromUtf8("page_25"));
        verticalLayout_47 = new QVBoxLayout(page_25);
        verticalLayout_47->setObjectName(QString::fromUtf8("verticalLayout_47"));
        groupBox_detector_brisk2 = new QGroupBox(page_25);
        groupBox_detector_brisk2->setObjectName(QString::fromUtf8("groupBox_detector_brisk2"));
        gridLayout_26 = new QGridLayout(groupBox_detector_brisk2);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        label_191 = new QLabel(groupBox_detector_brisk2);
        label_191->setObjectName(QString::fromUtf8("label_191"));
        label_191->setWordWrap(true);
        label_191->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_26->addWidget(label_191, 0, 1, 1, 1);

        doubleSpinBox_BRISK_patterScale = new QDoubleSpinBox(groupBox_detector_brisk2);
        doubleSpinBox_BRISK_patterScale->setObjectName(QString::fromUtf8("doubleSpinBox_BRISK_patterScale"));
        doubleSpinBox_BRISK_patterScale->setMaximum(10);
        doubleSpinBox_BRISK_patterScale->setSingleStep(0.1);
        doubleSpinBox_BRISK_patterScale->setValue(1);

        gridLayout_26->addWidget(doubleSpinBox_BRISK_patterScale, 2, 0, 1, 1);

        label_188 = new QLabel(groupBox_detector_brisk2);
        label_188->setObjectName(QString::fromUtf8("label_188"));
        label_188->setWordWrap(true);
        label_188->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_26->addWidget(label_188, 1, 1, 1, 1);

        spinBox_BRISK_octaves = new QSpinBox(groupBox_detector_brisk2);
        spinBox_BRISK_octaves->setObjectName(QString::fromUtf8("spinBox_BRISK_octaves"));
        spinBox_BRISK_octaves->setMaximum(10);
        spinBox_BRISK_octaves->setValue(3);

        gridLayout_26->addWidget(spinBox_BRISK_octaves, 1, 0, 1, 1);

        label_189 = new QLabel(groupBox_detector_brisk2);
        label_189->setObjectName(QString::fromUtf8("label_189"));
        label_189->setWordWrap(true);
        label_189->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_26->addWidget(label_189, 2, 1, 1, 1);

        spinBox_BRISK_thresh = new QSpinBox(groupBox_detector_brisk2);
        spinBox_BRISK_thresh->setObjectName(QString::fromUtf8("spinBox_BRISK_thresh"));
        spinBox_BRISK_thresh->setMaximum(9999);
        spinBox_BRISK_thresh->setValue(30);

        gridLayout_26->addWidget(spinBox_BRISK_thresh, 0, 0, 1, 1);

        gridLayout_26->setColumnStretch(1, 1);

        verticalLayout_47->addWidget(groupBox_detector_brisk2);

        verticalSpacer_26 = new QSpacerItem(20, 742, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_47->addItem(verticalSpacer_26);

        stackedWidget->addWidget(page_25);

        verticalLayout_24->addWidget(stackedWidget);


        verticalLayout_16->addLayout(verticalLayout_24);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_17->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, -1, 12, -1);
        buttonBox_local = new QDialogButtonBox(preferencesDialog);
        buttonBox_local->setObjectName(QString::fromUtf8("buttonBox_local"));
        buttonBox_local->setOrientation(Qt::Horizontal);
        buttonBox_local->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::RestoreDefaults);

        horizontalLayout->addWidget(buttonBox_local);


        verticalLayout_17->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_17);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_26->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_basic = new QRadioButton(preferencesDialog);
        radioButton_basic->setObjectName(QString::fromUtf8("radioButton_basic"));
        radioButton_basic->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_basic);

        radioButton_advanced = new QRadioButton(preferencesDialog);
        radioButton_advanced->setObjectName(QString::fromUtf8("radioButton_advanced"));

        horizontalLayout_3->addWidget(radioButton_advanced);

        buttonBox_global = new QDialogButtonBox(preferencesDialog);
        buttonBox_global->setObjectName(QString::fromUtf8("buttonBox_global"));
        buttonBox_global->setOrientation(Qt::Horizontal);
        buttonBox_global->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox_global);


        verticalLayout_26->addLayout(horizontalLayout_3);


        retranslateUi(preferencesDialog);

        stackedWidget->setCurrentIndex(1);
        comboBox_loggerLevel->setCurrentIndex(2);
        comboBox_loggerEventLevel->setCurrentIndex(3);
        comboBox_loggerPauseLevel->setCurrentIndex(3);
        comboBox_loggerType->setCurrentIndex(1);
        stackedWidget_src->setCurrentIndex(3);
        stackedWidget_rgbd->setCurrentIndex(6);
        stackedWidget_stereo->setCurrentIndex(3);
        source_comboBox_image_type->setCurrentIndex(0);
        stackedWidget_image->setCurrentIndex(1);
        comboBox_dbSynchronous->setCurrentIndex(2);
        stackedWidget_odometryType->setCurrentIndex(0);
        stackedWidget_odometryFiltering->setCurrentIndex(1);
        stackedWidget_loopClosureCorrespondences->setCurrentIndex(0);
        reextract_nn->setCurrentIndex(3);
        stackedWidget_loopClosureEstimation->setCurrentIndex(2);
        reextract_type->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(preferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *preferencesDialog)
    {
        preferencesDialog->setWindowTitle(QApplication::translate("preferencesDialog", "Preferences", 0, QApplication::UnicodeUTF8));
        groupBox_generalSettingsGui0->setTitle(QApplication::translate("preferencesDialog", "General Settings (GUI)", 0, QApplication::UnicodeUTF8));
        general_checkBox_imagesKept->setText(QString());
        label_59->setText(QApplication::translate("preferencesDialog", "Insert new data received in the GUI cache. Used to show the loop closure image and the 3D Map.", 0, QApplication::UnicodeUTF8));
        checkBox_beep->setText(QString());
        label_88->setText(QApplication::translate("preferencesDialog", "Beep! on special events (finished processing the data set, an error has occured, ...).", 0, QApplication::UnicodeUTF8));
        label_102->setText(QApplication::translate("preferencesDialog", "Notify when a new global path is received.", 0, QApplication::UnicodeUTF8));
        checkBox_notifyWhenNewGlobalPathIsReceived->setText(QString());
        groupBox_5->setTitle(QApplication::translate("preferencesDialog", "Loop Closure Detection View", 0, QApplication::UnicodeUTF8));
        checkBox_imageRejectedShown->setText(QString());
        label_105->setText(QApplication::translate("preferencesDialog", "Show the image of the highest hypothesis.", 0, QApplication::UnicodeUTF8));
        checkBox_imageHighestHypShown->setText(QString());
        label_73->setText(QApplication::translate("preferencesDialog", "Show image when an hypothesis is rejected.", 0, QApplication::UnicodeUTF8));
        label_70->setText(QApplication::translate("preferencesDialog", "Vertical layout.", 0, QApplication::UnicodeUTF8));
        checkBox_verticalLayoutUsed->setText(QString());
        label_222->setText(QApplication::translate("preferencesDialog", "Show loop closure hypotheses on the graph view. Nodes are colorized from blue to red depending on the highest hypothesis (which is red). Posterior hypotheses should be published. ", 0, QApplication::UnicodeUTF8));
        checkBox_posteriorGraphView->setText(QString());
        groupBox->setTitle(QApplication::translate("preferencesDialog", "3D Map View", 0, QApplication::UnicodeUTF8));
        label_86->setText(QApplication::translate("preferencesDialog", "Odometry warning theshold:\n"
"Show a yellow background when the number of odometry inliers goes under this threshold. If 0, it is ignored. You can see the current odometry inliers count under Statistics view -> General -> Odom inliers.", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("preferencesDialog", "Save/Load Settings", 0, QApplication::UnicodeUTF8));
        pushButton_loadConfig->setText(QApplication::translate("preferencesDialog", "Load settings (*.ini) ...", 0, QApplication::UnicodeUTF8));
        pushButton_saveConfig->setText(QApplication::translate("preferencesDialog", "Save settings (*.ini) ...", 0, QApplication::UnicodeUTF8));
        pushButton_resetConfig->setText(QApplication::translate("preferencesDialog", "Reset all settings", 0, QApplication::UnicodeUTF8));
        groupBox_cloudRendering1->setTitle(QApplication::translate("preferencesDialog", "3D Rendering", 0, QApplication::UnicodeUTF8));
        groupBox_filtering->setTitle(QApplication::translate("preferencesDialog", "Cloud filtering", 0, QApplication::UnicodeUTF8));
        label_160->setText(QApplication::translate("preferencesDialog", "For visualization purpose, superposed clouds can be filtered by one of the approaches below.", 0, QApplication::UnicodeUTF8));
        label_71->setText(QApplication::translate("preferencesDialog", "No filtering.", 0, QApplication::UnicodeUTF8));
        radioButton_noFiltering->setText(QString());
        radioButton_subtractFiltering->setText(QString());
        doubleSpinBox_cloudFilterRadius->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("preferencesDialog", "Radius.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_cloudFilterAngle->setSuffix(QApplication::translate("preferencesDialog", " deg", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("preferencesDialog", "Angle.", 0, QApplication::UnicodeUTF8));
        label_161->setText(QApplication::translate("preferencesDialog", "Cloud subtraction filtering. When a new cloud is added to the map, its points are subtracted from the previous cloud.", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("preferencesDialog", "Pose filtering. By comparing poses in the same area, only one cloud in a fixed radius and angle is shown.", 0, QApplication::UnicodeUTF8));
        radioButton_nodeFiltering->setText(QString());
        doubleSpinBox_subtractFilteringRadius->setSuffix(QString());
        label_192->setText(QApplication::translate("preferencesDialog", "Point radius used to find close points between the current cloud and the previous one.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_subtractFilteringAngle->setSuffix(QApplication::translate("preferencesDialog", " deg", 0, QApplication::UnicodeUTF8));
        label_193->setText(QApplication::translate("preferencesDialog", "Point angle used to keep only points with similar normal between the current cloud and the previous one.", 0, QApplication::UnicodeUTF8));
        label_174->setText(QApplication::translate("preferencesDialog", "Minimum points of the previous cloud in the fixed point radius in order to substract the point in the new cloud. Increasing this value reduces the black contours between clouds.", 0, QApplication::UnicodeUTF8));
        groupBox_gridMap->setTitle(QApplication::translate("preferencesDialog", "Occupancy Grid Map", 0, QApplication::UnicodeUTF8));
        label_167->setText(QApplication::translate("preferencesDialog", "When the Graph view is visible or if the \"Show in 3D map view\" below is checked, the grid map is generated using the laser scans.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_map_opacity->setSuffix(QString());
        checkBox_map_shown->setText(QString());
        label_map_shown->setText(QApplication::translate("preferencesDialog", "Show in 3D map view.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_map_resolution->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_159->setText(QApplication::translate("preferencesDialog", "Resolution (cell size).", 0, QApplication::UnicodeUTF8));
        label_170->setText(QApplication::translate("preferencesDialog", "Opacity.", 0, QApplication::UnicodeUTF8));
        checkBox_map_occupancyFrom3DCloud->setText(QString());
        label_210->setText(QApplication::translate("preferencesDialog", "Occupancy from 3D cloud projection on the ground. Laser scans are ignored when activated.", 0, QApplication::UnicodeUTF8));
        label_224->setText(QApplication::translate("preferencesDialog", "Erode.", 0, QApplication::UnicodeUTF8));
        checkBox_map_erode->setText(QString());
        checkBox_showScans->setText(QString());
        doubleSpinBox_opacity_scan->setSuffix(QString());
        label_110->setText(QApplication::translate("preferencesDialog", "Show scans.", 0, QApplication::UnicodeUTF8));
        label_119->setText(QApplication::translate("preferencesDialog", "Show 3D clouds.", 0, QApplication::UnicodeUTF8));
        checkBox_showOdomFeatures->setText(QString());
        checkBox_showFeatures->setText(QString());
        label_154->setText(QApplication::translate("preferencesDialog", "Map", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_maxDepth->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_maxDepth_odom->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_opacity_odom_scan->setSuffix(QString());
        label_108->setText(QApplication::translate("preferencesDialog", "3D cloud decimation (1-2-4-8-...).", 0, QApplication::UnicodeUTF8));
        label_132->setText(QApplication::translate("preferencesDialog", "3D cloud maximum depth (0 means no limit).", 0, QApplication::UnicodeUTF8));
        label_155->setText(QApplication::translate("preferencesDialog", "3D cloud opacity.", 0, QApplication::UnicodeUTF8));
        label_158->setText(QApplication::translate("preferencesDialog", "Scan point size (1..64).", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_voxelSizeScan->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_271->setText(QApplication::translate("preferencesDialog", "Scan voxel size.", 0, QApplication::UnicodeUTF8));
        label_156->setText(QApplication::translate("preferencesDialog", "Scan opacity.", 0, QApplication::UnicodeUTF8));
        checkBox_showOdomClouds->setText(QString());
        doubleSpinBox_opacity->setSuffix(QString());
        checkBox_showOdomScans->setText(QString());
        label_213->setText(QApplication::translate("preferencesDialog", "Show graphs.", 0, QApplication::UnicodeUTF8));
        checkBox_showGraphs->setText(QString());
        doubleSpinBox_opacity_odom->setSuffix(QString());
        checkBox_showClouds->setText(QString());
        label_243->setText(QApplication::translate("preferencesDialog", "Show labels.", 0, QApplication::UnicodeUTF8));
        checkBox_showLabels->setText(QString());
        doubleSpinBox_voxelSizeScan_odom->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_273->setText(QApplication::translate("preferencesDialog", "Scan downsampling step size.", 0, QApplication::UnicodeUTF8));
        label_157->setText(QApplication::translate("preferencesDialog", "3D cloud point size (1..64).", 0, QApplication::UnicodeUTF8));
        label_137->setText(QApplication::translate("preferencesDialog", "Odometry", 0, QApplication::UnicodeUTF8));
        label_123->setText(QApplication::translate("preferencesDialog", "Show 3D features.", 0, QApplication::UnicodeUTF8));
        label_166->setText(QApplication::translate("preferencesDialog", "Feature point size.", 0, QApplication::UnicodeUTF8));
        label_150->setText(QApplication::translate("preferencesDialog", "3D cloud minimum depth.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_minDepth->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_minDepth_odom->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        groupBox_organized->setTitle(QApplication::translate("preferencesDialog", "Organized Online Meshing", 0, QApplication::UnicodeUTF8));
        label_85->setText(QApplication::translate("preferencesDialog", "Angle tolerance", 0, QApplication::UnicodeUTF8));
        checkBox_mesh_quad->setText(QString());
        label_quad->setText(QApplication::translate("preferencesDialog", "Quad", 0, QApplication::UnicodeUTF8));
        spinBox_mesh_triangleSize->setSuffix(QApplication::translate("preferencesDialog", " pix", 0, QApplication::UnicodeUTF8));
        label_87->setText(QApplication::translate("preferencesDialog", "Triangle size", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_mesh_angleTolerance->setSuffix(QApplication::translate("preferencesDialog", " deg", 0, QApplication::UnicodeUTF8));
        groupBox_logging1->setTitle(QApplication::translate("preferencesDialog", "Logging", 0, QApplication::UnicodeUTF8));
        comboBox_loggerLevel->clear();
        comboBox_loggerLevel->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "DEBUG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "INFO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "WARNING", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "ERROR", 0, QApplication::UnicodeUTF8)
        );
        label_60->setText(QApplication::translate("preferencesDialog", "Logger level.", 0, QApplication::UnicodeUTF8));
        comboBox_loggerEventLevel->clear();
        comboBox_loggerEventLevel->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "DEBUG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "INFO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "WARNING", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "ERROR", 0, QApplication::UnicodeUTF8)
        );
        label_61->setText(QApplication::translate("preferencesDialog", "Logger event sent level (fatal messages are always sent).", 0, QApplication::UnicodeUTF8));
        comboBox_loggerPauseLevel->clear();
        comboBox_loggerPauseLevel->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "DEBUG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "INFO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "WARNING", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "ERROR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FATAL", 0, QApplication::UnicodeUTF8)
        );
        label_62->setText(QApplication::translate("preferencesDialog", "Logger level on which the process will automatically pause, showing the log console. A level set under the logger event level will do nothing.", 0, QApplication::UnicodeUTF8));
        checkBox_logger_printTime->setText(QString());
        label_67->setText(QApplication::translate("preferencesDialog", "Logger print time.", 0, QApplication::UnicodeUTF8));
        comboBox_loggerType->clear();
        comboBox_loggerType->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "No log", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Console", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "File", 0, QApplication::UnicodeUTF8)
        );
        label_68->setText(QApplication::translate("preferencesDialog", "Logger type: \n"
"when using the file type, logs are saved in LogRtabmap.txt (located in the working directory).", 0, QApplication::UnicodeUTF8));
        label_118->setText(QApplication::translate("preferencesDialog", "Logger print thread ID.", 0, QApplication::UnicodeUTF8));
        checkBox_logger_printThreadId->setText(QString());
        groupBox_source0->setTitle(QApplication::translate("preferencesDialog", "Source", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("preferencesDialog", "Input rate (0 means as fast as possible).", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("preferencesDialog", "Local transform from /base_link to /camera_link. Mouse over the box to show formats.", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("preferencesDialog", "Source type. Select specific driver below.", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("preferencesDialog", "ID of the device, which might be a serial number, bus@address or the index of the device. If empty, the first device found is taken.", 0, QApplication::UnicodeUTF8));
        label_244->setText(QApplication::translate("preferencesDialog", "Create a calibration file with known intrinsics (fx, fy, cx, cy). Useful if you already know the intrinsics of the source of images.", 0, QApplication::UnicodeUTF8));
        toolButton_source_path_calibration->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        lineEdit_calibrationFile->setText(QString());
        general_doubleSpinBox_imgRate->setSuffix(QApplication::translate("preferencesDialog", " Hz", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("preferencesDialog", "Mirroring mode (flip image horizontally). It has no effect on database source.", 0, QApplication::UnicodeUTF8));
        source_mirroring->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEdit_sourceLocalTransform->setToolTip(QApplication::translate("preferencesDialog", "<html><head/><body><p>Format (3 values): x y z<br/>Format (6 values): x y z roll pitch yaw<br/>Format (7 values): x y z qx qy qz qw<br/>Format (9 values, 3x3 rotation): r11 r12 r13 r21 r22 r23 r31 r32 r33<br/>Format (12 values, 3x4 transform): r11 r12 r13 tx r21 r22 r23 ty r31 r32 r33 tz</p><p>KITTI: /base_link to /gray_camera = 0 0 1 -1 0 0 0 -1 0<br/>KITTI: /base_link to /color_camera = 0 0 1 0 -1 0 0 -0.06 0 -1 0 0</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lineEdit_sourceLocalTransform->setText(QApplication::translate("preferencesDialog", "0 0 1 -1 0 0 0 -1 0", 0, QApplication::UnicodeUTF8));
        comboBox_sourceType->clear();
        comboBox_sourceType->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "RGB-D", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Stereo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "RGB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Database", 0, QApplication::UnicodeUTF8)
        );
        pushButton_test_camera->setText(QApplication::translate("preferencesDialog", "Test", 0, QApplication::UnicodeUTF8));
        pushButton_calibrate->setText(QApplication::translate("preferencesDialog", "Calibrate", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("preferencesDialog", "Calibration files are saved in \"camera_info\" folder of the working directory.", 0, QApplication::UnicodeUTF8));
        lineEdit_sourceDevice->setText(QString());
        pushButton_calibrate_simple->setText(QApplication::translate("preferencesDialog", "Create Calibration", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("preferencesDialog", "Calibration file path (*.yaml). If empty, the GUID of the camera is used (for those having one). OpenNI and Freenect drivers use factory calibration by default (so they ignore this parameter). A calibrated camera is required for RGB-D SLAM mode.", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("preferencesDialog", "Image decimation. RGB/Mono and depth images will be resized according to this value (size*1/decimation). Note that if depth images are captured, decimation should be a multiple of the depth image size.", 0, QApplication::UnicodeUTF8));
        groupBox_sourceRGBD->setTitle(QApplication::translate("preferencesDialog", "RGB-D", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("preferencesDialog", "Grabber for RGB-D devices (i.e., Primesense PSDK, Microsoft Kinect, Asus XTion Pro/Live).", 0, QApplication::UnicodeUTF8));
        comboBox_cameraRGBD->clear();
        comboBox_cameraRGBD->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "OpenNI-PCL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Freenect", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "OpenNI-CV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "OpenNI-CV-ASUS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "OpenNI2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Freenect2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Images", 0, QApplication::UnicodeUTF8)
        );
        label_228->setText(QApplication::translate("preferencesDialog", "Driver", 0, QApplication::UnicodeUTF8));
        label_229->setText(QApplication::translate("preferencesDialog", "Only RGB images are published.", 0, QApplication::UnicodeUTF8));
        checkbox_rgbd_colorOnly->setText(QString());
        groupBox_openni->setTitle(QApplication::translate("preferencesDialog", "OpenNI", 0, QApplication::UnicodeUTF8));
        lineEdit_openniOniPath->setText(QString());
        label_245->setText(QApplication::translate("preferencesDialog", "Path to a *.ONI file.", 0, QApplication::UnicodeUTF8));
        toolButton_openniOniPath->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        groupBox_openni2->setTitle(QApplication::translate("preferencesDialog", "OpenNI 2", 0, QApplication::UnicodeUTF8));
        openni2_autoWhiteBalance->setText(QString());
        label_217->setText(QApplication::translate("preferencesDialog", "Auto white balance.", 0, QApplication::UnicodeUTF8));
        openni2_autoExposure->setText(QString());
        label_218->setText(QApplication::translate("preferencesDialog", "Auto exposure.", 0, QApplication::UnicodeUTF8));
        label_219->setText(QApplication::translate("preferencesDialog", "Exposure.", 0, QApplication::UnicodeUTF8));
        label_220->setText(QApplication::translate("preferencesDialog", "Gain.", 0, QApplication::UnicodeUTF8));
        openni2_mirroring->setText(QString());
        label_223->setText(QApplication::translate("preferencesDialog", "Mirroring.", 0, QApplication::UnicodeUTF8));
        lineEdit_openni2OniPath->setText(QString());
        label_231->setText(QApplication::translate("preferencesDialog", "Path to a *.ONI file.", 0, QApplication::UnicodeUTF8));
        toolButton_openni2OniPath->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_264->setText(QApplication::translate("preferencesDialog", "Use timestamps and frame IDs from OpenNI2.", 0, QApplication::UnicodeUTF8));
        openni2_stampsIdsUsed->setText(QString());
        groupBox_freenect2->setTitle(QApplication::translate("preferencesDialog", "Freenect2", 0, QApplication::UnicodeUTF8));
        label_230->setText(QApplication::translate("preferencesDialog", "Format.", 0, QApplication::UnicodeUTF8));
        comboBox_freenect2Format->clear();
        comboBox_freenect2Format->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Registered Color to Depth SD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Registered Depth to Color SD (old way)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Registered Depth to Color HD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Registered Depth to Color HD (old way)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "IR + Depth", 0, QApplication::UnicodeUTF8)
        );
        label_268->setText(QApplication::translate("preferencesDialog", "Depth bilateral filtering.", 0, QApplication::UnicodeUTF8));
        label_266->setText(QApplication::translate("preferencesDialog", "Min depth.", 0, QApplication::UnicodeUTF8));
        label_269->setText(QApplication::translate("preferencesDialog", "Depth edge aware filtering.", 0, QApplication::UnicodeUTF8));
        checkBox_freenect2BilateralFiltering->setText(QString());
        checkBox_freenect2EdgeAwareFiltering->setText(QString());
        label_267->setText(QApplication::translate("preferencesDialog", "Max depth.", 0, QApplication::UnicodeUTF8));
        checkBox_freenect2NoiseFiltering->setText(QString());
        label_270->setText(QApplication::translate("preferencesDialog", "Depth noise filtering.", 0, QApplication::UnicodeUTF8));
        groupBox_cameraRGBDImages->setTitle(QApplication::translate("preferencesDialog", "RGB-D Images", 0, QApplication::UnicodeUTF8));
        label_252->setText(QApplication::translate("preferencesDialog", "Path to directory containing RGB images.", 0, QApplication::UnicodeUTF8));
        toolButton_cameraRGBDImages_path_rgb->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_257->setText(QApplication::translate("preferencesDialog", "Depth scale factor (depth = pixel value / factor).", 0, QApplication::UnicodeUTF8));
        toolButton_cameraRGBDImages_path_depth->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        lineEdit_cameraRGBDImages_path_rgb->setText(QString());
        lineEdit_cameraRGBDImages_path_depth->setText(QString());
        label_254->setText(QApplication::translate("preferencesDialog", "Path to directory containing depth images. The directory should have the same size has the RGB directory. The depth images should be already registered to RGB images. Assume that UINT16 images are in mm and FLOAT32 images are in m.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_cameraRGBDImages_scale->setToolTip(QApplication::translate("preferencesDialog", "For RGBD-SLAM datasets, it is 5.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_sourceStereo->setTitle(QApplication::translate("preferencesDialog", "Stereo", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("preferencesDialog", "Grabber for stereo devices (i.e., Bumblebee2).", 0, QApplication::UnicodeUTF8));
        comboBox_cameraStereo->clear();
        comboBox_cameraStereo->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "DC1394", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FlyCapture2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Images", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Video (Side-by-Side)", 0, QApplication::UnicodeUTF8)
        );
        label_240->setText(QApplication::translate("preferencesDialog", "Driver", 0, QApplication::UnicodeUTF8));
        checkbox_stereo_depthGenerated->setText(QString());
        label_247->setText(QApplication::translate("preferencesDialog", "Generate disparity image and convert it to depth. The resulting output is a RGB-D image instead of stereo images.", 0, QApplication::UnicodeUTF8));
        groupBox_cameraStereoImages->setTitle(QApplication::translate("preferencesDialog", "Stereo Images", 0, QApplication::UnicodeUTF8));
        checkBox_stereoImages_rectify->setText(QString());
        toolButton_cameraStereoImages_path_left->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_250->setText(QApplication::translate("preferencesDialog", "Rectify images. If checked, the images will be rectified using the calibration file (if its name is set above). If not checked, we assume that images are already rectified.", 0, QApplication::UnicodeUTF8));
        label_249->setText(QApplication::translate("preferencesDialog", "Path to directory containing left images.", 0, QApplication::UnicodeUTF8));
        lineEdit_cameraStereoImages_path_left->setText(QString());
        label_253->setText(QApplication::translate("preferencesDialog", "Path to directory containing right images. The directory should have the same size has the left images directory. ", 0, QApplication::UnicodeUTF8));
        lineEdit_cameraStereoImages_path_right->setText(QString());
        toolButton_cameraStereoImages_path_right->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        groupBox_cameraStereoImages_2->setTitle(QApplication::translate("preferencesDialog", "Stereo Side-By-Side Video (*.avi)", 0, QApplication::UnicodeUTF8));
        toolButton_cameraStereoVideo_path->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        lineEdit_cameraStereoVideo_path->setText(QString());
        checkBox_stereoVideo_rectify->setText(QString());
        label_234->setText(QApplication::translate("preferencesDialog", "Rectify images. If checked, the images will be rectified using the calibration file (if its name is set above). If not checked, we assume that images are already rectified.", 0, QApplication::UnicodeUTF8));
        groupBox_sourceRGB->setTitle(QApplication::translate("preferencesDialog", "RGB", 0, QApplication::UnicodeUTF8));
        source_comboBox_image_type->clear();
        source_comboBox_image_type->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Usb camera", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Images", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Video file", 0, QApplication::UnicodeUTF8)
        );
        label_20->setText(QApplication::translate("preferencesDialog", "Source type.", 0, QApplication::UnicodeUTF8));
        source_groupBox_images->setTitle(QApplication::translate("preferencesDialog", "Images Dataset", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("preferencesDialog", "Refresh the directory files list after each image loaded.", 0, QApplication::UnicodeUTF8));
        source_images_refreshDir->setText(QString());
        label_21->setText(QApplication::translate("preferencesDialog", "Start position (default 1, 0=start from the last).", 0, QApplication::UnicodeUTF8));
        source_images_toolButton_selectSource->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_242->setText(QApplication::translate("preferencesDialog", "Rectify images. If checked, the images will be rectified using the calibration file (if its name is set above). If not checked, we assume that images are already rectified.", 0, QApplication::UnicodeUTF8));
        checkBox_rgbImages_rectify->setText(QString());
        source_groupBox_video->setTitle(QApplication::translate("preferencesDialog", "Video (AVI)", 0, QApplication::UnicodeUTF8));
        source_video_toolButton_selectSource->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_241->setText(QApplication::translate("preferencesDialog", "Rectify images. If checked, the images will be rectified using the calibration file (if its name is set above). If not checked, we assume that images are already rectified.", 0, QApplication::UnicodeUTF8));
        checkBox_rgbVideo_rectify->setText(QString());
        groupBox_sourceDatabase->setTitle(QApplication::translate("preferencesDialog", "Database", 0, QApplication::UnicodeUTF8));
        label_263->setText(QApplication::translate("preferencesDialog", "Ignore goals saved in the database.", 0, QApplication::UnicodeUTF8));
        source_checkBox_ignoreGoals->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_dbViewer->setToolTip(QApplication::translate("preferencesDialog", "Open database viewer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_dbViewer->setText(QString());
        source_checkBox_ignoreOdometry->setText(QString());
        source_database_toolButton_selectSource->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("preferencesDialog", "Start position (index)", 0, QApplication::UnicodeUTF8));
        label_72->setText(QApplication::translate("preferencesDialog", "Ignore odometry saved in the database, so if RGB-D SLAM is activated, odometry will be recomputed.", 0, QApplication::UnicodeUTF8));
        label_80->setText(QApplication::translate("preferencesDialog", "Ignore goal delay.", 0, QApplication::UnicodeUTF8));
        source_checkBox_ignoreGoalDelay->setText(QString());
        label_90->setText(QApplication::translate("preferencesDialog", "Use database stamps as input rate.", 0, QApplication::UnicodeUTF8));
        source_checkBox_useDbStamps->setText(QString());
        groupBox_sourceImages_optional->setTitle(QApplication::translate("preferencesDialog", "Directory of images (optional settings)", 0, QApplication::UnicodeUTF8));
        label_255->setText(QApplication::translate("preferencesDialog", "Use file names as timestamps. Format is epoch time. Example: \"1305031102.175304.png\"", 0, QApplication::UnicodeUTF8));
        toolButton_cameraImages_timestamps->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        lineEdit_cameraImages_timestamps->setText(QString());
        lineEdit_cameraImages_gt->setText(QString());
        label_288->setText(QApplication::translate("preferencesDialog", "Ground truth file. Select the correct format below.", 0, QApplication::UnicodeUTF8));
        label_289->setText(QApplication::translate("preferencesDialog", "Ground truth format. See tool tip for more details on formats. Note that formats without stamps should have the same number of values than the source images.", 0, QApplication::UnicodeUTF8));
        label_292->setText(QApplication::translate("preferencesDialog", "Maximum laser scan points.", 0, QApplication::UnicodeUTF8));
        label_256->setText(QApplication::translate("preferencesDialog", "Synchronize capture rate with timestamps.", 0, QApplication::UnicodeUTF8));
        checkBox_cameraImages_syncTimeStamps->setText(QString());
        lineEdit_cameraImages_path_scans->setText(QString());
        checkBox_cameraImages_timestamps->setText(QString());
        label_251->setText(QApplication::translate("preferencesDialog", "Timestamps file (*.txt). The file should contain one column. The number of rows should be the same than the number of images in the folder. Not used if \"Use file names as timestamps\" above is checked. ", 0, QApplication::UnicodeUTF8));
        toolButton_cameraImages_gt->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        comboBox_cameraImages_gtFormat->clear();
        comboBox_cameraImages_gtFormat->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Raw", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "RGBD-SLAM", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "KITTI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "TORO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "g2o", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "NewCollege", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Malaga Urban", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "St Lucia Stereo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Karlsruhe", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        comboBox_cameraImages_gtFormat->setToolTip(QApplication::translate("preferencesDialog", "<html><head/><body><p>Raw Format (3 values): x y z<br/>Raw Format (6 values): x y z roll pitch yaw<br/>Raw Format (7 values): x y z qx qy qz qw<br/>Raw Format (9 values, 3x3 rotation): r11 r12 r13 r21 r22 r23 r31 r32 r33<br/>Raw Format (12 values, 3x4 transform): r11 r12 r13 tx r21 r22 r23 ty r31 r32 r33 tz</p><p>RGBD-SLAM (stamp tx ty tz qx qy qz qw)<br/>KITTI (stamp + 12 values transform)<br/>TORO<br/>g2o<br/>NewCollege (stamp x y)<br/>Malaga Urban (GPS)<br/>St Lucia Stereo (INS)</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_cameraImages_path_scans->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_293->setText(QApplication::translate("preferencesDialog", "Path to directory containing optional laser scans (*.pcd, *.ply, *.bin [KITTI format]). The directory should have the same size has the images directory. ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_cameraImages_laser_transform->setToolTip(QApplication::translate("preferencesDialog", "<html><head/><body><p>Format (3 values): x y z<br/>Format (6 values): x y z roll pitch yaw<br/>Format (7 values): x y z qx qy qz qw<br/>Format (9 values, 3x3 rotation): r11 r12 r13 r21 r22 r23 r31 r32 r33<br/>Format (12 values, 3x4 transform): r11 r12 r13 tx r21 r22 r23 ty r31 r32 r33 tz</p><p>KITTI: /base_link to /scan = -0.27 0 0.08 0 0 0</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lineEdit_cameraImages_laser_transform->setText(QApplication::translate("preferencesDialog", "0 0 0 0 0 0", 0, QApplication::UnicodeUTF8));
        label_294->setText(QApplication::translate("preferencesDialog", "Local transform from /base_link to /scan_link. Mouse over the box to show formats.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox_cameraImages_max_scan_pts->setToolTip(QApplication::translate("preferencesDialog", "<html><head/><body><p>KITTI: 130 000 points</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_265->setText(QApplication::translate("preferencesDialog", "Bayer mode. For convenience, if the images are bayered.", 0, QApplication::UnicodeUTF8));
        comboBox_cameraImages_bayerMode->clear();
        comboBox_cameraImages_bayerMode->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Disabled", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "BG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "RG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GR", 0, QApplication::UnicodeUTF8)
        );
        groupBox_depthFromScan->setTitle(QApplication::translate("preferencesDialog", "Generate depth image from laser scan", 0, QApplication::UnicodeUTF8));
        groupBox_depthFromScan_fillHoles->setTitle(QApplication::translate("preferencesDialog", "Interpolate depth values to fill holes", 0, QApplication::UnicodeUTF8));
        radioButton_depthFromScan_vertical->setText(QApplication::translate("preferencesDialog", "Vertically", 0, QApplication::UnicodeUTF8));
        radioButton_depthFromScan_horizontal->setText(QApplication::translate("preferencesDialog", "Horizontally", 0, QApplication::UnicodeUTF8));
        checkBox_depthFromScan_fillBorders->setText(QApplication::translate("preferencesDialog", "Fill holes from the image border.", 0, QApplication::UnicodeUTF8));
        groupBox_scan->setTitle(QApplication::translate("preferencesDialog", "Laser scans", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("preferencesDialog", "If you want to use ICP registration, the sensor data should have laser scan. Laser scans can be created from the depth images (see option below) or loaded from the source selected. The latter parameters can be used to reduce the point cloud size directly in the capturing thread.", 0, QApplication::UnicodeUTF8));
        groupBox_scanFromDepth->setTitle(QApplication::translate("preferencesDialog", "Generate laser scan from depth image", 0, QApplication::UnicodeUTF8));
        label_299->setText(QApplication::translate("preferencesDialog", "Decimation (should be a multiple of the image size). Note that it is done after general image decimation above.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_cameraSCanFromDepth_maxDepth->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_301->setText(QApplication::translate("preferencesDialog", "Maximum depth.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox_cameraImages_scanNormalsK->setToolTip(QApplication::translate("preferencesDialog", "<html><head/><body><p>KITTI: 130 000 points</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_300->setText(QApplication::translate("preferencesDialog", "Downsample step size for laser scans. If your laser scans are created from depth images, use Decimation above instead (faster).", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_cameraImages_scanVoxelSize->setToolTip(QApplication::translate("preferencesDialog", "<html><head/><body><p>KITTI: 130 000 points</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        doubleSpinBox_cameraImages_scanVoxelSize->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox_cameraImages_scanDownsampleStep->setToolTip(QApplication::translate("preferencesDialog", "<html><head/><body><p>KITTI: 130 000 points</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_302->setText(QApplication::translate("preferencesDialog", "Voxel size for uniform sampling. Note that it is done after downsampling.", 0, QApplication::UnicodeUTF8));
        label_304->setText(QApplication::translate("preferencesDialog", "K nearest neighbors for normals computation (0=disabled, 20 can be a good default value). Useful if the ICP registration approach is point to plane.", 0, QApplication::UnicodeUTF8));
        groupBox_rtabmap_basic0->setTitle(QApplication::translate("preferencesDialog", "RTAB-Map Settings", 0, QApplication::UnicodeUTF8));
        general_doubleSpinBox_detectionRate_2->setSuffix(QApplication::translate("preferencesDialog", " Hz", 0, QApplication::UnicodeUTF8));
        general_checkBox_SLAM_mode_2->setText(QString());
        label_79->setText(QApplication::translate("preferencesDialog", "SLAM mode.\n"
" If set to false, global localization is performed, so without adding new data to the map.", 0, QApplication::UnicodeUTF8));
        general_checkBox_activateRGBD_2->setText(QString());
        label_activateRGBD_2->setText(QApplication::translate("preferencesDialog", "Activate metric RGB-D SLAM.\n"
"If set to false, classic RTAB-Map loop closure detection is done using only images and without any metric information.", 0, QApplication::UnicodeUTF8));
        general_checkBox_publishStats_2->setText(QString());
        label_publishStat->setText(QApplication::translate("preferencesDialog", "Publish statistics.", 0, QApplication::UnicodeUTF8));
        label_134->setText(QApplication::translate("preferencesDialog", "Detection rate (0 means inf). RTAB-Map will filter input images to satisfy this rate.", 0, QApplication::UnicodeUTF8));
        label_112->setText(QApplication::translate("preferencesDialog", "Images buffer size (0 means inf).", 0, QApplication::UnicodeUTF8));
        general_doubleSpinBox_timeThr_2->setSuffix(QApplication::translate("preferencesDialog", " ms", 0, QApplication::UnicodeUTF8));
        label_timeLimit_2->setText(QApplication::translate("preferencesDialog", "T_time : Max time (ms) allowed (0 means inf).", 0, QApplication::UnicodeUTF8));
        label_121->setText(QApplication::translate("preferencesDialog", "T_loop : Loop closure threshold.", 0, QApplication::UnicodeUTF8));
        label_similarity_2->setText(QApplication::translate("preferencesDialog", "T_similarity : Similarity threshold (for Rehearsal/Weight Update).", 0, QApplication::UnicodeUTF8));
        label_126->setText(QApplication::translate("preferencesDialog", "STM size : Short-term memory size.", 0, QApplication::UnicodeUTF8));
        groupBox_rtabmap_advanced0->setTitle(QApplication::translate("preferencesDialog", "RTAB-Map Settings", 0, QApplication::UnicodeUTF8));
        general_checkBox_SLAM_mode->setText(QString());
        label_92->setText(QApplication::translate("preferencesDialog", "SLAM mode.\n"
" If set to false, global localization is performed, so without adding new data to the map.", 0, QApplication::UnicodeUTF8));
        general_checkBox_startNewMapOnLoopClosure->setText(QString());
        label_135->setText(QApplication::translate("preferencesDialog", "Detection rate (0 means inf). RTAB-Map will filter input data to satisfy this rate. If you want to process all data, consider set \"Detection rate\" to 0 and \"Data buffer size\" to 0.", 0, QApplication::UnicodeUTF8));
        label_185->setText(QApplication::translate("preferencesDialog", "Start a new map only if there is a global loop closure detected first with a previous map. If there is no map in memory, a new map is still created.", 0, QApplication::UnicodeUTF8));
        label_84->setText(QApplication::translate("preferencesDialog", "Data buffer size (0 means inf).", 0, QApplication::UnicodeUTF8));
        general_doubleSpinBox_detectionRate->setSuffix(QApplication::translate("preferencesDialog", " Hz", 0, QApplication::UnicodeUTF8));
        label_165->setText(QApplication::translate("preferencesDialog", "Create intermediate nodes if odometry is faster than the detection rate.", 0, QApplication::UnicodeUTF8));
        general_checkBox_createIntermediateNodes->setText(QString());
        groupBox_6->setTitle(QApplication::translate("preferencesDialog", "Thresholds", 0, QApplication::UnicodeUTF8));
        general_doubleSpinBox_timeThr->setSuffix(QApplication::translate("preferencesDialog", " ms", 0, QApplication::UnicodeUTF8));
        label_timeLimit->setText(QApplication::translate("preferencesDialog", "T_time : Max time (ms) allowed (0 means inf).", 0, QApplication::UnicodeUTF8));
        label_maxWmSize->setText(QApplication::translate("preferencesDialog", "Maximum signatures allowed in Working Memory (0 means inf).", 0, QApplication::UnicodeUTF8));
        label_93->setText(QApplication::translate("preferencesDialog", "T_loop : Loop closure threshold. Setting to 0 means that the new place hypothesis is used as threshold.", 0, QApplication::UnicodeUTF8));
        label_96->setText(QApplication::translate("preferencesDialog", "T_ratio : The loop closure hypothesis must be over T_ratio x lastHypothesisValue.", 0, QApplication::UnicodeUTF8));
        groupBox_publishing->setTitle(QApplication::translate("preferencesDialog", "Publish statistics (stuff to be shown in the GUI)", 0, QApplication::UnicodeUTF8));
        general_checkBox_publishRawData->setText(QString());
        label_91->setText(QApplication::translate("preferencesDialog", "Publish signature data.", 0, QApplication::UnicodeUTF8));
        general_checkBox_publishPdf->setText(QString());
        label_106->setText(QApplication::translate("preferencesDialog", "Publish loop closure hypotheses (pdf).", 0, QApplication::UnicodeUTF8));
        general_checkBox_publishLikelihood->setText(QString());
        label_116->setText(QApplication::translate("preferencesDialog", "Publish loop closure likelihood.", 0, QApplication::UnicodeUTF8));
        groupBox_statistics->setTitle(QApplication::translate("preferencesDialog", "Log statistics (LogI.txt and LogF.txt) in the working directory.", 0, QApplication::UnicodeUTF8));
        general_checkBox_statisticLogsBufferedInRAM->setText(QString());
        label_143->setText(QApplication::translate("preferencesDialog", "Statistics logs buffered in RAM and written to hard drive on exit (otherwise logs are written at each iteration on hard drive).", 0, QApplication::UnicodeUTF8));
        general_checkBox_statisticLoggedHeaders->setText(QString());
        label_209->setText(QApplication::translate("preferencesDialog", "Add headers (column names) to log files.", 0, QApplication::UnicodeUTF8));
        label_workingDirectory->setText(QApplication::translate("preferencesDialog", "Working directory (where to put logs/dump stuff).", 0, QApplication::UnicodeUTF8));
        toolButton_workingDirectory->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        groupBox_memory1->setTitle(QApplication::translate("preferencesDialog", "Memory", 0, QApplication::UnicodeUTF8));
        label_retrieved_2->setText(QApplication::translate("preferencesDialog", "True=Generate location Ids, False=use input image ids.", 0, QApplication::UnicodeUTF8));
        label_retrieved->setText(QApplication::translate("preferencesDialog", "Maximum locations retrieved at the same time from LTM to WM.", 0, QApplication::UnicodeUTF8));
        general_checkBox_generateIds->setText(QString());
        general_checkBox_transferSortingByWeightId->setText(QString());
        label_retrieved_9->setText(QApplication::translate("preferencesDialog", "Save depth image into 16 bits format to reduce memory used. Warning: values over ~65 meters are ignored (maximum 65535 millimeters).", 0, QApplication::UnicodeUTF8));
        label_retrieved_10->setText(QApplication::translate("preferencesDialog", "Reduce graph. Merge nodes when loop closures are added (ignoring those with user data set).", 0, QApplication::UnicodeUTF8));
        label_retrieved_4->setText(QApplication::translate("preferencesDialog", "Initialize the Woking Memory with all nodes from Long-Term memory, instead of only nodes of the last session. This may be useful in localization mode, where less processing time is required than in SLAM mode, so more nodes can be kept in Working Memory.", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("preferencesDialog", "STM size : Short-term memory size.", 0, QApplication::UnicodeUTF8));
        label_ratioRecent->setText(QApplication::translate("preferencesDialog", "T_recent : Ratio of locations after the last loop closure in WM that cannot be transferred.", 0, QApplication::UnicodeUTF8));
        general_checkBox_badSignaturesIgnored->setText(QString());
        label_retrieved_3->setText(QApplication::translate("preferencesDialog", "Bad signatures are ignored.", 0, QApplication::UnicodeUTF8));
        general_checkBox_initWMWithAllNodes->setText(QString());
        label_retrieved_5->setText(QApplication::translate("preferencesDialog", "Keep raw sensor data. Only useful to save loop closure computation time when features re-extraction is enabled. Disable to save RAM memory.", 0, QApplication::UnicodeUTF8));
        general_checkBox_keepRawData->setText(QString());
        label_retrieved_6->setText(QApplication::translate("preferencesDialog", "Image post decimation. This option can be used to save images in lower resolution (size/decimation). It is done on the original image.", 0, QApplication::UnicodeUTF8));
        label_retrieved_7->setText(QApplication::translate("preferencesDialog", "On transfer, signatures are sorted by weight->ID (i.e. the oldest of the lowest weighted signatures are transferred first). If false, the signatures are sorted by weight->Age (i.e. the oldest inserted in WM of the lowest weighted signatures are transferred first). Note that retrieval updates the age, not the ID.", 0, QApplication::UnicodeUTF8));
        label_retrieved_8->setText(QApplication::translate("preferencesDialog", "If > 1, downsample the laser scans when creating a location. This feature can be used to save laser scans already downsampled.", 0, QApplication::UnicodeUTF8));
        general_checkBox_reduceGraph->setText(QString());
        label_retrieved_11->setText(QApplication::translate("preferencesDialog", "Create map labels. The first node of a map will be labelled as \"map#\" where # is the map ID.", 0, QApplication::UnicodeUTF8));
        general_checkBox_createMapLabels->setText(QString());
        general_checkBox_saveDepth16bits->setText(QString());
        label_retrieved_12->setText(QApplication::translate("preferencesDialog", "Raw descriptors kept in memory.", 0, QApplication::UnicodeUTF8));
        general_checkBox_keepDescriptors->setText(QString());
        label_retrieved_13->setText(QApplication::translate("preferencesDialog", "Image pre decimation. This option can be used to reduce image size before features extraction.", 0, QApplication::UnicodeUTF8));
        groupBox_rehearsal2->setTitle(QApplication::translate("preferencesDialog", "Rehearsal / Weight Update", 0, QApplication::UnicodeUTF8));
        general_checkBox_RehearsalIdUpdatedToNewOne->setText(QString());
        label_similarity->setText(QApplication::translate("preferencesDialog", "T_similarity : Similarity threshold. Values must be >=0.0 ans <=1.0.", 0, QApplication::UnicodeUTF8));
        label_rehearsalIdUpdate->setText(QApplication::translate("preferencesDialog", "On merging, update to new id.", 0, QApplication::UnicodeUTF8));
        label_rehearsalIdUpdate_2->setText(QApplication::translate("preferencesDialog", "Ignore Weight Update when the robot is moving.", 0, QApplication::UnicodeUTF8));
        rgdb_rehearsalWeightIgnoredWhileMoving->setText(QString());
        groupBox_signature_keypoint2->setTitle(QApplication::translate("preferencesDialog", "Vocabulary", 0, QApplication::UnicodeUTF8));
        checkBox_useOdomFeatures->setText(QString());
        label_145->setText(QApplication::translate("preferencesDialog", "Use odometry features. Disable to select different feature type. Note that if no features are received, they will be re-extracted (if visual odometry is used, you may want to match the feature type below with the one used for odometry).", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("preferencesDialog", "Features Extraction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_22->setToolTip(QApplication::translate("preferencesDialog", "0 means that the response (hessian) threshold \n"
"used for the detector will not be adapted. \n"
"Otherwise, the threshold is modified to \n"
"generate the number of words requested.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_22->setText(QApplication::translate("preferencesDialog", "Maximum words per image (0=no maximum). Setting to -1 will disable features extraction, so disabling loop closure detection indirectly.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_81->setToolTip(QApplication::translate("preferencesDialog", "0 means that the response (hessian) threshold \n"
"used for the detector will not be adapted. \n"
"Otherwise, the threshold is modified to \n"
"generate the number of words requested.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_81->setText(QApplication::translate("preferencesDialog", "Bad signature ratio (less than Ratio x AverageWordsPerImage = bad).", 0, QApplication::UnicodeUTF8));
        label_99->setText(QApplication::translate("preferencesDialog", "Top ROI ratio (0 = no change).", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_57->setToolTip(QApplication::translate("preferencesDialog", "0 means that the response (hessian) threshold \n"
"used for the detector will not be adapted. \n"
"Otherwise, the threshold is modified to \n"
"generate the number of words requested.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_57->setText(QApplication::translate("preferencesDialog", "Minimum words depth. Only used when a depth image is provided. Applied before \"Maximum words per image\".", 0, QApplication::UnicodeUTF8));
        label_101->setText(QApplication::translate("preferencesDialog", "ROI ratios [left, right, top, bottom] between 0 and 1.", 0, QApplication::UnicodeUTF8));
        comboBox_detector_strategy->clear();
        comboBox_detector_strategy->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "SURF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "SIFT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "ORB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FAST+FREAK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FAST+BRIEF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GFTT+FREAK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GFTT+BRIEF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "BRISK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GFTT+ORB", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        label_53->setToolTip(QApplication::translate("preferencesDialog", "0 means that the response (hessian) threshold \n"
"used for the detector will not be adapted. \n"
"Otherwise, the threshold is modified to \n"
"generate the number of words requested.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_53->setText(QApplication::translate("preferencesDialog", "Maximum words depth (0 means inf). Only used when a depth image is provided. Applied before \"Maximum words per image\".", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_kp_roi1->setSuffix(QApplication::translate("preferencesDialog", " %", 0, QApplication::UnicodeUTF8));
        label_117->setText(QApplication::translate("preferencesDialog", "Visual word type.", 0, QApplication::UnicodeUTF8));
        surf_doubleSpinBox_maxDepth->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_kp_roi0->setSuffix(QApplication::translate("preferencesDialog", " %", 0, QApplication::UnicodeUTF8));
        label_97->setText(QApplication::translate("preferencesDialog", "Left ROI ratio (0 = no change).", 0, QApplication::UnicodeUTF8));
        label_98->setText(QApplication::translate("preferencesDialog", "Right ROI ratio (0 = no change).", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_kp_roi2->setSuffix(QApplication::translate("preferencesDialog", " %", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_kp_roi3->setSuffix(QApplication::translate("preferencesDialog", " %", 0, QApplication::UnicodeUTF8));
        label_100->setText(QApplication::translate("preferencesDialog", "Bottom ROI ratio (0 = no change).", 0, QApplication::UnicodeUTF8));
        surf_doubleSpinBox_minDepth->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        groupBox_15->setTitle(QApplication::translate("preferencesDialog", "Sub Pixel Refining", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("preferencesDialog", "Refining features to sub pixel. Sub pixel corners may not be needed for features like SURF/SIFT, which are already sub pixel.", 0, QApplication::UnicodeUTF8));
        label_202->setText(QApplication::translate("preferencesDialog", "Window size.", 0, QApplication::UnicodeUTF8));
        label_225->setText(QApplication::translate("preferencesDialog", "Iterations. 0 disables sub pixel refining.", 0, QApplication::UnicodeUTF8));
        label_227->setText(QApplication::translate("preferencesDialog", "Epsilon.", 0, QApplication::UnicodeUTF8));
        groupBox_dictionary_strategy2->setTitle(QApplication::translate("preferencesDialog", "Features Quantization", 0, QApplication::UnicodeUTF8));
        toolButton_dictionaryPath->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("preferencesDialog", "NNDR ratio\n"
"(A matching pair is accepted, if its distance is closer than X times the distance of the second nearest neighbor)\n"
"Lower the ratio -> higher the precision.", 0, QApplication::UnicodeUTF8));
        label_dictionaryPath->setText(QApplication::translate("preferencesDialog", "Path to a pre-computed dictionary (when \"Use an incremental vocabulary\" is not set).", 0, QApplication::UnicodeUTF8));
        checkBox_dictionary_incremental->setText(QString());
        label_12->setText(QApplication::translate("preferencesDialog", "Nearest neighbor strategy.", 0, QApplication::UnicodeUTF8));
        comboBox_dictionary_strategy->clear();
        comboBox_dictionary_strategy->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "FLANN Linear", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FLANN KdTree ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FLANN LSH", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Brute Force", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Brute Force GPU", 0, QApplication::UnicodeUTF8)
        );
        label_incrementalDict->setText(QApplication::translate("preferencesDialog", "Use an incremental vocabulary.\n"
"When set to false, no new words are added to dictionary, so no more updates are required after each detection, which greatly increases time performance at the cost of lower adaptation to new environments.", 0, QApplication::UnicodeUTF8));
        label_94->setText(QApplication::translate("preferencesDialog", "If the dictionary update and signature creation were parallelized.", 0, QApplication::UnicodeUTF8));
        checkBox_kp_parallelized->setText(QString());
        checkBox_kp_newWordsComparedTogether->setText(QString());
        label_186->setText(QApplication::translate("preferencesDialog", "When adding new words to dictionary, they are compared also with each other (to detect same words in the same signature).", 0, QApplication::UnicodeUTF8));
        label_260->setText(QApplication::translate("preferencesDialog", "When using a FLANN-based nearest neighbor strategy, add/remove points to its index without always rebuilding the index (the index is built only when the vocabulary doubles in size).", 0, QApplication::UnicodeUTF8));
        checkBox_kp_incrementalFlann->setText(QString());
        groupBox_database2->setTitle(QApplication::translate("preferencesDialog", "Database", 0, QApplication::UnicodeUTF8));
        general_checkBox_keepBinaryData->setText(QString());
        label_keepRawData->setText(QApplication::translate("preferencesDialog", "Keep sensor compressed data.", 0, QApplication::UnicodeUTF8));
        checkBox_dbInMemory->setText(QString());
        label_75->setText(QApplication::translate("preferencesDialog", "Sqlite3 cache size,\n"
"see Sqlite3 doc 'PRAGMA cache_size'.", 0, QApplication::UnicodeUTF8));
        comboBox_dbJournalMode->clear();
        comboBox_dbJournalMode->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "DELETE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "TRUNCATE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "PERSIST", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "MEMORY", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "OFF", 0, QApplication::UnicodeUTF8)
        );
        label_77->setText(QApplication::translate("preferencesDialog", "Sqlite3 journal mode,\n"
"see Sqlite3 doc 'PRAGMA journal_mode'.", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("preferencesDialog", "Using database in the memory instead of a file on the hard disk (this greatly improve database access performance but it requires more RAM memory).", 0, QApplication::UnicodeUTF8));
        label_89->setText(QApplication::translate("preferencesDialog", "Sqlite3 synchronous,\n"
"see Sqlite3 doc 'PRAGMA synchronous'.", 0, QApplication::UnicodeUTF8));
        label_120->setText(QApplication::translate("preferencesDialog", "Sqlite3 temp store,\n"
"see Sqlite3 doc 'PRAGMA temp_store'.", 0, QApplication::UnicodeUTF8));
        comboBox_dbSynchronous->clear();
        comboBox_dbSynchronous->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "OFF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "NORMAL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FULL", 0, QApplication::UnicodeUTF8)
        );
        comboBox_dbTempStore->clear();
        comboBox_dbTempStore->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "DEFAULT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FILE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "MEMORY", 0, QApplication::UnicodeUTF8)
        );
        label_keepRehearsed->setText(QApplication::translate("preferencesDialog", "Keep not linked nodes in db (rehearsed nodes and deleted nodes are saved).", 0, QApplication::UnicodeUTF8));
        general_checkBox_keepNotLinkedNodes->setText(QString());
        groupBox_bayes1->setTitle(QApplication::translate("preferencesDialog", "Loop Closure Detection", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("preferencesDialog", "Prediction probabilities for each loop closure event:", 0, QApplication::UnicodeUTF8));
        label_76->setText(QApplication::translate("preferencesDialog", "We can edit how will like the prediction used in the Bayes filter when there is a loop closure hypothesis. Format is [VP LC N1 N2 N3...]. LC is the loop closure event and N# are its neighbors. VP (virtual place) is the probability to be in a new place when a loop closure was found on the last iteration.", 0, QApplication::UnicodeUTF8));
        label_65->setText(QApplication::translate("preferencesDialog", "Prediction", 0, QApplication::UnicodeUTF8));
        label_66->setText(QApplication::translate("preferencesDialog", "Sum", 0, QApplication::UnicodeUTF8));
        label_prediction_sum->setText(QString());
        label_63->setText(QApplication::translate("preferencesDialog", "Preview", 0, QApplication::UnicodeUTF8));
        checkBox_bayes_fullPredictionUpdate->setText(QString());
        label_113->setText(QApplication::translate("preferencesDialog", "The VP here is the probability to be in a new place since no loop closure was found on the last iteration.", 0, QApplication::UnicodeUTF8));
        label_142->setText(QApplication::translate("preferencesDialog", "Regenerate all the prediction matrix on each iteration (otherwise only removed/added ids are updated).", 0, QApplication::UnicodeUTF8));
        label_82->setText(QApplication::translate("preferencesDialog", "Use the tf-idf method to compute the likelihood. Otherwise, images are compared with each other.", 0, QApplication::UnicodeUTF8));
        checkBox_kp_tfIdfLikelihoodUsed->setText(QString());
        groupBox_vh_strategy2->setTitle(QApplication::translate("preferencesDialog", "Hypothesis Verification", 0, QApplication::UnicodeUTF8));
        comboBox_vh_strategy->clear();
        comboBox_vh_strategy->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "No verification", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Epipolar constraints", 0, QApplication::UnicodeUTF8)
        );
        label_50->setText(QApplication::translate("preferencesDialog", "Hypothesis verification.", 0, QApplication::UnicodeUTF8));
        groupBox_vh_epipolar2->setTitle(QApplication::translate("preferencesDialog", "Epipolar Constraints", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("preferencesDialog", "Minimum match count to accept a loop closure.", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("preferencesDialog", "Fundamental Matrix : Distance (pixels) for inliers.", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("preferencesDialog", "Fundamental Matrix : Ransac performance.", 0, QApplication::UnicodeUTF8));
        groupBox_slam1->setTitle(QApplication::translate("preferencesDialog", "RGB-D SLAM", 0, QApplication::UnicodeUTF8));
        general_checkBox_activateRGBD->setText(QString());
        label_activateRGBD->setText(QApplication::translate("preferencesDialog", "Activate metric RGB-D SLAM. This module enables 6d metric SLAM directly in RTAB-Map.\n"
"If set to false, classic RTAB-Map loop closure detection is done using only images and without any metric information.", 0, QApplication::UnicodeUTF8));
        label_83->setText(QApplication::translate("preferencesDialog", "Rigid transformations between nodes are saved on the neighbor links of the RTAB-Map's graph. On loop closures, a new constraint is added to the graph and TORO optimizes the graph.", 0, QApplication::UnicodeUTF8));
        groupBox_slam_update->setTitle(QApplication::translate("preferencesDialog", "Map Update", 0, QApplication::UnicodeUTF8));
        label_152->setText(QApplication::translate("preferencesDialog", "Angular update: Minimum angular displacement to update the map. Note that Weight Update is done prior to this, so weights are still updated.", 0, QApplication::UnicodeUTF8));
        label_space2->setText(QApplication::translate("preferencesDialog", "Local radius for nodes selection in the local map. This parameter is used in some approaches of the sub-panels.", 0, QApplication::UnicodeUTF8));
        rgdb_localImmunizationRatio->setSuffix(QString());
        rgdb_linearUpdate->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_153->setText(QApplication::translate("preferencesDialog", "Linear update: Minimum linear displacement to update the map. Note that Weight Update is done prior to this, so weights are still updated.", 0, QApplication::UnicodeUTF8));
        rgdb_angularUpdate->setSuffix(QApplication::translate("preferencesDialog", " rad", 0, QApplication::UnicodeUTF8));
        rgdb_newMapOdomChange->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_163->setText(QApplication::translate("preferencesDialog", "Odometry change detected that triggers a new map (0 means whatever the odometry change, the detector will still link the new pose in the current map). Also by default, when an odometry with Identity transformation is detected, a new map is automatically created. ", 0, QApplication::UnicodeUTF8));
        odomScanHistory->setText(QString());
        label_scanMatching->setText(QApplication::translate("preferencesDialog", "Neighbor link refining. When a new node is added to the graph, the transformation of its neighbor link with the previous node is refined using ICP (laser scans required!).", 0, QApplication::UnicodeUTF8));
        label_scanMatching_3->setText(QApplication::translate("preferencesDialog", "Maximum local locations retrieved (0=disabled) near the current pose in the local map or on the current planned path (those on the planned path have priority).", 0, QApplication::UnicodeUTF8));
        localDetection_radius->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_scanMatching_5->setText(QApplication::translate("preferencesDialog", "Ratio of working memory for which local nodes are immunized from transfer.", 0, QApplication::UnicodeUTF8));
        label_scanMatching_9->setText(QApplication::translate("preferencesDialog", "Re-extract visual features when computing loop closure transformations.", 0, QApplication::UnicodeUTF8));
        loopClosure_reextract->setText(QString());
        groupBox_proximityDetection2->setTitle(QApplication::translate("preferencesDialog", "Proximity Detection", 0, QApplication::UnicodeUTF8));
        groupBox_localDetection_time->setTitle(QApplication::translate("preferencesDialog", "Proximity Detection in Time", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("preferencesDialog", "Activate proximity detection over all locations in STM. The Bayes filter is not used here: If there are enough correspondences between the current image and others in STM, transformations are computed. This generates more constraints in the map's graph, so more time is required to optimize the graph.", 0, QApplication::UnicodeUTF8));
        groupBox_localDetection_space->setTitle(QApplication::translate("preferencesDialog", "Proximity Detection in Space", 0, QApplication::UnicodeUTF8));
        label_space1_2->setText(QApplication::translate("preferencesDialog", "Activate proximity detection over locations (in Working Memory) near in space. The locations are compared to those inside the local radius of the current estimated position of the robot (at a maximum distance of the path filtering radius below). If the laser scans are used, local locations are merged together and the current laser scan is compared to them. It is useful when the robot is visiting backward (camera not in the same direction) already visited locations.", 0, QApplication::UnicodeUTF8));
        localDetection_pathFilteringRadius->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_space3_3->setText(QApplication::translate("preferencesDialog", "Path filtering radius to avoid merging laser scans which are close. 0 to ignore.", 0, QApplication::UnicodeUTF8));
        label_scanMatching_4->setText(QApplication::translate("preferencesDialog", "When comparing to a local path, merge the laser scans using the odometry poses instead of the ones in the optimized local graph.", 0, QApplication::UnicodeUTF8));
        checkBox_localSpacePathOdomPosesUsed->setText(QString());
        label_space3_2->setText(QApplication::translate("preferencesDialog", "Maximum graph depth between the current/last loop closure location and the proximity hypotheses. Set 0 to ignore.", 0, QApplication::UnicodeUTF8));
        label_scanMatching_6->setText(QApplication::translate("preferencesDialog", "Save scan matching IDs in link's user data.", 0, QApplication::UnicodeUTF8));
        checkBox_localSpaceScanMatchingIDsSaved->setText(QString());
        label_scanMatching_7->setText(QApplication::translate("preferencesDialog", "Merge close laser scans on each path. If false, only the nearest laser scan on the path is used for ICP.", 0, QApplication::UnicodeUTF8));
        checkBox_localSpaceAssembleScans->setText(QString());
        label_scanMatching_8->setText(QApplication::translate("preferencesDialog", "Maximum angle for visual proximity detection.", 0, QApplication::UnicodeUTF8));
        localDetection_angle->setSuffix(QApplication::translate("preferencesDialog", " degrees", 0, QApplication::UnicodeUTF8));
        groupBox_graphOptimization2->setTitle(QApplication::translate("preferencesDialog", "Graph Optimization", 0, QApplication::UnicodeUTF8));
        graphOptimization_type->clear();
        graphOptimization_type->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "TORO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "g2o", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GTSAM", 0, QApplication::UnicodeUTF8)
        );
        graphOptimization_covarianceIgnored->setText(QString());
        graphOptimization_fromGraphEnd->setText(QString());
        label_151->setText(QApplication::translate("preferencesDialog", "Optimize graph from the newest node.", 0, QApplication::UnicodeUTF8));
        graphOptimization_slam2d->setText(QString());
        label_164->setText(QApplication::translate("preferencesDialog", "2d SLAM: use fast 3DoF (x, y, theta) optimization instead of 6DoF (x, y, z, roll, pitch, yaw) optimization.", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("preferencesDialog", "Graph optimization algorithm.", 0, QApplication::UnicodeUTF8));
        label_183->setText(QApplication::translate("preferencesDialog", "-If false, the graph is optimized from the oldest node of the current graph. It can be useful to preserve the map referential from the oldest node. An odometry correction between frames /map to /odom is computed. Warning: when some nodes are transferred, the first referential of the local map may change, resulting in momentary changes in robot/map position (which are annoying in teleoperation).", 0, QApplication::UnicodeUTF8));
        label_211->setText(QApplication::translate("preferencesDialog", "-If true, there is no odometry correction computed. All previous poses in the map are corrected instead, not the last one (which corresponds to latest odometry value). So, the transform between frames /map to /odom will be always Identity even on loop closures.", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("preferencesDialog", "Iterations.", 0, QApplication::UnicodeUTF8));
        label_64->setText(QApplication::translate("preferencesDialog", "Stop optimizing when the error improvement is less than this value.", 0, QApplication::UnicodeUTF8));
        label_141->setText(QApplication::translate("preferencesDialog", "Ignore constraints' variance. If checked, identity information matrix is used for each constraint. Otherwise, an information matrix is generated from the variance saved in the links (transitional and rotational variances).", 0, QApplication::UnicodeUTF8));
        graphOptimization_robust->setText(QString());
        label_258->setText(QApplication::translate("preferencesDialog", "Robust graph optimization using Vertigo (only for g2o and GTSAM optimization strategies). This approach can filter wrong loop closure detections.", 0, QApplication::UnicodeUTF8));
        graphOptimization_maxError->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_259->setText(QApplication::translate("preferencesDialog", "Reject loop closures if optimization error is greater than this value (0=disabled). This will help to detect when a wrong loop closure is added to the graph.", 0, QApplication::UnicodeUTF8));
        groupBox_g2o->setTitle(QApplication::translate("preferencesDialog", "g2o", 0, QApplication::UnicodeUTF8));
        comboBox_g2o_optimizer->clear();
        comboBox_g2o_optimizer->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Levenberg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Gauss Newton", 0, QApplication::UnicodeUTF8)
        );
        comboBox_g2o_solver->clear();
        comboBox_g2o_solver->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "CSparse", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "PCG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Cholmod", 0, QApplication::UnicodeUTF8)
        );
        label_107->setText(QApplication::translate("preferencesDialog", "Solver.", 0, QApplication::UnicodeUTF8));
        label_138->setText(QApplication::translate("preferencesDialog", "Optimization algorithm.", 0, QApplication::UnicodeUTF8));
        label_148->setText(QApplication::translate("preferencesDialog", "Pixel variance for SBA.", 0, QApplication::UnicodeUTF8));
        groupBox_pathPlanning2->setTitle(QApplication::translate("preferencesDialog", "Path Planning", 0, QApplication::UnicodeUTF8));
        label_space2_3->setText(QApplication::translate("preferencesDialog", " If the goal is too far (>local radius) from the graph, the plan is aborted. The next goal in the graph can't be farther than the local radius around the current position. Anticipated nodes on the path are retrieved in the local radius up to \"Maximum local locations retrieved\". A virtual link is added between the current location and the nearest one on the path up to local radius.", 0, QApplication::UnicodeUTF8));
        graphPlan_goalReachedRadius->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_space2_2->setText(QApplication::translate("preferencesDialog", "Goal reached radius.", 0, QApplication::UnicodeUTF8));
        label_space3_5->setText(QApplication::translate("preferencesDialog", "When a goal is received and processed with success, it is saved in user data of the location with this format: \"GOAL:#\".", 0, QApplication::UnicodeUTF8));
        graphPlan_goalsSavedInUserData->setText(QString());
        label_space2_4->setText(QApplication::translate("preferencesDialog", "Mark the current goal node on the path as unreachable if it a new goal is not updated after X iterations (0=disabled). If all upcoming nodes on the path are unreachabled, the plan fails.", 0, QApplication::UnicodeUTF8));
        graphPlan_linearVelocity->setSuffix(QApplication::translate("preferencesDialog", " m/s", 0, QApplication::UnicodeUTF8));
        graphPlan_angularVelocity->setSuffix(QApplication::translate("preferencesDialog", " rad/s", 0, QApplication::UnicodeUTF8));
        label_space3_6->setText(QApplication::translate("preferencesDialog", "Linear velocity used to compute path weights based on time instead of distance (0=disabled).", 0, QApplication::UnicodeUTF8));
        label_space3_7->setText(QApplication::translate("preferencesDialog", "Angular velocity used to compute path weights based on time instead of distance. Paths with poses in the same direction of the robot will have lower costs (0=disabled).", 0, QApplication::UnicodeUTF8));
        groupBox_odometry1->setTitle(QApplication::translate("preferencesDialog", "Odometry", 0, QApplication::UnicodeUTF8));
        label_114->setText(QApplication::translate("preferencesDialog", "Odometry is computed as fast as possible up to \"Source->Input rate\" parameter. Odometry is not computed if already provided by the source.", 0, QApplication::UnicodeUTF8));
        odom_flow_guessMotion->setText(QString());
        label_233->setText(QApplication::translate("preferencesDialog", "Pose estimation filtering strategy.", 0, QApplication::UnicodeUTF8));
        odom_fillInfoData->setText(QString());
        label_103->setText(QApplication::translate("preferencesDialog", "Odometry strategy.", 0, QApplication::UnicodeUTF8));
        odom_holonomic->setText(QString());
        label_238->setText(QApplication::translate("preferencesDialog", "If the robot is holonomic (strafing commands can be issued). If not, y value will be estimated from x and yaw values (y=x*tan(yaw)).", 0, QApplication::UnicodeUTF8));
        odom_strategy->clear();
        odom_strategy->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Frame to Map", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Frame to Frame", 0, QApplication::UnicodeUTF8)
        );
        pushButton_testOdometry->setText(QApplication::translate("preferencesDialog", "Test selected odometry", 0, QApplication::UnicodeUTF8));
        label_221->setText(QApplication::translate("preferencesDialog", "Fill info with data (inliers/outliers features to be shown in Odometry view).", 0, QApplication::UnicodeUTF8));
        label_232->setText(QApplication::translate("preferencesDialog", "Data buffer size (0 means inf).", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("preferencesDialog", "Automatically reset odometry after X consecutive images on which odometry cannot be computed (value=0 disables auto-reset). When reset, the odometry starts from the last pose computed.", 0, QApplication::UnicodeUTF8));
        odom_filteringStrategy->clear();
        odom_filteringStrategy->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "No filtering", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Kalman filtering", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Particle filtering", 0, QApplication::UnicodeUTF8)
        );
        label_198->setText(QApplication::translate("preferencesDialog", "Guess based on previous motion.", 0, QApplication::UnicodeUTF8));
        label_196->setText(QApplication::translate("preferencesDialog", "[Visual] Create a new keyframe when the number of inliers drops under this threshold. Setting value to 0 means that a keyframe is created for each processed frame.", 0, QApplication::UnicodeUTF8));
        label_246->setText(QApplication::translate("preferencesDialog", "[Geometry] Create a new keyframe when the number of inliers drops under this threshold. Setting value to 0 means that a keyframe is created for each processed frame.", 0, QApplication::UnicodeUTF8));
        label_248->setText(QApplication::translate("preferencesDialog", "Decimation of images before features extraction.", 0, QApplication::UnicodeUTF8));
        groupBox_odometryBOW2->setTitle(QApplication::translate("preferencesDialog", "Frame to Map", 0, QApplication::UnicodeUTF8));
        label_226->setText(QApplication::translate("preferencesDialog", "The approach maintains a local map of features to match to. It adds incrementally new points to local map up to maximum map size, then removes old points as new points are added. See \"Motion Estimation\" panel for registration parameters. Note that only visual registration parameters are used in this approach. If you want to use a different registration pipeline than Visual (e.g. with ICP), use \"Frame to Frame\" approach instead.", 0, QApplication::UnicodeUTF8));
        label_195->setText(QApplication::translate("preferencesDialog", "[Geometry] Maximum scan map size is defined by this factor times the maximum size of a single scan. For example, if the laser scans have 1000 values, then the maximum local map size will be 2000 if the factor is 2.", 0, QApplication::UnicodeUTF8));
        label_239->setText(QApplication::translate("preferencesDialog", "Path to a fixed map (RTAB-Map's database) to be used for odometry. Odometry will be constraint to this map. RGB-only images can be used if odometry PnP pose estimation is activated.", 0, QApplication::UnicodeUTF8));
        label_190->setText(QApplication::translate("preferencesDialog", "[Visual] Maximum map size: If > 0 (example 5000), the odometry will maintain a local map of X maximum features. This will decrease odometry drifting when the camera is not moving.", 0, QApplication::UnicodeUTF8));
        toolButton_odomBowFixedLocalMap->setText(QApplication::translate("preferencesDialog", "...", 0, QApplication::UnicodeUTF8));
        label_194->setText(QApplication::translate("preferencesDialog", "[Visual] Maximum features (sorted by keypoint response) added to local map from a new key-frame. 0 means no limit.", 0, QApplication::UnicodeUTF8));
        label_215->setText(QApplication::translate("preferencesDialog", "[Geometry] Radius used to filter points of a new added scan to local map. This could match the voxel size of the laser scans.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_odom_f2m_scanRadius->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        groupBox_odometryFlow2->setTitle(QApplication::translate("preferencesDialog", "Frame to Frame", 0, QApplication::UnicodeUTF8));
        label_199->setText(QApplication::translate("preferencesDialog", "Motion is computed with a frame to key-frame approach. See Motion Estimation panel for registration parameters.", 0, QApplication::UnicodeUTF8));
        groupBox_odometryMono2->setTitle(QApplication::translate("preferencesDialog", "Mono", 0, QApplication::UnicodeUTF8));
        label_672->setText(QApplication::translate("preferencesDialog", "Mono is for single camera motion estimation (MonoSLAM). On initialization, the camera must be translated on the side until a first transform can be computed.", 0, QApplication::UnicodeUTF8));
        label_661->setText(QApplication::translate("preferencesDialog", "Parameters from BOW and OpticalFlow are also used here. PnP parameters on Odometry panel are used too.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_minFlow->setSuffix(QApplication::translate("preferencesDialog", " pixels", 0, QApplication::UnicodeUTF8));
        label_659->setText(QApplication::translate("preferencesDialog", "Minimum optical flow required for the initialization step.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_minTranslation->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_660->setText(QApplication::translate("preferencesDialog", "Minimum translation to add new points to local map. On initialization, translation x 5 is used as the required minimum transformation.", 0, QApplication::UnicodeUTF8));
        label_662->setText(QApplication::translate("preferencesDialog", "Minimum translation required for the initialization step.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_minInitTranslation->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_663->setText(QApplication::translate("preferencesDialog", "Maximum variance to add new points to local map.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_maxVariance->setSuffix(QString());
        groupBox_odometryKalmanFilter2->setTitle(QApplication::translate("preferencesDialog", "Kalman Filter", 0, QApplication::UnicodeUTF8));
        label_673->setText(QApplication::translate("preferencesDialog", "Parameters for the Kalman filter when used to smooth the odometry trajectory.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_kalmanMeasurementNoise->setSuffix(QString());
        doubleSpinBox_kalmanProcessNoise->setSuffix(QString());
        label_674->setText(QApplication::translate("preferencesDialog", "Process noise.", 0, QApplication::UnicodeUTF8));
        label_675->setText(QApplication::translate("preferencesDialog", "Measurement noise.", 0, QApplication::UnicodeUTF8));
        groupBox_odometryParticleFilter2->setTitle(QApplication::translate("preferencesDialog", "Particle Filter", 0, QApplication::UnicodeUTF8));
        label_665->setText(QApplication::translate("preferencesDialog", "Parameters for the particle filter when used to smooth the odometry trajectory.", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_particleLambdaT->setSuffix(QString());
        doubleSpinBox_particleNoiseR->setSuffix(QApplication::translate("preferencesDialog", " rad", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_particleNoiseT->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_666->setText(QApplication::translate("preferencesDialog", "Noise of translation components (x,y,z).", 0, QApplication::UnicodeUTF8));
        label_667->setText(QApplication::translate("preferencesDialog", "Noise of rotation components (roll, pitch, yaw).", 0, QApplication::UnicodeUTF8));
        label_668->setText(QApplication::translate("preferencesDialog", "Lambda of translation components (x,y,z).", 0, QApplication::UnicodeUTF8));
        label_669->setText(QApplication::translate("preferencesDialog", "Lambda of rotation components (roll, pitch, yaw).", 0, QApplication::UnicodeUTF8));
        doubleSpinBox_particleLambdaR->setSuffix(QString());
        label_670->setText(QApplication::translate("preferencesDialog", "Particle size.", 0, QApplication::UnicodeUTF8));
        label_162->setText(QString());
        groupBox_motionEst1->setTitle(QApplication::translate("preferencesDialog", "Motion Estimation", 0, QApplication::UnicodeUTF8));
        comboBox_registrationStrategy->clear();
        comboBox_registrationStrategy->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Visual", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Geometry (ICP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Visual + Geometry (ICP)", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("preferencesDialog", "For the parameters for each registration approach, see the sub panels. Approaches with '+' means that both registrations are done in that order.", 0, QApplication::UnicodeUTF8));
        loopClosure_bowForce2D->setText(QString());
        label_184->setText(QApplication::translate("preferencesDialog", "Force 2D transform (3DoF: x,y and yaw).", 0, QApplication::UnicodeUTF8));
        groupBox_visualTransform2->setTitle(QApplication::translate("preferencesDialog", "Visual Registration", 0, QApplication::UnicodeUTF8));
        label_146->setText(QApplication::translate("preferencesDialog", "Motion estimation approach using 3D and/or 2D visual words correspondences.", 0, QApplication::UnicodeUTF8));
        label_262->setText(QApplication::translate("preferencesDialog", "Set variance as the inverse of the number of inliers. Otherwise, the variance is computed as the average 3D position error of the inliers.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("preferencesDialog", "Minimum correspondences to accept the estimated transformation.", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("preferencesDialog", "Maximum RANSAC iterations.", 0, QApplication::UnicodeUTF8));
        loopClosure_estimationType->clear();
        loopClosure_estimationType->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "3D to 3D", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "3D to 2D (PnP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "2D to 2D", 0, QApplication::UnicodeUTF8)
        );
        loopClosure_correspondencesType->clear();
        loopClosure_correspondencesType->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Features Matching", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Optical Flow", 0, QApplication::UnicodeUTF8)
        );
        label_298->setText(QApplication::translate("preferencesDialog", "Forward estimation only (A->B). If false, a transformation is also computed in backward direction (B->A), then the two resulting transforms are merged (middle interpolation between the transforms).", 0, QApplication::UnicodeUTF8));
        loopClosure_forwardEst->setText(QString());
        loopClosure_bowVarianceFromInliersCount->setText(QString());
        label_149->setText(QApplication::translate("preferencesDialog", "Correspondences computation approach.", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("preferencesDialog", "Correspondences Computation: Features Matching", 0, QApplication::UnicodeUTF8));
        reextract_nn->clear();
        reextract_nn->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "FLANN Linear", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FLANN KdTree", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FLANN LSH", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Brute Force", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "Brute Force GPU", 0, QApplication::UnicodeUTF8)
        );
        label_179->setText(QApplication::translate("preferencesDialog", "Nearest neighbor strategy. FLANN KdTree must be used only with SURF/SIFT. FLANN LSH must be used only with binary feature detector.", 0, QApplication::UnicodeUTF8));
        label_181->setText(QApplication::translate("preferencesDialog", "NNDR ratio\n"
"(A matching pair is accepted, if its distance is closer than X times the distance of the second nearest neighbor)\n"
"Lower the ratio -> higher the precision. 0 means disabled, matching the nearest.", 0, QApplication::UnicodeUTF8));
        label_303->setText(QApplication::translate("preferencesDialog", "Matching window size around projected points when a guess transform is provided to find correspondences. 0 means that global matching will be done.", 0, QApplication::UnicodeUTF8));
        spinBox_visCorGuessWinSize->setSuffix(QApplication::translate("preferencesDialog", " pixels", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("preferencesDialog", "Correspondences Computation: Optical Flow", 0, QApplication::UnicodeUTF8));
        label_201->setText(QApplication::translate("preferencesDialog", "Window size.", 0, QApplication::UnicodeUTF8));
        label_295->setText(QApplication::translate("preferencesDialog", "Iterations.", 0, QApplication::UnicodeUTF8));
        label_296->setText(QApplication::translate("preferencesDialog", "Epsilon.", 0, QApplication::UnicodeUTF8));
        label_297->setText(QApplication::translate("preferencesDialog", "Max level.", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("preferencesDialog", "Motion estimation: 3D to 3D", 0, QApplication::UnicodeUTF8));
        loopClosure_bowInlierDistance->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("preferencesDialog", "Maximum distance accepted between visual word correspondences.", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("preferencesDialog", "Refine iterations of the resulting transformation computed by RANSAC. 0 means no refining.", 0, QApplication::UnicodeUTF8));
        groupBox_13->setTitle(QApplication::translate("preferencesDialog", "Motion Estimation: 3D to 2D (PnP)", 0, QApplication::UnicodeUTF8));
        loopClosure_pnpReprojError->setSuffix(QApplication::translate("preferencesDialog", " pix", 0, QApplication::UnicodeUTF8));
        label_236->setText(QApplication::translate("preferencesDialog", "Reprojection error.", 0, QApplication::UnicodeUTF8));
        loopClosure_pnpFlags->clear();
        loopClosure_pnpFlags->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "Iterative", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "EPNP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "P3P", 0, QApplication::UnicodeUTF8)
        );
        label_235->setText(QApplication::translate("preferencesDialog", "Flags.", 0, QApplication::UnicodeUTF8));
        label_loopClosure_pnpOpenCV2->setText(QApplication::translate("preferencesDialog", "Refine iterations.", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("preferencesDialog", "2D to 2D (Epipolar Geometry)", 0, QApplication::UnicodeUTF8));
        label_671->setText(QApplication::translate("preferencesDialog", "Experimental! PnP parameters are also used here.", 0, QApplication::UnicodeUTF8));
        loopClosure_bowEpipolarGeometryVar->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_664->setText(QApplication::translate("preferencesDialog", "Epipolar geometry maximum variance to accept the loop closure.", 0, QApplication::UnicodeUTF8));
        groupBox_VisExtract->setTitle(QApplication::translate("preferencesDialog", "Visual Feature", 0, QApplication::UnicodeUTF8));
        label_182->setText(QApplication::translate("preferencesDialog", "The features are not extracted if the compared nodes have already features extracted.", 0, QApplication::UnicodeUTF8));
        label_237->setText(QApplication::translate("preferencesDialog", "Maximum feature depth.", 0, QApplication::UnicodeUTF8));
        label_261->setText(QApplication::translate("preferencesDialog", "ROI ratios [left, right, top, bottom] between 0 and 1.", 0, QApplication::UnicodeUTF8));
        label_180->setText(QApplication::translate("preferencesDialog", "Max features extracted from the images (0 means inf).", 0, QApplication::UnicodeUTF8));
        label_275->setText(QApplication::translate("preferencesDialog", "Minimum feature depth.", 0, QApplication::UnicodeUTF8));
        reextract_type->clear();
        reextract_type->insertItems(0, QStringList()
         << QApplication::translate("preferencesDialog", "SURF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "SIFT", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "ORB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FAST+FREAK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "FAST+BRIEF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GFTT+FREAK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GFTT+BRIEF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "BRISK", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("preferencesDialog", "GFTT+ORB", 0, QApplication::UnicodeUTF8)
        );
        loopClosure_bowMaxDepth->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_178->setText(QApplication::translate("preferencesDialog", "Feature detector ", 0, QApplication::UnicodeUTF8));
        loopClosure_bowMinDepth->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("preferencesDialog", "Sub Pixel Refining", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("preferencesDialog", "Refining corners to sub pixel. Sub pixel corners may not be needed for features like SURF/SIFT, which are already sub pixel.", 0, QApplication::UnicodeUTF8));
        label_200->setText(QApplication::translate("preferencesDialog", "Window size.", 0, QApplication::UnicodeUTF8));
        label_203->setText(QApplication::translate("preferencesDialog", "Iterations. 0 disables sub pixel refining.", 0, QApplication::UnicodeUTF8));
        label_204->setText(QApplication::translate("preferencesDialog", "Epsilon.", 0, QApplication::UnicodeUTF8));
        groupBox_icp2->setTitle(QApplication::translate("preferencesDialog", "ICP Registration", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("preferencesDialog", "Iterative closest point (ICP) parameters.", 0, QApplication::UnicodeUTF8));
        loopClosure_icpPointToPlane->setText(QString());
        label_139->setText(QApplication::translate("preferencesDialog", "Downsampling step of the cloud. Set to 1 to disable. This is done before uniform sampling.", 0, QApplication::UnicodeUTF8));
        label_122->setText(QApplication::translate("preferencesDialog", "Max distance for point correspondences.", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("preferencesDialog", "Maximum ICP translation correction accepted (>0). A large translation difference between the visual transformation and ICP transformation results in wrong transformations in most cases.", 0, QApplication::UnicodeUTF8));
        label_133->setText(QApplication::translate("preferencesDialog", "Ratio of matching correspondences to accept the transform. If the maximum laser scans is set, this is the minimum ratio of correspondences on laser scan maximum size to accept the transform.", 0, QApplication::UnicodeUTF8));
        label_212->setText(QApplication::translate("preferencesDialog", "Number of neighbors to compute normals for point to plane. Normals won't be recomputed if uniform sampling is disabled and that there are already normals in the laser scans.", 0, QApplication::UnicodeUTF8));
        label_125->setText(QApplication::translate("preferencesDialog", "Uniform sampling voxel size. Set to 0 to disable.", 0, QApplication::UnicodeUTF8));
        loopClosure_icpVoxelSize->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_124->setText(QApplication::translate("preferencesDialog", "Max iterations.", 0, QApplication::UnicodeUTF8));
        globalDetection_icpMaxTranslation->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("preferencesDialog", "Maximum ICP rotation correction accepted (>0). A large rotation difference between the visual transformation and ICP transformation results in wrong transformations in most cases.", 0, QApplication::UnicodeUTF8));
        globalDetection_icpMaxRotation->setSuffix(QApplication::translate("preferencesDialog", " rad", 0, QApplication::UnicodeUTF8));
        label_144->setText(QApplication::translate("preferencesDialog", "Point to plane ICP. Only for ICP 3D.", 0, QApplication::UnicodeUTF8));
        label_136->setText(QApplication::translate("preferencesDialog", "Set the transformation epsilon (maximum allowable difference between two consecutive transformations) in order for an optimization to be considered as having converged to the final solution.", 0, QApplication::UnicodeUTF8));
        loopClosure_icpEpsilon->setSuffix(QApplication::translate("preferencesDialog", " m", 0, QApplication::UnicodeUTF8));
        groupBox_stereo1->setTitle(QApplication::translate("preferencesDialog", "Stereo", 0, QApplication::UnicodeUTF8));
        label_187->setText(QApplication::translate("preferencesDialog", "These parameters are used to find the 3D positions of visual words using disparity between the left and right images. Optical flow can be used to find corresponding corners in the right image of words extracted from the left image.", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QString());
        label_284->setText(QApplication::translate("preferencesDialog", "Window height.", 0, QApplication::UnicodeUTF8));
        label_285->setText(QApplication::translate("preferencesDialog", "Minimum disparity.", 0, QApplication::UnicodeUTF8));
        label_205->setText(QApplication::translate("preferencesDialog", "Window width.", 0, QApplication::UnicodeUTF8));
        label_206->setText(QApplication::translate("preferencesDialog", "Maximum iterations.", 0, QApplication::UnicodeUTF8));
        stereo_ssd->setText(QString());
        label_207->setText(QApplication::translate("preferencesDialog", "[OpticalFlow = true] Epsilon stop criterion.", 0, QApplication::UnicodeUTF8));
        label_208->setText(QApplication::translate("preferencesDialog", "Maximum pyramid level.", 0, QApplication::UnicodeUTF8));
        label_287->setText(QApplication::translate("preferencesDialog", "[OpticalFlow = false] Use Sum of Squared Differences (SSD) window, otherwise Sum of Absolute Differences (SAD) window is used.", 0, QApplication::UnicodeUTF8));
        label_214->setText(QApplication::translate("preferencesDialog", "Use optical flow to find stereo correspondences, otherwise a simple block matching approach is used.", 0, QApplication::UnicodeUTF8));
        label_286->setText(QApplication::translate("preferencesDialog", "Maximum disparity.", 0, QApplication::UnicodeUTF8));
        stereo_opticalFlow->setText(QString());
        groupBox_stereoBM2->setTitle(QApplication::translate("preferencesDialog", "StereoBM", 0, QApplication::UnicodeUTF8));
        label_197->setText(QApplication::translate("preferencesDialog", "Stereo correspondence using the block matching algorithm (cv::StereoBM), introduced and contributed to OpenCV by K. Konolige. This approach is used to construct a dense disparity image for visualization (RGB-D point clouds) or to create a depth image when acquiring from a stereo source. ", 0, QApplication::UnicodeUTF8));
        groupBox_16->setTitle(QString());
        label_278->setText(QApplication::translate("preferencesDialog", "Pre-filter Size.", 0, QApplication::UnicodeUTF8));
        label_276->setText(QApplication::translate("preferencesDialog", "Minimum disparity.", 0, QApplication::UnicodeUTF8));
        label_281->setText(QApplication::translate("preferencesDialog", "Texture threshold.", 0, QApplication::UnicodeUTF8));
        label_279->setText(QApplication::translate("preferencesDialog", "Pre-filter Cap.", 0, QApplication::UnicodeUTF8));
        label_277->setText(QApplication::translate("preferencesDialog", "Number of disparities.", 0, QApplication::UnicodeUTF8));
        label_216->setText(QApplication::translate("preferencesDialog", "Block size.", 0, QApplication::UnicodeUTF8));
        label_280->setText(QApplication::translate("preferencesDialog", "Uniqueness ratio.", 0, QApplication::UnicodeUTF8));
        label_282->setText(QApplication::translate("preferencesDialog", "Speckle window size.", 0, QApplication::UnicodeUTF8));
        label_283->setText(QApplication::translate("preferencesDialog", "Speckle range.", 0, QApplication::UnicodeUTF8));
        groupBox_feature1->setTitle(QApplication::translate("preferencesDialog", "Feature", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("preferencesDialog", "Parameters for each corresponding OpenCV feature type. See the sub panels.", 0, QApplication::UnicodeUTF8));
        groupBox_detector_surf2->setTitle(QApplication::translate("preferencesDialog", "SURF", 0, QApplication::UnicodeUTF8));
        surf_checkBox_upright->setText(QString());
        label_41->setText(QApplication::translate("preferencesDialog", "Octave layers.", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("preferencesDialog", "Descriptor extended (true=128, false=64).", 0, QApplication::UnicodeUTF8));
        label_surf_checkBox_gpuKeypointsRatio->setText(QApplication::translate("preferencesDialog", "GPU keypoints ratio.", 0, QApplication::UnicodeUTF8));
        label_surf_checkBox_gpuVersion->setText(QApplication::translate("preferencesDialog", "GPU version.", 0, QApplication::UnicodeUTF8));
        surf_checkBox_gpuVersion->setText(QString());
        label_49->setText(QApplication::translate("preferencesDialog", "U-SURF used.", 0, QApplication::UnicodeUTF8));
        checkBox_surfExtended->setText(QString());
        label_26->setText(QApplication::translate("preferencesDialog", "Octaves.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("preferencesDialog", "Hessian threshold.", 0, QApplication::UnicodeUTF8));
        groupBox_detector_sift2->setTitle(QApplication::translate("preferencesDialog", "SIFT", 0, QApplication::UnicodeUTF8));
        label_129->setText(QApplication::translate("preferencesDialog", "Sigma.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("preferencesDialog", "Contrast threshold.", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("preferencesDialog", "Edge threshold.", 0, QApplication::UnicodeUTF8));
        label_130->setText(QApplication::translate("preferencesDialog", "nOctaveLayers.", 0, QApplication::UnicodeUTF8));
        label_131->setText(QApplication::translate("preferencesDialog", "nFeatures.", 0, QApplication::UnicodeUTF8));
        groupBox_detector_fast2->setTitle(QApplication::translate("preferencesDialog", "FAST", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("preferencesDialog", "Threshold on difference between intensity of the central pixel and pixels of a circle around this pixel.", 0, QApplication::UnicodeUTF8));
        fastSuppressNonMax->setText(QString());
        label_69->setText(QApplication::translate("preferencesDialog", "If true, non-maximum suppression is applied to detected corners (keypoints).", 0, QApplication::UnicodeUTF8));
        groupBox_fast_opencv2->setTitle(QApplication::translate("preferencesDialog", "OpenCV 2", 0, QApplication::UnicodeUTF8));
        label_111->setText(QApplication::translate("preferencesDialog", "Minimum threshold. Used only when FAST/GridRows and FAST/GridCols are set.", 0, QApplication::UnicodeUTF8));
        label_115->setText(QApplication::translate("preferencesDialog", "Maximum threshold. Used only when FAST/GridRows and FAST/GridCols are set.", 0, QApplication::UnicodeUTF8));
        label_104->setText(QApplication::translate("preferencesDialog", "Grid rows (0 to disable). Adapts a detector to partition the source image into a grid and detect points in each cell.", 0, QApplication::UnicodeUTF8));
        label_109->setText(QApplication::translate("preferencesDialog", "Grid cols (0 to disable). Adapts a detector to partition the source image into a grid and detect points in each cell.", 0, QApplication::UnicodeUTF8));
        fastGpu->setText(QString());
        label_fastGPU->setText(QApplication::translate("preferencesDialog", "GPU-FAST: Use GPU version of FAST. This option is enabled only if OpenCV is built with CUDA and GPUs are detected.", 0, QApplication::UnicodeUTF8));
        label_fastGPUKptRatio->setText(QApplication::translate("preferencesDialog", "Used with FAST GPU.", 0, QApplication::UnicodeUTF8));
        groupBox_detector_brief2->setTitle(QApplication::translate("preferencesDialog", "BRIEF", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("preferencesDialog", "Bytes is a length of descriptor in bytes. It can be equal 16, 32 or 64 bytes.", 0, QApplication::UnicodeUTF8));
        groupBox_detector_orb2->setTitle(QApplication::translate("preferencesDialog", "ORB", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("preferencesDialog", "Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor will mean that to cover certain scale range you will need more pyramid levels and so the speed will suffer.", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("preferencesDialog", "The number of pyramid levels. The smallest level will have linear size equal to input_image_linear_size/pow(scaleFactor, nlevels).", 0, QApplication::UnicodeUTF8));
        label_95->setText(QApplication::translate("preferencesDialog", "This is size of the border where the features are not detected. It should roughly match the patchSize parameter.", 0, QApplication::UnicodeUTF8));
        label_127->setText(QApplication::translate("preferencesDialog", "It should be 0 in the current implementation.", 0, QApplication::UnicodeUTF8));
        label_128->setText(QApplication::translate("preferencesDialog", "WTA_K: The number of points that produce each element of the oriented BRIEF descriptor. The default value 2 means the BRIEF where we take a random point pair and compare their brightnesses, so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3 random points (of course, those point coordinates are random, but they are generated from the pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such output will occupy 2 bits, and therefore it will need a special variant of Hamming distance, denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).", 0, QApplication::UnicodeUTF8));
        label_140->setText(QApplication::translate("preferencesDialog", "The default HARRIS_SCORE=0 means that Harris algorithm is used to rank features (the score is written to KeyPoint::score and is used to retain best nfeatures features); FAST_SCORE=1 is alternative value of the parameter that produces slightly less stable keypoints, but it is a little faster to compute.", 0, QApplication::UnicodeUTF8));
        label_147->setText(QApplication::translate("preferencesDialog", "size of the patch used by the oriented BRIEF descriptor. Of course, on smaller pyramid layers the perceived image area covered by a feature will be larger.", 0, QApplication::UnicodeUTF8));
        checkBox_ORBGpu->setText(QString());
        label_orbGpu->setText(QApplication::translate("preferencesDialog", "GPU-ORB: Use GPU version of ORB. This option is enabled only if OpenCV is built with CUDA and GPUs are detected.", 0, QApplication::UnicodeUTF8));
        groupBox_detector_freak2->setTitle(QApplication::translate("preferencesDialog", "FREAK", 0, QApplication::UnicodeUTF8));
        checkBox_FREAKOrientationNormalized->setText(QString());
        label_6->setText(QApplication::translate("preferencesDialog", "Enable orientation normalization.", 0, QApplication::UnicodeUTF8));
        checkBox_FREAKScaleNormalized->setText(QString());
        label_9->setText(QApplication::translate("preferencesDialog", "Enable scale normalization.", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("preferencesDialog", "Scaling of the description pattern.", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("preferencesDialog", "Number of octaves covered by the detected keypoints.", 0, QApplication::UnicodeUTF8));
        groupBox_detector_gftt2->setTitle(QApplication::translate("preferencesDialog", "GFTT", 0, QApplication::UnicodeUTF8));
        checkBox_GFTT_useHarrisDetector->setText(QString());
        label_172->setText(QApplication::translate("preferencesDialog", "Use Harris detector.", 0, QApplication::UnicodeUTF8));
        label_173->setText(QApplication::translate("preferencesDialog", "K. Harris detector free parameter.", 0, QApplication::UnicodeUTF8));
        label_175->setText(QApplication::translate("preferencesDialog", "Quality level. Parameter characterizing the minimal accepted quality of image corners. The parameter value is multiplied by the best corner quality measure, which is the minimal eigenvalue (see cornerMinEigenVal() ) or the Harris function response. The corners with the quality measure less than the product are rejected. For example, if the best corner has the quality measure = 1500, and the qualityLevel=0.01 , then all the corners with the quality measure less than 15 are rejected.", 0, QApplication::UnicodeUTF8));
        label_176->setText(QApplication::translate("preferencesDialog", "Minimum possible Euclidean distance between the returned corners.", 0, QApplication::UnicodeUTF8));
        label_177->setText(QApplication::translate("preferencesDialog", "Block size. Size of an average block for computing a derivative covariation matrix over each pixel neighborhood.", 0, QApplication::UnicodeUTF8));
        groupBox_detector_brisk2->setTitle(QApplication::translate("preferencesDialog", "BRISK", 0, QApplication::UnicodeUTF8));
        label_191->setText(QApplication::translate("preferencesDialog", "FAST/AGAST detection threshold score.", 0, QApplication::UnicodeUTF8));
        label_188->setText(QApplication::translate("preferencesDialog", "Detection octaves. Use 0 to do single scale.", 0, QApplication::UnicodeUTF8));
        label_189->setText(QApplication::translate("preferencesDialog", "Apply this scale to the pattern used for sampling the neighbourhood of a keypoint.", 0, QApplication::UnicodeUTF8));
        radioButton_basic->setText(QApplication::translate("preferencesDialog", "Basic", 0, QApplication::UnicodeUTF8));
        radioButton_advanced->setText(QApplication::translate("preferencesDialog", "Advanced", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class preferencesDialog: public Ui_preferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
