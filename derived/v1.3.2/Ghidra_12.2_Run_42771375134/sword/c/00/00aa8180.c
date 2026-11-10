/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa8180; name: FUN_00aa8180
 */


/* WARNING: Removing unreachable block (ram,0x00aa83a0) */

void FUN_00aa8180(long *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint local_1c;
  uint local_18 [6];
  
  param_1[1] = param_2;
  puVar2 = PTR_DAT_02719738;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar2 = PTR_DAT_027194a8 + 0x10;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[8] = (long)puVar2;
  param_1[9] = 0;
  puVar5 = PTR_DAT_02710848;
  puVar2 = PTR_DAT_027164d8 + 0x10;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x2a] = (long)puVar2;
  param_1[0x2b] = 0;
  puVar9 = *(ulong **)(*(long *)puVar5 + 0x98);
  uVar11 = *puVar9;
  uVar13 = puVar9[1];
  do {
    uVar14 = uVar11 ^ uVar13;
    iVar12 = (int)uVar13;
    iVar10 = (int)uVar11;
    uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
    uVar11 = uVar14 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar14 << 0x10;
    local_1c = iVar10 + iVar12 & 0x7f;
  } while (100 < local_1c);
  *puVar9 = uVar11;
  puVar9[1] = uVar13;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  puVar9 = *(ulong **)(*(long *)puVar5 + 0x98);
  uVar11 = *puVar9;
  uVar13 = puVar9[1];
  do {
    uVar14 = uVar11 ^ uVar13;
    iVar12 = (int)uVar13;
    iVar10 = (int)uVar11;
    uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
    uVar11 = uVar14 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar14 << 0x10;
    local_18[0] = iVar10 + iVar12 & 0x7f;
  } while (100 < local_18[0]);
  *puVar9 = uVar11;
  puVar9[1] = uVar13;
  *(undefined4 *)(param_1 + 3) = 1;
  puVar9 = *(ulong **)(*(long *)puVar5 + 0x98);
  uVar11 = *puVar9;
  uVar13 = puVar9[1];
  do {
    uVar14 = uVar11 ^ uVar13;
    iVar12 = (int)uVar13;
    iVar10 = (int)uVar11;
    uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
    uVar11 = uVar14 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar14 << 0x10;
    local_18[1] = iVar10 + iVar12 & 0x7f;
  } while (100 < local_18[1]);
  *puVar9 = uVar11;
  puVar9[1] = uVar13;
  *(undefined4 *)((long)param_1 + 0x1c) = 2;
  puVar9 = *(ulong **)(*(long *)puVar5 + 0x98);
  uVar11 = *puVar9;
  uVar13 = puVar9[1];
  do {
    uVar14 = uVar11 ^ uVar13;
    iVar12 = (int)uVar13;
    iVar10 = (int)uVar11;
    uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
    uVar11 = uVar14 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar14 << 0x10;
    local_18[2] = iVar10 + iVar12 & 0x7f;
  } while (100 < local_18[2]);
  *puVar9 = uVar11;
  puVar9[1] = uVar13;
  *(undefined4 *)(param_1 + 4) = 3;
  puVar9 = *(ulong **)(*(long *)puVar5 + 0x98);
  uVar11 = *puVar9;
  uVar13 = puVar9[1];
  do {
    uVar14 = uVar11 ^ uVar13;
    iVar12 = (int)uVar13;
    iVar10 = (int)uVar11;
    uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
    uVar11 = uVar14 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar14 << 0x10;
    local_18[3] = iVar10 + iVar12 & 0x7f;
  } while (100 < local_18[3]);
  *puVar9 = uVar11;
  puVar9[1] = uVar13;
  *(undefined4 *)((long)param_1 + 0x24) = 4;
  puVar9 = *(ulong **)(*(long *)puVar5 + 0x98);
  uVar11 = *puVar9;
  uVar13 = puVar9[1];
  do {
    uVar14 = uVar11 ^ uVar13;
    iVar12 = (int)uVar13;
    iVar10 = (int)uVar11;
    uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
    uVar11 = uVar14 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar14 << 0x10;
    local_18[4] = iVar10 + iVar12 & 0x7f;
  } while (100 < local_18[4]);
  *puVar9 = uVar11;
  puVar9[1] = uVar13;
  *(undefined4 *)(param_1 + 5) = 5;
  puVar9 = *(ulong **)(*(long *)puVar5 + 0x98);
  uVar11 = *puVar9;
  uVar13 = puVar9[1];
  do {
    uVar14 = uVar11 ^ uVar13;
    iVar12 = (int)uVar13;
    iVar10 = (int)uVar11;
    uVar13 = uVar14 >> 0x1b | uVar14 << 0x25;
    uVar11 = uVar14 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar14 << 0x10;
    local_18[5] = iVar10 + iVar12 & 0x7f;
  } while (100 < local_18[5]);
  *puVar9 = uVar11;
  puVar9[1] = uVar13;
  *(undefined4 *)((long)param_1 + 0x2c) = 6;
  lVar4 = 0;
  while (lVar8 = lVar4, uVar7 = local_1c, lVar8 != 0x18) {
    uVar7 = *(uint *)((long)local_18 + lVar8);
    lVar4 = lVar8 + 4;
    if ((int)uVar7 < (int)local_1c) {
      *(uint *)((long)local_18 + lVar8) = local_1c;
      uVar3 = *(undefined4 *)((long)param_1 + 0x14);
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + lVar8 + 0x18);
      *(undefined4 *)((long)param_1 + lVar8 + 0x18) = uVar3;
      local_1c = uVar7;
    }
  }
  if ((int)local_1c < (int)local_18[0]) {
    local_1c = local_18[0];
    local_18[0] = uVar7;
    uVar3 = *(undefined4 *)((long)param_1 + 0x14);
    *(int *)((long)param_1 + 0x14) = (int)param_1[3];
    *(undefined4 *)(param_1 + 3) = uVar3;
    if ((int)local_18[1] < (int)uVar7) goto LAB_00aa851c;
LAB_00aa83f4:
    if ((int)local_18[0] <= (int)local_18[2]) goto LAB_00aa8404;
LAB_00aa8538:
    lVar4 = param_1[3];
    *(int *)(param_1 + 3) = (int)param_1[4];
    *(int *)(param_1 + 4) = (int)lVar4;
    bVar1 = (int)local_18[3] < (int)local_18[2];
    uVar7 = local_18[2];
    local_18[2] = local_18[0];
    if (bVar1) goto LAB_00aa8560;
LAB_00aa8414:
    local_18[0] = uVar7;
    if ((int)local_18[0] <= (int)local_18[4]) goto LAB_00aa8424;
LAB_00aa8588:
    lVar4 = param_1[3];
    *(int *)(param_1 + 3) = (int)param_1[5];
    *(int *)(param_1 + 5) = (int)lVar4;
    uVar7 = local_18[4];
    local_18[4] = local_18[0];
    if ((int)local_1c < (int)local_18[1]) goto LAB_00aa85b0;
LAB_00aa8434:
    local_18[0] = uVar7;
    uVar7 = local_18[1];
    uVar6 = local_1c;
    if ((int)local_18[1] <= (int)local_18[0]) goto LAB_00aa8440;
LAB_00aa85d4:
    local_1c = uVar6;
    lVar4 = param_1[3];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_1 + 0x1c);
    *(int *)((long)param_1 + 0x1c) = (int)lVar4;
    local_18[1] = local_18[0];
    if ((int)local_18[2] < (int)local_18[0]) goto LAB_00aa85ec;
LAB_00aa844c:
    local_18[0] = uVar7;
    uVar7 = local_18[1];
    if ((int)local_18[1] <= (int)local_18[3]) goto LAB_00aa845c;
LAB_00aa8608:
    uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x24);
    *(undefined4 *)((long)param_1 + 0x24) = uVar3;
    local_18[1] = local_18[3];
    local_18[3] = uVar7;
    if ((int)local_1c < (int)local_18[2]) goto LAB_00aa8630;
LAB_00aa846c:
    uVar7 = local_18[2];
    uVar6 = local_1c;
    if ((int)local_18[2] <= (int)local_18[0]) goto LAB_00aa847c;
LAB_00aa8658:
    local_1c = uVar6;
    lVar4 = param_1[4];
    *(int *)(param_1 + 4) = (int)param_1[3];
    *(int *)(param_1 + 3) = (int)lVar4;
    bVar1 = (int)local_18[1] < (int)local_18[0];
    local_18[2] = local_18[0];
    local_18[0] = uVar7;
    if (bVar1) goto LAB_00aa867c;
LAB_00aa8488:
    if ((int)local_18[3] <= (int)local_1c) goto LAB_00aa8498;
LAB_00aa8698:
    uVar3 = *(undefined4 *)((long)param_1 + 0x24);
    *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + 0x14);
    *(undefined4 *)((long)param_1 + 0x14) = uVar3;
    uVar7 = local_1c;
    uVar6 = local_18[3];
    local_18[3] = local_1c;
    if ((int)local_18[0] < (int)local_1c) goto LAB_00aa86c0;
LAB_00aa84a8:
    local_1c = uVar6;
    if ((int)local_18[3] <= (int)local_18[1]) goto LAB_00aa84b8;
LAB_00aa86e8:
    uVar3 = *(undefined4 *)((long)param_1 + 0x24);
    *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + 0x1c);
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
    if ((int)local_1c < (int)local_18[4]) goto LAB_00aa8710;
LAB_00aa84c8:
    if ((int)local_18[4] <= (int)local_18[0]) goto LAB_00aa84f0;
  }
  else {
    uVar7 = local_18[0];
    if ((int)local_18[0] <= (int)local_18[1]) goto LAB_00aa83f4;
LAB_00aa851c:
    lVar4 = param_1[3];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_1 + 0x1c);
    *(int *)((long)param_1 + 0x1c) = (int)lVar4;
    bVar1 = (int)local_18[2] < (int)local_18[1];
    local_18[0] = local_18[1];
    local_18[1] = uVar7;
    if (bVar1) goto LAB_00aa8538;
LAB_00aa8404:
    uVar7 = local_18[0];
    if ((int)local_18[0] <= (int)local_18[3]) goto LAB_00aa8414;
LAB_00aa8560:
    lVar4 = param_1[3];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_1 + 0x24);
    *(int *)((long)param_1 + 0x24) = (int)lVar4;
    bVar1 = (int)local_18[4] < (int)local_18[3];
    local_18[0] = local_18[3];
    local_18[3] = uVar7;
    if (bVar1) goto LAB_00aa8588;
LAB_00aa8424:
    uVar7 = local_18[0];
    if ((int)local_18[1] <= (int)local_1c) goto LAB_00aa8434;
LAB_00aa85b0:
    local_18[0] = uVar7;
    uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
    *(undefined4 *)((long)param_1 + 0x14) = uVar3;
    uVar7 = local_1c;
    uVar6 = local_18[1];
    local_18[1] = local_1c;
    if ((int)local_18[0] < (int)local_1c) goto LAB_00aa85d4;
LAB_00aa8440:
    local_1c = uVar6;
    uVar7 = local_18[0];
    if ((int)local_18[1] <= (int)local_18[2]) goto LAB_00aa844c;
LAB_00aa85ec:
    local_18[0] = uVar7;
    uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
    *(int *)((long)param_1 + 0x1c) = (int)param_1[4];
    *(undefined4 *)(param_1 + 4) = uVar3;
    bVar1 = (int)local_18[3] < (int)local_18[2];
    uVar7 = local_18[2];
    local_18[2] = local_18[1];
    if (bVar1) goto LAB_00aa8608;
LAB_00aa845c:
    local_18[1] = uVar7;
    if ((int)local_18[2] <= (int)local_1c) goto LAB_00aa846c;
LAB_00aa8630:
    lVar4 = param_1[4];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_1 + 0x14);
    *(int *)((long)param_1 + 0x14) = (int)lVar4;
    uVar7 = local_1c;
    uVar6 = local_18[2];
    local_18[2] = local_1c;
    if ((int)local_18[0] < (int)local_1c) goto LAB_00aa8658;
LAB_00aa847c:
    local_1c = uVar6;
    if ((int)local_18[2] <= (int)local_18[1]) goto LAB_00aa8488;
LAB_00aa867c:
    uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
    *(int *)((long)param_1 + 0x1c) = (int)param_1[4];
    *(undefined4 *)(param_1 + 4) = uVar3;
    local_18[1] = local_18[2];
    if ((int)local_1c < (int)local_18[3]) goto LAB_00aa8698;
LAB_00aa8498:
    uVar7 = local_18[3];
    uVar6 = local_1c;
    if ((int)local_18[3] <= (int)local_18[0]) goto LAB_00aa84a8;
LAB_00aa86c0:
    local_1c = uVar6;
    uVar3 = *(undefined4 *)((long)param_1 + 0x24);
    *(int *)((long)param_1 + 0x24) = (int)param_1[3];
    *(undefined4 *)(param_1 + 3) = uVar3;
    bVar1 = (int)local_18[1] < (int)local_18[0];
    local_18[0] = uVar7;
    if (bVar1) goto LAB_00aa86e8;
LAB_00aa84b8:
    if ((int)local_18[4] <= (int)local_1c) goto LAB_00aa84c8;
LAB_00aa8710:
    lVar4 = param_1[5];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x14);
    *(int *)((long)param_1 + 0x14) = (int)lVar4;
    if ((int)local_1c <= (int)local_18[0]) goto LAB_00aa84f0;
  }
  lVar4 = param_1[5];
  *(int *)(param_1 + 5) = (int)param_1[3];
  *(int *)(param_1 + 3) = (int)lVar4;
LAB_00aa84f0:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


