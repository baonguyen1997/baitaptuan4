﻿#include <bits/stdc++.h>
#include <iostream>
#include<conio.h>
#include <cstring>
#include "baitap.hpp"

using namespace std;

int main(){
	User us = User();
	int lc;
	int chon,a;
	bool kt = true , chinh = true;

	char c,c1,c2,c3;

	// in phong hiển thị lựa chon vào những thư mục rêng
	//system("cls");
	do{
		//system("cls");
	    us.HienTen();
		cout << "             <====================================================>\n\n";
		cout << "                        1 : quan ly nguoi dung \n";
		cout << "                        2 : qua ly tin nhan \n";
		cout << "                        3 : quan ly ban be \n";
		cout << "                        4 : thoat \n";
		cout << "     (Ctrl + B )<----------------------------------------------------> ( Ctrl + N)\n";
		
		c = _getch();
		//system("cls");
		do
		{
		switch (c)	{
		case 49:
			//system("cls");
			us.HienTen();
			cout << "           <====================================================>\n";
			cout << "                         1 : dang ky \n";
			cout << "                         2 : dang nhap \n";
			cout << "                         3 : dang xuat \n";
			cout << "                         4 : tro ve \n";
			cout << "     (Ctrl + B )<----------------------------------------------------> ( Ctrl + N)\n";
			
			c1 = _getch();
			switch (c1){
			case 49:{
					   us.SignUp();
					   break;
			}
			case 50:
			{
					  us.SignIn();
					  break;
			}
			case 51:
			{
					  cout << "da dang xuat \n";
					  us.SignOut();
					  break;
			}
			case 52:
				a = 49;
				chinh = false;
				system("cls");
				break;
			case 2:
				a = 49;
				chinh = false;
				system("cls");
				break;
			default: kt = true;
				break;
			}// ket thuc vong lap swith

			break;
		case 50:
		{
				//system("cls");
				  us.HienTen();
				  
				  cout << "             <====================================================>\n";
				  cout << "                        1 :hien thi cac tin nhan da giui\n";
				  cout << "                        2 :hien thi cac thong tin chi tiet cua tin nhan\n";
				  cout << "                        3 :giui tin nhan\n";
				  cout << "                        4 :thoat\n";
			      cout << "     (Ctrl + B )<----------------------------------------------------> ( Ctrl + N)\n";

				  c2 = _getch();
				  switch (c2)
				  {
				  case 49:
				  {
							us.ShowMess(us.id);
							break;

				  }
				  case 50:{
							 us.ShowMessDetail(us.id);
							// kt = true;
							 break;
				  }
				  case 51:{
							 us.SendMess(us.id);
							 break;
				  }

				  case 52:{
							  a = 50;
							 chinh = false;
							 system("cls");
							 break;
				  }

				  case 2:{
							 a = 50;
							 chinh = false;
							  system("cls");
							  break;
				  }
				  default:
					  break;
				  }
				  break;
		}

		case 51:{
			//system("cls");
			 us.HienTen();
				   cout << "               <====================================================>\n";
				   cout << "                        1 : them ban be\n";
				   cout << "                        2 : hien thi danh sach ban be\n";
				   cout << "                        3 : danh sach block\n";
				   cout << "                        4: tro lai\n";
				   cout << "     (Ctrl + B )<----------------------------------------------------> ( Ctrl + N)\n";

				   int ban;
				   c3 = _getch();
				   switch (c3)
				   {
				   case 49:{
						      us.AddFriend(us.id);
							  break;
				   }
				   case 50:
				   {
							 us.ShowFriend(us.id);
							 break;
				   }
				   case 51:{
							  us.BlockFriend(us.id);
							  break;
				   }
				   case 52:
					   a = 51;
					   chinh = false;
					   system("cls");
					   break;
				   case 2:
					   a = 51;
					   chinh = false;
					   system("cls");
					   break;
				   default:
					   break;
				   }
				   break;
		}
		case 14:
		{		   chinh = true;
				   c = a;
				   cout << a;
				   break;
		}
		case 52:
		{
				  cout << "hen gap lai dip khac \n";
				  kt = false;
				  return 0;
				  break;
		}

		default:kt = true;
			break;
		}
	} while (chinh);
	} while (kt);

	system("pause");
	return 0;
}
