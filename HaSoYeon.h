#include <bits/stdc++.h>
using namespace std;

//Activation Function Define
double Sigmoid(double x){
    return 1 / (1 + exp(-x));
}

double ReLU(double x){
    return fmax(x, 0);
}

double tanh(double x){
    return (exp(x) - exp(-x)) / (exp(x) + exp(-x));
}

