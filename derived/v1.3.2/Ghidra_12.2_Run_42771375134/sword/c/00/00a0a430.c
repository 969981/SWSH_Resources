/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a430; name: FUN_00a0a430
 */


bool FUN_00a0a430(undefined8 param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x58);
  if (lVar5 == 0) {
    iVar3 = FUN_00884820(0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    iVar3 = FUN_00884820(lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  uVar1 = 6 - iVar3;
  if (uVar1 < param_2) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
    if (lVar5 == 0) {
      iVar3 = FUN_01507a30(0,param_1);
      bVar2 = param_2 <= iVar3 + uVar1;
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      iVar3 = FUN_01507a30(lVar5,param_1);
      bVar2 = param_2 <= iVar3 + uVar1;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    bVar2 = true;
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return bVar2;
}


