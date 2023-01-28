/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.3

comments
comments
comments
*/

#include <iostream>
#include<vector>
using namespace std;

class Circuit
{
    private:
        bool Lamp = false;
        bool FirstSwitch = false;
        bool SecondSwitch = false;

    public:
        int get_first_switch_state() // 0 for down, 1 for up
        {
            return(FirstSwitch);
        }

        int get_second_switch_state()
        {
            return(SecondSwitch);
        }

        int get_lamp_state() // 0 for off, 1 for on
        {
            return(Lamp);
        }

        void toggle_first_switch()
        {
            FirstSwitch =! FirstSwitch;
            Lamp =! Lamp;
        }

        void toggle_second_switch()
        {
            SecondSwitch =! SecondSwitch;
            Lamp =! Lamp;
        }
};