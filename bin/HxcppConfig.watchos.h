#ifndef HXCPP_CONFIG_INCLUDED
#define HXCPP_CONFIG_INCLUDED

#if !defined(HX_APPLEWATCH) && !defined(NO_HX_APPLEWATCH)
#define HX_APPLEWATCH 
#endif

#if !defined(HX_WATCHOS) && !defined(NO_HX_WATCHOS)
#define HX_WATCHOS 
#endif

#if !defined(OBJC_ARC) && !defined(NO_OBJC_ARC)
#define OBJC_ARC 
#endif

#if !defined(ENABLE_BITCODE) && !defined(NO_ENABLE_BITCODE)
#define ENABLE_BITCODE YES
#endif

#if !defined(HXCPP_VISIT_ALLOCS) && !defined(NO_HXCPP_VISIT_ALLOCS)
#define HXCPP_VISIT_ALLOCS 
#endif

#if !defined(HX_SMART_STRINGS) && !defined(NO_HX_SMART_STRINGS)
#define HX_SMART_STRINGS 
#endif

#if !defined(HXCPP_API_LEVEL) && !defined(NO_HXCPP_API_LEVEL)
#define HXCPP_API_LEVEL 400
#endif

#include <hxcpp.h>

#endif
