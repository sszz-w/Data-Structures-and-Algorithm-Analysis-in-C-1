#include"search_tree.h"
using namespace std;

int main()
{
	SearchTree t;
	int N;
	cin >> N;
	t.MakeRandomSearchTree(N);
	cout << t << endl;

	t.PrintRange(1, 3);
	cout << endl;

	SearchTree t2;
	int h;
	cin >> h;
	t2.PerfectTree(h);
	cout << t2 << endl;
	
	t2.LevelOrderTraverse();
	cout << endl;
	system("pause");
}

//intput:
//5
//3

//output:
//4 2 1 3 5
//1 2 3
//8 4 2 1 3 6 5 7 12 10 9 11 14 13 15
//8 4 12 2 6 10 14 1 3 5 7 9 11 13 15

//int main()
//{
//	SearchTree t;
//	cin >> t;
//	cout << t << endl;
//	cout << t.Max() << " " << t.Min() << endl;
//	t.Delete(5);
//	cout << t << endl;
//	t.MakeEmpty();
//	cout << boolalpha << t.IsEmpty() << endl;
//	cout << (t.Find(2) ? "true" : "false") << endl;
//	t.Insert(2);
//	Position p = t.Find(2);
//	cout << t.Retrieve(p) << endl;
//	SearchTree t2(t);
//	t2.Insert(3);
//	cout << t2 << endl;
//	t2.MakeEmpty();
//	cout << boolalpha << t2.IsEmpty() << endl;
//	cout << boolalpha << t.IsEmpty() << endl;
//	system("pause");
//}

//input:
//2 4 3 5 1
//^ Z

//output:
//2 1 4 3 5
//5 1
//2 1 4 3
//true
//false
//2
//2 3
//true
//false
