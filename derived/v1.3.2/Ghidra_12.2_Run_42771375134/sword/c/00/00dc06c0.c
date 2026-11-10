/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc06c0; name: FUN_00dc06c0
 */


void FUN_00dc06c0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x458);
  lVar2 = *(long *)(param_1 + 0x460);
  if (lVar1 != lVar2) {
    do {
      FUN_00dc04c0(param_1,lVar1,param_2 & 1,0,0);
      lVar1 = lVar1 + 0x180;
    } while (lVar2 != lVar1);
  }
  return;
}


