/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007270f0; name: FUN_007270f0
 */


void FUN_007270f0(long param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x368);
  lVar2 = *(long *)(param_1 + 0x370);
  if (lVar1 != lVar2) {
    do {
      FUN_0072ee90(lVar1,param_2 & 1,param_3,param_4);
      lVar1 = lVar1 + 0x48;
    } while (lVar2 != lVar1);
  }
  return;
}


