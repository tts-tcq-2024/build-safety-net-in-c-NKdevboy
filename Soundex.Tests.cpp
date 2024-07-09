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

TEST(SoudexTestsuite2, ReplacesConsonantsWithAppropriateDigits2) 
{
  char soundex[5];
  generateSoundex("BCDM", soundex);
}

TEST(SoudexTestsuite3, ReplacesConsonantsWithAppropriateDigits3) 
{
  char soundex[5];
  generateSoundex("", soundex);
}

TEST(SoudexTestsuite4, ReplacesConsonantsWithAppropriateDigits4) 
{
  char soundex[1];
  generateSoundex("", soundex);
}
