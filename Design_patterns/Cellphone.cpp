class Cellphone
{
  public:
    void MMS()
    {
      cout<<"1.MMS"<<endl;
    }
    void SMS()
    {
      cout<<"2.SMS"<<endl;
    }
    void Phone_dial()
    {
      cout<<"3.Phone dial"<<endl;
    }
    
    void memory_card()
    {
      cout<<"5.memory card"<<endl;
    }
};
class Android:public Cellphone
{ 
  public:
  void dual_sim()
    {
      cout<<"4.Double sim"<<endl;
    }
};

class Samsung:public Cellphone
{
  public:
  void dual_sim()
    {
      cout<<"4.Double sim"<<endl;
    }
};

int main(void)
{
  Android AP;
  Samsung SP;
     int x,y;
     cout<<"Plz enter the choice(Serial no) between this cell phones\n 1.Android\n 2.Samsung"<<endl;  
     cin>>x;
     if(x==1)
     {
      // Android_phone AP;
      cout<<"Android has a features of "<<endl;
       AP.MMS();
       AP.SMS();
       AP.Phone_dial();
       AP.dual_sim();
       AP.memory_card();
       cout<<"Plz enter the choice for the payment \n1.Paytm\n2.GPay\n3.Paypal\n4.Tez"<<endl;
       cin>>y;
       switch(y)
       {
         case 1 :cout<<"Transaction through Paytm"<<endl;
                 break;
         case 2 : cout<<"Transaction through GPay"<<endl;
                 break;
        case 3 : cout<<"Transaction through Paypal"<<endl;
                 break;
        case 4 : cout<<"Transaction through Tez"<<endl;
                 break;
       }
     }
     else
     {
      // Samsung_phone SP;
       cout<<"samsung has a features of"<<endl;
       SP.MMS();
       SP.SMS();
       SP.Phone_dial();
       SP.dual_sim();
       SP.memory_card();
       cout<<"Plz enter the choice for the payment \n1.Paytm\n2.GPay\n3.Paypal\n4.Tez"<<endl;
       cin>>y;
       switch(y)
       {
         case 1 :cout<<"Transaction through Paytm"<<endl;
                 break;
         case 2 : cout<<"Transaction through GPay"<<endl;
                 break;
        case 3 : cout<<"Transaction through Paypal"<<endl;
                 break;
        case 4 : cout<<"Transaction through Tez"<<endl;
                 break;
       }
     }
     };