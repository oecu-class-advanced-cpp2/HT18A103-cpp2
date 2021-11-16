#include <iostream>

#define CPP2_PRIME_UPPER_LIMIT 1000000  // �T������l�̏���l
/**
*is_prime
*�^����ꂽ������x�ɑ΂��đf�����ǂ������肷��B
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
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
*/
/* -------------------------------------------------------------- */
// �^����ꂽ����a,d,n�ɑ΂��āA���̓�������Ɋ܂܂��n�Ԗڂ̑f����Ԃ�
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int num = a;  // �����la��������֐�num
	int count = 0;  // ����d�𑫂��������L������
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