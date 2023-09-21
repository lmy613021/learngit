//插入排序
#include<iostream>
using namespace std ;

int f[10]={10,100,1000,10000,100000,1000000} ;
int *a=new int [1000000];

void sort(int n)
{ 
	//随机产生样本 
	for(int i = 1 ; i <= n ; i++) 
	a[i]=rand() ;
	int temp;
	// 插入排序步骤
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = i ; j >= 1 ; j--)
		{
			if(a[j]<a[j-1]) 
			{
				temp=a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
			else
			break ;
		}
	}
}
void solve(int n)
{
	clock_t start,end;
	start=clock();
	
	for(int i = 1 ; i <= 20 ; i++) sort(n) ;
	
    end=clock();
	cout<<"n="<<n<<" 程序运行时间";
	cout<<(double)(end-start)/20/CLOCKS_PER_SEC<<" s"<<endl;
}

int main()
{
	for(int i=0 ; i < 6 ; i++)
	solve(f[i]) ;
    cout<<"linmingyao"<<endl;
    cout<<"2021150216"<<endl;
	return 0 ;
}
/*INSERTIONSORT(A):
1 forj = 2 to A. length
2        key= A[j]
3        // Insert A[j] into the sorted sequenceA[1..j一1] 

4        i =  j - 1
5      whilei> 0 and A[门> key
6                A[i+1]= A[i]
7                i=i- 1
8        A[i+ 1]= key
*/
