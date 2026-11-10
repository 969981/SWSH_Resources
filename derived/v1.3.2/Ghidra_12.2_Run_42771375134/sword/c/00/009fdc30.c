/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fdc30; name: FUN_009fdc30
 */


ulong FUN_009fdc30(long param_1,undefined8 *param_2,long param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  byte bVar11;
  
  uVar4 = FUN_009fed30(*(undefined8 *)(param_1 + 0x10),2);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00884820(*param_2);
    iVar3 = (int)uVar4;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
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
            } while (iVar3 != iVar9);
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
              if ((((lVar6 != 0) && ((uVar4 & 1) == 0)) &&
                  (uVar4 = FUN_0087d610(lVar6,2), (uVar4 & 1) == 0)) &&
                 (sVar1 = FUN_008787f0(lVar5), sVar1 != 0)) {
                sVar1 = FUN_008787f0(lVar5);
                sVar2 = FUN_008787f0(lVar6);
                if (sVar1 == sVar2) {
                  *(undefined1 *)(param_3 + 8) = 1;
                  sVar1 = FUN_008787f0(lVar5);
                  if (bVar11 != 0) {
                    lVar7 = 0;
                    do {
                      if (*(short *)(param_3 + 0x78 + lVar7 * 2) == sVar1) goto LAB_009fdd84;
                      lVar7 = lVar7 + 1;
                    } while ((uint)lVar7 < (uint)bVar11);
                  }
                  uVar4 = (ulong)bVar11;
                  bVar11 = bVar11 + 1;
                  *(short *)(param_3 + uVar4 * 2 + 0x78) = sVar1;
                }
              }
LAB_009fdd84:
              if (lVar6 != 0) {
                (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != iVar3);
          }
          iVar8 = iVar8 + 1;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
          }
        } while (iVar8 != iVar3 + -1);
      }
      uVar4 = (ulong)(bVar11 != 0);
    }
  }
  return uVar4;
}


