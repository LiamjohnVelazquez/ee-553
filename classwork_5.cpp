/*
1. The main() function has been given below, don't change it:
     Section 1: Create constructor/s to create the vec_3d objects.
     Section 2: Overload constructors.
     Section 3: Compute the operator overload for subtraction and addition and dot 
operators as a function inside the class.
     Section 5: Overload the << operator to output formatted Vec_3d objects.
                Example format: (1.0,2.5,3.5)
2.  General Grading Breakdown:
    Class data members: 10%
    Constructor/s: 20%
    Operator +: 20%
    Operator -: 10%
    Operator dot: 10%
    Operator <<: 20%
    Unmodified Main Function: 10%
*/
#include <iostream>
#include <vector>
using namespace std;
class Vec_3d {



public:
double x,y,z;

Vec_3d (double x =0, double y = 0, double z =0)
{
    x = x;
    y = y;
    x = z;

}


Vec_3d operator+ (const Vec_3d& vother)
{
    Vec_3d resVec;
    resVec.x = x + vother.x;
    resVec.y = y + vother.y;
    resVec.z = z + vother.z;
    return resVec;

}

friend double  dot(Vec_3d vone,Vec_3d vtwo);
friend ostream &operator<<(ostream &ostr, Vec_3d& vector);

};
ostream &operator<<(ostream &ostr, Vec_3d& vector) {
    ostr << vector.x << ", " << vector.y << ", " << vector.z << endl;
    return ostr;
}


double  dot(Vec_3d vone,Vec_3d vtwo);
{
double result;
result = vone.x * vtwo.x + vone.y * vtwo.y + vone.z * vtwo.z;
return result;

}
int main(){
    cout << "Hello " <<  endl;
    Vec_3d v1(1.5,2.2,-3.1);
    Vec_3d v2(-2.2,1.2);
    Vec_3d v3(5.6);
    Vec_3d v4;
    Vec_3d v5 = v1+v2;
    Vec_3d v6 = v1-v3;
    Vec_3d v7 = dot(v1,v2);
    Vec_3d v8 = -v2;
    cout << v1 << '\n' << v2 << '\n' << v3 << '\n' << v4 << '\n' << v5 << '\n' <<
         v6 << '\n' << v7 << '\n' << v8 << '/n';
}
