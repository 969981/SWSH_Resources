/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5e750; name: FUN_00a5e750
 */


void FUN_00a5e750(long param_1,byte param_2)

{
  undefined8 local_18;
  
  if (((param_2 & 1) != *(byte *)(param_1 + 0x5d0)) &&
     (*(byte *)(param_1 + 0x5d0) = param_2 & 1, (param_2 & 1) == 0)) {
    FUN_00ffd620(param_1 + 0x100);
    local_18 = 0x8e89686f5660e8f;
    FUN_00ffd510(0,param_1 + 0x100,&local_18);
  }
  return;
}


