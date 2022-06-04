#include "Core/Engine.h"
int main()
{
    auto& engine = DEngine::Engine::Get();
    engine.Run();
    return 0;
}
