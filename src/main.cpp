#include <iostream>

#define CPP2_PRIME_UPPER_LIMIT 1000000  // �T������l�̏���l
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
	int num;  // �����la��������
	while (num < 10000)
	{
		num += d;
		std::cout << num << "," << std::endl;
	}
};

int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	return;

}