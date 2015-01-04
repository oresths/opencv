#include "test_precomp.hpp"

//CV_TEST_MAIN("cv")
int main(int argc, char **argv) \
{ \
    cvtest::TS::ptr()->init("cv"); \
    ::testing::InitGoogleTest(&argc, argv); \
    cvtest::printVersionInfo(); \
    ; \
    cvtest::ocl::dumpOpenCLDevice(); \
    parseCustomOptions(argc, argv); \
    return RUN_ALL_TESTS(); \
}
