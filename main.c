#include "cmatrix.h"

int main()
{
	matrix* d;
	d = Mnew(3, 3);
	d->A[0][0] = 1;
	d->A[0][1] = 2;
	d->A[1][0] = 3;
	d->A[1][1] = 4;
	d->A[0][2] = 6.5;
	d->A[1][2] = 0;
	d->A[2][0] = 0;
	d->A[2][1] = 8;
	d->A[2][2] = 3.6;
	
	Minit(d);
	printf("����ľ���Ϊ��\n");
	Mprintf(d);
	printf("������Ϊ��\n");
	Mprintf(d->inv);
	printf("����ת��Ϊ��\n");
	Mprintf(d->T);

	printf("����ת�õ��棺\n");
	Mprintf(d->T->inv);
	printf("�������ת�ã�\n");
	Mprintf(d->inv->T);
	Mprintf("����ת�õ����ת�ã�\n");
	Mprintf(d->T->inv->T);
	printf("����ת�õ����ת�õ����ת�ã�\n");
	Mprintf(d->T->inv->T->inv->T);
	printf("��������棺\n");
	Mprintf(d->inv->inv);
	printf("ת�õ�ת�õ�����棺\n");
	Mprintf(d->T->T->inv->inv);
	printf("������ת�õ�ת�ã�\n");
	Mprintf(d->inv->inv->T->T);
	printf("���������ʽ��%f\n", d->det);
	printf("������������ʽ��%f\n", d->inv->det);
	printf("��������ת�õ�����ʽ��%f\n", d->inv->T->det);
	printf("�����ת�õ����ת�õ����ת�õ�����������ʽ��%f\n", d->T->inv->T->inv->T->inv->inv->det);
	printf("�����ת�õ��������ʽ��%f\n", d->T->inv->det);
	printf("��������ת�õ��������ʽ��%f\n", d->inv->T->inv->det);
	printf("�����ת�õ�����������ʽ��%f\n", d->T->inv->inv->det);

	Mfree(d);

	return 0;
}