//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// ���� ��������� �������
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������
#include <cmath>
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = x-1;
	S = a;
	do {
		n++;
		dod();// ������ ��������� ���������� �������
		a *= R;
		S += a;
	} while (abs(a) >= eps);
}