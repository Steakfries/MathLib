#include "Vector2.h"
#include <math.h>
Vector2::Vector2()
{

}

Vector2:: ~Vector2()
{

}

float Vector2::getdotproduct(const Vector2 a_SecondVector)
{
// Length = SquareRoot(x*x + y*y)
	return (m_fX * a_SecondVector.m_fX + m_fY * a_SecondVector.m_fY);
}

float Vector2::getmagnitude()
{
float numOne = m_fX * m_fX;
float numTwo = m_fY * m_fY;
return sqrt(numOne + numTwo); 
}

Vector2 Vector2::normalize()
{
	Vector2 temp;
	float fnorm;
	float fmag = getmagnitude();
	temp.m_fX = m_fX / fmag;
	temp.m_fY = m_fY / fmag;
}

Vector2 Vector2::operator +()
{

}

Vector2 Vector2::operator -()
{

}

Vector2 Vector2::operator *()
{

}

Vector2 Vector2::operator / (const Vector2 a_something)
{

}

Vector2 Vector2::operator = (const Vector2 a_something)
{

}
