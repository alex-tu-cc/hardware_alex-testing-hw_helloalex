// FIXME: your file license if you have one

#include "HelloAlex.h"

namespace android {
namespace hardware {
namespace helloalex {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::helloalex::V1_0::IHelloAlex follow.
Return<void> HelloAlex::justTest(const hidl_string& name, justTest_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<void> HelloAlex::justTest1(::android::hardware::helloalex::V1_0::HelloTest name) {
    // TODO implement
    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IHelloAlex* HIDL_FETCH_IHelloAlex(const char* /* name */) {
    //return new HelloAlex();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace helloalex
}  // namespace hardware
}  // namespace android
