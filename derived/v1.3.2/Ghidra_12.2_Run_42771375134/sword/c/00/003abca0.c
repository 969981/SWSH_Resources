/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003abca0; name: FUN_003abca0
 */


void FUN_003abca0(long param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(byte *)(*(long *)(param_1 + 0x50) + 0xc) & 1) != 0) {
    local_40 = 0;
    uStack_38 = 0x3f80000000000000;
    local_30 = 0;
    local_28 = 0;
    FUN_00218620(param_2,&local_40);
    FUN_003abd00(param_1,param_2);
  }
  return;
}


