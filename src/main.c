#include "common.h"
#include "app.h"

int main(void) {
    initApp();
    loop();
    closeApp();
    return 0;
}
