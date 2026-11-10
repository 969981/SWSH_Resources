/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060e0e0; name: FUN_0060e0e0
 */


void FUN_0060e0e0(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long local_78;
  long local_70;
  
  uVar3 = *(ulong *)(param_1 + 0x188);
  uVar12 = uVar3 >> 8;
  iVar16 = (int)((ulong)param_3 >> 8);
  iVar14 = (int)(uVar3 >> 8);
  if ((*(int *)(param_1 + 0x14c) <= iVar16 && *(int *)(param_1 + 0x14c) <= iVar14) ||
     (iVar7 = *(int *)(param_1 + 0x148),
     (iVar14 < iVar7 && iVar7 != iVar16) && (iVar7 <= iVar14 || iVar16 <= iVar7)))
  goto LAB_0060e3f8;
  uVar5 = *(ulong *)(param_1 + 0x180);
  uVar11 = uVar5 >> 8;
  uVar18 = uVar5 - ((long)(uVar11 << 0x20) >> 0x18);
  uVar15 = uVar3 - ((long)(uVar12 << 0x20) >> 0x18);
  iVar7 = (int)(param_2 >> 8);
  iVar10 = (int)(uVar5 >> 8);
  if ((iVar14 != iVar16) || (iVar10 != iVar7)) {
    lVar4 = param_3 - uVar3;
    if (lVar4 == 0) {
      FUN_0060dfb0(param_1,param_2 >> 8 & 0xffffffff,iVar14);
    }
    else {
      lVar6 = param_2 - uVar5;
      if (lVar6 == 0) {
        iVar13 = (int)uVar15;
        iVar17 = (int)uVar18;
        if (lVar4 < 1) {
          iVar14 = iVar14 + -1;
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) - iVar13;
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + iVar13 * -iVar17 * 2;
          FUN_0060dfb0(param_1,uVar11 & 0xffffffff,iVar14);
          if (iVar14 == iVar16) {
            uVar15 = 0x100;
          }
          else {
            uVar15 = 0x100;
            do {
              iVar14 = iVar14 + -1;
              *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -0x100;
              *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + iVar17 * -0x200;
              FUN_0060dfb0(param_1,uVar11 & 0xffffffff,iVar14);
            } while (iVar16 != iVar14);
          }
        }
        else {
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + (0x100 - iVar13);
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + (0x100 - iVar13) * iVar17 * 2;
          FUN_0060dfb0(param_1,uVar11 & 0xffffffff,iVar14 + 1);
          if (iVar14 + 1 != iVar16) {
            do {
              *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 0x100;
              *(int *)(param_1 + 0x150) = iVar17 * 0x200 + *(int *)(param_1 + 0x150);
              FUN_0060dfb0(param_1,iVar10,(int)uVar12 + 2);
              uVar1 = (int)uVar12 + 1;
              uVar12 = (ulong)uVar1;
            } while (iVar16 - 1U != uVar1);
          }
          uVar15 = 0;
        }
      }
      else {
        if (iVar10 == iVar7) {
          local_70 = 0;
          lVar8 = lVar6 * uVar15 - uVar18 * lVar4;
          if (iVar14 == iVar16) goto LAB_0060e268;
LAB_0060e194:
          local_78 = 0;
          if (lVar4 != 0) {
            local_78 = 0xffffffffffffff / lVar4;
          }
          local_78 = -local_78;
        }
        else {
          local_70 = 0;
          if (lVar6 != 0) {
            local_70 = 0xffffffffffffff / lVar6;
          }
          lVar8 = lVar6 * uVar15 - uVar18 * lVar4;
          if (iVar14 != iVar16) goto LAB_0060e194;
LAB_0060e268:
          local_78 = 0;
        }
        do {
          iVar10 = (int)uVar18;
          iVar14 = (int)uVar15;
          if ((lVar8 < 1) && (lVar6 * 0x100 < lVar8)) {
            lVar9 = lVar8 + lVar4 * -0x100;
            uVar15 = (ulong)(lVar8 * local_70) >> 0x38;
            iVar14 = (uint)(byte)((ulong)(lVar8 * local_70) >> 0x38) - iVar14;
            *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + iVar14;
            *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + iVar14 * iVar10;
            uVar11 = (ulong)((int)uVar11 - 1);
            uVar18 = 0x100;
          }
          else {
            lVar9 = lVar8 + lVar6 * -0x100;
            lVar2 = lVar9 + lVar4 * 0x100;
            if ((lVar9 < 1) && (0 < lVar2)) {
              *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + (0x100 - iVar14);
              uVar12 = (ulong)((int)uVar12 + 1);
              uVar15 = 0;
              uVar18 = (ulong)(local_78 * lVar9) >> 0x38;
              *(uint *)(param_1 + 0x150) =
                   *(int *)(param_1 + 0x150) +
                   ((uint)(byte)((ulong)(local_78 * lVar9) >> 0x38) + iVar10) * (0x100 - iVar14);
            }
            else if ((lVar2 < 1) && (lVar9 = lVar8 + lVar4 * 0x100, -1 < lVar9)) {
              uVar18 = 0;
              uVar15 = (ulong)(lVar9 * local_70) >> 0x38;
              iVar14 = (uint)(byte)((ulong)(lVar9 * local_70) >> 0x38) - iVar14;
              uVar11 = (ulong)((int)uVar11 + 1);
              *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + iVar14;
              *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + iVar14 * (iVar10 + 0x100);
            }
            else {
              *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) - iVar14;
              uVar18 = (ulong)(local_78 * lVar8) >> 0x38;
              lVar9 = lVar8 + lVar6 * 0x100;
              uVar12 = (ulong)((int)uVar12 - 1);
              uVar15 = 0x100;
              *(uint *)(param_1 + 0x150) =
                   *(int *)(param_1 + 0x150) -
                   iVar14 * (iVar10 + (uint)(byte)((ulong)(local_78 * lVar8) >> 0x38));
            }
          }
          FUN_0060dfb0(param_1,uVar11 & 0xffffffff,uVar12 & 0xffffffff);
          lVar8 = lVar9;
        } while (((int)uVar11 != iVar7) || ((int)uVar12 != iVar16));
      }
    }
  }
  iVar14 = ((int)param_3 + iVar16 * -0x100) - (int)uVar15;
  *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + iVar14;
  *(int *)(param_1 + 0x150) =
       *(int *)(param_1 + 0x150) + ((int)param_2 + iVar7 * -0x100 + (int)uVar18) * iVar14;
LAB_0060e3f8:
  *(ulong *)(param_1 + 0x180) = param_2;
  *(long *)(param_1 + 0x188) = param_3;
  return;
}


