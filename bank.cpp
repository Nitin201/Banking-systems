#include<iostream>
using namespace std;
class bank
{
     private:
             long int ac_no;
             double balance;
             char name[100];
     public:
             void open();
             void deposite(long int);
             void withdraw(long int);
             void search(long int);
             void display();
};
void bank::open()
{
         cout<<"ENTER YOUR NAME : ";
         cin>>name;
         cout<<"ENTER YOUR ACCOUNT NUMBER : ";
         cin>>ac_no;
         cout<<"ENTER THE AMOUNT OF MONEY : ";
         cin>>balance;
}
void bank::deposite(long int j)
{
       long int dep;
       if(ac_no==j)
       {
         cout<<"ENTER THE AMOUNT to be deposited : ";
         cin>>dep;
         balance=balance+dep;
         cout<<"Amount Deposited correctly !!! "<<endl;
         cout<<"Credited amount is: "<<dep<<endl;
         cout<<"Total Balance is: "<<balance<<endl;
       }
}
void bank::withdraw(long int k)
{
      long int with,p;
      if(ac_no==k)
      {
         cout<<"YOUR CURRENT ACCOUNT BALANCE IS  "<<balance<<endl;
         cout<<"THE AMOUNT OF MONEY YOU WANT TO WITHDRAW IS : ";
         cin>>with;
         p=balance-with;
         if(p<0)
         {
            cout<<"SORRY !!! THERE IS NOT ENOUGH MONEY IN YOUR ACCOUNT"<<endl;
         }
         else if(p>=0)
         {
            cout<<"MONEY WITHDRAWAL HAS DONE CORRECTLY"<<endl;
            balance=p;
         }
         cout<<"Debited amount is:"<<with<<endl;
         cout<<"Balance amount is:"<<balance<<endl;
      }
}
void bank::display()
{
    cout<<"NAME : "<<name<<endl;
    cout<<"ACCOUNT NO : "<<ac_no<<endl;
    cout<<"BALANCE AMOUNT : "<<balance<<endl;
}
void bank::search(long int m)
{
    if(ac_no==m)
    {
        cout<<"*******Account Holder's INFORMATION*******"<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"ACCOUNT NO : "<<ac_no<<endl;
        cout<<"BALANCE AMOUNT : "<<balance<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
     }
     else
     {
         cout<<" SORRY !! Not found your account.Please Check your account number "<<endl;
     }
}
int main()
{
         long int i,j,k,m,y=0;
         bank b[20];
         int ch;
         do
         {
             cout<<"PRESS 1 TO OPEN ACCOUNT "<<endl;
             cout<<"PRESS 2 TO DEPOSITE AMOUNT "<<endl;
             cout<<"PRESS 3 TO WITHDRAW MONEY "<<endl;
             cout<<"PRESS 4 TO DISPLAY "<<endl;
             cout<<"PRESS 5 TO SEARCH "<<endl;
             cout<<"PRESS 6 TO EXIT "<<endl;
             cout<<"PLEASE ENTER YOU CHOICE ...";
             cin>>ch;
             switch(ch)
             {
               case 1:
                      cout<<"HOW MANY ACCOUNT YOU WANT TO OPEN? "<<endl;
                      cin>>y;
                      for(i=0;i<y;i++)
                      {
                         b[i].open();
                      }
                      break;
               case 2:
                     cout<<"ENTER YOUR ACCOUNT NO : "; 
                     cin>>j;
                     for(i=0;i<y;i++)
                     {
                         b[i].deposite(j);
                     }
                     break;
               case 3:
                     cout<<"ENTER YOUR ACCOUNT NO : ";         
                     cin>>k;
                     for(i=0;i<y;i++)
                     {
                        b[i].withdraw(k);
                     }
                     break;
               case 4:
                     for(i=0;i<y;i++)
                     {                                             
                         b[i].display();
                     }
                     break;
               case 5:
                     cout<<"ENTER YOUR ACCOUNT NO : ";              
                     cin>>m;
                     for(i=0;i<y;i++)
                     {
                        b[i].search(m);
                     }
                     break;
              case 6:  exit(0);
                     break;
              default:cout<<"YOU HAVE PRESSED THE WRONG KEY. PLEASE TRY AGAIN"<<endl;
                break;
             }
          } while(ch!=7);
}