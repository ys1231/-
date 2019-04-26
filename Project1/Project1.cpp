// Project1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include"md5.h"

int main()
{
	MD5 md5;
	char str[] = { "HELLO THERE I AM MD5!" };
	puts(md5.digestString(str));

	// print the digest for a binary file on disk.
	char str1[] = { "C:\\Users\\iyue\\Desktop\\111.txt" };
	puts(md5.digestFile(str1));

	return 0;
}

