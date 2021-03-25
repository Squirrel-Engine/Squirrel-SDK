#include "DBManager.h"

#include <iostream>



DBManager::DBManager()
{
	db = new SQLite::Database("assetDB.db3", SQLite::OPEN_READWRITE);
}

std::string DBManager::getPath(EDBTable tableName, int index)
{
    std::string path;
    try
    {
	    switch (tableName)
	    {
        case EDBTable::MESH_TABLE:
            getPathFromTableName("MeshID", "mesh_id", index);
            return path;
            break;
        case EDBTable::TEXTURE_TABLE:
            return path;
            break;
        case EDBTable::SHADER_TABLE:
            return path;
            break;
        case EDBTable::AUDIO_TABLE:
            return path;
            break;
	    	
	    }
    	/*

        */
    }
    catch (std::exception& e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

	
}

std::string DBManager::getPathFromTableName(std::string tableName, std::string columnName, int index)
{
    SQLite::Statement query(*db, "SELECT * FROM " + tableName + " WHERE " +columnName +" = " + std::to_string(index));
    const char* path;
    // Loop to execute the query step by step, to get rows of result
    while (query.executeStep())
    {
        // Demonstrate how to get some typed column value

        path = query.getColumn(1);

        std::cout << "row: " << ", " << path << ", " << std::endl;
    }
    return path;
}


