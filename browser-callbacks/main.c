#include <stdio.h>
#include <string.h>
#include <emscripten/fetch.h>

void requestOnSuccess(emscripten_fetch_t *fetch)
{
    char dat[fetch->numBytes + 1];
    memcpy(dat, fetch->data, fetch->numBytes);
    dat[fetch->numBytes] = '\0';
    printf("data: %s \n", dat);
    emscripten_fetch_close(fetch);
}

void requestOnError(emscripten_fetch_t *fetch)
{
    printf("HTTP failure status code: %d.\n", fetch->status);
    emscripten_fetch_close(fetch);
}

int main()
{
    emscripten_fetch_attr_t attr;
    emscripten_fetch_attr_init(&attr);
    strcpy(attr.requestMethod, "GET");
    attr.attributes = EMSCRIPTEN_FETCH_LOAD_TO_MEMORY;
    attr.onsuccess = requestOnSuccess;
    attr.onerror = requestOnError;
    emscripten_fetch(&attr, "https://httpbin.org/anything");
}
