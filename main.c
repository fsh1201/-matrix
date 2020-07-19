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
	matrix* dinv, * dt, * ddt, * ddinv, * dprd, * dmd, * ddd, * dpld;
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
	dprd = Mdotpro(d, d);
	printf("������Ϊ��\n");
	Mprintf(dprd);
	ddd = Mdiv(d, d);
	printf("������Ϊ��\n");
	Mprintf(ddd);
	dmd = Mminus(d, d);
	printf("�������Ϊ��\n");
	Mprintf(dmd);
	dpld = Mplus(d, d);
	printf("�������Ϊ��\n");
	Mprintf(dpld);

	Mfree(d);
	Mfree(dt);
	Mfree(dinv);
	Mfree(ddt);
	Mfree(ddinv);
	Mfree(dprd);
	Mfree(ddd);
	Mfree(dmd);
	Mfree(dpld);

	return 0;
}