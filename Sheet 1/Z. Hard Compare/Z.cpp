/*
 * Z.cpp
 *
 *  Created on: Jan 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long  A , B ,C ,D;
	cin >> A >> B >> C >> D;

	if(B * log(A) > D * log(C))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}




