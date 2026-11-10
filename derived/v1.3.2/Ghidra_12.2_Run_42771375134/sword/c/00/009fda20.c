/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fda20; name: FUN_009fda20
 */


ulong FUN_009fda20(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  byte bVar11;
  
  uVar4 = FUN_009fed30(*(undefined8 *)(param_1 + 0x10),1);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00884820(*param_2);
    iVar1 = (int)uVar4;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        bVar11 = 0;
      }
      else {
        iVar8 = 0;
        bVar11 = 0;
        do {
          lVar5 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,iVar8);
          if (lVar5 == 0) {
            iVar9 = iVar8 + 1;
            do {
              lVar6 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,iVar9);
              if (lVar6 != 0) {
                plVar10 = (long *)(lVar6 + 0x48);
                (**(code **)(*plVar10 + 0x10))(plVar10);
                (**(code **)(*plVar10 + 0x18))(plVar10);
              }
              iVar9 = iVar9 + 1;
            } while (iVar1 != iVar9);
          }
          else {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
            iVar9 = iVar8 + 1;
            do {
              lVar6 = (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,iVar9);
              if (lVar6 != 0) {
                (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
              }
              uVar4 = FUN_0087d610(lVar5,2);
              if (((lVar6 != 0) && ((uVar4 & 1) == 0)) &&
                 (uVar4 = FUN_0087d610(lVar6,2), (uVar4 & 1) == 0)) {
                iVar2 = FUN_008783b0(lVar5);
                iVar3 = FUN_008783b0(lVar6);
                if (iVar2 == iVar3) {
                  *(undefined1 *)(param_3 + 7) = 1;
                  iVar2 = FUN_008783b0(lVar5);
                  if (bVar11 != 0) {
                    lVar7 = 0;
                    do {
                      if (*(int *)(param_3 + 0x60 + lVar7 * 4) == iVar2) goto LAB_009fdb64;
                      lVar7 = lVar7 + 1;
                    } while ((uint)lVar7 < (uint)bVar11);
                  }
                  uVar4 = (ulong)bVar11;
                  bVar11 = bVar11 + 1;
                  *(int *)(param_3 + uVar4 * 4 + 0x60) = iVar2;
                }
              }
LAB_009fdb64:
              if (lVar6 != 0) {
                (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != iVar1);
          }
          iVar8 = iVar8 + 1;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
          }
        } while (iVar8 != iVar1 + -1);
      }
      uVar4 = (ulong)(bVar11 != 0);
    }
  }
  return uVar4;
}


