/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109a140; name: FUN_0109a140
 */


void FUN_0109a140(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar1 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
    if (iVar1 == 0) {
      uVar6 = 0;
      uVar4 = 100;
      iVar1 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
    }
    else {
      uVar8 = 0;
      uVar6 = 0;
      uVar4 = 100;
      do {
        lVar9 = *(long *)(*(long *)(param_1 + 0x78) + uVar8 * 8 + 0x698);
        uVar3 = FUN_0087d610(*(undefined8 *)(lVar9 + 0x128),2);
        if ((uVar3 & 1) == 0) {
          uVar10 = *(uint *)(*(long *)(param_1 + 0x1d8) + uVar8 * 4 + 0x20);
          if (uVar10 != 0) {
            uVar2 = 100 - *(int *)(lVar9 + 0x148);
            if (uVar4 <= uVar2) {
              uVar2 = uVar4;
            }
            if (uVar10 <= uVar6) {
              uVar10 = uVar6;
            }
            uVar4 = uVar2;
            uVar6 = uVar10;
          }
        }
        uVar8 = uVar8 + 1;
        uVar3 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
      } while (uVar8 < (uVar3 & 0xffffffff));
      iVar1 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
    }
    if (iVar1 != 0) {
      uVar8 = 0;
      lVar9 = 0;
      uVar10 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x78) + uVar8 * 8 + 0x698);
        uVar3 = FUN_0087d610(*(undefined8 *)(lVar5 + 0x128),2);
        if (((uVar3 & 1) == 0) &&
           (*(uint *)(*(long *)(param_1 + 0x1d8) + uVar8 * 4 + 0x20) == uVar6)) {
          uVar2 = FUN_0109f8e0(lVar5);
          if (uVar10 <= uVar2) {
            lVar9 = lVar5;
            uVar10 = uVar2;
          }
        }
        uVar8 = uVar8 + 1;
        uVar3 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
      } while (uVar8 < (uVar3 & 0xffffffff));
      if (lVar9 != 0) {
        *(undefined1 *)(lVar9 + 0x168) = 1;
      }
    }
    uVar4 = (uint)(((float)uVar4 / DAT_01d4c6b8) * DAT_01d4c234 +
                  (1.0 - (float)uVar4 / DAT_01d4c6b8) * 8.0);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    iVar1 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
    if (iVar1 != 0) {
      uVar8 = 0;
      bVar7 = false;
      do {
        lVar9 = *(long *)(*(long *)(param_1 + 0x78) + uVar8 * 8 + 0x698);
        uVar3 = FUN_0087d610(*(undefined8 *)(lVar9 + 0x128),2);
        if ((uVar3 & 1) == 0) {
          uVar6 = uVar4;
          if (*(int *)(*(long *)(param_1 + 0x1d8) + uVar8 * 4 + 0x20) < 1) {
            iVar1 = FUN_0087a5f0(*(undefined8 *)(lVar9 + 0x128));
            if (iVar1 == 100) {
              uVar6 = 1;
              goto LAB_0109a320;
            }
          }
          else {
LAB_0109a320:
            *(uint *)(lVar9 + 0x16c) = uVar6;
          }
          FUN_0109f970(lVar9);
          iVar1 = FUN_0087a5f0(*(undefined8 *)(lVar9 + 0x128));
          if ((iVar1 != 100) || (*(int *)(*(long *)(param_1 + 0x1d8) + uVar8 * 4 + 0x20) != 0)) {
            FUN_0109e8b0(lVar9,*(undefined4 *)(*(long *)(param_1 + 0x98) + uVar8 * 4));
            bVar7 = true;
          }
        }
        uVar8 = uVar8 + 1;
        uVar3 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
      } while (uVar8 < (uVar3 & 0xffffffff));
      if ((bVar7) && (*(int *)(param_1 + 0xa0) != 0)) {
        local_70 = 0x322294e5e903cc3;
        local_68 = "Play_UI_common_lv_gauge_up";
        local_60 = 0x1a;
        local_58 = 0;
        FUN_016d3620(&local_70);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        }
        *(undefined1 *)(param_1 + 0x80) = 1;
      }
    }
  }
  return;
}


