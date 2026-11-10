/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e496a0; name: FUN_00e496a0
 */


void FUN_00e496a0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  FUN_006d86d0(param_1,0x80010080);
  puVar1 = PTR_DAT_0271f888;
  param_1[0xf] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0x100);
  lVar2 = FUN_00e515d0(auStack_28,param_2,param_1);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  param_1[0xf] = lVar2;
  return;
}


