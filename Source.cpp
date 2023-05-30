#include <iostream>// Header file for input output functions 
#include <string> //represent sequence of characters as an object of class
#include <cstdlib> //declares a set of general-purpose Function
#include <fstream>/*fstream This data type represents the file stream 
generally, and has the capabilities of both ofstream and ifstream which
means it can create files, write information to files
and read information from files*/
#include <windows.h>// to access windows libraray
using namespace std;

//calling void functions
void title();
void main_menu_Functions_customer();
void customer();
void Functions();
void main_menu_Functions_admin();
void Functions_Admin();
void admin();
void add_Furnitures();
void View_Furnitures();
void search();
void customer_search_again();
void admin_search_again();
void homepage();
void help();
void loading_bar();
void view_items();
void view_item_admin();


struct Furniture // structure
{
	string fid;
	string fname;
	string fprice;
	string quantity;


}furniture[3];


//Declaring variale
int i = 0;
int ch, option, number, j;
string username, password, Pprice, quantity, pid, pname, dummy, find;
char  Response, choice, answer, response;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

int main()// main function -  the execution of program begins
{
	homepage();//calling function
	title();//calling function
	cout << "\n\nFirst You must loggin to gain access....." << endl;
	cout << "\n\n\t\tEnter username:";
	cin >> username;
	cout << "\t\tPassword      :";
	cin >> password;
	loading_bar();//calling function
	//start Selection
	if (username == "admin" && password == "123")//out put account as a admin
	{
		system("cls");
		main_menu_Functions_admin();//calling function
		Functions_Admin();//calling function

	}
	else//out put account as a customer
	{
		system("cls");
		main_menu_Functions_customer();//calling function
		Functions();//calling function
	}//end Selection
}

void loading_bar()
{
	cout << "\n\t\tVerification Process" << endl;
	cout << "\t\t";
	SetConsoleTextAttribute(h, 7);
	char x = 219;
	for (int i = 0; i < 15; i++)
	{
		cout << x;
		if (i < 5)
			Sleep(100);
		cout << x;
		if (i >= 5 && i < 15)
			Sleep(50);
		cout << x;
		if (i >= 5)
			Sleep(30);
	}
}

void title()
{
	printf("\033[35m");
	cout << " \t\t===================================================" << endl;
	cout << "\t\t|-------------< ";
	printf("\033[37m");
	cout << "Furnitures villege";
	printf("\033[35m");
	cout << " >--------------|" << endl;
	cout << " \t\t===================================================" << endl;
	printf("\033[37m");
}

//.....................customer option.................
void Functions()
{
	printf("\033[0m\n\t\t  Enter Function-");
	cin >> option;

	//start Selection
	if (option == 1)
	{
		view_items();
	}
	else if (option == 2)
	{
		system("cls");
		title();//calling function
		cout << "\n\t\t****Search specific Furnniture Items**** " << endl;
		search();//calling function
		customer_search_again();//calling function

	}
	else if (option == 3)
	{
		help();//calling function
	}

	else if (option == 4)
	{
		cout << "\nDo you want to logout (y/n)-";
		cin >> Response;

		if (Response == 'Y' || Response == 'y')//start Selection
		{
			system("cls");
			main();//calling function

		}
		else
		{
			system("cls");
			main_menu_Functions_customer();//calling function
			Functions();//calling function
		}
	}
	else if (option == 5)
	{
		cout << "\nDo you want to Exit (y/n)-";
		cin >> response;

		if (response == 'Y' || response == 'y')//start Selection
		{
			cout << "\n\n\n\tThanks for visiting " << endl;
			cout << "\tCome Again" << endl;
			cout << "\tHave a Nice day\n\n" << endl;
			cin.ignore();//clear buffer
			exit;
		}
		else
		{
			system("cls");
			main_menu_Functions_customer();//calling function
			Functions();//calling function
		}

	}
	else
	{
		system("cls");
		main_menu_Functions_customer();//calling function
		Functions();//calling function
	}//end Selection
}
void view_items()
{
	system("cls");
	title();
	cout << "\n\t\t****Available Furniture Items****\n\n" << endl;
	View_Furnitures();
	cout << "\n\tGo back to main menu(y/n)- ";
	cin >> Response;
	if (Response == 'y' || Response == 'Y')
	{
		cin.ignore();//to clear buffer
		system("cls");
		main_menu_Functions_customer();//calling function
		Functions();//calling function
	}
	else
	{
		view_items();//calling function
	}

}
void customer()
{
	cout << "\n\n\t\tWelcome ";
}

void help()
{
	system("cls");
	title();
	cout << "\n\n\n\t\t  | O |           <****Help****>            | O |" << endl;
	cout << "\t\t  |   |- - - - - - - - - - - - - - - - - - -|   |" << endl;
	cout << "\t\t  | O |                                     | O |" << endl;
	cout << "\t\t  |   |    Please Contact Our Head Office   |   |" << endl;
	cout << "\t\t  | O |                                     | O |" << endl;
	cout << "\t\t  |   |            ,==.-------.             |   |" << endl;
	cout << "\t\t  | O |           (    ) ====  \\            | O |" << endl;
	cout << "\t\t  |   |           ||  | [][][] |            |   |" << endl;
	cout << "\t\t  | O |         ,8||  | [][][] |            | O |" << endl;
	cout << "\t\t  |   |         8 ||  | [][][] |            |   |" << endl;
	cout << "\t\t  | O |         8 (    ) O O O /            | O |" << endl;
	cout << "\t\t  |   |         '88`=='-------'             |   |" << endl;
	cout << "\t\t  | O |                                     | O |" << endl;
	cout << "\t\t  |   |            077***********           |   |" << endl;
	cout << "\t\t  |   |     Furnitures.villege@email.com    | O |" << endl;
	cout << "\t\t  |   |                                     |   |" << endl;
	cout << "\t\t  | O |- - - - - - - - - - - - - - - - - - -| O |" << endl;
	cout << "\t\t  |   |                                     |   |" << endl;
	cout << "\n\n\t\tGo back to main menu(y/n)-";
	cin >> Response;
	if (Response == 'y' || Response == 'Y')
	{
		system("pause");
		system("cls");
		main_menu_Functions_customer();//calling function
		Functions();//calling function
	}
	else
	{
		help();
	}
}

void main_menu_Functions_customer()//select_Mainmenu-Option for customers
{
	title();//calling function
	customer();//calling function
	cout << "\n\t                      ,---.           ,---." << endl;
	cout << "\t                     / /''.\\.--'''--./,''\\ \\" << endl;
	cout << "\t                     \\ \\    _       _    / /" << endl;
	cout << "\t                      `./  / __   __ \\  \\,'" << endl;
	cout << "\t                       /    /_O)_(_O\\    \\" << endl;
	cout << "\t                       |  .-'  ___  `-.  |" << endl;
	cout << "\t                    .--|       \\_/       |--." << endl;
	cout << "\t                  ,'    \\  \\    |   /   /    `." << endl;
	cout << "\t                 /       `.  `--^--'  ,'       \\" << endl;
	cout << "\t              .-'''''-.     `- ___.--'     .-'''''-." << endl;
	cout << "\t        .----/         \\------------------/         \\-----." << endl;
	cout << "\t        | .--\\         /----------------- \\         /--.  |" << endl;
	cout << "\t        | |   `-`--`--'";
	printf("\033[33m   -< Main menu >-");
	printf("\033[0m  `-'--'--'    | | \n");
	printf("\033[0m\t\t| |                                             | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  1.Available Furniture Items       ");
	printf("\033[0m         | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  2.Search Specific Furniture Item  ");
	printf("\033[0m         | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  3.Help                            ");
	printf("\033[0m         | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  4.Logout                          ");
	printf("\033[0m         | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  5.Exit                            ");
	printf("\033[0m         | |\n");
	cout << "\t\t| |_____________________________________________| |" << endl;
	cout << "\t\t|_________________________________________________|" << endl;

}


void customer_search_again()
{
	cout << "\n\n\t\t\tDo you want to search again?(y/n)- ";
	cin >> Response;
	if (Response == 'y' || Response == 'Y')
	{
		search();//calling function
		customer_search_again();//calling function
	}
	else if (Response == 'n' || Response == 'N')
	{
		system("cls");
		main_menu_Functions_customer();//calling function
		Functions();//calling function
	}
	else
	{
		printf("\033[41m ");
		cout << "\t\tInvalid Input!";
		printf("\033[0m ");
		customer_search_again();//calling function

	}//end Selection
}

//............................admin options............................
void admin()
{
	cout << "\n\t\tWelcome Admin" << endl;
}

void main_menu_Functions_admin()//select_MainmenuOption for admin
{
	title();//calling function
	admin();//calling function
	cout << "\t                      ,---.           ,---." << endl;
	cout << "\t                     / /''.\\.--'''--./,''\\ \\" << endl;
	cout << "\t                     \\ \\    _       _    / /" << endl;
	cout << "\t                      `./  / __   __ \\  \\,'" << endl;
	cout << "\t                       /    /_O)_(_O\\    \\" << endl;
	cout << "\t                       |  .-'  ___  `-.  |" << endl;
	cout << "\t                    .--|       \\_/       |--." << endl;
	cout << "\t                  ,'    \\  \\    |   /   /    `." << endl;
	cout << "\t                 /       `.  `--^--'  ,'       \\" << endl;
	cout << "\t              .-'''''-.     `- ___.--'     .-'''''-." << endl;
	cout << "\t        .----/         \\------------------/         \\-----." << endl;
	cout << "\t        | .--\\         /----------------- \\         /--.  |" << endl;
	cout << "\t        | |   `-`--`--'";
	printf("\033[33m   -< Main menu >-");
	printf("\033[0m  `-'--'--'    | | \n");
	printf("\033[0m\t\t| |                                             | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  1.Add New Furniture Items         ");
	printf("\033[0m         | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  2.Available Furniture Items       ");
	printf("\033[0m         | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  3.Search Specific Furniture Item  ");
	printf("\033[0m         | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  4.Logout                          ");
	printf("\033[0m         | |\n");
	printf("\033[0m \t\t| |");
	printf("\033[36m  5.Exit                            ");
	printf("\033[0m         | |\n");
	cout << "\t\t| |_____________________________________________| |" << endl;
	cout << "\t\t|_________________________________________________|" << endl;


}

void Functions_Admin()
{
	printf("\033[0m\n\t\t  Enter Function-");
	cin >> option;

	if (option == 1)//start Selection
	{
		system("cls");
		title();//calling function
		cout << "\n\t\t<****Add New Furniture Items****>\n\n" << endl;
		add_Furnitures();//calling function
		printf("\033[32m ");
		cout << "\n\t\tSuccessfully stored" << endl;
		printf("\033[0m ");
		cout << "\nBack to Main Menu ";
		system("pause");
		system("cls");
		main_menu_Functions_admin();//calling function
		Functions_Admin();//calling function
	}
	else if (option == 2)
	{
		view_item_admin();//calling function

	}
	else if (option == 3)
	{
		system("cls");
		title();//calling function
		cout << "\n\t\t****Search specific Furniture Items**** " << endl;
		search();//calling function
		admin_search_again();//calling function
	}
	else if (option == 4)
	{
		cout << "\nDo you want to logout (y/n)-";
		cin >> Response;

		if (Response == 'Y' || Response == 'y')//start Selection
		{
			system("cls");
			main();//calling function
		}
		else
		{
			system("cls");
			main_menu_Functions_admin();//calling function
			Functions_Admin();//calling function
		}
	}
	else if (option == 5)
	{
		cout << "\tHave a Nice day\n\n" << endl;
		cin.ignore();//clear buffer
	}
	else
	{
		system("cls");
		title();//calling function
		main_menu_Functions_admin();//calling function
		Functions_Admin();//calling function
	}//end Selection
}

void add_Furnitures()
{
	ofstream fout;

	cout << "How many Furnitures do you want to add- ";
	cin >> number;
	getline(cin, dummy);

	ofstream t1("Furnitures.txt", ios::app);// open file for appending


	for (i = 1; i <= number; i++)//open loop
	{// input data to file
		cout << "\n\t\t\tEnter  Furniture ID: ";
		cin >> furniture[i].fid;
		cout << "\t\t\tEnter Furniture Name: ";
		cin >> furniture[i].fname;
		cout << "\t\t\tEnter Furniture Price: ";
		cin >> furniture[i].fprice;
		cout << "\t\t\tEnter Furniture Quantity: ";
		cin >> furniture[i].quantity;

		//send to file
		t1 << furniture[i].fid << endl << furniture[i].fname << endl
			<< furniture[i].fprice << endl << furniture[i].quantity << endl;
	}//end loop


}
void view_item_admin()
{
	system("cls");
	title();//calling function
	cout << "\n\t\t<****Available Furniture Items****> " << endl;
	View_Furnitures();//calling function
	cout << "\n\tGo back to main menu(y/n)- ";
	cin >> Response;
	if (Response == 'y' || Response == 'Y')
	{
		system("pause");
		system("cls");
		main_menu_Functions_admin();//calling function
		Functions_Admin();//calling function
	}
	else
	{
		view_item_admin();
	}
}
void View_Furnitures()
{
	// filestream variable file
	ifstream infile;
	infile.open("Furnitures.txt", ios::in);// open file for read
	infile >> pid >> pname >> quantity >> Pprice;
	while (!infile.eof())// again and again read the data from the file and display it.

	{

		cout << "\n\t\t      Furniture ID:" << pid << endl;
		infile >> pid;
		cout << "\t\t    Furniture Name:" << pname << endl;
		infile >> pname;
		cout << "\t\t   Furniture Price:" << Pprice << endl;
		infile >> Pprice;
		cout << "\t\tFurniture Quantity:" << quantity << endl;
		infile >> quantity;

	}
	// close the opened file.
	infile.close();

}
void search()
{
	string find;
	ifstream t2("Furnitures.txt");

	cout << "\n\t\t\tEnter ID to be displayed: ";
	cin >> find;

	cout << endl;
	int notFound = 0;
	for (j = 0; ((j < i) || (!t2.eof())); j++)//open loop
	{

		getline(t2, furniture[j].fid);

		if (furniture[j].fid == find)//start Selection
		{
			notFound = 1;
			printf("\033[32m ");
			cout << " \n\n\t\tFurniture Is Available-->>" << endl;
			printf("\033[0m ");
			cout << "\n\t\t\tFurniture id: " << furniture[j].fid << endl;
			getline(t2, furniture[j].fname);
			cout << "\t\t\tFurniture Name: " << furniture[j].fname << endl;
			getline(t2, furniture[j].fprice);
			cout << "\t\t\tFurniture Prce: " << furniture[j].fprice << endl;
			getline(t2, furniture[j].quantity);
			cout << "\t\t\tFurniture Quantity: " << furniture[j].quantity << endl;

		}

	}//end loop
	t2.close();
	if (notFound == 0)//start Selection
	{

		cout << "\n\t\tNo Record Found" << endl;
	}//end Selection

}
void admin_search_again()
{
	cout << "\n\n\t\t\tDo you want to search again? (y/n)-";
	cin >> Response;
	if (Response == 'y' || Response == 'Y')
	{
		search();//calling function
		admin_search_again();//calling function
	}
	else if (Response == 'n' || Response == 'N')
	{
		system("cls");
		main_menu_Functions_admin();//calling function
		Functions_Admin();//calling function
	}
	else
	{
		printf("\033[41m \t\tInvalid Input!\n");
		printf("\033[0m ");
		admin_search_again();//calling function

	}//end Selection
}
void homepage()
{
	system("Color f0");
	cout << " \t\t=============================================" << endl;
	cout << "\t\t|----------< ";
	cout << "Furnitures villege";
	cout << " >-----------|" << endl;
	cout << " \t\t=============================================" << endl;
	cout << "\n\n\t         __          /\\" << endl;
	cout << "\t        (` )        /^ \\" << endl;
	cout << "\t       (    )_     /^ ^ \\             /\\        __" << endl;
	cout << "\t      (_______)   /^ ^ ^ \\           /^ \\      (` )_ " << endl;
	cout << "\t                 \/^ ^ ^ ^ \\   /\\    /^^^^\\    ((  ) )_" << endl;
	cout << "\t        /\\  /\\  / ^ ^ ^ ^ ^\\^/^ \\  /^ ^ ^ \\  (________)" << endl;
	cout << "\t       /^ \\/ ^\\/ ^ ^ ^ ^ ^ ^ ^ ^ \\/^ ^ ^ ^ \\           * " << endl;
	cout << "\t      /^ ^ \\^ /^ ^\^ ^ ^ ^ ^ ^ ^ ^ ^_____ ^ ^ \\        /|\\" << endl;
	cout << "\t     / ^ ^  \\ _____________________|   |____^ ^\\     /||o\\" << endl;
	cout << "\t    /^ ^ ^ ^ /______________________________\\ ^ ^\\  /|o|||\\" << endl;
	cout << "\t   / ^^ ^ ^ /________________________________\\ ^ ^ /|||||o|\\" << endl;
	cout << "\t  /^ ^ ^ ^^ ^ ||___|___||||||||||||___|__||| ^ ^ ^/||o||||||\\ " << endl;
	cout << "\t / ^  ^ ^ ^ ^ ||___|___||||||||||||___|__||| ^ ^ ^ ^ ^| | " << endl;
	cout << "\t/ ^ ^ ^ ^ ^ ^ ||||||||||||||||||||||||||||||oooooooooo| |ooooo" << endl;
	cout << "\tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
	cout << "\n\n\t\t";
	system("pause");
	system("cls");
	system("Color 07");
}