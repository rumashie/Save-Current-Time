/*
Author: Massiel Sanchez
Date: 11/12/2022
Account Header File:
An Account object includes a username and a vector that holds CurrentTimePosts created by user.
CurrentTimePosts objects include the current time and a message.
*/

#include <iostream>
#include "CurrentTimePost.hpp"
#include <vector>

//Lets add a comment here to make a change to the file and practice some git commands 


#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account
{
public:
  //Constructors
  Account();
  Account(const std::string &username_input);

  /*
  @return: username of Account
  */
  std::string getUsername() const;

  /*
  sets the username to what is passed through parameter
  */
  void setUsername(const std::string &username_input);

  /*
  @return: size of vector holding time saved by users
  */
  int getSize() const;

  /*
  iterates through vector holding CurrentTimePost objects and displays them
  by calling method displayPost() of CurrentTimePost class
  */
  void displaysavedTimes() ;

  /*
  @param: takes in a message from username
  creates a "CurrentTimePost" object by calling its Constructor,
  with message passed through param
  */
  void addsavedTime(std::string message_input);


private:
  std::string username;
  std::vector<CurrentTimePost> savedTimes_;
  int ItemCount;
};

#endif
