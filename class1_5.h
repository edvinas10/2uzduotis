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

class zmogus {
  public:
  double GP=0;

  public:
  double GBal(double (*) (vector<double>)) const;  // get'eriai
  zmogus() : GP(0) { }
};

class duomuo : public zmogus{
  public:
  string Vard;
  string Pav;
  std::vector<int> paz;
  int egz;

public:
  duomuo() : egz(0) { }
  ~duomuo(){cout<<"de";};
  duomuo(std::istream& is);
  
  duomuo(const duomuo &duomuo_kopijuoti) {Vard = duomuo_kopijuoti.Vard; Pav = duomuo_kopijuoti.Pav; paz = duomuo_kopijuoti.paz; egz = duomuo_kopijuoti.egz; GP=duomuo_kopijuoti.GP; }  
    duomuo& operator=(const duomuo& rhs)
   {
      Vard = rhs.Vard;
      Pav = rhs.Pav;
      paz = rhs.paz;
      egz = rhs.egz;
      GP = rhs.GP;
      return *this;
   }
  inline std::string vardas() const { return Vard; }    // get'eriai, inline
  inline std::string pavarde() const { return Pav; }  // get'eriai, inline
  std::istream& readStudent(std::istream&);  // set'eriai
 
};
  //duomuo::~duomuo(){cout<<"del";}; 
void rikiuoti(std::vector<int> masyvas, int n);

double rastiMediana(std::vector<int> masyvas, int n);

int randomSk();

#endif // CLASS1_H_INCLUDED