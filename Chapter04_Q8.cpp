#include <iostream>
#include <string>//allows use of string variables
using namespace std;
//function prototypes
void enter_colors(string& colorOne, string& colorTwo);
void display_new_color(string& colorOne, string& colorTwo);
//main function
int main()
{
    //declaring variables
    string primaryColorOne, primaryColorTwo;
    //explaining program to user
    cout << "This program allows you to mix two primary colors.";
    cout << endl << endl;
    //calling functions
    enter_colors(primaryColorOne, primaryColorTwo);
    display_new_color(primaryColorOne, primaryColorTwo);

    cout << endl << endl;
}
//user input
void enter_colors(string& colorOne, string& colorTwo)
{
    cout << "Please enter your first color. ";
    cin >> colorOne;
    cout << "Please enter your second color. ";
    cin >> colorTwo;
}
//displaying results based on user input
void display_new_color(string& colorOne, string& colorTwo)
{
    if ((colorOne == "red" && colorTwo == "yellow") 
    || (colorOne == "yellow" && colorTwo == "red"))
    {
        cout << endl << "You made orange!";
    }
    else if ((colorOne == "yellow" && colorTwo == "blue") 
    || (colorOne == "blue" && colorTwo == "yellow"))
    {
        cout << endl << "You made green!";
    }
    else if ((colorOne == "blue" && colorTwo == "red")
    || (colorOne == "red" && colorTwo == "blue"))
    {
        cout << endl << "You made purple!";
    }
    else 
    {
        cout << endl;
        cout << "-ERROR- You must enter a primary color (red, yellow, or blue).";
    }
}

