#include "PID.h"
#include <iostream>


using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) 
{
	PID::Kp = Kp;
	PID::Ki = Ki;
	PID::Kd = Kd;

	cout << Kp << endl;
	cout << Ki << endl;
	cout << Kd << endl;
	
	p_error = 0.0;  
	i_error = 0.0;   
	d_error = 0.0;
	
	pre_cte = 0.0;
	acc_error = 0;
	times = 0;

}

void PID::UpdateError(double cte) {
	
	if (pre_cte==0) pre_cte=cte;
	
	p_error = cte;
	i_error +=cte;
	d_error = cte-pre_cte;
	acc_error += cte*cte;
	
	pre_cte = cte;
	times ++;
}

double PID::TotalError() {
	if(times % 1000 ==0){
		cout << acc_error <<endl;
	}

	return -Kp*p_error - Ki*i_error - Kd*d_error;
}





