#include<iostream>
#include<thread>
#include<list>
#include<mutex>

using namespace std;

    static const int num_threads = 10;
	static const int num_value = 100000;
static list<int> a;
	mutex g_lock;

    void call_from_thread(int tid) {
		g_lock.lock();
		cout<< "Launched by thread "<<tid<<endl;
		for(int n = 0; n <num_value / num_threads; n++){
			list<int>::iterator alfa_it = a.begin();
			a.erase(a.begin());
		}
		g_lock.unlock();
    }

int main() {
thread t[num_threads];

		for (int i = 0; i<num_value; ++i) {
a.push_back(i);
        }

        for (int i = 0; i<num_threads; ++i) {
            t[i] = thread(call_from_thread, i);
}

cout<< "Launched from the main\n";

        for (int i = 0; i<num_threads; ++i) {
			t[i].join();
        }

		system("pause");
return 0;
    }
