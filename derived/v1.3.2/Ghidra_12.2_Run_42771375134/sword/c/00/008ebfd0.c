/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ebfd0; name: FUN_008ebfd0
 */


int FUN_008ebfd0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  if (param_1 <= param_2) {
    uVar1 = param_2;
    param_2 = param_1;
  }
  iVar2 = FUN_008ed5b0(DAT_02a4d198,(1 - param_2) + uVar1);
  return param_2 + iVar2;
}


