#ifndef _VECTOR2_H_
#define _VECTOR2_H_

class Vector2
{
public:
	float m_fX;
	float m_fY;

	//ctor
	Vector2();
	//dtor
	~Vector2();
	
	//functions
	float getdotproduct(const Vector2 a_SecondVector);
	float getmagnitude();
	Vector2 normalize();
	
	//	something for linear interp

	//Operators
	Vector2 operator + ();
	Vector2 operator - ();
	Vector2 operator * ();
	Vector2 operator / (const Vector2 a_something);
	Vector2 operator = (const Vector2 a_something);
};

#endif