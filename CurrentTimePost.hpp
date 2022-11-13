/*
Author: Massiel Sanchez
Date: 11/12/2022
CurrentTimePosts Header File:
An Account object includes a username and a vector that holds CurrentTimePosts created by user.
CurrentTimePosts objects include the current time (using c++ time library) and a message.
*/

#include <iostream>
#include <time.h>

#ifndef CURRENTTIMEPOST_HPP
#define CURRENTTIMEPOST_HPP

class CurrentTimePost
{
  public:
    //Constructors
    CurrentTimePost();
    CurrentTimePost(std::string message_input);

    /*
    sets the message to message passed through param
    */
    void setMessage(std::string message_input);

    /*
    @return: message user submitted for time they saved
    */
    std::string getMessage() const;

    void getTime() const;

    /*
    Prints message given by user and current time together
    */
    void displayPost() const;



  private:
    time_t currentTime;
    std::string message;


};

#endif
