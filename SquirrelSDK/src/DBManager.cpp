#include "DBManager.h"
#include <iostream>



DBManager::DBManager()
{
	db = new SQLite::Database(dbPath, SQLite::OPEN_READWRITE);
}

std::string DBManager::getPath(EDBTable tableName, int index)
{
    std::string path;
    try
    {
	    switch (tableName)
	    {
        case EDBTable::MESH_TABLE:
            path = getPathFromTableName("Mesh", "mesh_id", index);
            return path;
            break;
        case EDBTable::TEXTURE_TABLE:
            path = getPathFromTableName("Texture", "texture_id", index);
            return path;
            break;
        case EDBTable::SHADER_TABLE:
            path = getPathFromTableName("Shader", "shader_id", index);
            return path;
            break;
        case EDBTable::AUDIO_TABLE:
            path = getPathFromTableName("Audio", "audio_id", index);
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

	try
	{
        const char* path;	
		SQLite::Statement query(*db, "SELECT * FROM " + tableName + " WHERE " + columnName + " = " + std::to_string(index));

		// Loop to execute the query step by step, to get rows of result
		while (query.executeStep())
		{
			// Demonstrate how to get some typed column value

			path = query.getColumn(1);

			std::cout << "row: " << ", " << path << ", " << std::endl;
            return path;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
	


}

void DBManager::setPath(std::string path){
    dbPath = path;
    db = new SQLite::Database(dbPath, SQLite::OPEN_READWRITE);
}

