/**
 * @file calculations.h
 * Declarations for the Calculate class.
 *
 * This file contains the class declaration for Calculate, which provides a set of
 * functions for performing various calculations on a collection of scores.
 * 
 * @note See calculations.cpp for function comments.
 *
 * @author Gage Miller
 */

#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <vector>

using std::vector;

class Calculate {
    private:
        vector<double> scores;

    public:
        Calculate(vector<double> initialScores);
        int calculateSum(vector<double> values);
        double calculateAverage(vector<double> values);
        vector<double> calculateDeviance(vector<double> values);
        double calculateVariance();
        double calculateStandardDeviation();
        int calculateRange();
        void setScores(vector<double> newScores);
        vector<double> getScores();
};

#endif