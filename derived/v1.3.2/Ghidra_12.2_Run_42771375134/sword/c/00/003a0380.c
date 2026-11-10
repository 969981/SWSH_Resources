/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a0380; name: FUN_003a0380
 */


int FUN_003a0380(int *param_1,int param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int extraout_w1;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  long lVar15;
  ulong *puVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  uVar19 = param_1[0xc0];
  if (uVar19 == 0) {
    iVar17 = 0;
  }
  else {
    iVar20 = *param_1;
    iVar17 = 0;
    uVar18 = 0;
    iVar7 = param_2;
    do {
      while( true ) {
        lVar8 = *(long *)(param_1 + 0xc6);
        if (*(int *)(lVar8 + uVar18 * 0x18 + 0x14) != param_2) break;
        uVar6 = *(uint *)(lVar8 + uVar18 * 0x18 + 0x10);
        uVar10 = (ulong)uVar6;
        if ((char)param_1[0x7a0] == '\0') {
          puVar1 = (undefined8 *)
                   (*(long *)(param_1 + 8) +
                   (ulong)*(uint *)(*(long *)(param_1 + 6) + uVar10 * 4) * 0x20);
          puVar1[2] = 0xfe7ffffffe7fffff;
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
          *(undefined4 *)(puVar1 + 3) = 0xfe7fffff;
          if (uVar6 == iVar20 - 1U) goto LAB_003a0400;
LAB_003a0448:
          uVar21 = iVar20 - 1;
          lVar15 = *(long *)(param_1 + 4);
          puVar13 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar21 * 0x18);
          puVar11 = (undefined4 *)(*(long *)(param_1 + 2) + uVar10 * 0x18);
          *puVar11 = *puVar13;
          puVar11[1] = puVar13[1];
          puVar11[2] = puVar13[2];
          puVar11[3] = puVar13[3];
          uVar3 = puVar13[5];
          puVar16 = (ulong *)(lVar15 + (ulong)uVar21 * 0x10);
          puVar11[4] = puVar13[4];
          puVar11[5] = uVar3;
          puVar2 = (ulong *)(lVar15 + uVar10 * 0x10);
          puVar2[1] = puVar16[1];
          *puVar2 = *puVar16;
          *(undefined4 *)(*(long *)(param_1 + 6) + uVar10 * 4) =
               *(undefined4 *)(*(long *)(param_1 + 6) + (ulong)uVar21 * 4);
          uVar4 = *puVar16;
          uVar5 = puVar16[1];
          uVar10 = (uVar4 & 0xffffffff | uVar5 << 0x20) + (uVar4 << 0x20 ^ 0xffffffffffffffff);
          uVar10 = uVar10 ^ uVar10 >> 0x16;
          uVar10 = uVar10 + (uVar10 << 0xd ^ 0xffffffffffffffff);
          uVar10 = (uVar10 ^ uVar10 >> 8) * 9;
          uVar10 = uVar10 ^ uVar10 >> 0xf;
          uVar10 = uVar10 + (uVar10 << 0x1b ^ 0xffffffffffffffff);
          uVar21 = param_1[0xbf];
          uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0xc2) +
                                   (ulong)(uVar21 & ((uint)(uVar10 >> 0x1f) ^ (uint)uVar10)) * 4);
          lVar15 = *(long *)(param_1 + 0xc6);
          puVar16 = (ulong *)(lVar15 + uVar10 * 0x18);
          if (*puVar16 != uVar4 || puVar16[1] != uVar5) {
            do {
              uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0xc4) + uVar10 * 4);
              puVar16 = (ulong *)(lVar15 + uVar10 * 0x18);
            } while (*puVar16 != uVar4 || puVar16[1] != uVar5);
          }
          *(uint *)(lVar15 + uVar10 * 0x18 + 0x10) = uVar6;
        }
        else {
          if (uVar6 != iVar20 - 1U) goto LAB_003a0448;
LAB_003a0400:
          uVar21 = param_1[0xbf];
        }
        iVar20 = iVar20 + -1;
        puVar9 = (uint *)(lVar8 + uVar18 * 0x18);
        uVar10 = (ulong)*puVar9;
        uVar10 = (uVar10 | *(long *)(puVar9 + 2) << 0x20) + (uVar10 << 0x20 ^ 0xffffffffffffffff);
        uVar10 = uVar10 ^ uVar10 >> 0x16;
        uVar10 = uVar10 + (uVar10 << 0xd ^ 0xffffffffffffffff);
        uVar10 = (uVar10 ^ uVar10 >> 8) * 9;
        uVar10 = uVar10 ^ uVar10 >> 0xf;
        uVar10 = uVar10 + (uVar10 << 0x1b ^ 0xffffffffffffffff);
        iVar17 = iVar17 + 1;
        FUN_003a06b0(param_1 + 0xbe,iVar7,uVar21 & ((uint)(uVar10 >> 0x1f) ^ (uint)uVar10),uVar18);
        uVar19 = uVar19 - 1;
        iVar7 = extraout_w1;
        if (uVar19 <= (uint)uVar18) goto LAB_003a0588;
      }
      uVar6 = (uint)uVar18 + 1;
      uVar18 = (ulong)uVar6;
    } while (uVar6 < uVar19);
LAB_003a0588:
    uVar6 = param_1[0xc0] | (uint)param_1[0xc0] >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    *param_1 = iVar20;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar19 = uVar6 + 1;
    if ((param_1[0xbe] != uVar19) && ((uint)param_1[200] <= uVar19)) {
      param_1[0xbe] = uVar19;
      param_1[0xbf] = uVar6;
      FUN_003a5f40(param_1 + 0xbe);
      uVar19 = param_1[0xc];
      goto joined_r0x003a05e4;
    }
  }
  uVar19 = param_1[0xc];
joined_r0x003a05e4:
  if (uVar19 != 0) {
    uVar18 = 0;
    do {
      while (param_1[uVar18 + 0xae] == param_2) {
        uVar19 = uVar19 - 1;
        piVar14 = param_1 + (ulong)uVar19 * 6 + 0x4e;
        param_1[0xc] = uVar19;
        piVar12 = param_1 + uVar18 * 6 + 0x4e;
        iVar17 = iVar17 + 1;
        *piVar12 = *piVar14;
        piVar12[1] = piVar14[1];
        piVar12[2] = piVar14[2];
        piVar12[3] = piVar14[3];
        iVar20 = piVar14[5];
        piVar12[4] = piVar14[4];
        piVar12[5] = iVar20;
        *(undefined8 *)(param_1 + uVar18 * 4 + 0xe + 2) =
             *(undefined8 *)(param_1 + (ulong)uVar19 * 4 + 0xe + 2);
        *(undefined8 *)(param_1 + uVar18 * 4 + 0xe) =
             *(undefined8 *)(param_1 + (ulong)uVar19 * 4 + 0xe);
        param_1[uVar18 + 0xae] = param_1[(ulong)uVar19 + 0xae];
        if (uVar19 <= (uint)uVar18) {
          return iVar17;
        }
      }
      uVar6 = (uint)uVar18 + 1;
      uVar18 = (ulong)uVar6;
    } while (uVar6 < uVar19);
  }
  return iVar17;
}


