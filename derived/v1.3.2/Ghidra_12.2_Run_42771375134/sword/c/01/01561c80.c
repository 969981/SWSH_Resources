/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01561c80; name: FUN_01561c80
 */


void FUN_01561c80(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  *param_1 = param_3;
  local_14 = param_3;
  lVar1 = FUN_015624e0(auStack_18,param_2,&local_14);
  *(long *)(param_1 + 2) = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  return;
}


