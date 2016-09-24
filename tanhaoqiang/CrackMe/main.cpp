int main(int argc , char *argv[] , char *envp)
{
	argv[1][0] |= argc -1;
	argv[1][1] ^= argc -1;
	argv[1][2] = argv[1][2] * (argc -1) * 6;
	argv[1][3] = argv[1][2] / 4;
	argv[1][4] = argv[1][4] << 3;
	argv[1][5] = argv[1][5] >> 2;
	argv[1][6] = argv[1][6] & ((argc - 1) & 7);
	argv[1][7] %= 2;
	argv[1][8] = ~(argc - 1);
	char *pArgv9 = & argv[1][9];
	*pArgv9 = *pArgv9 + argv[1][0] - argv[1][2];
	pArgv9 += 1;
	*(pArgv9 - 1) = argv[1][6] / argv[1][7];
	*pArgv9 += argv[1][3] - argv[1][1];
	*(short*)pArgv9 = argv[1][4] * argv[1][5];
	return 0;
}