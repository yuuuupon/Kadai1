/*
  ���[���^��B
  ���W�cint ��� float ���D�܂����ł��傤���H
  ����Ȃ��Ƃ��Ȃ��H
*/

#include<stdio.h>

/*
�@x,y������Vector2
  ���l��public
  �O���Őݒ肵�ĕ\��
*/

//struct Vector2
//{
//public:
//	int x;
//	int y;
//};
//
//int main()
//{
//	Vector2 vec2;
//	vec2.x = 1;
//	vec2.y = 2;
//
//	printf("x��%d\ny��%d", vec2.x, vec2.y);
//}

/*
�Ax,y������Vector2
�@���l��private
  �֐��Őݒ肵�ĕ\��
*/

//struct Vector2
//{
//public:
//	int Setx(int num)
//	{
//		return x = num;
//	}
//
//	int Sety(int num2)
//	{
//		return y = num2;
//	}
//
//	int Getx()
//	{
//		return x;
//	}
//
//	int Gety()
//	{
//		return y;
//	}
//
//private:
//	int x;
//	int y;
//};
//
//int main()
//{
//	Vector2 vec2;
//	vec2.Setx(3);
//	vec2.Sety(4);
//	printf("x��%d\n", vec2.Getx());
//	printf("y��%d",vec2.Gety());
//
//	return 0;
//}

/*
�Bx,y,z������Vector3
  ���l��private
  �֐��Őݒ肵�ĕ\��
*/

struct Vector3
{
	int Setx(int num1)
	{ 
		return x = num1; 
	}

	int Sety(int num2) 
	{ 
		return y = num2; 
	}

	int Setz(int num3)
	{
		return z = num3;
	}

	int Getx()
	{
		return x;
	}

	int Gety()
	{
		return y;
	}

	int Getz()
	{
		return z; 
	}

private:
	int x;
	int y;
	int z;
};

int main()
{
	Vector3 vec3;
	vec3.Setx(5);
	vec3.Sety(6);
	vec3.Setz(7);

	printf("x��%d\n", vec3.Getx());
	printf("y��%d\n",vec3.Gety());
	printf("z��%d\n", vec3.Getz());
}