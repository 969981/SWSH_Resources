/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01127020; name: FUN_01127020
 */


void FUN_01127020(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint local_38;
  undefined4 local_34;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  local_34 = param_3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_38 = FUN_01538f80(lVar2);
  puVar1 = PTR_DAT_02710848;
  local_38 = local_38 & 0xff;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 == 0) {
    FUN_0100a5e0(0,param_2,&local_34,&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98),1);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0100a5e0(lVar3,param_2,&local_34,&local_38,*(undefined8 *)(*(long *)puVar1 + 0x98),1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


