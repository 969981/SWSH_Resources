/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137c840; name: FUN_0137c840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0137c840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_0137c8d0(param_1,param_3);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x2b0);
  *(long *)(param_1 + 0x2b0) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar1 = *(long *)(param_1 + 0x2b0);
  }
  FUN_00794370(lVar1,param_2);
  uStack_38 = _UNK_01d4a4e8;
  local_40 = _DAT_01d4a4e0;
  FUN_00794650(*(undefined8 *)(param_1 + 0x2b0),&local_40);
  return;
}


