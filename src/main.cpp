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