//threads in c++

#include <thread>
#include <chrono>
#include <iostream>

int ip;
void userInputFunction() {
    // Wait for user input and process it
    std::cin>>ip;
}

void gameLoopFunction() {
    while (true) {
        
	// Update game state
	for(int i=0;i<100;i++){
	    std::this_thread::sleep_for(std::chrono::milliseconds(10));
	    std::cout<<i+ip<<" ";
	}
    }
}

int main() {
    std::thread userInputThread(userInputFunction);
    std::thread gameLoopThread(gameLoopFunction);
    gameLoopThread.join();
    userInputThread.join();
    return 0;
}
