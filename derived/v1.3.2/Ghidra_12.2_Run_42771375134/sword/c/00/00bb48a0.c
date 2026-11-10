/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb48a0; name: FUN_00bb48a0
 */


void FUN_00bb48a0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char acStack_70 [64];
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar3 == 0) {
    iVar1 = FUN_01509eb0(0);
    snprintf(acStack_70,0x40,"boxtray_panel_%02d",iVar1);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    iVar1 = FUN_01509eb0(lVar3);
    snprintf(acStack_70,0x40,"boxtray_panel_%02d",iVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_00ffdc80(param_1 + 0x100,acStack_70);
  return;
}


