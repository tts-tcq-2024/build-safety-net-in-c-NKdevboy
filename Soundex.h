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
/*
    switch (c) {
        case 'B': case 'F': case 'P': case 'V': return '1';
        case 'C': case 'G': case 'J': case 'K': case 'Q': case 'S': case 'X': case 'Z': return '2';
        case 'D': case 'T': return '3';
        case 'L': return '4';
        case 'M': case 'N': return '5';
        case 'R': return '6';
        default: return '0'; // For A, E, I, O, U, H, W, Y
    }
*/

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

void StoreSoundex(int *cursIndex,const char * currentSoundx,char CurrentChar)
{
    char code = 0;
    code = getSoundexCode(CurrentChar);
    if( (code!= '0') && (code != currentSoundx[(*cursIndex -1)]) )
    {
        currentSoundx[(*cursIndex++)] = code;
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
        /*
        char code = getSoundexCode(name[i]);
        if (code != '0' && code != soundex[sIndex - 1]) 
        {
            soundex[sIndex++] = code;
        }
        */

    }
}

#endif // SOUNDEX_H
