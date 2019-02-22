#include<stdio.h>
#include<iostream>
using namespace std;



// Define the function
float add(float m1, float m2);
float subtract(float m1, float m2);
float multiply(float m1, float m2);
float divide(float m1, float m2);


// Initialize the function

float add(float m1, float m2){
    return m1+m2;
}

float subtract(float m1, float m2){
    return m1-m2;
}

float multiply(float m1, float m2){
    return m1*m2;
}
float divide(float m1, float m2){
    return m1/m2;
}