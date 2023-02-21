#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	
	double upper = min(R1.y,R2.y) ;
	double lower = max(R1.y - R1.h,R2.y - R2.h) ;
	double overlabh = upper - lower ;

	double x1 = max(R1.x,R2.x);
	double x2 = min(R1.x + R1.w,R2.x + R2.w);
	double overlabw = x2 - x1 ;
	if(overlabw <=0 || overlabh <= 0 ){
	return 0 ;
	};
    double sum = overlabh * overlabw ;
    
    
	return sum ;
	
}
