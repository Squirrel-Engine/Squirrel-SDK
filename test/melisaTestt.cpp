#include <gtest/gtest.h>
#include "../../Squirrel-SDK/SquirrelSDK/include/SquirrelSDK.h"
namespace TESTTT
{
class melisaTestt : public ::testing::Test
{
protected:
	int i = 2;
};

	TEST_F(melisaTestt, melisa)
	{
		ASSERT_EQ(fatihTest(), i);
	}
	TEST_F(melisaTestt, melisa2)
	{
		ASSERT_EQ(fatihTest(), 4);
	}


}
