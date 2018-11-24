#include <iostream>
#include<fstream>>
#include<cstring>

using namespace std;




   void Login()

        {
        int modify;
        ifstream readFile("validation.txt");
        string usernamelogin,passwordlogin,checkpassword,checkusername;

        cout<<"ENTER YOUR USERNAME \n ENTER YOUR PASSWORD /n:";
        cin>>usernamelogin>>passwordlogin;

        while( readFile>>checkusername>>checkpassword)
            {
                if (checkusername==usernamelogin && checkpassword==passwordlogin)
                cout<<"access granted\n";
            }
        cout<<"1.ADD FLIGHT /n 2.DELETE FLIGHT";
        cin>>modify;

        switch (modify)
        {
            case 1: addflight();
                    break;
            case 2: deleteflight()
                    break;

        }


}


   void addflight()
   {
            ofstream inputdata(" suds file");
            string FlightID,time,source,destination,seats;

            if (inputdata.is_open())
            {
                cout<<"ENTER THE FLIGHT DETALILS /N FLIGHT ID  |  SOURCE |  DESTINATION  |  SEATS";
                cin>>FlightID>>time>>source>>destination>>seats;
                inputdata<<FlightID<< " "<<time<<" "<<source<<""<<destination<<" "<<seats<<endl;
            }
   }

   void deleteflight()
   {
           // COMMON TANISHA YOU CAN DO IT
   }


    void NewUser()

    {

        string username;
        string password;
        ofstream  writeFile("validation.txt");

        if(writeFile.is_open())
        {
            cout<<"ENTER YOUR USER NAME \n ENTER YOUR PASSWORD:";
            cin>>username>>password;
            writeFile<<username<< " "<<password;


        }

    }


    void modify()
    {

    }



    void  ADMIN()
    {
        int adminchoice;
        cout<<"Enter your choice \n";
        cout<<"1 LOGIN \n 2: CREATE NEW USER";

        cin>>adminchoice;
        switch(adminchoice)
            {
               case 1: Login();
                       break;

               case 2: NewUser() ;
                       break;

            }

    }

  int passenger()
  {
      return 0;
  }

  int main()

  {
      int passengeroradmin;
      cout << "ENTER YOUR CHOICE \n";
      cout<<" 1: ADMIN \n 2: PASSENGER";
      cin>>passengeroradmin;



          switch (passengeroradmin)
          {

              case 1 : ADMIN();
                       break;
              case 2:  passenger();
                       break;

          }
      return 0;
  }

