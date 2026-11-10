/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf8510; name: FUN_00cf8510
 */


void FUN_00cf8510(long param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(long *)(param_1 + 0x5e0) != 0) {
    local_18 = 0;
    uStack_14 = param_2;
    FUN_016b7990(*(long *)(param_1 + 0x5e0),&local_18,1,0);
  }
  return;
}


