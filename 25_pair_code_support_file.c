//File contains functions to support implementing 25_pair_code_functions 
#include "25_pair_code_functions.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

//Function converts/stores ColorPair to a buffer
Input: pointer to Colorcode, pointer to buffer
Return type: void
void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

//Function returns color pair accepting a pair number
Input: pair number
Return type: ColorPair
ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

//Function returns pair number accepting ColorPair
Input: const pointer to ColorPair
Return type: pair number
int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

//Function prints the 25 pair code table
Input: void
Return type: void
void printTable() {
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
    printf("No \t \t Major color \t \t Minor color\n ");
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
    for (int pairNumber = 0;pairNumber < 25; pairNumber++) {
       printf("%d \t", pairNumber+1);
       if (pairNumber % 5 == 0)       
           printf("\t %s ", MajorColorNames[pairNumber / 5]);
        else 
            printf("\t");
     
       printf("\t \t \t %s \t", MinorColorNames[pairNumber % 5]);
       printf("\n");
    }
     printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
}
