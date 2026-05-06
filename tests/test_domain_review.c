#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {66, 42, 16, 72};
    assert(domain_review_score(item) == 198);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
