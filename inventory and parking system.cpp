//inventory and car parking management system
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void car_parking();
void shopping_bill();

int main()
{
	system("color B0");
	int a;
	
	for(int i=1;i<3;i++)
	{
		cout<<"Press 1 for parking"<<endl;
	cout<<"press 2 for entering the shop"<<endl;
	cin>>a;
		switch(a)
		{
		case 1:
			 car_parking();
			 break;	
		case 2:
		shopping_bill()
			 ;break;
			 default:
			 	cout<<"Invalid input";
		}
	}
	return 0;
}
void car_parking()
{
			string name,vehicleName,vehicleNo;
    system("color B0");
    
    cout<<"...PLEASE ENTER THE INFORMATION GIVEN BELOW..."<<endl<<endl;

   	cout<<"Enter your name: use (\"_\")for space : ";
	cin>>name;

	cout<<"Enter your vehicle name use (\"_\")for space  : ";
	cin>>vehicleName;

	cout<<"Enter your vehicleNo : ";
	cin>>vehicleNo;

	system("cls");
char vehicle;

	cout<<".....WELCOME TO OUR PARKING SYSTEM..... "<<endl;
	cout<<endl;
	cout<<"Press R for parking Rickshaw"<<endl;
	cout<<"Press C for parking Car"<<endl;
	cout<<"Press B for parking Bike"<<endl;
	cout<<endl;
	cout<<"...press any key from above keys for vehicle parking..."<<endl;
	cout<<endl;
    cin>>vehicle;
	 if(toupper(vehicle)=='R')
	{
		cout<<"Thank you for parking your rikshaw"<<endl;
		cout<<"your parking charges are: "<<50<<endl;
         cout<<endl;
	}


	else if(toupper(vehicle)=='C')
	{
        cout<<"Thank you for parking your Car"<<endl;
		cout<<"your parking charges are: "<<100<<endl;
        cout<<endl;
	}
	

	else if(toupper(vehicle)=='B')
	{
		cout<<"Thank you for parking your Bike"<<endl;
		cout<<"your parking charges are: "<<30<<endl;
		cout<<endl;
		}
		
		


	else
	{
       cout<<"No Parking For This Vehicle!"<<endl;
       cout<<endl;
   }


}
void shopping_bill(){
		string name;
		char vaccinated;
    
    
    cout<<"...PLEASE ENTER THE INFORMATION GIVEN BELOW..."<<endl<<endl;
   	cout<<"Enter your name use (\"_\")for space : ";
	cin>>name;
    system("cls");
    cout<<"....FOR ENTERING IN THE SHOP INFORMATION GIVEN BELOW IS MENDATORY!...."<<endl<<endl;
	cout<<"Are you vaccinated (Y=Yes or N= No) ? ";
	cin>>vaccinated;

	if(toupper(vaccinated )=='Y')
	{   cout<<endl;
		cout<<"You can enter in the shop.";

       cout<<endl<<endl;

	char ch;
    int kurti,two_piece,three_piece,trouser,shawl,staller,actual_bill,total_bill;

    cout<<endl;
    cout<<".....WELCOME TO OUR SHOP..... "<<endl;
    cout<<endl;
    cout<<"Enter your customer type (Registered=R or Normal=N) : ";
    cin>>ch;
    cout<<endl;
    cout<<"Enter number of kurtis you have purchased :";
    cin>>kurti;
    cout<<"Enter number of two piece you have purchased :";
    cin>>two_piece;
    cout<<"Enter number of three piece you have purchased :";
    cin>>three_piece;
    cout<<"Enter number of trouser you have purchased :";
    cin>>trouser;
    cout<<"Enter number of shawl you have purchased :";
    cin>>shawl;
    cout<<"Enter number of staller you have purchased :";
    cin>>staller;
    system("cls");

   if(toupper(ch)=='R')
    {   cout<<"SALE RECEIPT"<<endl;
        cout<<"customer type = registered"<<endl;
        actual_bill=(1000*kurti)+(2000*two_piece)+(3000*three_piece)+(500*trouser)+(1800*shawl)+(350*staller);
        total_bill=actual_bill-((20*1000*kurti/100)+(30*2000*two_piece/100)+(50*3000*three_piece/100)
                                +(10*500*trouser/100)+(15*1800*shawl/100)+(10*350*staller/100));
        cout<<"Your actual bill is = "<<actual_bill<<endl;
        cout<<"Your total bill after discount is = "<<total_bill<<endl;
    }

    else if(toupper(ch)=='N')
       { cout<<"SALE RECEIPT"<<endl;
        cout<<"customer type = Normal"<<endl;
         actual_bill=(1000*kurti)+(2000*two_piece)+(3000*three_piece)+(500*trouser)+(1800*shawl)+(350*staller);
        total_bill=actual_bill-((5*1000*kurti/100)+(5*2000*two_piece/100)+(5*3000*three_piece/100)
                                +(5*500*trouser/100)+(5*1800*shawl/100)+(5*350*staller/100));
        cout<<"Your actual bill is = "<<actual_bill<<endl;
        cout<<"Your total bill after discount is = "<<total_bill<<endl;
       }




	}
	else
	{
		cout<<"Sorry! you cannot enter in the shop.";

	}
	cout<<endl<<endl;
}



