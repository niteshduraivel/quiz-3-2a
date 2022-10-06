# Quiz 3.2.a: file stats

Write a C program that takes a directory name as input and give information about the named files in the directory. Next for every file in the directory, change the mode.

Before your start coding, you can briefly read about the stat function here: https://linux.die.net/man/2/stat

## Print the files information
For every file in the directory, print the following information.

- inode number
- number of links
- User ID of owner
- Group ID of owner
- Size in bytes
- Last access
- Last modification
- Last status change
- Number of disk blocks allocated
- Access mode number and flags

## Important notes:
1. Refer to the sample output [sample_output.txt](sample_output.txt) as an example
1. Your program will be manually tested for correctness with additional test cases including different types.
1. Your program should compile with no errors and warnings.