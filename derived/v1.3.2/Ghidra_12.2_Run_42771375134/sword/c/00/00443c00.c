/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00443c00; name: FUN_00443c00
 */


undefined8 FUN_00443c00(long param_1,uint *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long alStack_430 [128];
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  if (*(uint *)(param_1 + 0x98) == 0) {
LAB_00443d8c:
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  }
  else {
    lVar5 = -0x30 - ((ulong)*(uint *)(param_1 + 0x98) * 8 + 0xf & 0xffffffff0);
    if (*(uint *)(param_1 + 0x90) == 0) goto LAB_00443d8c;
    lVar7 = **(long **)(param_1 + 0x88);
    if (lVar7 == 0) {
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 1;
        if (*(uint *)(param_1 + 0x90) <= uVar9) goto LAB_00443d8c;
        lVar7 = (*(long **)(param_1 + 0x88))[uVar9];
      } while (lVar7 == 0);
    }
    else {
      uVar9 = 0;
    }
    iVar15 = 0;
    lVar12 = 0;
    do {
      while (lVar8 = lVar7, (*(byte *)(lVar8 + 0x78) & 1) == 0) {
        lVar7 = *(long *)(lVar8 + 0x20);
        if (lVar7 == 0) {
          do {
            uVar9 = uVar9 + 1;
            if (*(uint *)(param_1 + 0x90) <= uVar9) goto LAB_00443d50;
            lVar7 = *(long *)(*(long *)(param_1 + 0x88) + (ulong)uVar9 * 8);
          } while (lVar7 == 0);
          lVar8 = 0;
        }
        lVar12 = lVar8;
        if (lVar7 == 0) goto LAB_00443d50;
      }
      *(long *)((long)alStack_430 + (long)iVar15 * 8 + lVar5 + 0x430) = lVar8;
      lVar13 = *(long *)(lVar8 + 0x20);
      lVar7 = lVar13;
      lVar8 = lVar12;
      uVar14 = uVar9;
      if (lVar13 == 0) {
        do {
          uVar14 = uVar14 + 1;
          if (*(uint *)(param_1 + 0x90) <= uVar14) {
            lVar7 = 0;
            break;
          }
          lVar7 = *(long *)(*(long *)(param_1 + 0x88) + (ulong)uVar14 * 8);
          lVar8 = 0;
        } while (lVar7 == 0);
      }
      if (lVar12 == 0) {
        plVar10 = (long *)(*(long *)(param_1 + 0x88) + (ulong)uVar9 * 8);
      }
      else {
        plVar10 = (long *)(lVar12 + 0x20);
      }
      iVar15 = iVar15 + 1;
      *plVar10 = lVar13;
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      lVar12 = lVar8;
      uVar9 = uVar14;
    } while (lVar7 != 0);
LAB_00443d50:
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
    if (0 < iVar15) {
      lVar7 = (long)iVar15;
      do {
        FUN_00446460(param_1,*(undefined8 *)((long)alStack_430 + (lVar7 + -1) * 8 + lVar5 + 0x430));
        bVar1 = 1 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar1);
    }
  }
  uVar14 = *param_2;
  uVar9 = 0;
  uVar6 = 0xffffffff;
  if (uVar14 < 8) {
    uVar4 = 1 << (ulong)(uVar14 & 0x1f);
    if ((uVar4 & 3) == 0) {
      if ((uVar4 & 0xc) == 0) {
        if ((1 << (ulong)(uVar14 & 0x1f) & 0xc0U) == 0) goto LAB_00443dfc;
        uVar9 = param_2[1];
      }
      else {
        uVar9 = param_2[0xe];
        if (param_2[0xc] != 1) {
          uVar9 = 0;
        }
      }
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = param_2[0xc];
      uVar9 = param_2[1];
    }
  }
LAB_00443dfc:
  uVar11 = *(undefined8 *)(param_2 + 0xe);
  uVar2 = *(undefined8 *)(param_2 + 6);
  uVar3 = *(undefined8 *)(param_2 + 8);
  if (param_2[10] != 2) {
    uVar11 = 0;
  }
  *(undefined4 *)(param_1 + 0xd4) = 1;
  FUN_0044d500(param_1 + 0xd8,uVar2,uVar9,uVar11,1,uVar6,uVar3);
  return 1;
}


