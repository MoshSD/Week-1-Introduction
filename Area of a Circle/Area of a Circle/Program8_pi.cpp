#include <iostream>
#include <math.h> //adding power multiplication

using namespace std;





int main()
{
	const float kpi = 3.14159f;
	float radius = 25.0f;
	float area = kpi * pow(radius, 2);

	cout << "The area of a circle with a radius of " << radius << " is " << area << endl;


	return 0;

}
