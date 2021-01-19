#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//struct stu
//{
//	char name[20];
//	int age;
//};

//结构体自引用
//struct stu
//{
//	char name[20];
//	int age;
//	struct stu* nest;
//};
//
//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;

//int main()
//{
//	struct stu s[] = { {"ww",12},{"liawi",11} };
//	//stu s1;
//	//struct stu s2;
//	printf("%s\n", (s+1)->name);
//	printf("%d\n", s[1].age);
//	return 0;
//}


//struct s
//{
//	char c1;
//	int n;
//	char c2;
//};
//
//#pragma pack(4)//修改默认对齐数
//struct S
//{
//	char c1;
//	char c2;
//	int n;
//};
//#pragma pack()//取消默认对齐数修改
//
////结构体内存对齐
//
////第一个成员放在结构体偏移量为0的地址处
////其他成员放在某个对齐数的整数倍处
//	//vs默认对齐数为8.
//	//某个对齐数=默认对齐数与成员类型大小的较小值。
////整个结构体大小为最大对齐数的整数倍
////如果嵌套了结构体，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体总大小是所有对齐数中最大那一个的整数倍
//
//
//int main()
//{
//	struct s s1 = { 0 };
//	printf("%d\n", sizeof(s1)); // 12
//	struct S s2 = { 0 };
//	printf("%d\n", sizeof(s2));//  8
//	return 0;
//}

#include<stddef.h>
//struct S
//{
//	char c;
//	int a;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));//offsetof是一个宏，用来计算偏移量
//	return 0;
//}


//位段_二进制位
//成员必须是 int 、unsigned int、 signed int或char（整型家族）
//位段成员名后边有一个冒号和一个数字
//位段的空间是按照需要以4个字节（int）或1个字节（char）的方式来开辟的，一次开辟4（int）个字节或1（char）个字节
//位段不能跨平台
//struct A
//{
//	int _a : 2;//a只需要2个二进制位就够了
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
////47bit -6字节
//int main()
//{
//	struct A a1;
//	printf("%d\n", sizeof(a1));
//	return 0;
//}


struct A
{
	char _a : 3;
	char _b :4 ;
	char _c : 5;
	char _d : 4;
};

int main()
{
	struct A a = {0};
	a._a = 10;
	a._b = 20;
	a._c = 3;
	a._d = 4;
	printf("%d\n", sizeof(a));
	return 0;
}
