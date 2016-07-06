#include <android/log.h>

#if !defined(NDEBUG) && !defined(_DEBUG)
	#define _DEBUG
#endif

#ifdef _DEBUG
	#define debug_printf(format, ...)	__android_log_print(ANDROID_LOG_DEBUG, "debug_printf", format, ## __VA_ARGS__)
	#define Debug(d) d
#else
	#define Debug(d)
	#define debug_printf(format, ...)
#endif

