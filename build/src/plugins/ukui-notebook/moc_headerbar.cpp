/****************************************************************************
** Meta object code from reading C++ file 'headerbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/plugins/ukui-notebook/headerbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'headerbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HeaderBar_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeaderBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeaderBar_t qt_meta_stringdata_HeaderBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HeaderBar"
QT_MOC_LITERAL(1, 10, 21), // "updateLocationRequest"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "uri"
QT_MOC_LITERAL(4, 37, 10), // "addHistory"
QT_MOC_LITERAL(5, 48, 5), // "force"
QT_MOC_LITERAL(6, 54, 21), // "viewTypeChangeRequest"
QT_MOC_LITERAL(7, 76, 6), // "viewId"
QT_MOC_LITERAL(8, 83, 26), // "updateZoomLevelHintRequest"
QT_MOC_LITERAL(9, 110, 13), // "zoomLevelHint"
QT_MOC_LITERAL(10, 124, 19), // "updateSearchRequest"
QT_MOC_LITERAL(11, 144, 10) // "showSearch"

    },
    "HeaderBar\0updateLocationRequest\0\0uri\0"
    "addHistory\0force\0viewTypeChangeRequest\0"
    "viewId\0updateZoomLevelHintRequest\0"
    "zoomLevelHint\0updateSearchRequest\0"
    "showSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeaderBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       1,    2,   51,    2, 0x26 /* Public | MethodCloned */,
       1,    1,   56,    2, 0x26 /* Public | MethodCloned */,
       6,    1,   59,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,
      10,    1,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void HeaderBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HeaderBar *_t = static_cast<HeaderBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLocationRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->updateLocationRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->updateLocationRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->viewTypeChangeRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateZoomLevelHintRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateSearchRequest((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HeaderBar::*_t)(const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeaderBar::updateLocationRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HeaderBar::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeaderBar::viewTypeChangeRequest)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HeaderBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeaderBar::updateZoomLevelHintRequest)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HeaderBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeaderBar::updateSearchRequest)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject HeaderBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_HeaderBar.data,
      qt_meta_data_HeaderBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HeaderBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeaderBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HeaderBar.stringdata0))
        return static_cast<void*>(const_cast< HeaderBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int HeaderBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void HeaderBar::updateLocationRequest(const QString & _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 3
void HeaderBar::viewTypeChangeRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HeaderBar::updateZoomLevelHintRequest(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HeaderBar::updateSearchRequest(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_HeaderBarToolButton_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeaderBarToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeaderBarToolButton_t qt_meta_stringdata_HeaderBarToolButton = {
    {
QT_MOC_LITERAL(0, 0, 19) // "HeaderBarToolButton"

    },
    "HeaderBarToolButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeaderBarToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void HeaderBarToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject HeaderBarToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_HeaderBarToolButton.data,
      qt_meta_data_HeaderBarToolButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HeaderBarToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeaderBarToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HeaderBarToolButton.stringdata0))
        return static_cast<void*>(const_cast< HeaderBarToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int HeaderBarToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_HeadBarPushButton_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeadBarPushButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeadBarPushButton_t qt_meta_stringdata_HeadBarPushButton = {
    {
QT_MOC_LITERAL(0, 0, 17) // "HeadBarPushButton"

    },
    "HeadBarPushButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeadBarPushButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void HeadBarPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject HeadBarPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_HeadBarPushButton.data,
      qt_meta_data_HeadBarPushButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HeadBarPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeadBarPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HeadBarPushButton.stringdata0))
        return static_cast<void*>(const_cast< HeadBarPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int HeadBarPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
