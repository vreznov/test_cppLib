#ifndef CPPLIB1_GLOBAL_H
#define CPPLIB1_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CPPLIB1_LIBRARY)
#  define CPPLIB1_EXPORT Q_DECL_EXPORT
#else
#  define CPPLIB1_EXPORT Q_DECL_IMPORT
#endif

#endif // CPPLIB1_GLOBAL_H
