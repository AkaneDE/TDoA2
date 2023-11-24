
#include <iostream>
#include <vector>
#include <cmath>
#include <Eigen/Dense>
#include "TDoA.h"
int main()
{
    double c = 3120.77;

    double t1 = sqrt(20)-5;
    double t2 = 5 - sqrt(41);
    double t3 = sqrt(41) - sqrt(20);
    cout << t1 << " " << t2 << " " << t3 << endl;
    double x1 = 0;  double y1 = c; double z1 = 0;
    double x2 = 0;  double y2 = 0; double z2 = 0;
    double x3 = 0;  double y3 = -2*c; double z3 = 0;
    TDoA_Chan tdc(t1, t2, t3, x1, x2, x3, y1, y2, y3, z1, z2, z3);
    MatrixXd rtfyu = tdc.DoTDoA();
    cout << rtfyu(0, 0) << " " << rtfyu(1, 0) << " " << rtfyu(2, 0) << endl;
}

