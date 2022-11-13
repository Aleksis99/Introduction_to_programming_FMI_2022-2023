#include <iostream>

using namespace std;

const int SIZE = 50000;

bool inRectangle(double recX1, double recY1,
	double recX2, double recY2,
	double pointX, double pointY
) 
{
	return (pointX > recX1 && pointX < recX2&& pointY < recY1&& pointY > recY2);
}

bool inCircle(double circleX, double circleY, double radius, double pointX, double pointY)
{
	double distOnXAxis = circleX - pointX;
	double distOnYAxis = circleY - pointY;

	double distBetweenPoints = sqrt(distOnXAxis * distOnXAxis + distOnYAxis * distOnYAxis);

	return distBetweenPoints < radius;
}

int main()
{
	double x[SIZE], y[SIZE];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		cin >> y[i];
	}

	double x1, y1, x2, y2; //the rectangle coordinates

	cin >> x1 >> y1 >> x2 >> y2;

	double circleX, circleY, radius;

	cin >> circleX >> circleY >> radius;

	int countInCircle = 0, countInRectangle = 0, countInBoth = 0;

	for (int i = 0; i < n; i++)
	{
		bool countInCircle = inCircle(circleX, circleY, radius, x[i], y[i]);
		bool pointInRectangle = inRectangle(x1, y1, x2, y2, x[i], y[i]);

		countInCircle += (int)countInCircle;

		countInRectangle += (int)pointInRectangle;

		countInBoth += (int)(countInCircle && pointInRectangle);
	}

	cout << "Points in circle: " << countInCircle << endl;
	cout << "Points in rectangle: " << countInRectangle << endl;
	cout << "Points in both: " << countInBoth << endl;
}

