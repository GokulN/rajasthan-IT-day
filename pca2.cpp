#include <bits/stdc++.h>
using namespace std;
 
struct point
{
	float x,y,z,p;
	int val;
	int distance;
};
bool comparison(point a, point b)
{
    return (a.distance < b.distance);
}
float classifyAPoint(point arr[], int n, int k, point r)
{
   
    for (int i = 0; i < n; i++)
        arr[i].distance =
            sqrt((arr[i].x - r.x) * (arr[i].x - r.x) +
                 (arr[i].y - r.y) * (arr[i].y - r.y)+(arr[i].z - r.z) * (arr[i].z - r.z)+(arr[i].p - r.p) * (arr[i].p - r.p));
 
    
    sort(arr, arr+n, comparison);
 
    
    
    float freq1 = 0.0;     
    float freq2 = 0.0;     
    for (int i = 0; i < k; i++)
    {
        if (arr[i].val == 0)
            freq1++;
        else if (arr[i].val == 1)
            freq2++;
    }
    float c=(freq2/(freq1+freq2))*100;
	return c;
    
}
int main()
{

	int n=20;
	point arr[n];
	arr[0].x=1;
	arr[0].y=12;
	arr[0].z=3;
	arr[0].p=5;
	arr[0].val=1;

	arr[1].x=65;
	arr[1].y=62;
	arr[1].z=23;
	arr[1].p=56;
	arr[1].val=0;

	arr[2].x=12;
	arr[2].y=22;
	arr[2].z=35;
	arr[2].p=55;
	arr[2].val=0;

	arr[3].x=15;
	arr[3].y=14;
	arr[3].z=3;
	arr[3].p=2;
	arr[3].val=0;

	arr[4].x=13;
	arr[4].y=15;
	arr[4].z=76;
	arr[4].p=53;
	arr[4].val=1;

	arr[5].x=1;
	arr[5].y=40;
	arr[5].z=5;
	arr[5].p=6;
	arr[5].val=0;

	arr[6].x=1;
	arr[6].y=7;
	arr[6].z=9;
	arr[6].p=8;
	arr[6].val=1;

	arr[7].x=10;
	arr[7].y=62;
	arr[7].z=23;
	arr[7].p=55;
	arr[7].val=0;

	arr[8].x=14;
	arr[8].y=72;
	arr[8].z=63;
	arr[8].p=67;
	arr[8].val=0;
	
	arr[9].x=21;
	arr[9].y=22;
	arr[9].z=23;
	arr[9].p=25;
	arr[9].val=0;

	arr[10].x=22;
	arr[10].y=32;
	arr[10].z=87;
	arr[10].p=89;
	arr[10].val=0;

	arr[11].x=12;
	arr[11].y=1;
	arr[11].z=5;
	arr[11].p=7;
	arr[11].val=0;

	arr[12].x=22;
	arr[12].y=23;
	arr[12].z=54;
	arr[12].p=43;
	arr[12].val=1;

	arr[13].x=43;
	arr[13].y=65;
	arr[13].z=6;
	arr[13].p=56;
	arr[13].val=1;

	arr[14].x=10;
	arr[14].y=2;
	arr[14].z=30;
	arr[14].p=15;
	arr[14].val=10;

	arr[15].x=1;
	arr[15].y=12;
	arr[15].z=13;
	arr[15].p=15;
	arr[15].val=1;
	
	arr[16].x=1;
	arr[16].y=12;
	arr[16].z=30;
	arr[16].p=50;
	arr[16].val=0;

	arr[17].x=1;
	arr[17].y=12;
	arr[17].z=3;
	arr[17].p=5;
	arr[17].val=1;
	
	arr[18].x=10;
	arr[18].y=12;
	arr[18].z=13;
	arr[18].p=15;
	arr[18].val=1;

	arr[19].x=10;
	arr[19].y=12;
	arr[19].z=33;
	arr[19].p=52;
	arr[19].val=0;
	
	arr[20].x=1;
	arr[20].y=2;
	arr[20].z=23;
	arr[20].p=51;
	arr[20].val=0;
	
	 point r;
    		r.x = 11;
    	r.y = 12;
	r.z=15;
	r.p=43;
 
    // Parameter to decide groupr of the testing point
    int k = 5;
    std::cout<<"The probabilty of rainfall is: "<< classifyAPoint(arr, n, k, r);
    return 0;
	
}

