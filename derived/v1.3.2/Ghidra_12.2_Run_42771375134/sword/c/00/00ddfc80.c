/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddfc80; name: FUN_00ddfc80
 */


void FUN_00ddfc80(long param_1,undefined8 param_2,uint param_3)

{
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00ddfcb0(param_1,param_2,param_1 + (long)(int)param_3 * 0x20 + 0x20);
  return;
}


