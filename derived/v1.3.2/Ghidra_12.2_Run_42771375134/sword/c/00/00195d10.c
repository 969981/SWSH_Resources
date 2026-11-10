/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00195d10; name: FUN_00195d10
 */


void FUN_00195d10(long *param_1,int *param_2,undefined4 *param_3)

{
  long *__s;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  
  __s = param_1 + 0xc;
  *param_1 = (long)(PTR_DAT_02710fc8 + 0x10);
  *(undefined1 *)(param_1 + 1) = 1;
  iVar4 = *param_2;
  *(int *)((long)param_1 + 0xc) = iVar4;
  lVar10 = *(long *)(param_2 + 0x12);
  *(bool *)(param_1 + 2) = lVar10 != 0;
  *(int *)(param_1 + 3) = param_2[1];
  *(int *)((long)param_1 + 0x14) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x1c) = *param_3;
  *(undefined4 *)(param_1 + 4) = param_3[1];
  *(undefined4 *)((long)param_1 + 0x24) = param_3[2];
  *(undefined4 *)(param_1 + 5) = param_3[3];
  *(undefined4 *)((long)param_1 + 0x2c) = param_3[4];
  *(undefined4 *)(param_1 + 6) = param_3[5];
  uVar16 = (iVar4 + 0x1fU >> 5) * 4;
  lVar11 = (long)__s + (ulong)(uVar16 + 0xf & 0x3ffffff0);
  lVar14 = lVar11 + (ulong)(uint)(iVar4 << 5);
  if (lVar10 == 0) {
    lVar14 = 0;
  }
  *(uint *)(param_1 + 10) = iVar4 + 0x1fU >> 5 | 0x80000000;
  param_1[7] = lVar11;
  param_1[8] = lVar14;
  param_1[9] = (long)__s;
  if (*(long *)(param_2 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(ulong)uVar16);
  }
                    /* try { // try from 00195de0 to 00195e13 has its CatchHandler @ 00195f90 */
  FUN_00195fd0(param_1 + 9);
  uVar16 = *(uint *)((long)param_1 + 0x14);
  uVar13 = (ulong)uVar16;
  if (uVar16 != 0) {
    lVar11 = param_1[7];
    if (uVar13 - 1 < 3) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      puVar12 = (undefined2 *)(lVar11 + 0x5c);
      do {
        lVar14 = lVar14 + 4;
        puVar12[-0x20] = 0;
        puVar12[-0x10] = 0;
        *puVar12 = 0;
        puVar12[0x10] = 0;
        puVar12 = puVar12 + 0x40;
      } while (uVar13 - (uVar13 & 3) != lVar14);
    }
    if ((uVar16 & 3) != 0) {
      lVar10 = -(uVar13 & 3);
      puVar12 = (undefined2 *)(lVar11 + lVar14 * 0x20 + 0x1c);
      do {
        lVar10 = lVar10 + 1;
        *puVar12 = 0;
        puVar12 = puVar12 + 0x10;
      } while (lVar10 != 0);
    }
    puVar8 = PTR_DAT_02710c28;
    lVar11 = param_1[9];
    lVar14 = *(long *)(param_2 + 6);
    iVar4 = param_2[8];
    lVar10 = *(long *)(param_2 + 10);
    uVar13 = 0;
    iVar5 = param_2[0xc];
    do {
      uVar17 = *(uint *)(lVar11 + uVar13 * 4);
      if (uVar17 != 0) {
        lVar9 = param_1[7];
        do {
          uVar7 = *(uint *)(puVar8 + (ulong)((uVar17 & -uVar17) * 0x77cb531 >> 0x1b) * 4) |
                  (int)uVar13 << 5;
          puVar1 = (undefined4 *)(lVar14 + (ulong)(iVar4 * uVar7));
          puVar2 = (undefined4 *)(lVar9 + (ulong)uVar7 * 0x20);
          puVar3 = (undefined4 *)(lVar10 + (ulong)(iVar5 * uVar7));
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          puVar2[2] = puVar1[2];
          puVar2[4] = *puVar3;
          puVar2[5] = puVar3[1];
          uVar6 = puVar3[2];
          uVar17 = uVar17 - 1 & uVar17;
          puVar2[3] = 0;
          puVar2[6] = uVar6;
          puVar2[7] = 1;
        } while (uVar17 != 0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar16 - 1 >> 5) + 1);
    if ((char)param_1[2] != '\0') {
      lVar14 = *(long *)(param_2 + 0x12);
      iVar4 = param_2[0x14];
      uVar15 = 0;
      do {
        uVar16 = *(uint *)(lVar11 + uVar15 * 4);
        if (uVar16 != 0) {
          lVar10 = param_1[8];
          do {
            uVar17 = *(uint *)(puVar8 + (ulong)((uVar16 & -uVar16) * 0x77cb531 >> 0x1b) * 4) |
                     (int)uVar15 << 5;
            *(undefined4 *)(lVar10 + (ulong)uVar17 * 4) =
                 *(undefined4 *)(lVar14 + (ulong)(iVar4 * uVar17));
            uVar16 = uVar16 - 1 & uVar16;
          } while (uVar16 != 0);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar13);
    }
  }
  return;
}


