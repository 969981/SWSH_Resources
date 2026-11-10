/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ecc60; name: FUN_008ecc60
 */


int FUN_008ecc60(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if (*param_1 == 1) {
    lVar8 = *(long *)(param_1 + 0x288);
    if ((lVar8 == 0) || (*(long *)(param_1 + 0x108) == 0)) {
      iVar2 = 0;
      lVar8 = *(long *)(param_1 + 0x28c);
    }
    else {
      plVar6 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar5 = *(long **)(param_1 + 0x108);
      iVar2 = 0;
      if (plVar5 != (long *)0x0) {
        plVar7 = plVar5 + 9;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        iVar2 = FUN_00884820(plVar5);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          lVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,iVar2 + -1);
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          bVar1 = *(byte *)(lVar8 + 0x70);
          iVar2 = FUN_0087a5f0(lVar4);
          iVar2 = (uint)bVar1 * iVar2 * 4;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
          }
        }
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar8 = *(long *)(param_1 + 0x28c);
    }
    if ((lVar8 != 0) && (*(long *)(param_1 + 0x10c) != 0)) {
      plVar5 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar6 = *(long **)(param_1 + 0x10c);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 9;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        iVar3 = FUN_00884820(plVar6);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          lVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,iVar3 + -1);
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          bVar1 = *(byte *)(lVar8 + 0x70);
          iVar3 = FUN_0087a5f0(lVar4);
          iVar3 = (uint)bVar1 * iVar3 * 4;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
          }
        }
        iVar2 = iVar3 + iVar2;
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


