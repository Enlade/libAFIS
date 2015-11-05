#include "Extraction/Filters/Thinner.h"
#include "General/BinaryMap.h"
#include "Utils/IO/BinaryMapIO.h"
#include "Utils/IO/SimpleDataTypesIO.h"
#include "unity.h"
#include "unity_fixture.h"

#include <stdio.h>

TEST_GROUP(Thinner);

TEST_SETUP(Thinner)
{
}

TEST_TEAR_DOWN(Thinner)
{
}

TEST(Thinner, Thinner_PassThrough)
{
  Thinner_Construct();
}

TEST(Thinner, Thinner_FalseEndings)
{
  BinaryMap bm = BinaryMap_Construct(3,3);

  TEST_ASSERT_FALSE(Thinner_IsFalseEnding(&bm, (Point) { .x = 1, .y = 1 }));

  BinaryMap_Destruct(&bm);
}

TEST(Thinner, Thinner_Thin)
{
}
