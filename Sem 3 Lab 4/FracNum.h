#pragma once
#include <iostream>
#include <math.h>
#include <vector>

#include "Logger.h"

using namespace std;

int GCD(int x, int y);  //���������� ���

class FracNum {    //����� ������ � �������
private:
    double Numerator;       //���������
    double Denominator;     //�����������
    double Nod;             //��� (��������� ����� ��������)
public:
    Logger logger;
    FracNum();
    FracNum(double num, double denum);
    ~FracNum();
    //��������� ����� � ������
    friend istream& operator>>(istream& is, FracNum& fn);
    friend ostream& operator<<(ostream& os, const FracNum& fn);
    //�������������� ���������
    friend FracNum operator+(const FracNum& fn1, const FracNum& fn2);
    friend FracNum operator-(const FracNum& fn1, const FracNum& fn2);
    friend FracNum operator*(const FracNum& fn1, const FracNum& fn2);
    friend FracNum operator/(const FracNum& fn1, const FracNum& fn2);
    friend FracNum operator^(const FracNum& fn, int power);
    FracNum& operator= (const FracNum& fn1);
    //��������� ���������
    friend bool operator>(const FracNum& fn1, const FracNum& fn2);
    friend bool operator>=(const FracNum& fn1, const FracNum& fn2);
    friend bool operator==(const FracNum& fn1, const FracNum& fn2);
    friend bool operator<=(const FracNum& fn1, const FracNum& fn2);
    friend bool operator<(const FracNum& fn1, const FracNum& fn2);
};





istream& operator>>(istream& is, FracNum& fn);
ostream& operator<<(ostream& os, const FracNum& fn);

FracNum operator+(const FracNum& fn1, const FracNum& fn2);
FracNum operator-(const FracNum& fn1, const FracNum& fn2);
FracNum operator*(const FracNum& fn1, const FracNum& fn2);
FracNum operator/(const FracNum& fn1, const FracNum& fn2);
FracNum operator^(const FracNum& fn, int power);

bool operator>(const FracNum& fn1, const FracNum& fn2);
bool operator>=(const FracNum& fn1, const FracNum& fn2);
bool operator==(const FracNum& fn1, const FracNum& fn2);
bool operator<(const FracNum& fn1, const FracNum& fn2);
bool operator<=(const FracNum& fn1, const FracNum& fn2);