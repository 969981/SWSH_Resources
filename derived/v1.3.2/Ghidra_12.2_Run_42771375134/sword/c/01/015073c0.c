/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015073c0; name: FUN_015073c0
 */


int FUN_015073c0(long param_1,uint param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar5;
  int iVar4;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (param_2 < 0x20) {
    iVar2 = 0;
    lVar9 = 0x1e;
    lVar3 = param_1 + (ulong)param_2 * 0x2850 + 0x60;
    do {
      lVar7 = *param_3;
      if (lVar7 == 0) {
        FUN_008664b0(0,lVar3);
        uVar1 = FUN_008787d0(0);
        if ((uVar1 & 1) == 0) goto LAB_015074f0;
LAB_01507528:
        iVar4 = 0;
        iVar8 = 0;
      }
      else {
        plVar6 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_008664b0(lVar7,lVar3);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        uVar1 = FUN_008787d0(lVar7);
        if ((uVar1 & 1) != 0) goto LAB_01507528;
LAB_015074f0:
        if (((param_4 & 1) == 0) && (uVar1 = FUN_0087d610(lVar7,2), (uVar1 & 1) != 0))
        goto LAB_01507528;
        iVar4 = 1;
        iVar8 = 1;
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        iVar8 = iVar4;
      }
      iVar2 = iVar8 + iVar2;
      lVar3 = lVar3 + 0x158;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    iVar2 = 0;
    iVar8 = 0x1e;
    do {
      lVar3 = *param_3;
      if (lVar3 != 0) {
        plVar6 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      uVar1 = FUN_008787d0(lVar3);
      if (((uVar1 & 1) == 0) &&
         (((param_4 & 1) != 0 || (uVar1 = FUN_0087d610(lVar3,2), (uVar1 & 1) == 0)))) {
        iVar5 = 1;
        iVar4 = 1;
      }
      else {
        iVar5 = 0;
        iVar4 = 0;
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        iVar4 = iVar5;
      }
      iVar2 = iVar4 + iVar2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return iVar2;
}


