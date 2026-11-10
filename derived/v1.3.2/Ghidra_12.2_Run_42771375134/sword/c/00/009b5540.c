/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b5540; name: FUN_009b5540
 */


undefined4 FUN_009b5540(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x368) == 3) {
    lVar2 = param_1 + 0x368;
  }
  else if (*(int *)(param_1 + 0x370) == 3) {
    lVar2 = param_1 + 0x370;
  }
  else if (*(int *)(param_1 + 0x378) == 3) {
    lVar2 = param_1 + 0x378;
  }
  else if (*(int *)(param_1 + 0x380) == 3) {
    lVar2 = param_1 + 0x380;
  }
  else if (*(int *)(param_1 + 0x388) == 3) {
    lVar2 = param_1 + 0x388;
  }
  else if (*(int *)(param_1 + 0x390) == 3) {
    lVar2 = param_1 + 0x390;
  }
  else if (*(int *)(param_1 + 0x398) == 3) {
    lVar2 = param_1 + 0x398;
  }
  else {
    lVar2 = param_1 + 0x3a0;
    if (*(int *)(param_1 + 0x3a0) != 3) {
      lVar2 = param_1 + 0x3a8;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x3b0);
  if (lVar2 != param_1 + 0x3a8) {
    puVar1 = (undefined4 *)(lVar2 + 4);
  }
  return *puVar1;
}


