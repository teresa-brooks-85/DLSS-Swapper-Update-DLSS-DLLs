#include <iostream>
#include <vector>

class SharedManager {
public:
    explicit SharedManager(int seed) : state_(seed) {}

    int fetch_provider(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 73) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    SharedManager obj(73);
    std::cout << obj.fetch_provider(73) << std::endl;
    return 0;
}
