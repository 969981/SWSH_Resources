/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00492820; name: FUN_00492820
 */


/* WARNING: Removing unreachable block (ram,0x00492b18) */

int FUN_00492820(long param_1,long param_2,undefined1 *param_3,short *param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined2 *puVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  
  *param_3 = 1;
  plVar18 = *(long **)(param_1 + 200);
  if (*(short *)(param_2 + 0x12) == 0) {
    plVar10 = plVar18;
    if (param_4 != (short *)0x0) {
      if ((*(byte *)(param_4 + 1) & 1) == 0) {
LAB_004928fc:
        *param_3 = 0;
        return 0;
      }
      if ((*(byte *)(param_4 + 1) >> 1 & 1) == 0) {
        sVar5 = *param_4;
        *param_4 = sVar5 + -1;
        if ((short)(sVar5 + -1) == 0) goto LAB_004928fc;
        plVar10 = *(long **)(param_1 + 200);
      }
    }
    uVar4 = (**(code **)(*plVar10 + 0x20))();
    *(undefined2 *)(param_2 + 0x12) = uVar4;
    uVar6 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
    FUN_004947e0(param_2,uVar6);
    if ((*(byte *)(param_1 + 0xfc) & 0x30) == 0x10) {
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 8);
      uVar14 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        puVar11 = *(undefined2 **)(param_2 + 0x18);
        do {
          puVar12 = puVar11 + 1;
          iVar8 = (**(code **)(*plVar18 + 0x58))(plVar18,*puVar11);
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar8;
          uVar14 = *(uint *)(param_2 + 0x20);
          puVar11 = puVar12;
        } while (puVar12 != (undefined2 *)(*(long *)(param_2 + 0x18) + (ulong)uVar14 * 2));
      }
    }
    else {
      uVar14 = *(uint *)(param_2 + 0x20);
    }
    *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) - (short)uVar14;
    if ((*(byte *)(param_1 + 0xfd) >> 3 & 1) != 0) goto LAB_004929d0;
LAB_00492860:
    lVar15 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
    *(long *)PTR_DAT_02712b80 = lVar15;
    uVar2 = *(ushort *)(param_2 + 0x10);
    uVar14 = 0;
    uVar13 = (uint)((ulong)lVar15 >> 0x21);
    if (uVar2 != 0) {
      uVar14 = uVar13 / uVar2;
    }
    iVar19 = 0;
    iVar8 = -1;
    do {
      if ((*(byte *)(param_1 + 0xfc) & 0x30) == 0) {
        if (*(short *)(param_1 + 0xfa) != 0) goto LAB_004928cc;
LAB_004928dc:
        iVar8 = iVar8 + 1;
      }
      else {
        uVar9 = FUN_004947b0(param_2,iVar19);
        if ((uVar9 & 1) == 0) {
LAB_004928cc:
          uVar9 = FUN_00494880(param_2,iVar19);
          if ((uVar9 & 1) == 0) goto LAB_004928dc;
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar8 < (int)(uVar13 - uVar14 * uVar2));
  }
  else {
    if ((*(byte *)(param_1 + 0xfd) >> 3 & 1) == 0) goto LAB_00492860;
LAB_004929d0:
    iVar8 = FUN_004948c0(param_2);
    iVar19 = 0;
    if (-1 < iVar8) {
      iVar20 = -1;
      iVar19 = 0;
      do {
        if ((*(byte *)(param_1 + 0xfc) & 0x30) == 0) {
          if (*(short *)(param_1 + 0xfa) != 0) goto LAB_00492a14;
LAB_00492a24:
          iVar7 = (**(code **)(*plVar18 + 0x58))(plVar18,iVar19);
          iVar20 = iVar7 + iVar20;
        }
        else {
          uVar9 = FUN_004947b0(param_2,iVar19);
          if ((uVar9 & 1) == 0) {
LAB_00492a14:
            uVar9 = FUN_00494880(param_2,iVar19);
            if ((uVar9 & 1) == 0) goto LAB_00492a24;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar20 < iVar8);
    }
  }
  iVar19 = iVar19 + 0xffff;
  if ((*(byte *)(param_1 + 0xfc) & 0x30) == 0) {
    uVar9 = FUN_004947b0(param_2,iVar19);
    if ((uVar9 & 1) == 0) {
      FUN_00494780(param_2,iVar19);
      *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
    }
    FUN_00492580(param_1,param_2,iVar19);
    return iVar19;
  }
  uVar2 = *(ushort *)(param_1 + 0xfa);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  iVar8 = (**(code **)(*plVar18 + 0x58))(plVar18,iVar19);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar8;
  *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
  FUN_00494780(param_2,iVar19);
  puVar3 = PTR_DAT_02712a90;
  uVar13 = *(uint *)(param_2 + 0x20);
  uVar14 = *(uint *)(param_2 + 0x24);
  if (uVar14 <= uVar13) {
    uVar14 = uVar14 + 1;
    puVar11 = (undefined2 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 << 1);
    if (puVar11 == (undefined2 *)0x0) goto LAB_00492c78;
    puVar12 = *(undefined2 **)(param_2 + 0x18);
    if ((puVar12 != (undefined2 *)0x0) && (puVar12 != puVar11)) {
      uVar1 = *(uint *)(param_2 + 0x20);
      if (uVar1 != 0) {
        *puVar11 = *puVar12;
        if (uVar1 != 1) {
          if (uVar1 == 2) {
            lVar16 = 1;
          }
          else {
            lVar15 = 0;
            do {
              lVar16 = lVar15;
              puVar11[lVar16 + 1] = *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar16 * 2 + 2);
              puVar11[lVar16 + 2] = *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar16 * 2 + 4);
              lVar15 = lVar16 + 2;
            } while (((ulong)uVar1 - 1) - (ulong)(~uVar1 & 1) != lVar16 + 2);
            lVar16 = lVar16 + 3;
            if ((~uVar1 & 1) == 0) goto LAB_00492bb4;
          }
          puVar11[lVar16] = *(undefined2 *)(*(long *)(param_2 + 0x18) + lVar16 * 2);
        }
LAB_00492bb4:
        puVar12 = *(undefined2 **)(param_2 + 0x18);
      }
      FUN_00404870(*(undefined4 *)puVar3,puVar12);
    }
    *(undefined2 **)(param_2 + 0x18) = puVar11;
    *(uint *)(param_2 + 0x24) = uVar14;
  }
  if (uVar13 < uVar14) {
    puVar11 = (undefined2 *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 2);
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) + 1;
    if (puVar11 != (undefined2 *)0x0) {
      *puVar11 = (short)iVar19;
      FUN_00494820(param_2,iVar19);
      sVar5 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
      uVar14 = *(uint *)(param_2 + 0x20);
      if ((ushort)(sVar5 - 1U) <= uVar2) {
        uVar2 = sVar5 - 1U;
      }
      if (uVar14 <= uVar2) {
        return iVar19;
      }
      puVar11 = *(undefined2 **)(param_2 + 0x18);
      uVar4 = *puVar11;
      puVar12 = puVar11 + ((ulong)uVar14 - 1);
      if (puVar11 < puVar12) {
        uVar9 = (ulong)uVar14 * 2 - 3;
        uVar14 = ((uint)(uVar9 >> 1) & 0x7fffffff) + 1;
        if ((uVar14 & 3) != 0) {
          lVar15 = -((ulong)uVar14 & 3);
          puVar17 = puVar11;
          do {
            puVar11 = puVar17 + 1;
            *puVar17 = *puVar11;
            lVar15 = lVar15 + 1;
            puVar17 = puVar11;
          } while (lVar15 != 0);
        }
        if (5 < uVar9) {
          do {
            *puVar11 = puVar11[1];
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar11 + 2);
            puVar17 = puVar11 + 4;
            puVar11[3] = *puVar17;
            puVar11 = puVar17;
          } while (puVar17 < puVar12);
        }
        uVar14 = *(uint *)(param_2 + 0x20);
      }
      *(uint *)(param_2 + 0x20) = uVar14 - 1;
      FUN_00494850(param_2,uVar4);
      uVar9 = FUN_004947b0(param_2,uVar4);
      if ((uVar9 & 1) == 0) {
        iVar8 = (**(code **)(*plVar18 + 0x58))(plVar18,uVar4);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar8;
        *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
        return iVar19;
      }
      return iVar19;
    }
  }
LAB_00492c78:
  *(undefined2 *)(param_2 + 0x12) = 0;
  return iVar19;
}


