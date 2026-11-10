/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00605c60; name: FUN_00605c60
 */


undefined8 FUN_00605c60(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 6;
  }
  lVar1 = (**(code **)(param_1 + 8))(param_1,0x160);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    memset((void *)(lVar1 + 0x14),0,0x14c);
  }
  return 0x40;
}


