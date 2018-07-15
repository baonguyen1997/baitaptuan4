#include <iostream>
#include "sqlite3.h"
#include<bits/stdc++.h>


using namespace std;
class User{
	public:
		int  id;
		char *username;
		char *password;
		char *birthday;
		char *city;
		int flag ; //danh dau dang nhap

	public :
        User(){};
		void SignUp();
        void SignIn();
		
        bool isSignIn(); // kiem tra da dang nhap chua
        void HienTen();
		void SignOut();
        bool Check(User u);
        void ShowMess(int);
        void ShowMessDetail(int);
        void SendMess(int);
        void AddFriend(int);
        void ShowFriend(int);
        void BlockFriend(int);
		void ShowListFriend(int);
		void Showcity( int);
};

class ConnectSQlite{
    public:
        sqlite3 *db;
        char *zErrMsg = 0;
        int rc;	
		 int rcp;
        const char *szSQL;
		const char *SQL;
        const char *pzTest;
        sqlite3_stmt *stmt;
		 sqlite3_stmt *stmtp;
        list<string> answer;
   // int countRow; //dem so hang o cau lenh select
    public :
        static int callback(void *,int,char **,char **);
        void Open();
        void RunInsertParamSQL( char *, char *,char *,char *);
        int RunSelectParamSQL( char *fn, char *ln);
        int TransNameToId(char *frien);
        void SelectMessenger( sqlite3 *db,int id);
        void ShowMessDetail(sqlite3 *db,int id1,int id2);
        bool CheckBlock(sqlite3 *db,int id1, int id2);
        void WriteToMess(sqlite3 *db,int id1, int id2,char *mes,char *time);
        bool CheckFriend(sqlite3 *db, int id1,int id2);
        void WriteToFriend(sqlite3 *db,int id1, int id2, char *, char *);
		void CityID(char *);
        void ShowFriend(sqlite3 *db,int id1);
        void BlockFriend(sqlite3 *db,int id1, int id2);
		void ShowListFriend(sqlite3 *db,int id1);
		void Showcity(char* ,int id1);
		void UserNameCity(sqlite3 *db,char *,int id1);

};