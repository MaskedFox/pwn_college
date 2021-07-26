 int main(int argc, char **argv)
 {
     char buf[1024];
     int n;
     
     //int fd = argc == 1 ? 0 : open(argv[1], 0);
     int fd = argc;
     if (fd == 1)
     {
         open(argv[1],0);
     } 
     
     puts("HAHAHA!");
     
     //while ((n = read(fd, buf, 1024)) > 0 && write(1,buf, n) >0);
    while ((n = read(fd, buf, 1024))>0)
    {
        while (write(1, buf, n) > 0);
    }
 }
