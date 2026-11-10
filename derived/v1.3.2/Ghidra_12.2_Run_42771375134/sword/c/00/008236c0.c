/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008236c0; name: FUN_008236c0
 */


void FUN_008236c0(long param_1,long param_2)

{
  void *__s;
  size_t __size;
  
  *(long *)(param_1 + 8) = param_2;
  __size = param_2 << 3;
  if (*(long *)(param_1 + 0x28) == 0) {
    __s = malloc(__size);
  }
  else {
    __s = (void *)FUN_0080efb0(*(long *)(param_1 + 0x28),0,__size);
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0,__size);
}


