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

	void setPath(std::string path);
	
	SQLite::Database* db;
};



/*
Database Generation Script
==========================

CREATE TABLE "Mesh" (
    "mesh_id"    INTEGER NOT NULL UNIQUE,
    "mesh_name"    TEXT,
    "mesh_path"    TEXT,
    PRIMARY KEY("mesh_id" AUTOINCREMENT)
);
CREATE TABLE "Texture" (
    "texture_id"    INTEGER NOT NULL UNIQUE,
    "texture_name"    TEXT,
    "texture_path"    TEXT,
    PRIMARY KEY("texture_id" AUTOINCREMENT)
);
CREATE TABLE "Shader" (
    "shader_id"    INTEGER NOT NULL UNIQUE,
    "shader_name"    TEXT,
    "shader_path"    TEXT,
    PRIMARY KEY("shader_id" AUTOINCREMENT)
);
CREATE TABLE "Audio" (
    "audio_id"    INTEGER NOT NULL UNIQUE,
    "audio_name"    TEXT,
    "audio_path"    TEXT,
    PRIMARY KEY("audio_id" AUTOINCREMENT)
);

CREATE TABLE "Material" (
	"material_id"    INTEGER NOT NULL UNIQUE,
	"material_name"    TEXT,
    "material_path"    TEXT,
    "diffuse_texture"    INTEGER NOT NULL
    "specular_texture"    INTEGER NOT NULL
    "normal_texture"    INTEGER NOT NULL
	PRIMARY KEY("material_id" AUTOINCREMENT)
);


*/