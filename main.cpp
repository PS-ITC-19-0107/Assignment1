#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main()
{

    string item,item1,item2,phone,table,printer,name,answer;
    int x,y,z,vat=0.12;
    //Prompt on the choice of words//
    cout<<"                   NB:Be sensitive in filling, make sure right choice of words are used.    "<<endl;
    cout<<"                                                                                           "<<endl;
    cout<<"Please enter your name: ";
    cin>>name;
    cout<<"Please enter your ID: ";
    cin>>x;
    cout<<name<<", ID:"<<x<<" welcome,these are what we have in stock: " <<endl;
    cout<<"1.Printer _______$400"<<endl;
    cout<<"2.Table   _______$20"<<endl;
    cout<<"3.Phone   _______$300"<<endl;
    cout<<name<<", ID:"<<x<<", what do you want from the above? "<<endl;
    cin>>item1;
    cout <<"How many will you want to buy?"<<endl;
    cin>>y;

   if(item1 =="printer"){
    cout <<"The price of "<<y<<" Printer(s) is $"<<(400*0.12)*y+400<< " at 12% vat"<<endl;}

 if(item1 =="table"){
    cout<<"The price of "<<y<<" Table(s) is $"<<(20*0.12)*y+20<<" at 12% vat"<<endl;
}
if (item1 =="phone"){
    cout <<"The price of "<<y<<" Phone(s) is $"<<(300*0.12)*y+300<<" at 12% vat"<<endl;
}
//second input if for a second purchase in addition//

cout<<name<< " ID: "<<x<<" will you want to buy anything more? "<<endl;
if(answer!="Yes"||"No"){
        cout<<"Please enter Yes or No"<<endl;}
        cin>>answer;

        if (answer=="yes"){
cout<<"Enter your second item:"<<endl;
    cin>>item2;
    cout<<name<<", how many will you want to buy? "<<endl;}
    cin>>z;
    if (item2 =="printer"){
    cout<<"The price of "<<z<<" Printer(s) is $"<<(400*0.12)*z+400<<" at 12% vat"<<endl;
}
else if(item2 =="table"){
    cout<<"The price of "<<z<<" Table(s) is $ "<<(20*0.12)*z+20<<" at 12% vat"<<endl;
}

if (item2 =="phone"){
    cout<<"The price of "<<z<<" Phone(s) is $ "<<(300*0.12)*z+300<<" at 12% vat"<<endl;
}

//comparing input //



     if(item1=="printer" && item2=="table"){
       cout<<name<<", ID:"<<x<<", You have purchased "<<y<<" "<<item1<<"(s)"<<" and "<<z<<" "<<item2<<"(s)" <<endl;
       cout<<name<<" Your  total cost is  $"<<(400*0.12+400)*y+(20*0.12+20)*z<<endl;}

     if(item1=="printer" && item2=="phone"){
                   cout<<name<<", ID:"<<x<<", You have purchased "<<y<<" "<<item1<<"(s)"<<" and "<<z<<" "<<item2<<"(s)" <<endl;
                   cout<<name<< " Your  total cost is $"<<(400*0.12+400)*y+(300*0.12+300)*z<<endl;}

     if(item1=="table" && item2=="printer"){
                   cout<<name<<", ID:"<<x<<", You have purchased "<<y<<" "<<item1<<"(s)"<<" and "<<z<<" "<<item2<<"(s)"<<endl;
                   cout<<name<<" Your  total cost is  $"<<(20*0.12+20)*y+(400*0.12+400)*z<<endl;}

     if(item1=="table" && item2=="phone"){
                    cout<<name<<", ID:"<<x<<", You have purchased "<<y<<" "<<item1<<"(s)"<<" and "<<z<<" "<<item2<<"(s)"<<endl;
                    cout<<name<<" Your  total cost is $"<<(20*0.12+20)*y+(300*0.12+300)*z<<endl;}

     if(item1=="phone" && item2=="table"){
                    cout<<name<<", ID:"<<x<<", You have purchased "<<y<<" "<<item1<<"(s)"<<" and "<<z<<" "<<item2<<"(s)"<<endl;
                    cout<<name<< " Your  total cost is  $"<<(300*0.12+300)*y+(20*0.12+20)*z<<endl;}

     if(item1=="phone"&&item2=="printer"){
                    cout<<name<<", ID: "<<x<<", your purchase was on "<<y<<" "<<item1<<" and "<<z<<" "<<item2<<endl;
                    cout<<"Your  total cost is $"<<(300*0.12+300)*y+(400*0.12+400)*z<<endl;}

     if(answer=="no")
    {while(item1=="printer"){ cout<<"Your  first total cost is $"<<(400*0.12)*y+400<<". Your purchase was on printer(s)"<<endl;
    break;}}

    {while(item1=="table"){cout<<"Your total cost is $"<<(20*0.12)*y+20<<". Your purchase was on  table(s)"<<endl;
    break;}}

    {while(item1=="phone"){cout<<"Your total cost is $"<<(300*0.12)*y+300<<". Your purchase was on phone(s)"<<endl;
    break;}}
    {cout<<name<<", "<<"Thank you for transacting with us."<<endl;}



    return 0;
}
