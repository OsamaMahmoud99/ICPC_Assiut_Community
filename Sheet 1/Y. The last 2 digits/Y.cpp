/*
 * Y.cpp
 *
 *  Created on: Jan 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A , B , C , D;
    cin >> A >> B >> C >> D;

    A%=100 , B%=100 , C%=100, D%=100;   // to prevent overflow

    long long  Val = A * B * C * D;
	long long  Res = (Val)%100;

	if(Res < 10)
		cout<<0<<Res;
	else
	    cout << Res;
	return 0;
}




