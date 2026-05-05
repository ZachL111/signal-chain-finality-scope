#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {82, 91, 27, 21, 11};
    assert(score_signal(signal_case_1) == 49);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {90, 93, 21, 11, 13};
    assert(score_signal(signal_case_2) == 159);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {91, 71, 16, 12, 4};
    assert(score_signal(signal_case_3) == 129);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
