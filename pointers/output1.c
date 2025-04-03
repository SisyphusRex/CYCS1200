#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PlaylistSong_struct
{
    char name[50];
    struct PlaylistSong_struct *nextPlaylistSongPtr;
} PlaylistSong;

void PlaylistSong_Create(PlaylistSong *thisNode, char *name, PlaylistSong *nextLoc)
{
    strcpy(thisNode->name, name);
    thisNode->nextPlaylistSongPtr = nextLoc;
}

void PlaylistSong_InsertAfter(PlaylistSong *thisNode, PlaylistSong *newNode)
{
    PlaylistSong *tmpNext = NULL;

    tmpNext = thisNode->nextPlaylistSongPtr;
    thisNode->nextPlaylistSongPtr = newNode;
    newNode->nextPlaylistSongPtr = tmpNext;
}

void PlaylistSong_PrintNodeData(PlaylistSong *thisNode)
{
    printf("%s\n", thisNode->name);
}

PlaylistSong *PlaylistSong_GetNext(PlaylistSong *thisNode)
{
    return thisNode->nextPlaylistSongPtr;
}

int main(void)
{
    PlaylistSong *headObj = NULL;
    PlaylistSong *firstSong = NULL;
    PlaylistSong *secondSong = NULL;
    PlaylistSong *thirdSong = NULL;
    PlaylistSong *currObj = NULL;

    headObj = (PlaylistSong *)malloc(sizeof(PlaylistSong));
    PlaylistSong_Create(headObj, "head", NULL);

    firstSong = (PlaylistSong *)malloc(sizeof(PlaylistSong));
    PlaylistSong_Create(firstSong, "Lacrimosa", NULL);
    PlaylistSong_InsertAfter(headObj, firstSong);

    secondSong = (PlaylistSong *)malloc(sizeof(PlaylistSong));
    PlaylistSong_Create(secondSong, "Fidelio", NULL);
    PlaylistSong_InsertAfter(firstSong, secondSong);

    thirdSong = (PlaylistSong *)malloc(sizeof(PlaylistSong));
    PlaylistSong_Create(thirdSong, "Adagio", NULL);
    PlaylistSong_InsertAfter(secondSong, thirdSong);

    currObj = headObj;
    while (currObj != NULL)
    {
        PlaylistSong_PrintNodeData(currObj);
        currObj = PlaylistSong_GetNext(currObj);
    }

    return 0;
}