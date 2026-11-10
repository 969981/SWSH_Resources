/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffcaf0; name: FUN_00ffcaf0
 */


void FUN_00ffcaf0(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1b0);
  if ((param_2 & 1) == 0) {
    if (lVar1 != 0) {
      FUN_0167cd30(lVar1,0);
      return;
    }
  }
  else if (lVar1 != 0) {
    FUN_0167cd30(lVar1,1);
    return;
  }
  return;
}


