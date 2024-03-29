#ifndef READER_H
#define READER_H

char **prepareBuffer(int lineCount, int lineLength);

int freeBuffer(char **buffer, int lineCount);

int replaceNewline(char line[], int lineLength);

int readFileContent(const char *name, char **buffer, int lineLength);

#endif // READER_H