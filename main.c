#ifndef DEFINE_MAIN_ONCE
#define DEFINE_MAIN_ONCE
#include "main.h"
#endif
#ifndef DEFINE_PAIRCODE_ONCE
#define DEFINE_PAIRCODE_ONCE 1
#include "25_pair_code_functions.c"
#endif

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
