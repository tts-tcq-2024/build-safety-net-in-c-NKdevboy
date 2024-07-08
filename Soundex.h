#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>


// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
// 0 1 2 3 0 1 2 0 0 2 2 4 5 5 0 1 2 6 2 3 0 1 0 2 0 2

//const char LookupTable[] = "01230120022455012623010202";

char getSoundexCode(char c) 
{
    const char LookupTable[] = "01230120022455012623010202";
    c = toupper(c);
    return LookupTable[c-'A'];
}

void InitArray(char *arr)
{
    int Index = 0;
    for(;Index < 4;Index++)
    {
        arr[Index] = '0';
    }
    arr[4]='\0';
}

void StoreSoundex(int *cursIndex,char * currentSoundx,char CurrentChar)
{
    char code = 0;
    code = getSoundexCode(CurrentChar);
    if( (code!= '0') && (code != currentSoundx[(*cursIndex -1)]) )
    {
        currentSoundx[(*cursIndex++)] = code;
    }
    else
    {
        //do nothing
    }
}

void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);
    int sIndex = 1;
    InitArray(soundex);
    soundex[0] = toupper(name[0]);
    for (int i = 1; i < len && sIndex < 4; i++) 
    {
        StoreSoundex(&sIndex,soundex,name[i]);
    }
}

#endif // SOUNDEX_H
