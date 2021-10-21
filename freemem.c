#include <stdio.h>
#include <sys/pstat.h>
main()
{
struct pst_static buf;
struct pst_dynamic dyn;
pstat_getstatic(&buf,sizeof(struct pst_static),1,0);
pstat_getdynamic(&dyn,sizeof(struct pst_dynamic),1,0);
printf("%d\n",buf.page_size/1024*dyn.psd_free/1024);
}
