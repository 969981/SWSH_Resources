/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01551410; name: FUN_01551410
 */


void FUN_01551410(long param_1,int param_2)

{
  void *__s;
  
  __s = (void *)(param_1 + 0x468);
  if (param_2 != 3) {
    __s = (void *)(param_1 + (long)param_2 * 0x158 + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0,0x158);
}


