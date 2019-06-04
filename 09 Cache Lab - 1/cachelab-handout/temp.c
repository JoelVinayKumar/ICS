int verbosity;
int main( int argc, char *argv[])
{
    char *filename;
    int c;
    while((c==getopt(argc,argv,)))
    {
        switch(c)
        {
            case :
                sets = atoi(opt.arg);
                break;
            case :
                lines = atoi(opt.arg);
                break;
            case :
                blocks = atoi(opt.arg);
                break;
            case :
                filename = opt.arg;
                break;
            case :
                verbosity = 1;
                break;
            default:
                break;
        }
    }
    initCache(sets, lines,blocks);
}
typedef unsigned long long address;
address lru = 1;
void accessCache(address addr)
{
    int tags = 64- (sets+blocks);
    address tagValue = addr >> (sets+blocks);
    address setIndex = (addr << tags) >> (tags + blocks);
    address blockValue = (addr << (tags+sets)) >> (tags + sets);

    int i;
    unsigned long long minLastUsed = ULONG_MAX;
    int evic_index = 0;
    for(int i=0;i<lines;i++)
    {
        if(cache.sets[setIndex].lines[i].valid && cache.sets[setIndex].lines[i].tag == tagValue)
        {
            if(verbosity)
                printf("hit ");
            hits++;
            cache.sets[setIndex].lines[i].LastUsed = lru++;
            return;
        }
    }
    misses++;
    if(verbosity)
        printf("miss ");
    
}
