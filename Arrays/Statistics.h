#pragma once
#include"Constants.h"

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
char Sum(const char arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
char Avg(const char arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValue(const int arr[], const int n);
double minValue(const double arr[], const int n);
char minValue(const char arr[], const int n);
int minValue(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValue(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValue(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValue(const int arr[], const int n);
double maxValue(const double arr[], const int n);
char maxValue(const char arr[], const int n);
int maxValue(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValue(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValue(const char arr[ROWS][COLS], const int ROWS, const int COLS);
