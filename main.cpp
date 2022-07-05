#include <iostream>

using namespace std;

double mobileNum,Amount,newAmount=10000,passWord=1234,pass,currentNum,currentPass;


void depositMoney()
{
    cout<<" \nEnter your mobile number: ";
    cin>>currentNum;
    cout<<"\nEnter deposit amount: ";
    cin>>Amount;
    cout<<"\nEnter password: ";
    cin>>pass;
    if(pass==passWord){
        cout<<"\nOperation success"<<endl;
        newAmount=newAmount+Amount;
        cout<<"\nNew balance is: "<<newAmount<<endl;
    }
    else{
        cout<<"\nInvalid password"<<endl;
    }
}

void cashOut()
{
    cout<<" \nEnter agent mobile number: ";
    cin>>mobileNum;
    cout<<"\nEnter amount: ";
    cin>>Amount;
    if(Amount<= newAmount){
        cout<<"\nEnter password: ";
        cin>>pass;
        if(pass==passWord){
            cout<<"\nOperation success";
            newAmount=newAmount-Amount;
            cout<<"\nNew balance is: "<<newAmount<<endl;
        }
         else{
                cout<<"\nInvalid password"<<endl;
            }
    }
    else{
        cout<<"\nInsufficient balance"<<endl;
        }
    }

void sendMoney()
{
    cout<<" \nEnter mobile number: ";
    cin>>mobileNum;
    cout<<"\nEnter amount: ";
    cin>>Amount;
    if(Amount<=newAmount){
        cout<<"\nEnter password: ";
        cin>>pass;
        if(pass==passWord){
            cout<<"\nOperation success";
            newAmount=newAmount-Amount;
            cout<<"\nNew balance is: "<<newAmount<<endl;
        }
            else{
                cout<<"\nInvalid password"<<endl;
            }
    }
    else{
         cout<<"\nInsufficient balance"<<endl;
    }
}

void mobileRecharge()
{
     cout<<" \nEnter mobile number: ";
    cin>>mobileNum;
    cout<<"\nEnter amount: ";
    cin>>Amount;
    if(Amount<=newAmount){
        cout<<"\nEnter password: ";
        cin>>pass;
        if(pass==passWord){
            cout<<"\nOperation success";
            newAmount=newAmount-Amount;
            cout<<"\nNew balance is: "<<newAmount<<endl;
        }
            else{
                cout<<"\nInvalid password"<<endl;
            }
    }
    else{
         cout<<"\nInsufficient balance"<<endl;
    }
}

void changePass()
{
    cout<<"\nEnter current password: ";
    cin>>pass;
    if(pass==passWord){
        cout<<"\nEnter new password: ";
        cin>>passWord;
        cout<<"\nPassword successfully changed.."<<endl;

    }
    else{
        cout<<"\nInvalid pass..."<<endl;
    }
}

void showBalance(){
    cout<<"\nYour current balance is: "<<newAmount<<endl;
}



int main()
{
  cout<<"\nWelcome to Eaoumoon's bank..."<<endl;
  cout<<"\nEnter your mobile number: "<<endl;
  cin>>currentNum;
  cout<<"\nEnter your password"<<endl;
  cin>>currentPass;
  while(currentNum==9876 && currentPass==1234)
  {
    cout<<endl;
    cout<<"Enter 1 to deposit money: "<<endl;
    cout<<"Enter 2 to cash out: "<<endl;
    cout<<"Enter 3 to send money: "<<endl;
    cout<<"Enter 4 to mobile recharge: "<<endl;
    cout<<"Enter 5 to change password: "<<endl;
    cout<<"Enter 6 to show balance: "<<endl;
    cout<<"Enter 7 to exit "<<endl;
    cout<<endl;
    int value;
    cin>>value;


    switch(value)
      {
      case 1:
        depositMoney();
        break;
      case 2:
        cashOut();
        break;
      case 3:
        sendMoney();
        break;
      case 4:
        mobileRecharge();
        break;
      case 5:
        changePass();
        break;
      case 6:
        showBalance();
        break;
      case 7:
        exit(0);
        break;
      default:
        cout<<"\nInvalid number.."<<endl;
        break;
      }
   }
   cout<<"\nWrong number or password...";
    return 0;
}
