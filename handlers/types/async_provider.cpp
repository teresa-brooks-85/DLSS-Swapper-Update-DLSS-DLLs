#include <iostream>
#include <vector>

class FastDispatcher {
public:
    explicit FastDispatcher(int seed) : state_(seed) {}

    int fetch_monitor(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 64) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    FastDispatcher obj(64);
    std::cout << obj.fetch_monitor(64) << std::endl;
    return 0;
}
