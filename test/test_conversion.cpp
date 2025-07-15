#include <gtest/gtest.h>
#include <conversion.hpp>



TEST(ConversionTest, MmolToMgdl_1_1_is_20) {
    double input_mmol = 1.1;
    int want = 20;
    int get = mmol_to_mgdl(input_mmol);

    ASSERT_EQ(get, want);
}

TEST(ConversionTest, MmolToMgdl_10_6_is_191)
{
    double input_mmol = 10.6;
    int want = 191;
    int get = mmol_to_mgdl(input_mmol);
    
    ASSERT_EQ(get, want);
}

TEST(ConversionTest, MmolToMgdl_6_6_is_119)
{
    double input_mmol = 6.6;
    int want = 119;
    int get = mmol_to_mgdl(input_mmol);
    
    ASSERT_EQ(get, want);
}