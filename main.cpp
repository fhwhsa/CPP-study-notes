#include "myComplex.h"

void myComplex_test() 
{
    // 正负号测试
    cout << "myComplex测试：\n";
    myComplex testObj1(1, 1);
    cout << "初始值：" << testObj1 << "\n";
    cout << "取正值：" << +testObj1 << "\n";
    cout << "取负值：" << -testObj1 << "\n\n";

    // 加法测试
    cout << "初始值：" << testObj1 << "\n";
    cout << "加一：" << testObj1 + 1 << "\n";
    cout << "一加：" << 1 + testObj1 << "\n";
    cout << "加自己" << testObj1 + testObj1 << "\n\n";

    // 减法测试
    cout << "初始值：" << testObj1 << "\n";
    cout << "减一：" << testObj1 - 1 << "\n";
    cout << "一减：" << 1 - testObj1 << "\n";
    cout << "减自己" << testObj1 - testObj1 << "\n\n";

    // +=测试
    cout << "初始值：" << testObj1 << "\n";
    testObj1 += 1; 
    cout << "+=1：" << testObj1 << "\n";
    testObj1 += testObj1;
    cout << "+=自己" << testObj1 << "\n\n";

    // -=测试
    cout << "初始值：" << testObj1 << "\n";
    testObj1 -= 1; 
    cout << "-=1：" << testObj1 << "\n";
    testObj1 -= testObj1;
    cout << "-=自己" << testObj1 << "\n\n";

    // ==测试
    cout << "初始值：" << testObj1 << "\n";
    cout << "与1比：" << (testObj1 == 1) << "\n";
    cout << "比1：" << (1 == testObj1) << "\n";
    cout << "比自己" << (testObj1 == testObj1) << "\n\n";

    // 共轭测试
    cout << "初始值：" << testObj1 << "\n";
    cout << "共轭：" << testObj1.conj() << "\n\n";
}

int main() 
{
    myComplex_test();
}