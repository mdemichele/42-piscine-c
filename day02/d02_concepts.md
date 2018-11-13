## Day 02 Concepts

### ex00
* [write](http://pubs.opengroup.org/onlinepubs/7908799/xsh/write.html) 
	* This function is defined in the "<unistd.h>" library. The function is defined as follows:
		```C
		ssize_t write(int fildes, const void *buf, size_t, nbytes);
		```
		* As described [here](http://pubs.opengroup.org/onlinepubs/7908799/xsh/write.html):  "write() function attempts to write _nbytes_ bytes from the buffer pointed to by _buf_ to the file associated with the open files descriptor _fildes_"
