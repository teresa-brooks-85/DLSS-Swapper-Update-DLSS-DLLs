#include <iostream>
#include <vector>

class DynamicManager {
public:
    explicit DynamicManager(int seed) : state_(seed) {}

    int encode_registry(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 43) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    DynamicManager obj(43);
    std::cout << obj.encode_registry(43) << std::endl;
    return 0;
}
