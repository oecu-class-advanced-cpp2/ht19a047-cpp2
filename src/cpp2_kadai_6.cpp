//cpp2_kadai_6
#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B
using namespace std;
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
int nth_prime(unsigned int a, unsigned int d, unsigned int n);
bool Prime_number(int x);

int main() {
	//�f������`�F�b�N
	/*if (Prime_number(92809) == true)cout << "ok" << endl;
	else cout << "NG" << endl;
	cin.get();*/

	std::cout << nth_prime(367, 186, 151) << std::endl;
	std::cout << nth_prime(179,10,203) << std::endl;
	std::cout << nth_prime(271,37,39) << std::endl;

	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	return 0;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int First_term = a; //����
	int tolerance = d; //����
	int Purpose = n; //�ړI

	int now = First_term;//���ݍ�
	int count = 0;//�f���̐�

	while (true) {
		if (Prime_number(now) == true)count++;//�f���Ȃ�J�E���g+1
		if (count == n) break;//�ړI�̑f���ɒB�����甲��
		now += tolerance;//�����̉��Z
	}
	return now;
}

//�f������
bool Prime_number(int x) {
	for (int i = 2; x > i; i++) {
		if ((x%i) == 0) return false;
	}
	return true;
}
