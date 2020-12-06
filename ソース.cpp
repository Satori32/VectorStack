#include <iostream>
#include <vector>

//これは、記憶の持ち方についての言及です。
//シーク付きスタックに思路をプッシュして、それを回想できるように願ったものです。
//私の願いが叶いますように。

//hmm, how i make vecstack like this...


template<class T>
class VectorStack {
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

struct Thought {//not define yet. 適当定義・・・。Orz
	int rune = 0;
	int prop19 = 0;
	int param21 = 0;
};

int main() {

	VectorStack<Thought> M;
	Thought T{ 0, };

	M.Push(T);
	T.rune = 2;
	M.Push(T);

	for (auto& o : M) {
		std::cout << o.rune << std::endl;
	}
	return 0;

}