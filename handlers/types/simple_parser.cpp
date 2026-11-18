#include <iostream>
#include <vector>

class LiteCache {
public:
    explicit LiteCache(int seed) : state_(seed) {}

    int render_adapter(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 72) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    LiteCache obj(72);
    std::cout << obj.render_adapter(72) << std::endl;
    return 0;
}
