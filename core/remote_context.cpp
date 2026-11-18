#include <iostream>
#include <vector>

class LiteGateway {
public:
    explicit LiteGateway(int seed) : state_(seed) {}

    int resolve_resolver(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 56) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    LiteGateway obj(56);
    std::cout << obj.resolve_resolver(56) << std::endl;
    return 0;
}
