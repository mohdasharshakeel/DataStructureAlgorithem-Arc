#include<iostream>
using namespace std;

int main(){

  int one [5]={1,2};
//   cout << one[3];    //! O

  int second [5] = {1,2,3};

  for (int i = 0; i < 5; i++)
  {
     cout << second[i] << endl;  //! 1,2,3,0,0
  }
  
  int third [5]; // full array me 5 dalo 

  for (int i = 0; i < 5; i++)
  {
   third[i] = 5;
  }
  
  for (int i = 0; i < sizeof(third)/sizeof(third[0]); i++)
  {
    cout << third[i] << endl;
  }
  
  char ch [5]={'A','s','h','a','r'};
  for (int i = 0; i < 5; i++)
  {
    cout<< ch[i] << " ";
  }
  
   cout << endl;
   

    return 0;
}