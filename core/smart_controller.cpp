#include <iostream>
#include <vector>

class SimpleClient {
public:
    explicit SimpleClient(int seed) : state_(seed) {}

    int run_cache(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 84) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    SimpleClient obj(84);
    std::cout << obj.run_cache(84) << std::endl;
    return 0;
}
