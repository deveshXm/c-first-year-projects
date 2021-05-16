#include <bits/stdc++.h>
#include <cmath>
#include <unistd.h>
using namespace std;

class VECTOR{
	private:
	float x1,y1,z1;
	float x2,y2,z2;
	float x3,y3,z3;

	public:	
	VECTOR(){
		x1=0;
		y1=0;
		z1=0;
		x2=0;
		y2=0;
		z2=0;
		x3=0;
		y3=0;
		z3=0;		
	}	
	VECTOR(float xa,float ya,float za, float xb, float yb, float zb,float xc, float yc,float zc){
		x1=xa;
		y1=ya;
		z1=za;
		x2=xb;
		y2=yb;
		z2=zb;
		x3=xc;
		y3=yc;
		z3=zc;
	}	          
	void vector_sum(void);			     //gives vector sum
	void vector_dot_product(void);		 //gives vector dot product
	void vector_cross_product(void);	 //gives vector cross product
	void vector_mod(void);				 //gives modulus of vector
	void vector_distance(void);			 //gives distance between two vectors
	void vector_triple_dot_product(void);//gives triple dot product of vectors
	void vector_triple_cross_product(void);	 //gives triple cross product of vectors
	void vector_direction_angle(void);	 //gives direction angle of vector
};

//MAIN FUNCTION
int main(){
	while(true){
	cout<<"                     PHYSICS PROJECT --->> VECTOR CALCULATOR            "<<endl;
	cout<<endl;
	cout<<"          DR. B.R. AMBEDKAR NATIONAL INSTITUTE OF TECHNOLOGY, JALANDHAR       "<<endl;
	cout<<endl;
	cout<<"                              MADE BY DEVESH MEENA                "<<endl;
	cout<<endl;
	cout<<"   To use this calculator first enter two vectors \n   Just enter the x , y , z value with a space in between then PRESS ENTER"<<endl;
	cout<<"   Here is an example ---->   2 3 4"<<endl;
	cout<<"   If it is a 2d vector set z axis as 0 , here is an example ------>  2 3 0"<<endl;
	cout<<"   Loading......"<<endl;
	sleep(2);//sleeps for 3 second
	cout<<endl;
	cout<<endl;
	
	sleep(1);
	cout<<endl;
	cout<<endl;
	cout<<"   Here is a list of Operations which can be performed"<<endl;
	cout<<endl;
	cout<<"   Enter '1' to get Sum of vectors"<<endl;
	cout<<"   Enter '2' to get Dot product of vectors"<<endl;
	cout<<"   Enter '3' to get Cross product of vectors"<<endl;
	cout<<"   Enter '4' to get Modulus of vectors"<<endl;
	cout<<"   Enter '5' to get Distance between two vectors"<<endl;
	cout<<"   Enter '6' to get Triple dot product of 3 vectors"<<endl;
	cout<<"   Enter '7' to get Triple cross product of 3 vectors"<<endl;
	cout<<"   Enter '8' to get Direction Angle(if 2D vector) or Direction Cosines(if 3D vector) of vectors"<<endl;
	int ans;	
	cout<<"   Enter Answer: ";
	cin>>ans;		
	cout<<"   Enter First Vector : ";
	float arr[3][3];
	for(int i=0;i<1;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}		
	}		
	if(ans !=8 && ans !=4){
		cout<<endl;
		cout<<"   Enter Second Vector : ";	
		for(int i=1;i<2;i++){
			for(int j=0;j<3;j++){
				cin>>arr[i][j];
			}		
		}
	}
	
		
	if((ans==6 || ans==7 )&& ans!=8 && ans !=4){
		cout<<endl;				
		cout<<"   Enter Third Vector : ";
		for(int i=2;i<3;i++){
			for(int j=0;j<3;j++){
			cin>>arr[i][j];
			}		
		}
	}
	VECTOR obj(arr[0][0],arr[0][1],arr[0][2], arr[1][0], arr[1][1], arr[1][2],arr[2][0],arr[2][1], arr[2][2]);
	if(ans==1){
		obj.vector_sum();
	}
	if(ans==2){
		obj.vector_dot_product();
	}
	if(ans==3){
		obj.vector_cross_product();
	}
	if(ans==4){
		obj.vector_mod();
	}
	if(ans==5){
		obj.vector_distance();
	}
	if(ans==6){
		obj.vector_triple_dot_product();
	}
	if(ans==7){
		obj.vector_triple_cross_product();
	}
	if(ans==8){
		obj.vector_direction_angle();
	}
	cout<<"   Do you  want to continue"<<endl;
	char end;
	cout<<endl;
	cout<<"   Press Y to continue else press N"<<endl;	
	cin>>end;
	if(end == 'Y' || end=='y'){
		continue;
	}
	else{
		break;
	}
}


return 0;


}

// FUNCTIONS 
void VECTOR::vector_sum(void){
	float sum1 = x1 + x2;
	float sum2 = y1 + y2;
	float sum3 = z1 + z2;
	cout<<"   The vector sum vector v1 and v2 is :  "<<sum1<<"i + "<<sum2<<"j + "<<sum3<<"k"<<endl;
}
void VECTOR::vector_dot_product(void){
	float product1 = x1 * x2;
	float product2 = y1 * y2;
	float product3 = z1 * z2;
	float sum = product1 + product2 + product3;
	cout<<"   The dot product of vector v1 and v2 is :  "<<sum<<endl;
}
void VECTOR::vector_cross_product(void){
	float cross1 = (y1*z2 - z1*y2);
	float cross2 = -(x1*z2 - z1*x2);
	float cross3 = (x1*y2 - y1*x2);
	cout<<"   The cross product of vector v1 and v2 is :  "<<cross1<<"i + "<<cross2<<"j + "<<cross3<<"k"<<endl;
}
void VECTOR::vector_mod(void){
	float mod1 = sqrt(pow(x1,2)+pow(y1,2)+pow(z1,2));	
	cout<<"   The mod of vector v1 :  "<<mod1<<endl;
}
void VECTOR::vector_distance(void){
	float ans = sqrt(pow(x1-x2,2) + pow(y1-y2,2) + pow(z1 - z2,2));
	cout<<"Distance between two vectors v1 and v2 is :"<<ans<<endl;
}
void VECTOR::vector_triple_dot_product(void){
	float x = (y1*z2 - z1*y2);
	float y = -(x1*z2 - z1*x2);
	float z = (x1*y2 - y1*x2);
	float product1 = x * x3;
	float product2 = y * y3;
	float product3 = z * z3;
	float sum = product1 + product2 + product3;
	cout<<"   The vector triple product of ((a x b).c) is :  "<<sum<<endl;
}
void VECTOR::vector_triple_cross_product(void){
	float cross1 = (y1*z2 - z1*y2);
	float cross2 = -(x1*z2 - z1*x2);
	float cross3 = (x1*y2 - y1*x2);
	float cross_a = (cross2*z3 - cross3*y3);
	float cross_b = -(cross1*z3 - cross3*x3);
	float cross_c = (cross1*y3 - cross2*x3);
	cout<<"   The vector triple cross product of 3 vectors ((a x b) x c) is :  "<<cross_a<<"i + "<<cross_b<<"j + "<<cross_c<<"k"<<endl;
}
void VECTOR::vector_direction_angle(void){
	float mod1 = sqrt(pow(x1,2)+pow(y1,2)+pow(z1,2));
	cout<<"   The direction cosines of vector are : "<<endl;
	cout<<"   alpha = cos(a)"<<x1/mod1<<endl;
	cout<<"   beta = cos(b)"<<y1/mod1<<endl;
	cout<<"   gama = cos(c)"<<z1/mod1<<endl;
}