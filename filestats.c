#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <pwd.h>
#include <dirent.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    DIR* directory;
    struct dirent* directory1;
    directory = opendir(argv[1]);
    struct stat sb;
    if (argc < 2) {
        puts("Not many arguments");
    }
    if (stat(argv[1], &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }
    while ((directory1 = readdir(directory)) != NULL) {
        printf("File name: %s \n", directory1->d_name);
        stat(directory1->d_name, &sb);
        printf("inode number: %ld \n", (long) sb.st_ino);
        printf("number of links: %ld \n", (long) sb.st_nlink);
        printf("User ID of owner: %ld \n", (long) sb.st_uid);
        printf("Group ID of owner: %ld \n", (long) sb.st_gid);
        printf("Size in bytes: %lld \n", (long long) sb.st_size);
        printf("Last access: %s \n", ctime (&sb.st_atime));
        printf("Last modification: %s \n", ctime (&sb.st_mtime));
        printf("Last status change: %s \n", ctime (&sb.st_ctime));
        printf("Number of disk blocks allocated: %lld \n", (long long) sb.st_blocks);
        printf("Access mode in octal: %lo \n ", (unsigned long) sb.st_mode);
        printf("Access mode flags: ");
    }
}