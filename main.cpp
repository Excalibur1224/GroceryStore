//Author: Brayden Falla
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list;
  int numItems = 0;
  char input;
  string item;
  int i = 0;

 do
 {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

  if(input=='a'||input=='A')
  {
   cout<<"What is the item?"<<endl;
   cin>>item;

     list.push_back(item);   
   }

 }while(!(input=='q'||input=='Q'));

 if(list.size() > 0)
 {

 cout<<"==ITEMS TO BUY=="<<endl;
  for(i = 0; i < list.size(); i++)
  {
   cout<<i+1<<" "<<list.at(i)<<endl;
  }
 }

 else
 {
  cout<<"No items to buy!"<<endl;
 }

  return 0;
}
