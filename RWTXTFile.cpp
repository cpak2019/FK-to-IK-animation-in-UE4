// Fill out your copyright notice in the Description page of Project Settings.
#include "ReadWriteTextFile.h"
#include "RWTXTFile.h"


bool URWTXTFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

bool URWTXTFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}



