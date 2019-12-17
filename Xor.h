#pragma once 
#include<iostream>
#include<bits/stdc++.h> 
#include"Caesar.h"
using namespace std ;
class Xor
{
  private:
  char xorKey;
  Caesar msg;
  public:
  Xor(char xorKey,int key,string encryptMsg, string message ):msg( key, message)
  {
    this->xorKey=xorKey;
  }
  string encryptDecrypt(Caesar msg);
  

};