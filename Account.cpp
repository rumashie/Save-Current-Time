/*
Author: Massiel Sanchez
Date: 11/12/2022
Account Implentation File:
An Account object includes a username and a vector that holds CurrentTimePosts created by user.
CurrentTimePosts objects include the current time and a message.
*/

#include <iostream>
#include "Account.hpp"
#include <vector>

Account::Account()
{
  username = "";
  ItemCount = 0;
}

Account::Account(const std::string &username_input)
{
    username = username_input;
    ItemCount = 0;
}

std::string Account::getUsername() const
{
  return username;
}

void Account::setUsername(const std::string &username_input)
{
  username = username_input;
}

int Account::getSize() const
{
    return ItemCount;
}

//Loop through the Vector and display each item it stores
void Account::displaysavedTimes()
{
  std::cout<< "\n";
  std::cout<< "CURRENT SAVED TIMES: " << "\n";
  for(int i = 0; i<savedTimes_.size(); i++)
  {
    savedTimes_.at(i).displayPost();
  }

}

void Account::addsavedTime(std::string message_input)
{
  CurrentTimePost newPost(message_input);
  savedTimes_.push_back(newPost);
  ItemCount++;
}
