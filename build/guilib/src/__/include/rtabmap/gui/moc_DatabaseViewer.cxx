/****************************************************************************
** Meta object code from reading C++ file 'DatabaseViewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../guilib/include/rtabmap/gui/DatabaseViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__DatabaseViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      41,   24,   24,   24, 0x08,
      58,   24,   24,   24, 0x08,
      73,   24,   24,   24, 0x08,
      89,   24,   24,   24, 0x08,
     106,   24,   24,   24, 0x08,
     122,   24,   24,   24, 0x08,
     143,   24,   24,   24, 0x08,
     163,   24,   24,   24, 0x08,
     182,   24,   24,   24, 0x08,
     194,   24,   24,   24, 0x08,
     213,   24,   24,   24, 0x08,
     229,   24,   24,   24, 0x08,
     252,   24,   24,   24, 0x08,
     277,   24,   24,   24, 0x08,
     302,   24,   24,   24, 0x08,
     330,   24,   24,   24, 0x08,
     363,   24,   24,   24, 0x08,
     399,   24,   24,   24, 0x08,
     417,   24,   24,   24, 0x08,
     442,   24,   24,   24, 0x08,
     467,   24,   24,   24, 0x08,
     485,   24,   24,   24, 0x08,
     503,   24,   24,   24, 0x08,
     518,   24,   24,   24, 0x08,
     550,   24,   24,   24, 0x08,
     578,   24,   24,   24, 0x08,
     612,   24,   24,   24, 0x08,
     625,   24,   24,   24, 0x08,
     643,   24,   24,   24, 0x08,
     662,   24,   24,   24, 0x08,
     689,   24,   24,   24, 0x08,
     705,   24,   24,   24, 0x08,
     723,   24,   24,   24, 0x08,
     742,   24,   24,   24, 0x08,
     765,   24,   24,   24, 0x08,
     785,   24,   24,   24, 0x08,
     800,   24,   24,   24, 0x08,
     846,  837,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__DatabaseViewer[] = {
    "rtabmap::DatabaseViewer\0\0writeSettings()\0"
    "configModified()\0openDatabase()\0"
    "generateGraph()\0exportDatabase()\0"
    "extractImages()\0generateLocalGraph()\0"
    "generateTOROGraph()\0generateG2OGraph()\0"
    "view3DMap()\0view3DLaserScans()\0"
    "generate3DMap()\0generate3DLaserScans()\0"
    "detectMoreLoopClosures()\0"
    "refineAllNeighborLinks()\0"
    "refineAllLoopClosureLinks()\0"
    "refineVisuallyAllNeighborLinks()\0"
    "refineVisuallyAllLoopClosureLinks()\0"
    "resetAllChanges()\0sliderAValueChanged(int)\0"
    "sliderBValueChanged(int)\0sliderAMoved(int)\0"
    "sliderBMoved(int)\0update3dView()\0"
    "sliderNeighborValueChanged(int)\0"
    "sliderLoopValueChanged(int)\0"
    "sliderIterationsValueChanged(int)\0"
    "updateGrid()\0updateGraphView()\0"
    "refineConstraint()\0refineConstraintVisually()\0"
    "addConstraint()\0resetConstraint()\0"
    "rejectConstraint()\0updateConstraintView()\0"
    "updateLoggerLevel()\0updateStereo()\0"
    "notifyParametersChanged(QStringList)\0"
    "vertical\0setupMainLayout(int)\0"
};

void rtabmap::DatabaseViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatabaseViewer *_t = static_cast<DatabaseViewer *>(_o);
        switch (_id) {
        case 0: _t->writeSettings(); break;
        case 1: _t->configModified(); break;
        case 2: _t->openDatabase(); break;
        case 3: _t->generateGraph(); break;
        case 4: _t->exportDatabase(); break;
        case 5: _t->extractImages(); break;
        case 6: _t->generateLocalGraph(); break;
        case 7: _t->generateTOROGraph(); break;
        case 8: _t->generateG2OGraph(); break;
        case 9: _t->view3DMap(); break;
        case 10: _t->view3DLaserScans(); break;
        case 11: _t->generate3DMap(); break;
        case 12: _t->generate3DLaserScans(); break;
        case 13: _t->detectMoreLoopClosures(); break;
        case 14: _t->refineAllNeighborLinks(); break;
        case 15: _t->refineAllLoopClosureLinks(); break;
        case 16: _t->refineVisuallyAllNeighborLinks(); break;
        case 17: _t->refineVisuallyAllLoopClosureLinks(); break;
        case 18: _t->resetAllChanges(); break;
        case 19: _t->sliderAValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->sliderBValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->sliderAMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->sliderBMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->update3dView(); break;
        case 24: _t->sliderNeighborValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->sliderLoopValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->sliderIterationsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->updateGrid(); break;
        case 28: _t->updateGraphView(); break;
        case 29: _t->refineConstraint(); break;
        case 30: _t->refineConstraintVisually(); break;
        case 31: _t->addConstraint(); break;
        case 32: _t->resetConstraint(); break;
        case 33: _t->rejectConstraint(); break;
        case 34: _t->updateConstraintView(); break;
        case 35: _t->updateLoggerLevel(); break;
        case 36: _t->updateStereo(); break;
        case 37: _t->notifyParametersChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 38: _t->setupMainLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::DatabaseViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::DatabaseViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_rtabmap__DatabaseViewer,
      qt_meta_data_rtabmap__DatabaseViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::DatabaseViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::DatabaseViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::DatabaseViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__DatabaseViewer))
        return static_cast<void*>(const_cast< DatabaseViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int rtabmap::DatabaseViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
