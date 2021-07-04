/*
  少ーし疑問。
  座標…int より float が好ましいでしょうか？
  そんなこともない？
*/

#include<stdio.h>

/*
①x,yを持つVector2
  数値はpublic
  外部で設定して表示
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
//	printf("xは%d\nyは%d", vec2.x, vec2.y);
//}

/*
②x,yを持つVector2
　数値はprivate
  関数で設定して表示
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
//	printf("xは%d\n", vec2.Getx());
//	printf("yは%d",vec2.Gety());
//
//	return 0;
//}

/*
③x,y,zを持つVector3
  数値はprivate
  関数で設定して表示
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

	printf("xは%d\n", vec3.Getx());
	printf("yは%d\n",vec3.Gety());
	printf("zは%d\n", vec3.Getz());
}