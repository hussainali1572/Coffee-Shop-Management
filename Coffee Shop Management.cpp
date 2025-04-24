 #include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

void login();
int espresso();
int chiller();
int extras();
int exitProgram();
void Bill(int totalBill);

void login() {
    	string user_name;
		string password;
	again:
	cout<<"    ***LOGIN PAGE***     "<<endl;
	cout<<"Enter Username : ";
	cin>>user_name;
	cout<<"Enter Password : ";
    cin>>password;
    if((user_name=="abc")&&(password=="def"))
    {
    	cout << "Correct Password. \n";
	}
    else
    {
    	cout<<"Sorry, you can't login. :( \n";
    	cout<<"You have entered a wrong password. ";
    	cout<<"Press any key to get back to login page. \n";
    	getch();
    	goto again; 
    }
}

int exitProgram() {
    cout << " EXIT \n";
    return 0;
}

int espresso() {
   char select;
	int Qty1;
  cout << "                     ESPRESSO          \n \n";
  cout << "Please, Select the desired option : \n";
  espresso:
  	cout<<endl;
  cout << "\t\t   [1]  Cappuccino                         - Price=1050 \n";
  cout << "\t\t   [2]  Caffe Latte / Flat White           - Price=1150 \n";
  cout << "\t\t   [3]  Caffe Americano 	                  - Price=1000 \n";
  cout << "\t\t   [4]  Macchiato / Ristretto              - Price=900  \n";
  cout << "\t\t   [5]  Coffee of the day (Freshly Brewed) - Price=1100 \n";    
  cout << "\t\t   [E] Exit\n" ; 
  cout << " Enter your choice :";
  cin>>select;
  cout<< "You have selected : "<<select<<" ::  ";
switch (toupper(select))
   {
    	case '1':
	  {
	  	 cout<<"cuppuccino \n";
	     cout<<"Enter quantity : ";
	     cin>>Qty1;
	     int Total = 1050 * Qty1 ; 
	     return Total;
      }
  		break;
      
		case '2':
	  {
	  	 cout<<"Caffe Latte / Flat White \n";
	     cout << "Enter quantity : ";		    
		 cin >> Qty1;
	     int Total = 1150 * Qty1;
	     return Total;	
	  }
		break;
	  
		case '3':
	  {
	  	cout<<"Caffe Americano \n";
		cout << "Enter quantity : ";
		cin >> Qty1;
		int Total = 1000 * Qty1 ;
		return Total;
			
	  }
   		break;

		case '4':
	  {
	  	 cout<<"Macchiato / Ristretto \n";
		 cout << "Enter quantity : ";
		 cin >> Qty1;
		 int Total = 1100 * Qty1 ;
		 return Total;
			
	  }
   		break;

		case '5':
	  {
	  	 cout<<"Coffee of the day \n";
		 cout << "Enter quantity : ";
		 cin >> Qty1;
		 int Total = 950 * Qty1 ;
		 return Total;
			
	  }
   		break;
    
    	case 'E':
      {
    	 exitProgram();
      }
    	break;
    	
    	default:
   	  {
   		 cout<< "\t You have selected wrong option. Please select from the list. \n";
    	 goto espresso;
	  }
}
}

int chiller() {
    	int Qty;
		int Total;
		char select;
  cout << "                CHILLER          \n \n";
  cout << "Please, Select the desired option : \n";
  chiller:
  	cout<<endl;
  cout << "\t\t   [1]  Cocoa Loco           - Price=1500 \n";
  cout << "\t\t   [2]  Cookies 'n Cream     - Price=1450 \n";
  cout << "\t\t   [3]  Very Vanilla Chiller - Price=1250 \n";
  cout << "\t\t   [4]  Creme Brulee         - Price=1300 \n";
  cout << "\t\t   [5]  Mint Chocolate Bomb  - Price=1400 \n";    
  cout << "\t\t   [E]  Exit\n" ; 
  cout << " Enter your choice :";
  cin>>select;
  cout<< "You have selected : "<<select<<" ::  ";
     switch (toupper(select))
   {
    case '1':
	  
	  	 cout<<"Cocoa Loco \n";
	     cout<<"Enter quantity : ";
	     cin>>Qty;
	    Total = 1500 * Qty ; 
	     return Total;
   break;
      
	case '2':
	  		cout<<"Cookies 'n Cream \n";
		    cout << "Enter quantity : ";
		    cin >> Qty;
		    Total = 1450 * Qty;
		    return Total;
            break;
	case '3':
	
	  	 cout<<"Very Vanilla Chiller \n";
		 cout << "Enter quantity : ";
		cin >> Qty;
	    Total = 1250 * Qty ;
		return Total;
        break;

	case '4':
	{
		
	
	 	  cout<<"Creme Brulee \n";
		  cout << "Enter quantity : ";
		  cin >> Qty;
		  Total = 1300 * Qty ;
		  return Total;  }
   break;
    
	case '5':
	  	 {
	  	 
		  cout<<"Mint Chocolate Bomb \n";
		  cout << "Enter quantity : ";
		  cin >> Qty;
          Total = 1400 * Qty ;
		  return Total;
	     }
		   break;
         
    case 'E':
    		 exitProgram();
        	break;
       	default:
    		{
    			cout<< " You have selected wrong option. Please select from the list. \n";
    			goto chiller;
			}
}
}

int extras() {
    	int Qty;
	char select;
  cout << "                EXTRAS         \n \n";
  cout << "Please, Select the desired option : \n";
  extras:
  	cout<<endl;
  cout << "\t\t   [1]  Fruit Chillers         - Price=500 \n";
  cout << "\t\t   [2]  Tea                    - Price=250 \n";
  cout << "\t\t   [3]  Icecream Shake         - Price=750 \n";
  cout << "\t\t   [4]  Hot Chocolate          - Price=300 \n";
  cout << "\t\t   [5]  Creamy Hot Chocolate   - Price=350 \n";    
  cout << "\t\t   [E]  Exit\n" ; 
  cout << " Enter your choice :";
  cin>>select;
  cout<< "You have selected : "<<select<<" ::  ";
     switch (toupper(select))
   {
    case '1':
	  {
	  	 cout<<"Fruit Chiller \n";
	     cout<<"Enter quantity : ";
	     cin>>Qty;
	     int Total = 500 * Qty ; 
	     return Total;
		
 
      }
   break;
      
	case '2':
	  {
	  		cout<<"Tea \n";
		    cout << "Enter quantity : ";
		    cin >> Qty;
		    int Total = 250 * Qty;
		    return Total;
	

	 }
   break;
	  
	case '3':
	  {
	  		  cout<<"Icecream Shake \n";
			  cout << "Enter quantity : ";
			  cin >> Qty;
			  int Total = 750 * Qty ;
			  return Total;
			
	  }
	  
   break;

	case '4':
	  {
	  		  cout<<"Hot Chocolate \n";
			  cout << "Enter quantity : ";
			  cin >> Qty;
			  int Total = 300 * Qty ;
			  return Total;
			
	  }
	  
   break;

	case '5':
	  {
	  		  cout<<"Creamy Hot Chocolate \n";
			  cout << "Enter quantity : ";
			  cin >> Qty;
	          int Total = 350 * Qty ;
			  return Total;
			
	  }
	  
   break;
    
    case 'E':
    	{
    		 exitProgram();
    	}
   	break;
   	default:
    		{
    		cout<< " You have selected wrong option. Please select from the list.n";
    		goto extras;
			}
    	
}
}

void Bill(int totalBill) {
    ofstream fout;
    fout.open("coffee_bill.txt", ios::app);  
    fout << "Your Total bill is: " << totalBill << endl;
    fout << "\t **************" << endl;
    fout <<endl;
    fout.close();
}

int main() {
    

    char i;
    int totalBill = 0, Total;

    cout<<"    \t \t    Aslam O Alikum       "<<endl;
    cout << "\t      Welcome to Coffee Shop.\n";
    cout << "\t +=================================+\n\n";

    top:
    cout << "Please, select the option you desire:\n\n";

    main:
    cout << endl;
    char choice;
    cout << "\t\t      [A] ESPRESSO\n";
    cout << "\t\t      [B] CHILLER\n";
    cout << "\t\t      [C] EXTRAS\n";
    cout << "\t\t      [E] Exit\n\n";
    cout << "Enter your choice here : ";
    cin >> choice;
    cout << "You have chosen " << choice << " ::";

    switch (toupper(choice)) {
        case 'A':
            Total = espresso();
            totalBill = totalBill + Total;
            break;

        case 'B':
            Total = chiller();
            totalBill = totalBill + Total;
            break;

        case 'C':
            Total = extras();
            totalBill = totalBill + Total;
            break;

        case 'E':
            exitProgram();
            break;

        default:
            cout << "Oops! You have entered the wrong choice. Please try again.\n";
            goto main;
    }

    again:
    cout << "Do you want to purchase anything else? For 'YES' press 'Y' and for 'NO' press 'N' : ";
    cin >> i;
    cout << endl;

    switch (toupper(i)) {
        case 'Y':
            goto top;

        case 'N':
        	login();
            cout << "  Your Total bill is :: " << totalBill << endl;
            cout << "\t **************" << endl;
            cout << "Thanks for choosing our coffee shop\n";
            cout << "Good Bye :)" << endl;

            Bill(totalBill);

            break;

        default:
            cout << "You have entered a wrong option. Please choose the related option.\n" << endl;
            goto again;
    }

    return 0;
}
