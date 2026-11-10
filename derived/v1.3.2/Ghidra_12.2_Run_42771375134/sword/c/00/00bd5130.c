/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd5130; name: FUN_00bd5130
 */


void FUN_00bd5130(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  long local_38;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  local_38 = FUN_00bd7f50(&local_40);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_2 + 0x68);
  if (lVar1 == 0) {
    FUN_00bd5010(&local_40,0,&local_28,&local_38);
    *param_1 = local_40;
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_00bd5010(&local_40,lVar1,&local_28,&local_38);
    *param_1 = local_40;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


