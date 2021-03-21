// These variables are autogenerated and compiled
// into the library by the version.cmake script
extern "C"
{
    extern const char* GIT_TAG;
    extern const char* GIT_REV;
    extern const char* GIT_BRANCH;
    extern const char* BUILD_TIME;
}

#include <string>
#include <string.h>
#include "Helper.h"
#include <fstream>

const char* GIT_BASE_BRANCH = "master - v6.4.0 - 2020-03-20";


const char* git_base_branch(void)
{
    return GIT_BASE_BRANCH;
}


const char* build_time(void)
{
    return BUILD_TIME;
}

const char* libfive_git_version(void)
{
    return GIT_TAG;
}

const char* libfive_git_revision(void)
{
    return GIT_REV;
}

const char* libfive_git_branch(void)
{
    return GIT_BRANCH;
}

std::string getHTMLversion(void){
    
    string line = "";
    
    FILE* pFile;
    string fn = FormatFileName("/sdcard/html/version.txt");
    pFile = fopen(fn.c_str(), "r");

    if (pFile == NULL)
        return std::string("NAN");

    char zw[1024];
    fgets(zw, 1024, pFile);
    line = std::string(trim(zw));
    fclose(pFile);

    return line;
}