#ifndef _VECTOR4_H_
#define _VECTOR4_H_

class Vector4
{
public:
	float m_fX;
	float m_fY;

	//ctor
	Vector4();
	//dtor
	~Vector4();
	
	//functions
	float getdotproduct(const Vector4 a_SecondVector);
	float getmagnitude();
	Vector4 normalize();
	
	//	something for linear interp

	//Operators
	Vector4 operator + ();
	Vector4 operator - ();
	Vector4 operator * ();
	Vector4 operator / (const Vector4 a_something);
	Vector4 operator = (const Vector4 a_something);
};

#endif