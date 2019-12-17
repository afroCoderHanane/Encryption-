#include <iostream>
#include<fstream>
#include "Caesar.h"
//#include "Xor.h"
using namespace std;

int main() {
  ifstream inputKey;
  int key;
  inputKey.open("key.txt", ios::in);
  inputKey>>key;
 // cout<<key;
  //inputKey.open("key.txt", ios::in);
  string message;
 getline(cin,message);
  

  Caesar cd(key, message ) ;
  
  cd.setMsg(message, key);
  cout << cd.encrypt()<<endl;
  /*Xor xenc('P',key,cd.encrypt(),message);
  cout<<xenc.encryptDecrypt(cd)<<endl;
   cout<<xenc.encryptDecrypt(cd)<<endl;
   */
  cout<<cd.decrypt();
  inputKey.close();
}