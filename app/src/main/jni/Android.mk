LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_PCH := prefix.h
LOCAL_MODULE := nativelib
LOCAL_SRC_FILES := nativelib.cpp
LOCAL_LDLIBS := -llog -landroid
# If a below line is uncommented, a precompiled header will not be compiled.
#LOCAL_ARM_MODE := arm
ifeq ($(TARGET_ARCH_ABI), armeabi)
	LOCAL_LDLIBS += -latomic
endif
include $(BUILD_SHARED_LIBRARY)
