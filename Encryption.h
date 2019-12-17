#pragma once
#include<iostream>
using namespace std;
class Encryption
{
  private:
  string message;

  public:
  virtual void print()const;
  virtual string encrypt()=0;
  virtual string decrypt()=0;
  Encryption(string message);
  Encryption();
  virtual void setMsg(string message);
  virtual string getMsg();
};