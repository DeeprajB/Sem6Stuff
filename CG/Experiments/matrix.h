#include<iostream>

using namespace std;
class matrix;
matrix matmul(matrix a, matrix b);

class matrix{
	public:
	int i,j;
	float **values;

	matrix(int I, int J){
		i=I;j=J;
		int x,y;
		values=(float**)malloc(sizeof(float*)*i);
		for(x=0;x<i;x++){
			values[x]=(float*)malloc(sizeof(float)*j);
			for(y=0;y<j;y++){
				values[x][y]=0;	
			}
		}
	}

	matrix(int I, int J, float vals[]){
		i=I;
		j=J;
		int x,y;
		values=(float**)malloc(sizeof(float*)*i);
		for(x=0;x<i;x++){
			values[x]=(float*)malloc(sizeof(float)*j);
			for(y=0;y<j;y++){
				values[x][y]=vals[x*j+y];	
			}
		}
	}
	void display(){
		int x,y;
		for(x=0;x<i;x++){
			for(y=0;y<j;y++){
				cout<<values[x][y]<<", ";
			}
			cout<<"\b\b"<<endl;
		}
	}
	float* operator[](int index){
		return values[index];
	}
};

matrix matmul(matrix a, matrix b){
	if(a.j!=b.i){
		cout<<"Matmul error: Matrices have incorrect dimensions"<<endl;
		exit(0);
	}
	matrix c(a.i,b.j);
	for (int i = 0; i < a.i; i++)
		for (int k = 0; k < a.j; k++)
			for (int j = 0; j < b.j; j++)  
				c.values[i][j] += a.values[i][k] * b.values[k][j];
	return c;
}