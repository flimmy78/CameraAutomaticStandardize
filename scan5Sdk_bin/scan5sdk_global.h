#ifndef SCAN5SDK_GLOBAL_H
#define SCAN5SDK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SCAN5SDK_LIBRARY)
#  define SCAN5SDKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SCAN5SDKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SCAN5SDK_GLOBAL_H
