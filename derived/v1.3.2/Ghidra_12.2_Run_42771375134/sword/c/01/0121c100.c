/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121c100; name: FUN_0121c100
 */


void FUN_0121c100(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  long local_50 [3];
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*param_2 != 0) && (7 < (ulong)param_2[1])) {
    local_50[1] = 8;
    local_50[0] = *param_2;
  }
  FUN_01222770(local_50 + 2,local_50);
  lVar5 = *param_2;
  if (lVar5 == 0) {
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    bVar11 = 0;
    bVar10 = 0;
    bVar8 = 0;
    bVar7 = 0;
    bVar9 = 0;
    bVar12 = 0;
    uVar17 = 0;
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    goto LAB_0121c244;
  }
  uVar6 = param_2[1] * 8;
  if (uVar6 < 0x44) {
    bVar8 = 0;
    bVar7 = 0;
LAB_0121c228:
    bVar9 = 0;
LAB_0121c22c:
    bVar11 = 0;
    bVar10 = 0;
    bVar12 = 0;
LAB_0121c230:
    uVar13 = 0;
    uVar17 = 0;
LAB_0121c234:
    uVar14 = 0;
    uVar1 = 0;
LAB_0121c238:
    uVar15 = 0;
    uVar2 = 0;
LAB_0121c23c:
    uVar16 = 0;
    uVar3 = 0;
  }
  else {
    bVar7 = *(byte *)(lVar5 + 8) & 0xf;
    if (uVar6 < 0x48) {
      bVar8 = 0;
      goto LAB_0121c228;
    }
    bVar8 = *(byte *)(lVar5 + 8) >> 4;
    if (uVar6 == 0x48) goto LAB_0121c228;
    bVar9 = *(byte *)(lVar5 + 9) & 1;
    if (uVar6 < 0x4a) goto LAB_0121c22c;
    bVar10 = *(byte *)(lVar5 + 9) >> 1 & 1;
    bVar12 = *(byte *)(lVar5 + 9) >> 2 & 1;
    if (uVar6 < 0x4e) {
      bVar11 = 0;
      goto LAB_0121c230;
    }
    bVar11 = *(byte *)(lVar5 + 9) >> 3 & 7;
    if (4 < bVar11) {
      bVar11 = 0;
    }
    if (uVar6 < 0x60) goto LAB_0121c230;
    uVar17 = *(undefined2 *)(lVar5 + 10);
    if (uVar6 < 0x70) {
      uVar13 = 0;
      goto LAB_0121c234;
    }
    uVar13 = *(undefined2 *)(lVar5 + 0xc);
    if (uVar6 < 0x90) goto LAB_0121c234;
    uVar1 = *(undefined4 *)(lVar5 + 0xe);
    if (uVar6 < 0xa0) {
      uVar14 = 0;
      goto LAB_0121c238;
    }
    uVar14 = *(undefined2 *)(lVar5 + 0x12);
    if (uVar6 < 0xb0) goto LAB_0121c238;
    uVar2 = *(undefined2 *)(lVar5 + 0x14);
    if (uVar6 < 0xc0) {
      uVar15 = 0;
      goto LAB_0121c23c;
    }
    uVar15 = *(undefined2 *)(lVar5 + 0x16);
    if (uVar6 < 0xd0) goto LAB_0121c23c;
    uVar3 = *(undefined2 *)(lVar5 + 0x18);
    if (uVar6 < 0xd8) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined1 *)(lVar5 + 0x1a);
      if (0xdf < uVar6) {
        uVar4 = *(undefined1 *)(lVar5 + 0x1b);
        goto LAB_0121c244;
      }
    }
  }
  uVar4 = 0;
LAB_0121c244:
  *(undefined4 *)(param_1 + 3) = local_28;
  *param_1 = local_50[2];
  param_1[1] = uStack_38;
  param_1[2] = local_30;
  *(byte *)((long)param_1 + 0x1c) = bVar7;
  *(byte *)((long)param_1 + 0x1d) = bVar8;
  *(byte *)((long)param_1 + 0x1e) = bVar9;
  *(byte *)((long)param_1 + 0x1f) = bVar10;
  *(byte *)(param_1 + 4) = bVar12;
  *(byte *)((long)param_1 + 0x21) = bVar11;
  *(undefined2 *)((long)param_1 + 0x22) = uVar17;
  *(undefined2 *)((long)param_1 + 0x24) = uVar13;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined2 *)((long)param_1 + 0x2c) = uVar14;
  *(undefined2 *)((long)param_1 + 0x2e) = uVar2;
  *(undefined2 *)(param_1 + 6) = uVar15;
  *(undefined2 *)((long)param_1 + 0x32) = uVar3;
  *(undefined1 *)((long)param_1 + 0x34) = uVar16;
  *(undefined1 *)((long)param_1 + 0x35) = uVar4;
  return;
}


