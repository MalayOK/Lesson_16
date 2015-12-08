// Dll_Vector.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
namespace lesson_9
{

	vector2d::vector2d()
	{
		x = 0.0;
		y = 0.0;
	}
	vector2d::vector2d(float X, float Y) :x(X), y(Y)
	{

	}
	vector2d::~vector2d()
	{
	}

	vector2d vector2d::operator+(const vector2d &vec)const
	{
		return vector2d(x + vec.x, y + vec.y);
	}

	vector2d vector2d::operator-(const vector2d &vec)const
	{
		return vector2d(x - vec.x, y - vec.y);
	}
	vector2d vector2d::operator-()const
	{

		return vector2d(-x, -y);
	}

	 float operator*(const vector2d& a, const vector2d& b)
	{

		return ((a.x * b.y) - (a.y * b.x));
	}

	vector2d vector2d::operator/(const vector2d &vec)const
	{
		return vector2d(x / vec.x, y / vec.y);
	}

	vector2d vector2d::operator= (const vector2d& vec)
	{
		this->x = vec.x;
		this->y = vec.y;
		return *this;
	}

	vector2d vector2d::operator+= (const vector2d& vec)
	{
		this->x += vec.x;
		this->y += vec.y;
		return *this;
	}

	vector2d vector2d::operator-= (const vector2d& vec)
	{
		this->x -= vec.x;
		this->y -= vec.y;
		return *this;
	}

	vector2d  vector2d::operator*= (const vector2d& vec)
	{
		this->x *= vec.x;
		this->y *= vec.y;
		return *this;
	}

	vector2d vector2d::operator/= (const vector2d& vec)
	{
		this->x /= vec.x;
		this->y /= vec.y;
		return *this;
	}

	vector2d vector2d::operator+ (const float& x)const
	{
		return vector2d(this->x + x, this->y + x);
	}

	vector2d vector2d::operator- (const float& x)const
	{
		return vector2d(this->x - x, this->y - x);
	}

	vector2d vector2d::operator* (const float& x)const
	{
		return vector2d(this->x * x, this->y * x);
	}

	vector2d vector2d::operator/ (const float& x)const
	{
		return vector2d(this->x / x, this->y / x);
	}

	vector2d vector2d::operator/= (const float& x)
	{
		this->x /= x;
		this->y /= x;
		return *this;
	}

	vector2d vector2d::operator+= (const float& x)
	{
		this->x += x;
		this->y += x;
		return *this;
	}

	vector2d vector2d::operator-= (const float& x)
	{
		this->x -= x;
		this->y -= x;
		return *this;
	}

	vector2d vector2d::operator*= (const float& x)
	{
		this->x *= x;
		this->y *= x;
		return *this;
	}

	 ostream&   operator<< (ostream& cout, const vector2d& vec)
	{
		cout << "(" << vec.x << "," << vec.y << ")";
		return cout;
	}

	float vector2d::GetY() const
	{
		return this->y;
	}

	float vector2d::GetX() const
	{
		return this->x;
	}
}

