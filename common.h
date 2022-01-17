enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};


#define  MAX_COLORPAIR_NAME_CHARS  16



int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);    
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
