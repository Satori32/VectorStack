#include <iostream>
#include <vector>

//����́A�L���̎������ɂ��Ă̌��y�ł��B
//�V�[�N�t���X�^�b�N�Ɏv�H���v�b�V�����āA�������z�ł���悤�Ɋ�������̂ł��B
//���̊肢�������܂��悤�ɁB

//hmm, how i make vecstack like this...


template<class T>
class VecterStack {
public:

	const T& Peek() const {
		return V.back();
	}

	bool Pop() {
		V.pop_back();
		return true;
	}
	bool Push(const T& In) {
		V.push_back(In);
		return true;
	}

	const T& operator [](std::size_t Idx) const{
		return V[Idx];
	}

	typename std::vector<T>::const_iterator begin() const{
		return V.cbegin();
	}
	typename std::vector<T>::const_iterator end() const{
		return V.cend();
	}

protected:
	std::vector<T> V;
};

struct Thought {//not define yet. �K����`�E�E�E�BOrz
	int rune = 0;
	int prop19 = 0;
	int param21 = 0;
};

int main() {

	VecterStack<Thought> M;
	Thought T{ 0, };

	M.Push(T);
	T.rune = 2;
	M.Push(T);

	for (auto& o : M) {
		std::cout << o.rune << std::endl;
	}
	return 0;

}