/** Sean Gurr
 *  C00221886
 *  Ex. 9
 *  Sphere Calculations
 *  10/11/2017
 */

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdio>
#include <windows.h>

using namespace std;

/**< Funtion prototypes */
void Sphere(double rad,double *ptrarea, double *ptrvolume);

int main()
{
    /**< Purpose of code */
    cout << "Sphere Calculations" << endl;

    /**<  Variable declarations */
    double radius=0, area=0, volume=0;
    double *ptr_area, *ptr_volume ;

    /**< Assigning values to variables */
    ptr_area = &area;
    ptr_volume = &volume;

    /**< While loop criteria */
    while (radius <=0)
    {
       cout << "Enter a positive value for radius (m):";
       cin >> radius ;
    }

     /**< Invoke sphere function */
     Sphere(radius, ptr_area, ptr_volume);

    /**< Display result */
    cout << "The area of the sphere is :" << *ptr_area << endl;
    cout << "The volume of the sphere is :" << *ptr_volume << endl;

    return 0;
}

/**< Area and Volume calculation */
 void Sphere(double rad, double *ptra, double *ptrv)
 {


     *ptrarea = 4 * M_PI* pow(rad,2);
     *ptrvolume = (4/3)* M_PI* pow(rad,3);

     return;

 }
