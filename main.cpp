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

	for (unsigned int i = 3; i < x; i += 2) {
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
	int count = 0;  // 何回dを足したかを記憶する
	for(int i = 0; i < 10000; i++)
	{
		if (is_prime(num) == 1) {
			count++;
		}
		if (count == n)break;
		num += d;
	}
	return num;
};

int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	std::cout << nth_prime(179, 10, 203) << std::endl;
	std::cout << nth_prime(271, 37, 39) << std::endl;
	std::cout << nth_prime(103, 230, 1) << std::endl;
	std::cout << nth_prime(27, 104, 185) << std::endl;
	std::cout << nth_prime(253, 50, 85) << std::endl;
	std::cout << nth_prime(1, 1, 1) << std::endl;
	std::cout << nth_prime(9075, 337, 210) << std::endl;
	std::cout << nth_prime(307, 24, 79) << std::endl;
	std::cout << nth_prime(331, 221, 177) << std::endl;
	std::cout << nth_prime(259, 170, 40) << std::endl;
	std::cout << nth_prime(269, 58, 102) << std::endl;
	std::cin.get();
	return 0;

}