/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab quiz 13

comments
comments
comments
*/

#include <iostream>
using namespace std;

class Customer
{
    private:
        string name;
        string unique_id;

    public:
        Customer(string name, string unique_id) 
        {
            this->name = name;
            this->unique_id = unique_id;
        }
    
        Customer()
        {
            name = "";
            unique_id = "";
        }

        void set_name(string input_name)
        {
            name = input_name;
        }

        void set_unique_id(string input_unique_id)
        {
            unique_id = input_unique_id;
        }

        string get_name()
        {
            return name;
        }

        string get_unique_id()
        {
            return unique_id;
        }
};