#include <gtest/gtest.h>

#include "../../SquirrelSDK/include/DBManager.h"


class UT_DBManager : public ::testing::Test
{
protected:
	DBManager dbManager;

	UT_DBManager()
	{
	}

	void SetUp() {
		dbManager.setPath("../../test/res/assetDB.db3");
	}

};

// Update Test Cases with New DB
TEST_F(UT_DBManager, getMeshPath)
{
	ASSERT_EQ(dbManager.getPath(EDBTable::MESH_TABLE, 1), "./wewe");
}

TEST_F(UT_DBManager, getTexturePath)
{
	ASSERT_EQ(dbManager.getPath(EDBTable::TEXTURE_TABLE, 1), "./tesksture");
}

TEST_F(UT_DBManager, getShaderPath)
{
	ASSERT_EQ(dbManager.getPath(EDBTable::SHADER_TABLE, 1), "./shaderfdfd");
}

TEST_F(UT_DBManager, getAudioPath)
{
	ASSERT_EQ(dbManager.getPath(EDBTable::AUDIO_TABLE, 1), "./audiofdfd");
}

TEST_F(UT_DBManager, getMaterialPath)
{
	ASSERT_EQ("sd", "dd");
}