#include <iostream>
int main()  {
const double RISE_RATE = 1.5;
int years1= 5;
int years2= 7;
int years3= 10;
double rise1= years1 * RISE_RATE;
double rise2= years2 * RISE_RATE;
double rise3= years3 * RISE_RATE;
std::cout << "In " << years1 << " years, the ocean will have risen " << rise1 << " millimeters." << std::endl;
std::cout << "In " << years2 << " years, the ocean will have risen " << rise2 << " millimeters." << std::endl;
std::cout << "In " << years3 << " years, the ocean will have risen " << rise3 << " millimeters." << std::endl;
}