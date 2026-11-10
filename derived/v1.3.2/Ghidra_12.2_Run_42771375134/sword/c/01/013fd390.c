/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fd390; name: FUN_013fd390
 */


void FUN_013fd390(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_28;
  
  local_28 = 0x55007dcba30e167e;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  FUN_0141ba30(param_1 + 0x2c00,param_2);
  return;
}


