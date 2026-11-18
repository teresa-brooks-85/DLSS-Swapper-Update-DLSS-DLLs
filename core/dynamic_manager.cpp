#include <iostream>
#include <vector>

class BatchGateway {
public:
    explicit BatchGateway(int seed) : state_(seed) {}

    int fetch_dispatcher(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 75) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    BatchGateway obj(75);
    std::cout << obj.fetch_dispatcher(75) << std::endl;
    return 0;
}
