/*
5. Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
*/

#include<iostream>
#include<math.h>
#define H 6.64*pow(10,-34)
#define C 3*pow(10,8)
#define E 1.67*pow(10,-19)
using namespace std;
class Photon
{
      double wavelength;
    public:
      void setValue(int w)
      {
        wavelength=w;
      }
      double getValue()
      {
        return wavelength;
      }
};
class Photon_Energy:public Photon
{
    public:
    void energy()
    {
        cout<<"Photon Energy with wavelength "<<getValue()<<" is: "<<((H*C)/getValue())*(pow(10,10)/(E))<<" eV."<<endl;
    }
};
int main()
{
    Photon_Energy p;

    double w;
    cout<<"Enter Wavelength in Angstorm: ";
    cin>>w;
    p.setValue(w);
    p.energy();

    return 0;
}