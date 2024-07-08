#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) 
{
  char soundex[5];
  generateSoundex("AX", soundex);
}

TEST(SoudexTestsuite1, ReplacesConsonantsWithAppropriateDigits1) 
{
  char soundex[5];
  generateSoundex("Aeiou", soundex);
}

