/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013264e0; name: FUN_013264e0
 */


void FUN_013264e0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  FUN_013283c0();
  puVar1 = PTR_DAT_02727fa8;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xe0);
  param_1[10] = (long)(puVar1 + 0x150);
  lVar2 = FUN_013273b0(auStack_28,param_1[1],param_2);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  param_1[0x17] = lVar2;
  return;
}


