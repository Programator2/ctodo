#include <time.h>

#include "unity.h"
#include "../date.h"

void setUp(void) {};

void tearDown(void) {};

void test_date(void) {
    struct tm standard = {.tm_year=2019-1900, .tm_mon=4, .tm_mday=1,};
    struct tm trial = {0};

    char* buffer = "2019-04-01";

    TEST_ASSERT_TRUE(read_date(buffer, &trial));
    TEST_ASSERT_EQUAL_MEMORY(&standard, &trial, sizeof(struct tm));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_date);
    return UNITY_END();
}
