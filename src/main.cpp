#include <iostream>

#define CPP2_PRIME_UPPER_LIMIT 1000000  // 探索する値の上限値
/**
*is_prime
*与えられた正整数xに対して素数かどうか判定する。
*/
bool is_prime(unsigned int x) {
	if (x < 2)return false;
	else if (x == 2)return false;
	else if (x % 2 == 0)return false;

	for (int i = 3; i < x; i += 2) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
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
// 与えられた整数a,d,nに対して、この等差数列に含まれるn番目の素数を返す
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int num = a;  // 初期値aを代入する関数num
	int count = 0;  // 
	for(int i = 0; i < 100; i++)
	{
		std::cout << num << std::endl;

		num += d;
	}
};

int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	std::cin.get();
	return;

}