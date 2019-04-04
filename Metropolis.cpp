#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include <cmath>

using std::cout;
using std::endl;

void MCMC(int N);
float norm(float x);


int main(){
    srand48(time(0));
    
    
}

void MCMC(int N)
{
    float antiguo = drand48() - 0.5;
    float propuesta;
    float r;
    int i;
    
    for(i=0; i<N,i++)
    {
        propuesta = antiguo + (drand48()-0.5);
        r = 1
        if(norm(propuesta)/norm(antiguo) < r)
        {
            r =norm(propuesta)/norm(antiguo);
        }
        if(r < rand48())
        {
            propuesta = antiguo;
        }
        cout << propuesta << endl;
        
        return 0;
    }
    
}

float norm(float x)
{
    argu = pow(x,2);
    return exp(-argu);
}