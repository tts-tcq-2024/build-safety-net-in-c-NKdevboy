#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) 
{
  char soundex[5];
  generateSoundex("AX", soundex);
  EXPECT_STREQ(soundex,A200);
}

TEST(SoudexTestsuite1, ReplacesConsonantsWithAppropriateDigits1) 
{
  char soundex[5];
  generateSoundex("Aeiou", soundex);
  EXPECT_STREQ(soundex,A000);
}

TEST(SoudexTestsuite2, ReplacesConsonantsWithAppropriateDigits2) 
{
  char soundex[5];
  generateSoundex("BCDM", soundex);
  EXPECT_STREQ(soundex,B235);
}

TEST(SoudexTestsuite3, ReplacesConsonantsWithAppropriateDigits3) 
{
  char soundex[5];
  generateSoundex("", soundex);
  EXPECT_STREQ(soundex,"");
}

TEST(SoudexTestsuite4, ReplacesConsonantsWithAppropriateDigits4) 
{
  char soundex[5];
  generateSoundex("BBBc", soundex);
  EXPECT_STREQ(soundex,"B12");
}

