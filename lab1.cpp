// lab1.cpp : Defines the entry point for the application.
//

#include "lab1.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "ru_RU.UTF-8");
  cout << "Привет мир!" << endl;
  cout << "Моё любимое число " << MY_FAVOURITE_NUMBER << endl;
  cout << "Я учусь на 3м курсе ПолесГУ!" << endl;

  double length = 0.0;
  cout << "Введите расстояние в метрах:" << endl;
  cin >> length;
  double time = time_from_length(length);
  cout << "Тело с постоянным ускорением " << A << "м/с пройдёт расстояние в " << length << "м за " << time << "с." << endl;

  double x, y = 0.0;

  cin.ignore(INT_MAX, '\n');
  cin.get();
  return 0;
}

double time_from_length(const double & length) {
  double res;
  res = sqrt(2 * length / A);
  return res;
}

double individual_task(const double & x, const double & y) {
  double res = 0.0;
  res = 5 * pow(x, 2) - (cos(x)*(x + 3 * abs(x - y) + pow(x, 2))) / (4 * (2 + pow(x, 2)));
  return res;
}

double second_individual_task(const double & x, const double & y, const double & a) {
  double res = 0.0;
  res = (cos(pow(x, 3) + 6) - sin(y - a)) / (log(pow(x, 4)) - 2 * pow(sin(x), 5));
  return res;
}

void fill_vector(vector<double>& vect) {
  double temp = 0.0;
  for (int i = 0; i < vect.size(); i++) {
    cout << "Введите значение для " << i << "й координаты вектора" << endl;
    cin >> temp;
    vect[i] = temp;
  }
}

void show_vector(const vector<double> & vect) {
  for (int i = 0; i < vect.size(); i++) {
    cout << vect[i] << " ";
  }
  cout << endl;
}

double third_individual_task(const vector<double> & first_vector, const vector<double> & second_vector) {
  double res = 0.0;
  res = scalar_multiplicate(first_vector, second_vector) / (vect_length(first_vector) * vect_length(second_vector));
  return res;
}

double vect_length(const vector<double> & vect) {
  double res = 0.0;
  res = sqrt(pow(vect[0], 2) + pow(vect[1], 2));
  return res;
}

double scalar_multiplicate(const vector<double> & first_vector, const vector<double> & second_vector) {
  double res = 0.0;
  res = first_vector[0] * second_vector[0] + first_vector[1] * second_vector[1];
  return res;
}
