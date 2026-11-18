#include <iostream>
#include <vector>

class CoreProcessor {
public:
    explicit CoreProcessor(int seed) : state_(seed) {}

    int dispatch_factory(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 79) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    CoreProcessor obj(79);
    std::cout << obj.dispatch_factory(79) << std::endl;
    return 0;
}
