#include"Xor.h"
string Xor::encryptDecrypt(Caesar msg)
{
  string inpString=msg.encrypt();
  char xorKey = 'P'; 
  
    // calculate length of input string 
    int len = inpString.length(); 
  
    // perform XOR operation of key 
    // with every caracter in string 
    for (int i = 0; i < len; i++) 
    { 
        inpString[i] = inpString[i] ^ xorKey; 
        
    }  
    //cout <<inpString<<endl;
    return inpString;
}