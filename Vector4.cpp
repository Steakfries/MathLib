#include "Vector4.h"
#include <math.h>

Vector4::Vector4()
{

}

Vector4:: ~Vector4()
{

}

float Vector4::getdotproduct(const Vector4 a_SecondVector)
{
// Length = SquareRoot(x*x + y*y)
	return (m_fX * a_SecondVector.m_fX + m_fY * a_SecondVector.m_fY);
}

float Vector4::getmagnitude()
{
float numOne = m_fX * m_fX;
float numTwo = m_fY * m_fY;
return sqrt(numOne + numTwo); 
}

Vector4 Vector4::normalize()
{
	Vector4 temp;
	float fnorm;
	float fmag = getmagnitude();
	temp.m_fX = m_fX / fmag;
	temp.m_fY = m_fY / fmag;
}