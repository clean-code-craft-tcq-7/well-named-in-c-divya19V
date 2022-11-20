#ifndef DEFINE_MAIN_ONCE
#define DEFINE_MAIN_ONCE 1
#include "main.h"
#endif

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
