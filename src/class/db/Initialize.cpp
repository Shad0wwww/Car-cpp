#include "../../../sqlite/sqlite3.h"
#include <iostream>
#include <string>
#include "../../header/db/Initialize.h"

using namespace std;


DB::DB(int rc) : rc(rc) {}

DB::~DB() {
	sqlite3_close(db);
}


void DB::connectDB(std::string name) {
	sqlite3* db;
	rc = sqlite3_open(name.c_str(), &db);
	
	if (rc) {
		cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
	}
	else {
		cout << "Opened database successfully" << endl;
	}
}