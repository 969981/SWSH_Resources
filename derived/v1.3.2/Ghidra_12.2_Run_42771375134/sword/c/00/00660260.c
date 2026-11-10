/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00660260; name: FUN_00660260
 */


undefined8 FUN_00660260(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar6 = (undefined8 *)(param_1 + 0x260);
  if (((*(byte *)(param_1 + 0x280) & 1) == 0) &&
     (puVar5 = (undefined8 *)*puVar6, puVar5 != (undefined8 *)0x0)) {
    plVar7 = *(long **)(param_1 + 0x240);
    if (plVar7 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar7 + 0x50))(plVar7,puVar5);
      if (lVar2 != 0) {
        puVar9 = puVar5;
        do {
          (**(code **)*puVar9)(puVar9);
          lVar2 = lVar2 + -1;
          puVar9 = puVar9 + 0x23;
        } while (lVar2 != 0);
      }
      (**(code **)(*plVar7 + 0x48))
                (plVar7,puVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *puVar6 = 0;
  }
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  puVar5 = (undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x280) = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  if (((*(byte *)(param_1 + 0x2d0) & 1) == 0) &&
     (puVar6 = (undefined8 *)*puVar5, puVar6 != (undefined8 *)0x0)) {
    plVar7 = *(long **)(param_1 + 0x290);
    if (plVar7 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar7 + 0x50))(plVar7,puVar6);
      if (lVar2 != 0) {
        puVar9 = puVar6;
        do {
          (**(code **)*puVar9)(puVar9);
          lVar2 = lVar2 + -1;
          puVar9 = puVar9 + 0x1a;
        } while (lVar2 != 0);
      }
      (**(code **)(*plVar7 + 0x48))
                (plVar7,puVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *puVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *puVar5 = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  switch(*(undefined4 *)(param_1 + 0x1d4)) {
  case 2:
    iVar1 = *(int *)(param_1 + 0x22c);
    uVar4 = (ulong)iVar1;
    if (*(ulong *)(param_1 + 0x248) != uVar4) {
      if ((*(ulong *)(param_1 + 0x250) <= uVar4) &&
         (uVar3 = FUN_006629f0(param_1 + 0x238,uVar4,1), (uVar3 & 1) == 0)) {
        *(undefined8 *)(param_1 + 0x248) = 0;
LAB_00660560:
        *(undefined8 *)(param_1 + 0x270) = 0;
        *(undefined8 *)(param_1 + 0x268) = 0;
        return 1;
      }
      *(ulong *)(param_1 + 0x248) = uVar4;
      if (iVar1 == 0) goto LAB_00660560;
      *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x260);
      *(ulong *)(param_1 + 0x270) = *(long *)(param_1 + 0x260) + uVar4 * 0x118;
    }
    if (0 < iVar1) {
      lVar2 = 0;
      uVar4 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x260) + lVar2;
        FUN_0065cc10(lVar8,*(undefined8 *)(param_1 + 0x28));
        FUN_0065d3b0(lVar8,param_1,uVar4 & 0xffffffff,0);
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 0x118;
      } while ((long)uVar4 < (long)*(int *)(param_1 + 0x248));
    }
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0x22c);
    lVar2 = (long)iVar1;
    if (iVar1 != 0) {
      uVar4 = FUN_00662c30(param_1 + 0x288,lVar2,1);
      if ((uVar4 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x298) = 0;
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        return 1;
      }
      lVar8 = *(long *)(param_1 + 0x2b0);
      *(long *)(param_1 + 0x298) = lVar2;
      *(long *)(param_1 + 0x2b8) = lVar8;
      *(long *)(param_1 + 0x2c0) = lVar8 + lVar2 * 0xd0;
      if (0 < iVar1) {
        FUN_00665b60(lVar8,*(undefined8 *)(param_1 + 0x28));
        FUN_00665cc0(lVar8,param_1,0);
        if (1 < *(int *)(param_1 + 0x298)) {
          uVar4 = 1;
          lVar2 = 0xd0;
          do {
            lVar8 = *(long *)(param_1 + 0x2b0) + lVar2;
            FUN_00665b60(lVar8,*(undefined8 *)(param_1 + 0x28));
            FUN_00665cc0(lVar8,param_1,uVar4 & 0xffffffff);
            uVar4 = uVar4 + 1;
            lVar2 = lVar2 + 0xd0;
          } while ((long)uVar4 < (long)*(int *)(param_1 + 0x298));
          return 1;
        }
      }
    }
    break;
  case 4:
    FUN_006617e0(param_1);
    break;
  case 5:
    FUN_00661a20(param_1);
    break;
  case 6:
    FUN_00661b50(param_1);
    break;
  default:
    return 0;
  }
  return 1;
}


