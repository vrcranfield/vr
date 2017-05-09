
#ifndef PQAPPLICATIONCOMPONENTS_EXPORT_H
#define PQAPPLICATIONCOMPONENTS_EXPORT_H

#ifdef PQAPPLICATIONCOMPONENTS_STATIC_DEFINE
#  define PQAPPLICATIONCOMPONENTS_EXPORT
#  define PQAPPLICATIONCOMPONENTS_NO_EXPORT
#else
#  ifndef PQAPPLICATIONCOMPONENTS_EXPORT
#    ifdef pqApplicationComponents_EXPORTS
        /* We are building this library */
#      define PQAPPLICATIONCOMPONENTS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define PQAPPLICATIONCOMPONENTS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef PQAPPLICATIONCOMPONENTS_NO_EXPORT
#    define PQAPPLICATIONCOMPONENTS_NO_EXPORT 
#  endif
#endif

#ifndef PQAPPLICATIONCOMPONENTS_DEPRECATED
#  define PQAPPLICATIONCOMPONENTS_DEPRECATED __declspec(deprecated)
#  define PQAPPLICATIONCOMPONENTS_DEPRECATED_EXPORT PQAPPLICATIONCOMPONENTS_EXPORT __declspec(deprecated)
#  define PQAPPLICATIONCOMPONENTS_DEPRECATED_NO_EXPORT PQAPPLICATIONCOMPONENTS_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define PQAPPLICATIONCOMPONENTS_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "pqComponentsModule.h"
#include "vtkGUISupportQtModule.h"

#endif