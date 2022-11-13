/*
Author: Massiel Sanchez
Date: 11/12/2022
CurrentTimePosts Implentation File:
An Account object includes a username and a vector that holds CurrentTimePosts created by user.
CurrentTimePosts objects include the current time and a message.
*/

#include <iostream>
#include "CurrentTimePost.hpp"


CurrentTimePost::CurrentTimePost()
{
  message = "";
  currentTime = time(NULL);
}

CurrentTimePost::CurrentTimePost(std::string message_input)
{
  message = message_input;
  currentTime = time(NULL);
}

void CurrentTimePost::setMessage(std::string message_input)
{
  message = message_input;
}


std::string CurrentTimePost::getMessage() const
{
  return message;

}

void CurrentTimePost::getTime() const
{
  std::cout<< asctime(localtime(&currentTime));

}

void CurrentTimePost::displayPost() const
{
  std::cout<< getMessage() << " at: " << "\n";
  getTime();
  std::cout<< std::endl;
}
