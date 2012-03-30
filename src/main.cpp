#include <iostream>
#include <time.h>
using namespace std;

#include "PrintLong.h"
#include "PasswordGenerator.h"

static const int secNUM = 25;
char sec[secNUM + 1] = { 0 };


int main()
{
	cout << sizeof(A) << endl;
#ifndef WIN32
    cout << my_max( 12345, -4) << endl;
#else
    cout << max( 12345, -4) << endl;
#endif

    //commit
	print(1024);


    srand( static_cast<unsigned int>( time( NULL ) ) );
	algorithm(sec, secNUM);

	for(int i = 0; i < secNUM; ++i)
	{
		if( i && (i % 5 == 0))
		{
			cout << "-";
		}

		cout << sec[i];
	}
	cout << endl;

	return 0;
}
