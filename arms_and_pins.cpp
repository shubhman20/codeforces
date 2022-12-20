/*Question on geometry:-
Amr loves Geometry. One day he came up with a very interesting problem.

Amr has a circle of radius r and center in point (x, y). He wants the circle center to be in new position (x', y').

In one step Amr can put a pin to the border of the circle in a certain point, then rotate the circle around that pin by any angle and finally remove the pin.

Help Amr to achieve his goal in minimum number of steps.

Input
Input consists of 5 space-separated integers r, x, y, x' y' (1 ≤ r ≤ 105,  - 105 ≤ x, y, x', y' ≤ 105), circle radius, coordinates of original center of the 
circle and coordinates of destination center of the circle respectively.

Output
Output a single integer — minimum number of steps required to move the center of the circle to the destination point.

Examples
input
2 0 0 0 4
output
1
input
1 1 1 4 4
output
3
*/

#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll  long long 

int main(){
    double r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    double dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    double ans = ceil(dist/(2*r));
    cout<<ans<<endl;
}
    
