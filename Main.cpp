#include <iostream>
#include <cmath>

class Vector2
{
private:
	double x;
	double y;
	
public:
	Vector2() : x(0), y(0)
	{
	}

	Vector2(double _x, double _y) : x(_x), y(_y)
	{
	}

	void Show()
	{
		std::cout << '(' << x << "; " << y << ") ";
	}

	double Length()
	{
		return abs(sqrt(pow(x, 2) + pow(y, 2)));
	}
};
class Vector3
{
private:
	double x;
	double y;
	double z;

public:
	Vector3() : x(0), y(0), z(0)
	{
	}

	Vector3(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{
	}

	void Show()
	{
		std::cout << '(' << x << "; " << y << "; " << z << ") ";
	}

	double Length()
	{
		return abs(sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));
	}
};

void PrintVector2Length(Vector2 targetVector);
void PrintVector3Length(Vector3 targetVector);

int main()
{
	Vector2 FirstVector2(-10, 24);
	Vector2 SecondVector2(0, 15);
	Vector2 ThirdVector2(-5, 0);
	Vector2 FourthVector2(-5, -3);
	Vector2 FifthVector2(0, 0);
	
	PrintVector2Length(FirstVector2);
	PrintVector2Length(SecondVector2);
	PrintVector2Length(ThirdVector2);
	PrintVector2Length(FourthVector2);
	PrintVector2Length(FifthVector2);

	std::cout << "______________________________\n";

	Vector3 FirstVector3(1, 2, 0);
	Vector3 SecondVector3(-3, 0, 9);
	Vector3 ThirdVector3(-3, 4, -5);
	Vector3 FourthVector3(0, 0, 7);
	Vector3 FifthVector3(3, 2, 2);

	PrintVector3Length(FirstVector3);
	PrintVector3Length(SecondVector3);
	PrintVector3Length(ThirdVector3);
	PrintVector3Length(FourthVector3);
	PrintVector3Length(FifthVector3);

	return 0;
}

void PrintVector2Length(Vector2 targetVector)
{
	std::cout << "\nVector ";
	targetVector.Show();
	std::cout << "length: " << targetVector.Length() << '\n';
}

void PrintVector3Length(Vector3 targetVector)
{
	std::cout << "\nVector ";
	targetVector.Show();
	std::cout << "length: " << targetVector.Length() << '\n';
}