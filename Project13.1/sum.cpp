//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// файл реалізації функції
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
#include <cmath>
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = x-1;
	S = a;
	do {
		n++;
		dod();// виклик процедури обчислення доданку
		a *= R;
		S += a;
	} while (abs(a) >= eps);
}