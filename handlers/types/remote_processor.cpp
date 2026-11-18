#include <iostream>
#include <vector>

class RemoteLoader {
public:
    explicit RemoteLoader(int seed) : state_(seed) {}

    int encode_monitor(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 7) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    RemoteLoader obj(7);
    std::cout << obj.encode_monitor(7) << std::endl;
    return 0;
}
