#include "cmatrix.h"

int main()
{
	matrix* d;
	d = Mnew(2, 2);
	d->A[0][0] = 1;
	d->A[0][1] = 2;
	d->A[1][0] = 3;
	d->A[1][1] = 4;
	
	printf("����ľ���Ϊ��\n");
	Mprintf(d);
	matrix* dinv, * dt, * ddt, * ddinv;
	dinv = Minv(d);
	printf("������Ϊ��\n");
	Mprintf(dinv);
	dt = Mtrans(d);
	printf("����ת��Ϊ��\n");
	Mprintf(dt);
	ddt = Mmulti(d, dt);
	printf("������ת����ˣ�\n");
	Mprintf(ddt);
	ddinv = Mmulti(d, dinv);
	printf("�����������Ϊ��\n");
	Mprintf(ddinv);

	Mfree(d);
	Mfree(dt);
	Mfree(dinv);
	Mfree(ddt);
	Mfree(ddinv);

	return 0;
}