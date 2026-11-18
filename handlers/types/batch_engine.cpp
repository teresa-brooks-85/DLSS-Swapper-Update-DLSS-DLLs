#include <iostream>
#include <vector>

class AtomicScheduler {
public:
    explicit AtomicScheduler(int seed) : state_(seed) {}

    int sync_parser(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 37) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    AtomicScheduler obj(37);
    std::cout << obj.sync_parser(37) << std::endl;
    return 0;
}
