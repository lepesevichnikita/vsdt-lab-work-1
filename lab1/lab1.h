// lab1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

const double A = 9.8;
const double MY_FAVOURITE_NUMBER = 5;

double time_from_length(const double & length);
double individual_task(const double & x, const double & y);
double second_individual_task(const double & x, const double & y, const double & a);
void fill_vector(vector<double> & vect);
void show_vector(const vector<double> & vect);
double third_individual_task(const vector<double> & first_vector, const vector<double> & second_vector);
double vect_length(const vector<double> & vect);
double scalar_multiplicate(const vector<double> & first_vector, const vector<double> & second_vector);


// TODO: Reference additional headers your program requires here.
