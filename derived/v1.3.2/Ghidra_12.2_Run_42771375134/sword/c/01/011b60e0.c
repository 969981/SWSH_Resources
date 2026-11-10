/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b60e0; name: FUN_011b60e0
 */


void FUN_011b60e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  size_t __n;
  undefined1 auStack_338 [728];
  
  __n = 0;
  if (param_3 < 0x2d0) {
    __n = 0x2d0 - param_3;
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_338 + param_3,0,__n);
}


