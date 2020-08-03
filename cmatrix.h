#include <stdlib.h>
#include <math.h>
#include <stdio.h>

typedef struct Matrix matrix;

struct Matrix{
	double** A;
	int m;
	int n;
	double det;
	matrix* inv;
	matrix* T;
};


/*����ʽ*/
double hhlx(double** arr, int na);
/*��������*/
double** inv(double** a, int n);
/*�������*/
double** AB(double** a, int ma, int na, double** b, int mb, int nb);
/*����ת��*/
double** TA(double** a, int ma, int na);

/*����m��n���¾���*/
matrix* Mnew(int m, int n);
/*��ʼ������*/
void Minit(matrix* a);
/*�������a*/
void Mprintf(matrix* a);
/*����a����*/
matrix* Minv(matrix* a);
/*����a�����b���*/
matrix* Mmulti(matrix* a, matrix* b);
/*ת�þ���*/
matrix* Mtrans(matrix* a);
/*�ͷž���*/
void mfree(matrix* a);
void Mfree(matrix* a);
/*�������*/
matrix* Mplus(matrix* a, matrix* b);
/*�������*/
matrix* Mminus(matrix* a, matrix* b);
/*������*/
matrix* Mdotpro(matrix* a, matrix* b);
/*������*/
matrix* Mdiv(matrix* a, matrix* b);