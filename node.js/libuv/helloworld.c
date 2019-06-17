#include <stdio.h>
#include <stdlib.h>
#include <uv.h>

int main() {
    uv_loop_t* loop = uv_default_loop();
    uv_run(loop, UV_RUN_DEFAULT);
    uv_loop_close(loop);
    printf("quit.\n");
    return 0;
}
