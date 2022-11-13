#include <iostream>
#include "Account.hpp"
#include "CurrentTimePost.hpp"

int main()
{
  std::string message;
  std::string username;

  Account account1("username");
  std::cout<< account1.getUsername()<< "\n";

//Testing CurrentTimePost Constructor and methods:
  //CurrentTimePost post1("Left House");
  //CurrentTimePost * post1_addr = &post1;

  // std::cout << post1.getMessage() << "\n";
  // post1.getTime();
  //
  // std::cout << std::endl;
  // post1.displayPost();

  // int num =0;
  // for(int i =0; i<1; i++)
  // {
  //   std::cout << "Enter username: ";
  //   std::cin >> username;
  // }
  //
  // Account account1(username);
  // std::cout<< account1.getUsername()<< "\n";
  //
  // bool addInput = false;
  //  if(num > 1)
  //  {}

    bool addInput = true;
    while(addInput)
    {

        std::cout << "Enter Message, or enter Cancel to terminate: ";
        getline(std::cin, message);


        if(message != "Cancel")
        {
          account1.addsavedTime(message);
        }
        else
        {
          break;
        }

        account1.displaysavedTimes();
    }

 } //end of main
