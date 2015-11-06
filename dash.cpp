#include <iostream>
extern "C"{
    #include <gpac/isomedia.h>
    #include <gpac/media_tools.h>
    #include <gpac/internal/isomedia_dev.h>
    #include <gpac/internal/media_dev.h>
    #include <gpac/constants.h>
}

using namespace std;

int main(int argc, char const *argv[]){

    GF_ISOFile *file;
    //u32 mod = GF_ISOM_OPEN_READ;
    cout<<"Foi ate aqui";
    file = gf_isom_open("anchor.mp4", GF_ISOM_OPEN_READ, NULL);

    //string name = file->fileName;
    char *aux = file->fileName;
    //cout << "Tamanho arquivo: "<< file->fileName<<endl;

    return 0;
}
