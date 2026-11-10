/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006100d0; name: FUN_006100d0
 */


void FUN_006100d0(int param_1,ulong *param_2,long param_3,int param_4)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (param_1 != 0) {
    uVar11 = *(undefined8 *)(param_3 + (long)param_4 * 0x198 + 400);
    lVar13 = *(long *)(param_3 + (long)param_4 * 0x198 + 0x198);
    do {
      while( true ) {
        uVar3 = (uint)param_2[1];
        if (uVar3 != 0) break;
LAB_006101bc:
        param_1 = param_1 + -1;
        param_2 = param_2 + 2;
        if (param_1 == 0) {
          return;
        }
      }
      uVar9 = *param_2;
      uVar12 = uVar9 + (ulong)uVar3 * 0x48;
      uVar7 = 0;
      uVar17 = 0;
      uVar18 = uVar9;
      do {
        pbVar1 = (byte *)(uVar18 + 0x1c);
        uVar2 = uVar18;
        if (uVar17 != 0) {
          uVar2 = uVar17;
        }
        uVar18 = uVar18 + 0x48;
        if ((*pbVar1 & 0x20) != 0) {
          uVar7 = uVar7 + 1;
          uVar17 = uVar2;
        }
      } while (uVar18 < uVar12);
      uVar18 = uVar17;
      if (uVar7 < 2) {
        if (uVar7 == 1) {
          lVar13 = *(long *)(uVar17 + 0x40);
          lVar4 = FUN_00602580(*(undefined8 *)(uVar17 + 0x30),uVar11);
          lVar13 = lVar13 - lVar4;
        }
        if (uVar3 != 0) {
          do {
            if (uVar17 != uVar9) {
              lVar4 = FUN_00602580(*(undefined8 *)(uVar9 + 0x30),uVar11);
              *(long *)(uVar9 + 0x40) = lVar4 + lVar13;
            }
            uVar9 = uVar9 + 0x48;
          } while (uVar9 < uVar12);
        }
        goto LAB_006101bc;
      }
      do {
        do {
          uVar9 = uVar18;
          uVar18 = *(ulong *)(uVar9 + 8);
          if (uVar18 == uVar17) goto LAB_006102c0;
        } while ((*(byte *)(uVar18 + 0x1c) >> 5 & 1) != 0);
        uVar12 = uVar18;
        do {
          uVar12 = *(ulong *)(uVar12 + 8);
        } while ((*(byte *)(uVar12 + 0x1c) >> 5 & 1) == 0);
        lVar16 = *(long *)(uVar9 + 0x30);
        lVar8 = *(long *)(uVar12 + 0x30);
        lVar4 = lVar16 - lVar8;
        if (lVar4 == 0 || lVar16 < lVar8) {
          lVar10 = *(long *)(uVar9 + 0x40);
          lVar4 = lVar8 - lVar16;
          lVar15 = *(long *)(uVar12 + 0x40) - lVar10;
          if (lVar4 < 1) goto LAB_00610220;
LAB_00610244:
          uVar14 = FUN_006025a0(lVar15,lVar4);
          uVar18 = *(ulong *)(uVar9 + 8);
        }
        else {
          lVar10 = *(long *)(uVar12 + 0x40);
          lVar15 = *(long *)(uVar9 + 0x40) - lVar10;
          lVar16 = lVar8;
          if (0 < lVar4) goto LAB_00610244;
LAB_00610220:
          uVar14 = 0x10000;
        }
        do {
          lVar8 = *(long *)(uVar18 + 0x30) - lVar16;
          if (lVar8 < 1) {
            uVar6 = uVar11;
LAB_00610280:
            lVar8 = FUN_00602580(lVar8,uVar6);
            lVar5 = lVar10;
          }
          else {
            if (lVar8 < lVar4) {
              uVar6 = uVar14;
              goto LAB_00610280;
            }
            lVar5 = FUN_00602580(lVar8 - lVar4,uVar11);
            lVar8 = lVar15 + lVar10;
          }
          *(long *)(uVar18 + 0x40) = lVar8 + lVar5;
          uVar18 = *(ulong *)(uVar18 + 8);
        } while (uVar18 != uVar12);
        uVar18 = uVar12;
      } while (uVar12 != uVar17);
LAB_006102c0:
      param_1 = param_1 + -1;
      param_2 = param_2 + 2;
    } while (param_1 != 0);
  }
  return;
}


