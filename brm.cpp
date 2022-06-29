#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

 struct Bikes {

    string mark [10] = {"Royal Enfield Meteor 350","Yezdi Roadster","Royal Enfield Classic 350 ","KTM Duke 200","Yamaha YZF R15 V4","Bajaj Pulsar NS200","TVS Apache RTR 160 4V","Honda SP 125"," TVS Raider 125"};

    string model [10]= {"2016MD","2018AS","2018DS","2017LA","2018OW","2005Ps","2008PW","2010QW","2016SA"};

    string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};

    string maxs_peed [10]={"120 Km/h ","140 Km/h","120 Km/h","142 Km/h","142 Km/h","136 Km/h","114 Km/h","100 Km/h","99 Km/h","87 Km/h"};

    int price [ 10 ] ={100,200,300,500,200,250,400,600,900} ;

    int date [10] = {2010,2012,2013,2017,2018,2005,2008,2010,2014};



   };

   struct Lessee {

   string Name [10];
   string Natio_ID [10] ;
   int payment_acc [ 10] ;
   };

   //Declaring struct
 Bikes Bike ;
 Lessee lessee ;

 //First output
   void Minu ()
 {


   int num=1;
 for(int i=0 ;i<9;++i)
 {
     cout<<"\t\t\t";
    cout<<"Enter " <<num<<"\t- To Select  "<<Bike.mark[i]<<endl;
    num++ ;
 }

 }

 //Second output
 void Details (int theChoice)
  {
       system("CLS");
       cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<Bike.mark[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<Bike.model[theChoice-1]<<endl;
     cout<<"\t\t\tColor : "<<Bike.color[theChoice-1]<<endl;
     cout<<"\t\t\tMaximum Speed : "<<Bike.maxs_peed[theChoice-1]<<endl;
     cout<<"\t\t\tPrice : "<<Bike.price[theChoice-1]<<"K"<<endl;


  }
   //check lessee credit

   void check (int j )
  {
      if(lessee.payment_acc[j]  >= Bike.price[j])
           cout<<"\n\n\n\t\t\tProcess has been done successfully!! " <<endl;
           else
              cout<<"\n\n\n\t\t\tNot Available " <<endl;

  }
 //User Inputcpo
  void user_input (int theChoice)
   {
       system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF Bike\n\n\n\n";
       cout<<"\t\t\tEnter Your Name : ";
       cin>>lessee.Name[j];
       cout<<"\t\t\tEnter Your National ID : ";
       cin>>lessee.Natio_ID[j] ;
       cout<<"\t\t\tPayment Amount: " ;
       cin>>lessee.payment_acc[j] ;


     check( j ) ;
   }


int main()
{
    int login();
    login();

         string decide ="yes" ;
     cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tSIMPLE Bike RENTAL SYSTEM \n";
     cout<<"\t\t\tWelcome to Our Company ,Choose from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     while(decide!="exit")
     {
        
     cout<<"\n\n\n\t\t\tYour Choice: ";
     int theChoice ;
     cin>>theChoice ;
     Details(theChoice);
     cout<<"\n\n\n\t\t\tAre You Sure, you want to rent this Bike? (yes /no /exit ) : ";
     cin>>decide ;
     if(decide=="yes") {
        user_input(theChoice);
        cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
        cin>>decide;
        if (decide=="no") break ;
system("CLS");
     }

   else {
      if(decide=="no")
      {
          system("CLS");
          continue ;
      }
     else if  (decide=="exit")
     {
        system("CLS");
         cout<<"\n\n\n\t\t\tBrought To You By code-projects.org";

         break ;
     }

   }
     }


    return 0;
}
//cpo
int login(){
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tSimple Bike Rental System Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "iitkgp123@"){
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      system("CLS");

   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
