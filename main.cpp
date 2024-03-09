#include "myComplex.h"
#include "myString.h"
#include "myFraction.h"
#include "myPointer.h"

void myComplex_test() 
{
    cout << "myComplex测试：\n";
    // 正负号测试
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

void myString_test()
{
    cout << "myString测试：\n";
    
    myString* testObj1 = new myString("hello");
    // 拷贝构造测试
    myString testObj2(*testObj1);
    cout << "删除的值：" << testObj2 << "\n";
    delete testObj1;
    cout << "删除后：" << testObj2 << "\n\n";
    

    // 赋值构造测试
    testObj1 = new myString;
    cout << "赋值前：" << *testObj1 << "\n";
    *testObj1 = testObj2;
    cout << "赋值后：" << *testObj1 << "\n\n";

    // 长度和空测试
    cout << "hello的长度和空测试：" << testObj1->length() << " " << testObj1->empty() << "\n\n";

    // +测试
    cout << "初始值：" << *testObj1 << " " << testObj2 << "\n";
    cout << "相加1：" << *testObj1 + testObj2 << "\n";
    cout << "相加2：" << *testObj1 + "world" << "\n\n";


    // += 测试
    cout << "初始值：" << *testObj1 << "\n";
    *testObj1 += testObj2;
    cout << "+=1：" << *testObj1 << "\n";
    *testObj1 += "world";
    cout << "+=2：" << *testObj1 << "\n\n";

    delete testObj1;
}

void myFraction_test()
{
    cout << "myFraction测试：\n";
    myFraction<float> testObj1(3, 5), testObj2(1, 10);
    cout << "初始值：" << testObj1 << "\n";
    cout << "分子：" << testObj1.getn() << "\n";
    cout << "分母：" << testObj1.getd() << "\n";
    cout << "加0.5：" << testObj1 + 0.5 << "\n";
    cout << "加1/10：" << testObj1 + testObj2 << "\n\n";
}


void myPointer_test()
{
    myPointer<tmp> p(new tmp());
    p->method();
    (*p).method();
}

int main() 
{
    // myComplex_test();
    // myString_test();
    myFraction_test();
    // myPointer_test(); cout << "\n";
}
