/**
 * @file main.cpp
 * Entry point for the score calculation program.
 *
 * This file contains the main entry point for the score calculation program. It creates
 * an instance of the Menu class to provide a user interface for entering scores and
 * performing statistical calculations based on those scores.
 *
 * The program utilizes the Calculate class for score calculations and user interaction.
 *
 * @author Gage Miller
 */

#include "../include/calculations.h"
#include "../include/menu.h"
#include <iostream>


int main() {
    Menu menu;
    menu.startMenu();

    return 0;  
};
