#include <iostream>
#include "Bank.h"
#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>

using namespace std;
mutex mtx;
condition_variable cv;

Bank bank;

bool gyldig(int belop) { return bank.getSum() > belop; }

int teller = 0;
int sum = 0;

void consumer(int n) {


    mtx.lock();
    if(gyldig(n)) {

        bank.trekk(n);
        teller++;

        cout << "Consumer - " << teller << " - trakk - " << n << endl;
//    this_thread::sleep_for(chrono::seconds(1));
    }
    mtx.unlock();

}

void producer(int n) {


    mtx.lock();
    bank.addSum(n);
    teller++;
    cout << "Producer - " << teller << " - la til - " << n << endl;
  //  this_thread::sleep_for(chrono::seconds(1));
    mtx.unlock();

}

int main() {

    vector<thread> threads;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        if ((rand() % 2 + 1) == 1) {
            sum = (rand() % 50 + 1);
            thread consumer1(consumer, sum);
            threads.push_back(move(consumer1));
            //       consumer1.join();
        } else {
            //      std::thread producer(sum, std::ref(std::cout));
            sum = (rand() % 50 + 1);
            thread producer1(producer, sum);
            threads.push_back(move(producer1));
            //     producer1.join();
        }
//        this_thread::sleep_for(chrono::seconds(1));

        
    }
//    producer(10000);
//    terminate();
    for (auto &t : threads) {
        t.join();
    }
 //   terminate();
    return 0;
}

