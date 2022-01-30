//ex-1-main
#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
using namespace std;
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */
int nth_prime(unsigned int a, unsigned int d, unsigned int n);
bool Prime_number(int x);

int main() {
	//素数判定チェック
	/*if (Prime_number(92809) == true)cout << "ok" << endl;
	else cout << "NG" << endl;
	cin.get();*/

	std::cout << nth_prime(367, 186, 151) << std::endl;
	std::cout << nth_prime(179,10,203) << std::endl;
	std::cout << nth_prime(271,37,39) << std::endl;

	// 以下、同様に、入出力例通りになるか確認せよ。
	cin.get();
	return 0;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int First_term = a; //初項
	int tolerance = d; //公差
	int Purpose = n; //目的

	int now = First_term;//現在項
	int count = 0;//素数の数

	while (true) {
		if (Prime_number(now) == true)count++;//素数ならカウント+1
		if (count == n) break;//目的の素数に達したら抜け
		now += tolerance;//公差の加算
	}
	return now;
}

//素数判定
bool Prime_number(int x) {
	for (int i = 2; x > i; i++) {
		if ((x%i) == 0) return false;
	}
	return true;
}
