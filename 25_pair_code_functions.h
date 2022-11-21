#ifndef DEFINE_MAIN_ONCE
#define DEFINE_MAIN_ONCE

#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

ColorPair GetColorFromPairNumber(int pairNumber);

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
void printtable();

#endif
