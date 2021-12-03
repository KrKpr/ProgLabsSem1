#include <stdio.h>
#include <direct.h>

void make_directory(const char *name) {
    _mkdir(name);
}

int main(int argc, char *argv[]) {
    FILE *fout;
    fout = fopen("krkpr.txt", "w");
    fprintf(fout, "Subfolders of the current folder krkpr.txt: \n\n");
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            make_directory(argv[i]);
            fprintf(fout, "%s\n", argv[i]);
        }
    }
    fclose(fout);
    return 0;
}