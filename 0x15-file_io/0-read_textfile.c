

size_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc;
	char *Buff;
	size_t readResult, wr;

	if (filename == NULL)
		return (0);
	fileDesc = open(filename, O_RDONLY);
	if (fileDesc < 0)
		return (0);
	Buff = malloc(letters);
	if (Buff == NULL)
	{
		close (fileDesc);
		return (0);
	}
	readResult = read(fileDesc, Buff, Letters);
	close (fileDesc);

	wr = write
	write (STDOUT_FILENO, Buff, readResult)
	free(Buff);
	if (wr < 0)
		return (0);
	return (wr);
