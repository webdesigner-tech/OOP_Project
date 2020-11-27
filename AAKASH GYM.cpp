#include <bits/stdc++.h>
using namespace std;
class customer
    {public:
                int fees,age,x;
                string usernameinfile, name,username ,add,pn,issue;
                char c;

                int check(string );

               void cstmr()
               {strt:
                   system("CLS");
                   cout<<"                                         ------- WELCOME TO AAKASH GYM -------\n";
                   cout<<"ENTER YOUR USER NAME :- ";
                   cin.ignore();
                   getline(cin,username);
                   int q=check(username);
                   if(q!=0)
                   {
                       cout<<"USERNAME ALREADY EXISTS\n";
                       cout<<"ENTER ANOTHER USERNAME\n";
                       system("pause");
                       goto strt;
                   }
                   else{
				   cout<<"ENTER YOUR NAME :- ";
				   cin.ignore();
				   getline(cin,name);
                   cout<<"ENTER YOUR AGE:- ";
                   cin>>age;
                   cout<<"ENTER YOUR ADDRESS:- ";
                    cin.ignore();
                   getline(cin,add);
                   cout<<"ENTER YOUR PHONE NUMBER:- ";
                   cin.ignore();
                   getline(cin,pn);
                   cout<<"1. PROCEED WITH GIVEN INFO\n";
                   cout<<"2. EDIT DETAILS\n";
                   cout<<"ENTER YOUR CHOICE:- ";
                   cin>>x;
                   if(x==1)
                    return;
                   else goto strt;}
               }


    };
    int customer:: check(string usnm)
    {
                    ifstream f;
                    f.open("customer.txt");
                    customer C;
                    f.read((char*)&C,sizeof(C));
                    while(!f.eof())
                    {

                        if(C.username==usnm)
                            {return 1;}
                            f.read((char*)&C,sizeof(C));
                    }


                       return 0;

                }
       class supplement:public customer
       { public:char d;
       int n,price,amnt,scost;

           void SUPPLE()
           {
               system("CLS");
            cout<<"ENTER YOUR REGISTERED USERNAME:- ";
            cin.ignore();
            getline(cin,username);
            cout<<"DO YOU WANT TO BUY SUPPLEMENTS FROM US(5% DISCOUNT ON EVERY SUPPLEMENT)..(Y/N):-";
            cin>>d;
            if(d=='y'||d=='Y')
            {strtt:system("CLS");
                cout<<"SUPPLEMENT TYPE:-\n";
                cout<<"1.RW PROTEIN(STRAWBERRY)\n";
                cout<<"2.RW WEIGHT GAINER(STRAWBERRY)\n";
                cout<<"3.KERATINE (ORANGE)\n";
		        cout<<"4.MULTIVITAMINS(becadexamin)\n";
		        cout<<"5.BCAA(MANGO)\n";
		        cout<<"6.OMEGA-3\n";
                cout<<"CHOOSE YOUR TYPE OF SUPPLEMENT :-";
                cin>>n;
                switch(n)
               {
                case 1: {cout<<"AMOUNT OF SUPPLEMENT NEEDED(IN KGS):-";
                         cin>>amnt;
                         scost=2000*amnt - (2000*amnt)/20;
                         cout<<"TOTAL PRICE = "<<scost;
                         cout<<"\nSUCCESSFUL PURCHASE";
                         getchar();
                         getchar();
                         break;
                         }
                case 2: {cout<<"AMOUNT OF SUPPLEMENT NEEDED(IN KGS):-";

                         cin>>amnt;
                         scost=2500*amnt - (2500*amnt)/20;
                         cout<<"TOTAL PRICE = "<<scost;
                         cout<<"\nSUCCESSFUL PURCHASE";
                         getchar();
                         getchar();
                         break;
                         }
                case 3: {cout<<"AMOUNT OF SUPPLEMENT NEEDED(IN KGS):-";
                         cin>>amnt;
                         scost=2300*amnt - (2300*amnt)/20;
                         cout<<"TOTAL PRICE = "<<scost;
                         cout<<"\nSUCCESSFUL PURCHASE";
                         getchar();
                         getchar();
                         break;
                         }
                case 4: {cout<<"AMOUNT OF SUPPLEMENT NEEDED(IN KGS):-";
                         cin>>amnt;
                         scost=3000*amnt - (3000*amnt)/20;
                         cout<<"TOTAL PRICE = "<<scost;
                         cout<<"\nSUCCESSFUL PURCHASE";
                         getchar();
                         getchar();
                         break;
                         }
                case 5:{cout<<"AMOUNT OF SUPPLEMENT NEEDED(IN KGS):-";
                         cin>>amnt;
                         scost=2000*amnt - (2000*amnt)/20;
                         cout<<"TOTAL PRICE = "<<scost;
                         cout<<"\nSUCCESSFUL PURCHASE";
                         getchar();
                         getchar();
                         break;
                         }
				case 6:{cout<<"AMOUNT OF SUPPLEMENT NEEDED(IN KGS):-";
                         cin>>amnt;
                         scost=2300*amnt - (2300*amnt)/20;
                         cout<<"TOTAL PRICE = "<<scost;
                         cout<<"\nSUCCESSFUL PURCHASE";
                         getchar();
                         getchar();
                         break;
                         }


	         		 default: goto strtt;}
            }

           }
       }su;

       class schemes:public customer
       {int c1;
       char c;
       public:
        void COS(){
        cstmr();star:
            system("CLS");
        cout<<"                                            CHOOSE YOUR PACKAGE\n";
        cout<<"1. MONTHLY -> FEES = Rs1500/- PER MONTH\n";
        cout<<"2. QUATERLY -> FEES = Rs1350/- PER MONTH\n";
        cout<<"3. HALF YEARLY -> FEES = Rs1250/- PER MONTH\n";
        cout<<"4. YEARLY -> FEES = Rs1100/- PER MONTH\n";
        cout<<"ENTER YOUR CHOICE OF SCHEME:- ";
        cin>>c1;
        switch(c1)
        {
            case 1: {fees=1500;break;}
            case 2: {fees=1350;break;}
            case 3: {fees=1250;break;}
            case 4: {fees=1100;break;}
            default: {cout<<"WRONG INPUT\nPLEASE TRY AGAIN";goto star;break;}
        }
        cout<<"DO YOU WANT TO TRAIN WITH OUR TRAINER? (TRAINER FEES = Rs2000/- PER MONTH) (Y/N):- ";
        cin>>c;
        if(c=='y'||c=='Y')
            {fees=fees+2000;}
        cout<<"\n";
        cout<<"ADD ON PACKAGE\n";
        cout<<"STEAM BATH\n";
        cout<<"1. MONTHLY -> Rs500/- PER BATH(X2 IN ONE MONTH) \n";
        cout<<"2. QUATERLY -> Rs250/- PER BATH(X2 PER MONTH)\n";
        cout<<"3. HALF YEARLY -> Rs250/- PER BATH(X2 PER MONTH + 3 FREE BATHS IN 6 MONTHS)\n";
        cout<<"4. YEARLY -> Rs250/- PER BATH(X2 PER MONTH + 8 FREE BATHS IN 12 MONTHS)\n";
        cout<<"DO YOU WANT STEAM BATH WITH YOUR CURRENT PACKAGE (Y/N):- ";
        cin>>c;
        if(c=='y'||c=='Y')
        {switch(c1)
        {
            case 1: fees=fees+1000;break;
            case 2: fees=fees+500;break;
            case 3: fees=fees+500;break;
            case 4: fees=fees+500;break;
        }
        cout<<"THANK YOU FOR JOINING WITH US :)\n";
        cout<<"FEES PER MONTH = Rs"<<fees<<"/-"<<endl;
        getchar();getchar();system("CLS");

        }
        else
        {
            cout<<"THANK YOU FOR JOINING WITH US :)\n";
             cout<<"FEES PER MONTH = Rs"<<fees<<"/-"<<endl;
             getchar();getchar();
             system("CLS");
        }
        return;
        }
        void CS()
        {
            system("CLS");
            int q=1;
        while(q==1)
           {
            cout<<"ENTER YOUR REGISTERED USERNAME:- ";
            cin.ignore();
            getline(cin,username);
            q=check(username);
            if(q==1)
                {cout<<"INVALID USERNAME: ";
            system("pause");}}
            cout<<"DO YOU WANT TO CHANGE YOUR SCHEME? (Y/N):- ";
            cin>>c;
            if(c=='y'||c=='Y')
            {

                cout<<"YOUR PREVIOUS SCHEME AND DATA HAS BEEN DELETED\n";
                 getchar();
                cout<<"TO ENTER YOUR NEW DATA PRESS ENTER";
                getchar();
                COS();
            }
        }
       }sc;
       class complaint:public customer
       {
       public:
       	string ans={"NOT SOLVED"};
        void REPORT()
        {system("CLS");
        int q=0;
        while(q==0)
           {
            cout<<"ENTER YOUR REGISTERED USERNAME:- ";
            cin.ignore();
            getline(cin,username);
            q=check(username);
            if(q==0)
                {cout<<"INVALID USERNAME: ";
            system("pause");}
            else break;}
            cout<<"ENTER YOUR ISSUE:- ";
            cin.ignore();
            getline(cin,issue);
            cout<<"THANK YOU FOR YOUR RESPONSE...WE WILL LOOK AFTER YOUR ISSUE AS SOON AS POSSIBLE";
            getchar();
        }
        void CCHECK()
        {
            system("CLS");
            int q=1;
        while(q==1)
           {
            cout<<"ENTER YOUR REGISTERED USERNAME:- ";
            cin.ignore();
            getline(cin,username);
            q=check(username);
            if(q==1)
                {cout<<"INVALID USERNAME: ";
            system("pause");}}
            cout<<"YOUR ISSUE:- ";
            cout<<issue<<endl<<endl;
            cout<<ans;
            getchar();
        }

       }c;
       class manager:public complaint
       {int cno;
       char y;

           public:
            void RESOLVE()
            {system("CLS");
                cout<<"LIST OF COMPLAINTS:-\n";

                    ifstream f;
                    f.open("customer.txt");
                    customer C;
                    f.read((char*)&C,sizeof(C));
                while(!f.eof())
                {cout<<"COMPLAINT BY : "<<C.username<<".:- "<<C.issue<<endl;
                cout<<"COMPLAINT SOLVED (Y/N):- ";
                cin>>y;
                if(y=='y'||y=='Y')
                   ans="SOLVED";
                   system("CLS");}
                   return;
            }
       }m;
       class money:public schemes,public supplement
       {
           public:
          void MONEY()
          {
              int csc=0,fss=0;
              ifstream f;
                    f.open("customer.txt");
                    customer C;
                    f.read((char*)&C,sizeof(C));
                    while(!f.eof())
                    {

                        fss+=C.fees;
                        csc++;
                            f.read((char*)&C,sizeof(C));
                    }system("cls");
              cout<<"TOTAL NO. OF CUSTOMERS IN GYM:- "<<csc<<endl;
              cout<<"AGGREGATE FEES PER MONTH OF ALL CUSTOMERS:- "<<fss<<endl;
              system("pause");
              cout<<"DO YOU WANT TO ORDER SUPPLEMENT?(Y/N):-";
              char ch;
              cin>>ch;
              if(ch=='y'||ch=='Y')
              {
                  cout<<"1.RW PROTEIN(STRAWBERRY)\n";
                cout<<"2.RW WEIGHT GAINER(STRAWBERRY)\n";
                cout<<"3.KERATINE (ORANGE)\n";
		        cout<<"4.MULTIVITAMINS(becadexamin)\n";
		        cout<<"5.BCAA(MANGO)\n";
		        cout<<"6.OMEGA-3\n";
                  cout<<"CHOOSE SUPPLEMENT TYPE:-";
                  switch(n)
                  {
                  case 1: scost=scost-500;break;
                  case 2: scost=scost-500;break;
                  case 3: scost=scost-500;break;
                  case 4: scost=scost-500;break;
                  case 5: scost=scost-500;break;
                  case 6: scost=scost-500;break;
                  default:break;

                  }}
                  int scost=0;
                  cout<<"MONTHLY ELECTRICITY BILL:- Rs 3000/-"<<endl;
                  cout<<"TOTAL PROFIT OF THIS MONTH IS:- Rs "<<fss-3000-scost<<endl;
                  system("pause");

              return ;

          }
       }m1;

int main()
{int c1,c2,c3;
char s1[100];
char s;

start:
    cout<<"                                       __________________________________________                                " << endl;
    cout<<"                                      |                              ___         |                                "<< endl;
    cout<<"                                      |    /\\     /\\   |  /    /\\   /     |   |  |                                "<< endl;
    cout<<"                                      |   /--\\   /--\\  |<     /--\\  \\---\\ |---|  |                                "<< endl;
    cout<<"                                      |  /    \\ /    \\ |  \\  /    \\  ___/ |   |  |                                "<< endl;
    cout<<"                                      |            ____                          |                                "<< endl;
    cout<<"                                      |           /  _    \\   /  |\\  /|          |                                "<< endl;
    cout<<"                                      |           | |  \\   \\ /   | \\/ |          |                                "<< endl;
    cout<<"                                      |           \\____/    /    |    |          |                                "<< endl;
    cout<<"                                      |__________________________________________|                                "<< endl;
    cout<<"                                                     SKY IS THE LIMIT"<<endl;

    cout<<endl<<endl<<endl;
    cout<<"                                                     1. CUSTOMER\n";
    cout<<"                                                     2. MANAGER\n";
    cout<<"                                                     3. EXIT\n";
    cout<<"                                             ENTER THE CATEGORY YOU ARE IN:- ";
    cin>>c1;
    if(c1==1)
    {
        system("CLS");
        start1:
    cout<<"                                       __________________________________________                                " << endl;
    cout<<"                                      |                              ___         |                                "<< endl;
    cout<<"                                      |    /\\     /\\   |  /    /\\   /     |   |  |                                "<< endl;
    cout<<"                                      |   /--\\   /--\\  |<     /--\\  \\---\\ |---|  |                                "<< endl;
    cout<<"                                      |  /    \\ /    \\ |  \\  /    \\  ___/ |   |  |                                "<< endl;
    cout<<"                                      |            ____                          |                                "<< endl;
    cout<<"                                      |           /  _    \\   /  |\\  /|          |                                "<< endl;
    cout<<"                                      |           | |  \\   \\ /   | \\/ |          |                                "<< endl;
    cout<<"                                      |           \\____/    /    |    |          |                                "<< endl;
    cout<<"                                      |__________________________________________|                                "<< endl;
    cout<<"                                                     SKY IS THE LIMIT"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"                                             1. CHOICES OF SCHEMES\n";
    cout<<"                                             2. REPORT A COMPLAINT\n";
    cout<<"                                             3. COMPLAINT SOLVED/NOT SOLVED\n";
    cout<<"                                             4. CHANGE SCHEME\n";
    cout<<"                                             5. BUY SUPPLEMENT\n";
    cout<<"                                             6. GO BACK\n";
    cout<<"                                             ENTER YOUR CHOICE:- ";
    cin>>c2;
    switch(c2)
    {
        case 1:{
		ofstream f;
		f.open("customer.txt",ios::out|ios::app);
        sc.COS();
        f.write((char*)&sc,sizeof(sc));
        f.close();
	     goto start;break;}
        case 2:{c.REPORT();break;}
        case 3:{c.CCHECK();break;}
        case 4:{sc.CS();break;}
        case 5:{su.SUPPLE();break;}
        case 6:{system("CLS");goto start;break;}
        default: {system("CLS");cout<<"wrong input\n";goto start1;break;}
    }
    system("CLS");
    goto start;
    }
    if(c1==2)
    {start3:
        cout<<"ENTER THE PASSWORD:- ";
        cin>>s1;
        if(strcmp(s1,"aakash")==0)
        { system("CLS");

            start2:
    cout<<"                                       __________________________________________                                " << endl;
    cout<<"                                      |                              ___         |                                "<< endl;
    cout<<"                                      |    /\\     /\\   |  /    /\\   /     |   |  |                                "<< endl;
    cout<<"                                      |   /--\\   /--\\  |<     /--\\  \\---\\ |---|  |                                "<< endl;
    cout<<"                                      |  /    \\ /    \\ |  \\  /    \\  ___/ |   |  |                                "<< endl;
    cout<<"                                      |            ____                          |                                "<< endl;
    cout<<"                                      |           /  _    \\   /  |\\  /|          |                                "<< endl;
    cout<<"                                      |           | |  \\   \\ /   | \\/ |          |                                "<< endl;
    cout<<"                                      |           \\____/    /    |    |          |                                "<< endl;
    cout<<"                                      |__________________________________________|                                "<< endl;
    cout<<"                                                     SKY IS THE LIMIT"<<endl;
    cout<<endl<<endl<<endl;
            cout<<"                                         1. CHECKING/RESOLVING ISSUES\n";
            cout<<"                                         2. MONEY MANAGEMENT\n";
            cout<<"                                         3. GO BACK\n";
            cout<<"                                         ENTER YOUR CHOICE:- ";
            cin>>c3;
            switch (c3)
            {case 1:{ m.RESOLVE();break;}
            case 2: {m1.MONEY(); goto start;break;}
            case 3: {system("CLS");goto start;break;}
            default: {system("CLS");cout<<"wrong input\n";goto start2;break;}}
        }

        else
         {

            cout<<"PASSWORD DID NOT MATCH\n";
            cout<<"DO YOU WANT TO TRY AGAIN(Y/N):-";
            cin>>s;
            if(s=='Y'||s=='y')
                goto start3;
            else
            {

             system("CLS");goto start;}}
             system("CLS");
goto start;
    }
if(c1==3)
    exit(0);
else if(c1!=1&&c1!=2&&c1!=3)
{cout<<"wrong input\n";
system("CLS");goto start;}
    return 0;}



