#pragma once
#include "../../../sqlite/sqlite3.h"

class DB {
	private:
		sqlite3* db;
		int rc;

	public:
		DB(int rc);
		void connectDB(std::string name);
		~DB();

};


class Table {
private:
	sqlite3* db;
	int rc;
public:
	Table();
	~Table();

};