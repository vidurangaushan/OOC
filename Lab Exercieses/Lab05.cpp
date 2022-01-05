#include <iostream>
#include <iomanip>
#include "ShapeArea.h"
using namespace std;

struct Circle {
	float Radius;
};

struct Rectangle {
	float length;
	float width;

};

struct Square {
	float length;
};

int main() {

	Circle cir;
	Rectangle rec;
	Rectangle yard;
	Square sq;

	float yardArea, circleArea, rectangleArea, squareArea, lawnArea;

	cout <<"Enter radius :";
	cin >> cir.Radius;

	cout << "Enter yard length :";
	cin >> yard.length;

	cout << "Enter yard width :";
	cin >> yard.width;

	cout << "Enter Rectangle length :";
	cin >> rec.length;

	cout << "Enter Rectangle width :";
	cin >> rec.width;

	cout << "Enter Square length :";
	cin >> sq.length;

	circleArea = areaCircle(cir.Radius);
	yardArea = areaRectangle(yard.length, yard.width);
	rectangleArea = areaRectangle(rec.length, rec.width);
	squareArea = areaSquare(sq.length);

	lawnArea = yardArea - (circleArea + rectangleArea + squareArea);

	cout << "lawn Area : " << setprecision(3) << fixed << lawnArea << endl;
	system("pause");

	return 0;

}
