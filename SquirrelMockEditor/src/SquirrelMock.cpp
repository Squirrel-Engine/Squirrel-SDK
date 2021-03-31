// SquirrelSDK.cpp : Defines the entry point for the application.
//

#include "SquirrelMock.h"
#include <SQLiteCpp/VariadicBind.h>


#include "../../SquirrelSDK/include/DBManager.h"
#include "SQLiteCpp/Database.h"


using namespace std;

int main()
{
    DBManager* dbManager = new DBManager();
    dbManager->setPath("../assetDB.db3");
    std::cout << dbManager->getPath(EDBTable::AUDIO_TABLE, 1) << std::endl;
	/*
    try
    {
        ;
        // Open a database file
        SQLite::Database    db("assetDB.db3", SQLite::OPEN_READWRITE);
        //sdb.exec("    CREATE TABLE 'MeshID'('mesh_id' INTEGER PRIMARY KEY AUTOINCREMENT,'mesh_path' text NOT NULL)");
        db.exec("INSERT INTO MeshID(mesh_path) VALUES('./wewe')");
        // Compile a SQL query, containing one parameter (index 1)
        SQLite::Statement   query(db, "SELECT * FROM MeshID");


        // Loop to execute the query step by step, to get rows of result
        while (query.executeStep())
        {
            // Demonstrate how to get some typed column value
            int         meshID = query.getColumn(0);
            const char* meshPath = query.getColumn(1);

            std::cout << "row: " << meshID << ", " << meshPath << ", " << std::endl;
        }
    }
    catch (std::exception& e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }
    */
}
