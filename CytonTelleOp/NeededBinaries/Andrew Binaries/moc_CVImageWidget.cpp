/****************************************************************************
** Meta object code from reading C++ file 'CVImageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../include/Libraries/CVImageWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CVImageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CVImageWidget_t {
    QByteArrayData data[8];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CVImageWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CVImageWidget_t qt_meta_stringdata_CVImageWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CVImageWidget"
QT_MOC_LITERAL(1, 14, 11), // "emitRefresh"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "currentX"
QT_MOC_LITERAL(4, 36, 8), // "currentY"
QT_MOC_LITERAL(5, 45, 15), // "convertToQImage"
QT_MOC_LITERAL(6, 61, 7), // "cv::Mat"
QT_MOC_LITERAL(7, 69, 5) // "image"

    },
    "CVImageWidget\0emitRefresh\0\0currentX\0"
    "currentY\0convertToQImage\0cv::Mat\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVImageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void CVImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CVImageWidget *_t = static_cast<CVImageWidget *>(_o);
        switch (_id) {
        case 0: _t->emitRefresh((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->convertToQImage((*reinterpret_cast< const cv::Mat(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CVImageWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CVImageWidget::emitRefresh)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CVImageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CVImageWidget.data,
      qt_meta_data_CVImageWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CVImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CVImageWidget.stringdata))
        return static_cast<void*>(const_cast< CVImageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CVImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CVImageWidget::emitRefresh(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
