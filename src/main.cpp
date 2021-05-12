#include "ver.h"
#include "libs.h"
#include "EcgReader.h"

using namespace std;

int main(int arg, char** argv)
{
    EcgReader app{};
    app.run();
    return 0;
}
