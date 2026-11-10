/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013993b0; name: FUN_013993b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013993b0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = FUN_0137c8d0(param_1,param_4);
  plVar1 = (long *)(param_1 + (long)param_2 * 8 + 0x80);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar2 = *plVar1;
  }
  FUN_00794370(lVar2,param_3);
  uStack_38 = _UNK_01d4ab08;
  local_40 = _DAT_01d4ab00;
  FUN_00794650(*plVar1,&local_40);
  return;
}


