#include <check.h>
#include "search_algos.h"

START_TEST(test_linear_search)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(array) / sizeof(array[0]);

    ck_assert_int_eq(linear_search(array, size, 6), 5);
    ck_assert_int_eq(linear_search(array, size, 11), -1);
}
END_TEST

START_TEST(test_binary_search)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(array) / sizeof(array[0]);

    ck_assert_int_eq(binary_search(array, size, 6), 5);
    ck_assert_int_eq(binary_search(array, size, 11), -1);
}
END_TEST

int main(void)
{
    Suite *suite = suite_create("SearchAlgorithms");
    TCase *tc_linear = tcase_create("LinearSearch");
    TCase *tc_binary = tcase_create("BinarySearch");

    tcase_add_test(tc_linear, test_linear_search);
    tcase_add_test(tc_binary, test_binary_search);

    suite_add_tcase(suite, tc_linear);
    suite_add_tcase(suite, tc_binary);

    SRunner *runner = srunner_create(suite);
    srunner_run_all(runner, CK_NORMAL);
    int number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
