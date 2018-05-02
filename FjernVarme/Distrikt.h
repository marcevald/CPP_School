#pragma once

#include <string>
#include <vector>
#include "Forbruger.h"

using namespace std;

class Distrikt
{
public:
    Distrikt(int enPrisM3); 
    Distrikt();
    ~Distrikt();

    void addForbruger(Forbruger);
    int afregnForbruger(int);
private:
    Forbruger forbrugere[199]; 
    int antalForbrugere;
    int prisM3;
};