#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//struct stu
//{
//	char name[20];
//	int age;
//};

//�ṹ��������
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
//#pragma pack(4)//�޸�Ĭ�϶�����
//struct S
//{
//	char c1;
//	char c2;
//	int n;
//};
//#pragma pack()//ȡ��Ĭ�϶������޸�
//
////�ṹ���ڴ����
//
////��һ����Ա���ڽṹ��ƫ����Ϊ0�ĵ�ַ��
////������Ա����ĳ������������������
//	//vsĬ�϶�����Ϊ8.
//	//ĳ��������=Ĭ�϶��������Ա���ʹ�С�Ľ�Сֵ��
////�����ṹ���СΪ����������������
////���Ƕ���˽ṹ�壬Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ���ܴ�С�����ж������������һ����������
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
//	printf("%d\n", offsetof(struct S, c));//offsetof��һ���꣬��������ƫ����
//	return 0;
//}


//λ��_������λ
//��Ա������ int ��unsigned int�� signed int��char�����ͼ��壩
//λ�γ�Ա�������һ��ð�ź�һ������
//λ�εĿռ��ǰ�����Ҫ��4���ֽڣ�int����1���ֽڣ�char���ķ�ʽ�����ٵģ�һ�ο���4��int�����ֽڻ�1��char�����ֽ�
//λ�β��ܿ�ƽ̨
//struct A
//{
//	int _a : 2;//aֻ��Ҫ2��������λ�͹���
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
////47bit -6�ֽ�
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
