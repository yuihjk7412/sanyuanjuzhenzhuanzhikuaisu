#define MAX 1250  


#pragma once
class transfer
{
public:
	
	transfer();
	~transfer();
	typedef    int     Status;
	typedef    int     ElemType;
	typedef struct {
		int   i, j;         
		ElemType e;       
	}Triple;
	typedef struct {
		Triple   data[MAX + 1];         
		int      mu, nu, tu;            
	}TSMatrix;
	TSMatrix M;
	TSMatrix T;
	int transfermatrix(TSMatrix M, TSMatrix &T);
};

