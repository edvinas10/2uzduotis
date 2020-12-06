#ifndef CLASS1_H_INCLUDED
#define CLASS1_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cstdlib> //Del rand() funkcijos
#include <time.h>  //del "time"
#include <ctime>
#include <fstream>
#include <random>
#include <iomanip> // del setprecision
#include <chrono>

using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::swap;


class duomuo {
  public:
  string Vard;
  string Pav;
  std::vector<int> paz;
  int egz;
  double GP=0;

public:
  duomuo() : egz(0) { }
  duomuo(std::istream& is);
  inline std::string vardas() const { return Vard; }    // get'eriai, inline
  inline std::string pavarde() const { return Pav; }  // get'eriai, inline
  double GBal(double (*) (vector<double>)) const;  // get'eriai
  std::istream& readStudent(std::istream&);  // set'eriai
};

void rikiuoti(std::vector<int> masyvas, int n);

double rastiMediana(std::vector<int> masyvas, int n);

int randomSk();

#endif // CLASS1_H_INCLUDED