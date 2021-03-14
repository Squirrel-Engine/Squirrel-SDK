#include <gtest/gtest.h>
#include "../../Squirrel-SDK/SquirrelSDK/include/SquirrelSDK.h"
namespace TESTTT
{
class fatihTestt : public ::testing::Test
{
protected:

};




	TEST_F(fatihTestt, fatih)
	{
		EXPECT_EQ(fatihTest(), 4);
	}


}
