/* confdefs.h */
#define PACKAGE_NAME ""
#define PACKAGE_TARNAME ""
#define PACKAGE_VERSION ""
#define PACKAGE_STRING ""
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define SIZEOF_VOID_P 8
#define LG_SIZEOF_PTR 3
#define SIZEOF_INT 4
#define LG_SIZEOF_INT 2
#define SIZEOF_LONG 8
#define LG_SIZEOF_LONG 3
#define SIZEOF_INTMAX_T 8
#define LG_SIZEOF_INTMAX_T 3
#define CPU_SPINWAIT __asm__ volatile("pause")
#define JEMALLOC_HAS_ALLOCA_H 1
#define JEMALLOC_PURGE_MADVISE_DONTNEED  
#define JEMALLOC_THREADED_INIT  
#define JEMALLOC_USE_CXX_THROW  
#define HAVE_MALLOC_H 1
#define JEMALLOC_USABLE_SIZE_CONST 
#define JEMALLOC_HAVE_ATTR  
#define JEMALLOC_TLS_MODEL __attribute__((tls_model("initial-exec")))
#define JEMALLOC_HAVE_ATTR_ALLOC_SIZE  
#define JEMALLOC_HAVE_ATTR_FORMAT_GNU_PRINTF  
#define JEMALLOC_HAVE_ATTR_FORMAT_PRINTF  
#define JEMALLOC_OVERRIDE_MEMALIGN  
#define JEMALLOC_OVERRIDE_VALLOC  
#define JEMALLOC_PREFIX "je_"
#define JEMALLOC_CPREFIX "JE_"
#define JEMALLOC_PRIVATE_NAMESPACE je_
#define JEMALLOC_CC_SILENCE  
#define JEMALLOC_STATS  
#define JEMALLOC_TCACHE  
#define JEMALLOC_MAPS_COALESCE  
#define JEMALLOC_DSS  
#define JEMALLOC_FILL  
/* end confdefs.h.  */

#include <sys/types.h>
#include <sys/param.h>
#include <sys/time.h>
#include <sys/uio.h>
#include <sys/ktrace.h>

int
main ()
{

	utrace((void *)0, 0);

  ;
  return 0;
}
