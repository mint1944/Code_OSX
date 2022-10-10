#include <iostream>

// 定义一个类
class inlineFunction {
	public:
		// 创建内联函数
		inline int getRandomNumber();
};

int main(int argc, char* argv[]) {
	// 实例化类
	inlineFunction ilf;
	// 循环输出
	for(int x = 0; x < 10; x++) {
		std::cout << "the returned number is: " << ilf.getRandomNumber() << std::endl;
	}

	return 0;
}

// 函数实现
inline int inlineFunction::getRandomNumber() {
	return rand();
}