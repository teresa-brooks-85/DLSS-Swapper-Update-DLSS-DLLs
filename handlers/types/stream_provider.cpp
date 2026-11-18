#include <iostream>
#include <vector>

class DynamicContext {
public:
    explicit DynamicContext(int seed) : state_(seed) {}

    int encode_dispatcher(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 75) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    DynamicContext obj(75);
    std::cout << obj.encode_dispatcher(75) << std::endl;
    return 0;
}
