/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: LAB11D

comments
comments
comments
comments
comments
comments
comments
comments
comments
comments
comments
comments
*/

#include <iostream>

using std::string;

using namespace std;



struct Post{

    string username;

    string message;

};



class Profile{

    private:

        string username;

        string displayname;



    public:

        Profile(string usrn, string dspn){

            username = usrn;

            displayname = dspn;

        };

        Profile(){

            username = "";

            displayname = "";

        };



        string getUsername(){return username;};

        string getFullName(){return displayname + " (@" + username + ")";};

        void setDisplayName(string dspn){displayname = dspn;};

};



class Network{

    private:

        static const int MAX_USERS = 20;

        int numUsers;

        Profile profiles[MAX_USERS];

        bool following[MAX_USERS][MAX_USERS];



        static const int MAX_POSTS = 100;

        int numPosts;

        Post posts[MAX_POSTS];  



        int findID(string usrn){

            for(int i = 0; i <= numUsers; i++)

                if(profiles[i].getUsername() == usrn)

                    return i;

            return -1;

        };



        bool isAlphaOrNumOnly(string w){

            for(int i = 0; i < w.length(); i++)

                if(!isalnum(w[i]))

                    return false;

            return true;

        };

    

    public:

        Network(){

            numUsers = 0;

            numPosts = 0;

            for(int i = 0; i < MAX_USERS; i++)

                for(int j = 0; j < MAX_USERS; j++)

                    following[i][j] = false;

            };



        bool addUser(string usrn, string dspn){

            if(numUsers < MAX_USERS)

                if(usrn.length() != 0 && isAlphaOrNumOnly(usrn) && findID(usrn) == -1){

                    profiles[numUsers] = Profile(usrn, dspn);

                    numUsers += 1;

                    return true;

                }

            return false;

        };



        bool follow(string usrn1, string usrn2){

            int usrn1ID = findID(usrn1),

                usrn2ID = findID(usrn2);



            if(usrn1ID != -1 && usrn2ID != -1){

                following[usrn1ID][usrn2ID] = true;

                return true;

            }

            return false;

        };



        void printDot(){

            std::cout << "digraph {" << std::endl;

            for(int i = 0; i < numUsers; i++)

                std::cout << "\t\"@" + profiles[i].getUsername() + "\"" << std::endl;

        

            std::cout << "\n";



            for(int i = 0; i < numUsers; i++)

                for(int j = 0; j < numUsers; j++)

                    if(following[i][j] == true)

                        std::cout << "\t\"@" + profiles[i].getUsername() + "\" -> \"@" + profiles[j].getUsername() + "\"" << std::endl;

            std::cout << "}";

        }



        bool writePost(string usrn, string msg){

            if(findID(usrn) == -1 || numPosts == MAX_POSTS) return false;

            posts[numPosts] = Post{usrn, msg};

            numPosts++;

            return true;

        }



        bool printTimeline(string usrn){

            if(findID(usrn) == -1 || numPosts == 0) return false;

            for(int i = numPosts - 1; i >= 0; i--){

                // Check if user created post

                if(posts[i].username == usrn){

                    std::cout << profiles[findID(usrn)].getFullName() << ": " << posts[i].message << '\n'; 

                    continue;

                }

                // Check if user friends created post

                for(int j = 0; j < numUsers; j++){

                    if(following[findID(usrn)][findID(profiles[j].getUsername())] && profiles[j].getUsername() == posts[i].username){

                        std::cout << profiles[j].getFullName() << ": " << posts[i].message << '\n'; 



                    }

                }

            }

            return true;

        }



};



int main() {

Network nw;

// add three users

nw.addUser("mario", "Mario");

nw.addUser("luigi", "Luigi");

nw.addUser("yoshi", "Yoshi");

nw.follow("mario", "luigi");

nw.follow("luigi", "mario");

nw.follow("luigi", "yoshi");

nw.follow("yoshi", "mario");

// write some posts

nw.writePost("mario", "It's a-me, Mario!");

nw.writePost("luigi", "Hey hey!");

nw.writePost("mario", "Hi Luigi!");

nw.writePost("yoshi", "Test 1");

nw.writePost("yoshi", "Test 2");

nw.writePost("luigi", "I just hope this crazy plan of yours works!");

nw.writePost("mario", "My crazy plans always work!");

nw.writePost("yoshi", "Test 3");

nw.writePost("yoshi", "Test 4");

nw.writePost("yoshi", "Test 5");

cout << endl;



cout << "======= Mario's timeline =======" << endl;

nw.printTimeline("mario");

cout << endl;

cout << "======= Yoshi's timeline =======" << endl;

nw.printTimeline("yoshi");

cout << endl;

}