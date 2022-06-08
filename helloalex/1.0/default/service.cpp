#define LOG_TAG "android.hardware.helloalex@1.0-service"
#include <log/log.h>
// This sample came from https://ithelp.ithome.com.tw/articles/10222046
// But I feel the service.cpp on another blog is better: https://evilpan.com/2020/11/01/hidl-basics/

#include <android/hardware/helloalex/1.0/IHelloAlex.h>

#include <hidl/LegacySupport.h>
#include "HelloAlex.h"

// Generated HIDL files
using android::hardware::helloalex::V1_0::IHelloAlex;
using android::hardware::helloalex::V1_0::implementation::HelloAlex;
using android::sp;

#if 0
using android::hardware::defaultPassthroughServiceImplementation;
#endif

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;

int main() {
#if 0
    return defaultPassthroughServiceImplementation<IHelloAlex>();
#else
    // This function must be called before you join to ensure the proper
    // number of threads are created. The threadpool will never exceed
    // size one because of this call.
    ALOGD("alex: start service: helloalex");
    sp<IHelloAlex> service = new HelloAlex();
    configureRpcThreadpool(1, true /*callerWillJoin*/);
    if(android::OK !=  service->registerAsService())
        return 1; // or handle error

    // Adds this thread to the threadpool, resulting in one total
    // thread in the threadpool. We could also do other things, but
    // would have to specify 'false' to willJoin in configureRpcThreadpool
    joinRpcThreadpool();
    return 1; // joinRpcThreadpool should never return
#endif
}
