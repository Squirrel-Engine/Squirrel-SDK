#pragma once
#include <string>

#include "EDBTable.h"
#include "SQLiteCpp/Database.h"
#include <SQLiteCpp/VariadicBind.h>
class DBManager
{
public:
	DBManager();
	std::string dbPath;

	
	std::string getPath(EDBTable tableName, int index);
	std::string DBManager::getPathFromTableName(std::string tableName, std::string columnName, int index);

	void setPath(EDBTable tableName, std::string path);
	
	SQLite::Database* db;
};

