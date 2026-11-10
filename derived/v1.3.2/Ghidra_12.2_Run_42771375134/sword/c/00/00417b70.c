/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00417b70; name: FUN_00417b70
 */


int FUN_00417b70(undefined8 param_1,long *param_2,undefined1 *param_3)

{
  ushort *puVar1;
  long *plVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ushort *puVar10;
  long lVar11;
  ushort *puVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  
  *param_3 = 0;
  if ((*(uint *)(*param_2 + 0x30) | 2) == 3) {
    lVar7 = FUN_004164b0();
  }
  else {
    lVar7 = param_2[2];
  }
  if (lVar7 == 0) {
LAB_00417c58:
    iVar6 = 0;
    *param_3 = 1;
  }
  else {
    lVar13 = *param_2;
    plVar2 = (long *)(lVar13 + 0x20);
    if (*(short *)(lVar7 + 0x12) == 0) {
      if (((*(byte *)((long)param_2 + 10) & 1) == 0) ||
         (((*(byte *)((long)param_2 + 10) >> 1 & 1) == 0 &&
          (sVar4 = (short)param_2[1] + -1, *(short *)(param_2 + 1) = sVar4, sVar4 == 0))))
      goto LAB_00417c58;
      *(short *)(lVar7 + 0x12) = (short)*(undefined4 *)(lVar13 + 0x28);
      FUN_004947e0(lVar7,*(undefined4 *)(lVar13 + 0x28));
      iVar6 = *(int *)(lVar7 + 8);
      uVar5 = *(uint *)(lVar7 + 0x20);
      *(int *)(lVar7 + 0xc) = iVar6;
      if (uVar5 != 0) {
        puVar12 = *(ushort **)(lVar7 + 0x18);
        lVar11 = (ulong)uVar5 * 2 + -2;
        puVar10 = puVar12;
        if (((uint)lVar11 >> 1 & 1) == 0) {
          iVar6 = iVar6 - *(int *)(*(long *)(*plVar2 + (ulong)*puVar12 * 8) + 0x1c);
          *(int *)(lVar7 + 0xc) = iVar6;
          puVar10 = puVar12 + 1;
        }
        if (lVar11 != 0) {
          do {
            iVar6 = iVar6 - *(int *)(*(long *)(*plVar2 + (ulong)*puVar10 * 8) + 0x1c);
            *(int *)(lVar7 + 0xc) = iVar6;
            puVar1 = puVar10 + 1;
            puVar10 = puVar10 + 2;
            iVar6 = iVar6 - *(int *)(*(long *)(*plVar2 + (ulong)*puVar1 * 8) + 0x1c);
            *(int *)(lVar7 + 0xc) = iVar6;
          } while (puVar10 != puVar12 + uVar5);
        }
      }
      *(short *)(lVar7 + 0x10) = *(short *)(lVar7 + 0x10) - (short)uVar5;
      if (*(char *)(lVar13 + 0x40) != '\0') goto LAB_00417bd0;
LAB_00417d3c:
      uVar3 = *(ushort *)(lVar7 + 0x10);
      if (uVar3 == 0) {
LAB_00417de8:
        *(undefined2 *)(lVar7 + 0x12) = 0;
        return 0;
      }
      lVar11 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
      *(long *)PTR_DAT_02712b80 = lVar11;
      uVar5 = 0;
      uVar9 = (uint)((ulong)lVar11 >> 0x21);
      if (uVar3 != 0) {
        uVar5 = uVar9 / uVar3;
      }
      uVar14 = 0;
      iVar6 = -1;
      do {
        if (*(char *)(lVar13 + 0x41) == '\0') {
          if (*(short *)(lVar13 + 0x44) != 0) goto LAB_00417da4;
LAB_00417db4:
          iVar6 = iVar6 + 1;
        }
        else {
          uVar8 = FUN_004947b0(lVar7,uVar14);
          if ((uVar8 & 1) == 0) {
LAB_00417da4:
            uVar8 = FUN_00494880(lVar7,uVar14);
            if ((uVar8 & 1) == 0) goto LAB_00417db4;
          }
        }
        uVar14 = (ulong)((int)uVar14 + 1);
      } while (iVar6 < (int)(uVar9 - uVar5 * uVar3));
    }
    else {
      if (*(char *)(lVar13 + 0x40) == '\0') goto LAB_00417d3c;
LAB_00417bd0:
      if (*(int *)(lVar7 + 0xc) == 0) goto LAB_00417de8;
      iVar6 = FUN_004948c0(lVar7);
      if (iVar6 < 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        iVar15 = -1;
        do {
          if (*(char *)(lVar13 + 0x41) == '\0') {
            if (*(short *)(lVar13 + 0x44) != 0) goto LAB_00417c14;
LAB_00417c24:
            iVar15 = *(int *)(*(long *)(*plVar2 + uVar14 * 8) + 0x1c) + iVar15;
          }
          else {
            uVar8 = FUN_004947b0(lVar7,uVar14 & 0xffffffff);
            if ((uVar8 & 1) == 0) {
LAB_00417c14:
              uVar8 = FUN_00494880(lVar7,uVar14 & 0xffffffff);
              if ((uVar8 & 1) == 0) goto LAB_00417c24;
            }
          }
          uVar14 = uVar14 + 1;
        } while (iVar15 < iVar6);
      }
    }
    iVar6 = (int)uVar14 + 0xffff;
    FUN_004182f0(param_1,lVar13,iVar6,plVar2,lVar7);
  }
  return iVar6;
}


