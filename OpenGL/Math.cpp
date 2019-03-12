#include "Math.h"


Matrix<float, 3, 3> CreateOrthoMatrix(const float left, const float right, const float up, const float down)
{
	Matrix<float, 3, 3> OrthoMatrix{ { 2.0f / (right + left) , 0.0f , 0.0f}, 
									 { 0.0f , 2.0f / (up + down) , 0.0f},
									 { -(right - left) / (right + left), -(up - down) / (up + down), 1.0f} };
	return OrthoMatrix;
}

Matrix<float, 3, 3> TranslationMatrix::CreateTranslationMatrix3(float xTrans, float yTrans)
{
	Matrix<float, 3, 3> Tmatrix{ {1 , 0, 0 }, {0, 1, 0}, {xTrans, yTrans, 1} };
	return Tmatrix;
}


Matrix<float, 4, 4> CreateTranslationMatrix4(float xTrans, float yTrans, float zTrans)
{
	Matrix<float, 4, 4> Tmatrix{ {1 , 0, 0, 0 }, {0, 1, 0, 0}, {0, 0, 1, 0}, {xTrans, yTrans, zTrans, 1} };
	return Tmatrix;
}


Matrix<float, 3, 3> CreateScaleMatrix3(float xScale, float yScale)
{
	Matrix<float, 3, 3>Smatrix{ {xScale, 0, 0 }, {0, yScale, 0}, {0, 0, 1} };
	return Smatrix;
}


Matrix<float, 4, 4> CreateScaleMatrix4(float xScale, float yScale, float zScale)
{
	Matrix<float, 4, 4> Smatrix{ {xScale , 0, 0, 0 }, {0, yScale, 0, 0}, {0, 0, zScale, 0}, {0, 0, 0, 1} };
	return Smatrix;
}


Matrix<float, 3, 3> CreateRotationMatrix3(float angle)
{
	Matrix<float, 3, 3> Rmatrix{ {cos(angle), sin(angle),  0 }, {-sin(angle), cos(angle), 0}, {0, 0, 1} };
	return Rmatrix;
}


Matrix<float, 4, 4> CreateRotationMatrix4(float angle)
{
	Matrix<float, 4, 4> Rmatrix{ {1 , 0, 0, 0 }, {0, cos(angle), -sin(angle), 0}, {0, sin(angle), cos(angle), 0}, {0, 0, 0, 1} };
	return Rmatrix;
}