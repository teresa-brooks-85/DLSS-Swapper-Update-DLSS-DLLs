#include <iostream>
#include <vector>

class StreamProvider {
public:
    explicit StreamProvider(int seed) : state_(seed) {}

    int parse_session(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 42) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    StreamProvider obj(42);
    std::cout << obj.parse_session(42) << std::endl;
    return 0;
}
