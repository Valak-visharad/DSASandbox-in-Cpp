#include<iostream>
#include<cstring>
using namespace std;

void define_sizes(char *x, char digs[4])
{
        int size = strlen(digs);
        for (int i = 0; i < size; i++)
        {
                int tmp = digs[i];
                if (tmp == 7 || tmp == 9)
                        x[i] = 4;
                else
                        x[i] = 3;
        }
        for (int j = size; j < 4; j++)
                *(x + j) = 0;
}
int main()
{
	char digs[4], sizes[4];
	cout<<"digits : ";
	cin>>digs;
        define_sizes(sizes, digs);
        //cout<<sizes;
        char maps[] = {' ', ' ', 'a', 'd', 'g', 'j', 'm', 'p', 't', 'w'};
	cout<<"[";
        for (int i = 0; i < sizes[0]; i++)
        {
                cout<<"\""<<char(int(maps[digs[0]]) + i);
                if (sizes[1] == 0)
                        cout<<"\""<<" , ";
                for (int j = 0; j < sizes[1]; j++)
                {
                        cout<<char(int(maps[digs[1]]) + j);
                        if (sizes[2] == 0)
                                cout<<"\""<<" , ";
                        for (int k = 0; k < sizes[2]; k++)
                        {
                                cout<<char(int(maps[digs[2]]) + k);
                                if (sizes[3] == 0)
                                        cout<<"\""<<" , ";
                                for (int l = 0; l < sizes[3]; l++)
                                {
                                        cout<<char(int(maps[digs[3]]) + l);
                                        cout<<"\""<<" , ";
                                }
                        }
                }
        }
	cout<<"]";

	return 0;
}
