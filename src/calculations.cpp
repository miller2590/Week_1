/**
 * @file calculations.cpp
 * Uses of the Calculate class functions.
 *
 * This file contains the implementation of functions declared in calculations.h.
 * The Calculate class allows for various statistical calculations, including
 * sum, average, deviance, variance, standard deviation, and range of scores.
 *
 * @author Gage Miller
 */

#include "../include/calculations.h" //Header file include
#include <array>
#include <vector>
#include <cmath> 
#include <algorithm>

using std::array;
using std::vector;
using std::min_element;
using std::max_element;

//I decided to initialize the class with a vector of scores = 0
Calculate::Calculate(vector<double> initialScores) : scores(initialScores) {};

//Calculates the sum of values in a vector
int Calculate::calculateSum(vector<double> values) {
    int sum = 0;
    for (int i = 0; i < values.size(); i++) {
        sum += values[i];
    }
    return sum;
}

//Calculates the average of a given vector 
double Calculate::calculateAverage(vector<double> values) {
    int sum = calculateSum(values);

    return static_cast<double>(sum)/values.size();
}

//Calculates the deviance of a vector and returns a vector
vector<double> Calculate::calculateDeviance(vector<double> values) {
    vector<double> deviance = {};
    double average = calculateAverage(values);

    for (int value : values) {
            deviance.push_back(pow((value - average), 2));
    }

    return deviance;
}

// Calculates the variance of the scores variable
double Calculate::calculateVariance() {
    vector<double> scoresDeviance = calculateDeviance(scores);
    return calculateAverage(scoresDeviance);
}

//Calculates standard deviation of the scores variable
double Calculate::calculateStandardDeviation() {
    return sqrt(calculateVariance());
}

//Calculates the range of scores variable
int Calculate::calculateRange() {
    double min = scores[0];
    double max = scores[0];

    for (double score : scores) {
        if (score < min) {
            min = score;
        }
        if (score > max) {
            max = score;
        }
    }

    return max - min;

}

//Setter for scores variable
void Calculate::setScores(vector<double> newScores) {  
     scores = newScores;   
}

//Getter of scores variable
vector<double> Calculate::getScores() {
    return scores;
}
