
#include <string>

class Rectangle
{
private:
	float length;
	float width;

public:
	void rectangle(float l, float w)
	{
		std::cout << "your length is :" << l;
		std::cout << "your width is :" << w;


	}
	void setLength(float l)
	{
		length = l;
	}
	void setWidth(float w)
	{
		width = w;
	}
	float perimeter(float l, float w)
	{
		float peri;
		l = length;
		w = width;
		peri = (2 * l) + (2 * w);
		return peri;
	}
	float area(float l, float w)
	{
		float area1;
		l = length;
		w = width;

		area1 = l * w;
		return area1;

	}
	float diagLength(float l, float w)
	{
		l = length;
		w = width;
		float length;
		length = sqrt(pow(l, 2) + pow(w, 2));
		return length;
	}

};