/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014adeb0; name: FUN_014adeb0
 */


byte FUN_014adeb0(long *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long local_28;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_28 = *param_1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  iVar2 = FUN_015078c0(lVar3,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  plVar4 = *(long **)(lVar3 + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  bVar1 = (**(code **)(*plVar4 + 0x60))(plVar4);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  }
  return iVar2 == 0 & bVar1;
}


