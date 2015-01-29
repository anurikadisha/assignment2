


#include <sys/time.h>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

double get_cpu_time(){
    return (double)clock() / CLOCKS_PER_SEC;
}

int main()
{

double cpu0  = get_cpu_time();
int count=0;
string str; 
vector<int> vect;

int n,k,a,b,c,d;

getline(cin,str);

stringstream ss(str);

int i;

while (ss >> i)
{
    vect.push_back(i);

    if (ss.peek() == ','|| ss.peek() == ' ')
        ss.ignore();
}
n=vect.size();
for(i=0;i<n;i++)
cout <<vect[i]<<"\t";
cout<<"\n";
k=vect[0];

for ( a=1;a<n;a++)
	{ for ( b=1;b<n;b++)
		{for ( c=1;c<n;c++)
			{for ( d=1;d<n;d++)
				{if( vect[a] + vect[b] + vect[c]*vect[d] <= k)
				  {     count ++;
					cout <<"("<<vect[a]<<","<<vect[b]<<","<<vect[c]<<","<<vect[d]<<")"<<"\n";
			           }
				}
			}
		}
	}
double cpu1  = get_cpu_time();
cout << " There are "<<count << " tuples"<<endl;

cout <<"\nCPU Time :"<< cpu1-cpu0<< " seconds "<<endl;
return 0;
}
