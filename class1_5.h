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
  string Vard;
  string Pav;

  std::string getVardas() const { return Vard; }    // get'eriai
  std::string getPavarde() const { return Pav; }  // get'eriai
  zmogus(std::string v = "") : Vard(v) { }
};

class duomuo : public zmogus{
  public:
  std::vector<int> paz;
  int egz;
  double GP ;

  double GBal(double (*) (vector<double>)) const;  // get'eriai
  duomuo(std::istream& is);
  duomuo() : GP(0) { }
  std::istream& readStudent(std::istream&);  // set'eriai
  ~duomuo(){cout<<"de";};
  
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
};
  //duomuo::~duomuo(){cout<<"del";}; 
void rikiuoti(std::vector<int> masyvas, int n);

double rastiMediana(std::vector<int> masyvas, int n);

int randomSk();

#endif // CLASS1_H_INCLUDED
