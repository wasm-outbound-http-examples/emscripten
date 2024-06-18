#include <stdio.h>
#include <string.h>
#include <emscripten/fetch.h>

int main()
{
    emscripten_fetch_attr_t attr;
    emscripten_fetch_attr_init(&attr);
    strcpy(attr.requestMethod, "GET");
    attr.attributes = EMSCRIPTEN_FETCH_LOAD_TO_MEMORY | EMSCRIPTEN_FETCH_SYNCHRONOUS | EMSCRIPTEN_FETCH_REPLACE;
    emscripten_fetch_t *fetch = emscripten_fetch(&attr, "https://httpbin.org/anything");
    if (fetch->status == 200)
    {
        char dat[fetch->numBytes + 1];
        memcpy(dat, fetch->data, fetch->numBytes);
        dat[fetch->numBytes] = '\0';
        printf("data: %s \n", dat);
    }
    else
    {
        printf("HTTP failure status code: %d.\n", fetch->status);
    }
    emscripten_fetch_close(fetch);
}
