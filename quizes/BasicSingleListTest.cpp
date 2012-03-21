#include <iostream>
#include <SinglyLinkedList.h>
#include <map>

using namespace std;

class ListTest {
public:

    void testCase0() {
        SinglyLinkedList<int> list;
        list.addData(0, 0);
        list.addData(10, 1);
        list.addData(3, 0);
        list.printList();

        cout<<list.length()<<endl;
    }

    void testCase1() {
        map<int, string> TestMap;

        TestMap[1] = "AAA ";
        TestMap[11] = "Really?";

        for(map<int, string>::iterator itr=TestMap.begin(); itr!=TestMap.end(); itr++){
            cout<<(*itr).first<< " " <<itr->second<<endl;
        }
    }

    void testCase2() {

    }

    void runTest(int testCase){
        switch(testCase) {
        case 0: testCase0(); break;
        case 1: testCase1(); break;
        case 2: testCase2(); break;
        default: cerr<< "No such test case!!!" << endl; break;
        }
    }
};


int main()
{
    cout << "Start the testing!!!" << endl;

    for (int i = 0; i < 3; ++i) {
        ListTest test;
        test.runTest(i);
    }
    return 0;
}

