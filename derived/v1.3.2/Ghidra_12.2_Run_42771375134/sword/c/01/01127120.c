/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01127120; name: FUN_01127120
 */


void FUN_01127120(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int local_34;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x248);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar4 = 0;
  local_34 = 0;
  do {
    iVar2 = FUN_015261d0(lVar3,param_2,&local_34);
    if ((iVar2 != 0) && (iVar2 = FUN_015261d0(lVar3,param_2,&local_34), iVar2 != 6)) {
      iVar4 = iVar4 + 1;
    }
    iVar2 = local_34 + 1;
    bVar1 = local_34 < 0x6d;
    local_34 = iVar2;
  } while (bVar1);
  if (iVar4 == 0) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar5 == 0) {
      FUN_0100a950(0,param_2,0);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0100a950(lVar5,param_2,0);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


