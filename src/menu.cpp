/**
 * @file menu.cpp
 * Implementation of the Menu class for score calculations and menu function.
 *
 * This file contains the implementation of the Menu class, which provides a simple
 * command-line menu for entering scores and calculating statistics based on those scores.
 *
 * The Menu class interacts with the Calculate class to perform calculations and displays
 * the results to the user.
 *
 * @author Gage Miller
 */

#include "../include/menu.h" //Header file include
#include "../include/calculations.h" //Header file include
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;


void Menu::startMenu() {
    //Creates instance of the Calculate class with scores initialized to 0
    Calculate classScores({0, 0, 0, 0, 0, 0});
    
    int choice;

    do {
        //Displays menu options
        cout << "Calculations Menu: " << endl;
        cout << "1. Enter scores" << endl;
        cout << "2. Calculate and display" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    vector<double> userScores;
                    bool validInput = true; //Valid input flag
                    for (int i = 0; i < 6; i++) {
                        double score;
                        cout << "Enter score " << i + 1 << ": ";
                        if (cin >> score) {
                            userScores.push_back(score);
                        } else {
                            //Handles invalid input and asks for a number
                            cout << "Invalid input. Please enter a number." << endl;
                            validInput = false;
                            cin.clear();
                            cin.ignore(100, '\n');
                            break;
                        }
                    }
                    if (validInput && userScores.size() == 6) {
                        //Sets user entered scores if user entered 6 scores
                        classScores.setScores(userScores);
                    } else {
                        cout << "Please enter six scores." << endl;
                    }
                }
                break;
            case 2:
                //Calculates and displays statistics
                cout << "Average: " << classScores.calculateAverage(classScores.getScores()) << endl;
                cout << "Variance: " << classScores.calculateVariance() << endl;
                cout << "Standard Deviation: " << classScores.calculateStandardDeviation() << endl;
                cout << "Range: " << classScores.calculateRange() << endl;
                break;
            case 3:
                //Exits program
                cout << "Have a nice day..........." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }   

    } while (choice != 3);
};
