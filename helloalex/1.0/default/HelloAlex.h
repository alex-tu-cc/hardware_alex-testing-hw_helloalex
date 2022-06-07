// FIXME: your file license if you have one

#pragma once

#include <android/hardware/helloalex/1.0/IHelloAlex.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace helloalex {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct HelloAlex : public IHelloAlex {
    // Methods from ::android::hardware::helloalex::V1_0::IHelloAlex follow.
    Return<void> justTest(const hidl_string& name, justTest_cb _hidl_cb) override;
    Return<void> justTest1(::android::hardware::helloalex::V1_0::HelloTest name) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IHelloAlex* HIDL_FETCH_IHelloAlex(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace helloalex
}  // namespace hardware
}  // namespace android
