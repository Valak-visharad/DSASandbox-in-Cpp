/*
twin prime conjecture, also known as Polignac's conjecture, 
in number theory, assertion that there are infinitely many twin primes, 
or pairs of primes that differ by 2. 
For example, 3 and 5, 5 and 7, 11 and 13, and 17 and 19 are twin primes.
*/
#include<iostream>
using namespace std;
int isprime(int x)
{
    if (x <= 1)
        return 0;
    else
        for (int i = 2; i < x / 2 + 1; i++)
        {
            if (x % i == 0)
                return 0;
        }
    return 1;
}

int main()
{
    int a, b;
    cout<<"\n\n\t\tTwin Prime Conjecture\n\t\tAuthor : Vilakshan";
    cout<<"\n\nStarting limit : ";
    cin>>a;
    cout<<"Terminating Limit : ";
    cin>>b;
    int n = b - a;
    int primes[n / 2], index = 0;
    int prime_conj[n / 2][2], index2 = 0;
    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            primes[index] = i;
            if (index > 0)
                {
                    if (primes[index - 1] + 2 == i)
                    {
                        prime_conj[index2][0] = primes[index - 1];
                        prime_conj[index2][1] = i;
                        index2++;
                    }
                }
            index++;
        }
    }
    cout<<"\n\n\t{Primes nos. in the given range}\n";
    for (int i = 0; i < index; i++)
        cout<<i + 1<<"-> "<<primes[i]<<"\n";
    cout<<"\n\t{Prime conjectures in the given range}\n";
    for (int i = 0; i < index2; i++)
        cout<<i + 1<<"-> "<<prime_conj[i][0]<<", "<<prime_conj[i][1]<<"\n";
    return 0;
}

