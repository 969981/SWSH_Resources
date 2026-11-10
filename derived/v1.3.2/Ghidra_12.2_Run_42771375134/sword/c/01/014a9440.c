/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a9440; name: FUN_014a9440
 */


void FUN_014a9440(long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  size_t sVar5;
  undefined1 uVar6;
  uint *puVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  ushort *puVar11;
  int *piVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  
  if (*(long *)(param_2 + 8) == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    puVar7 = *(uint **)(*(long *)(param_2 + 8) + 400);
    piVar12 = (int *)((long)puVar7 + (ulong)*puVar7);
  }
  uVar14 = 0;
  uVar15 = 0;
  if (4 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = uVar15;
  uVar15 = 0;
  if (6 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 100) = uVar15;
  uVar15 = 0;
  if (8 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[4];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = uVar15;
  uVar15 = 0;
  if (10 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar15;
  if ((0xc < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[6], uVar8 != 0)) {
    uVar14 = *(undefined4 *)((long)piVar12 + uVar8);
  }
  *(undefined4 *)(param_1 + 0x70) = uVar14;
  if (*(ushort *)((long)piVar12 - (long)*piVar12) < 0xf) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[7];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = (undefined1)*(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined1 *)(param_1 + 0x74) = uVar6;
  uVar14 = 0;
  uVar15 = 0;
  if (0x10 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[8];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar15;
  uVar15 = 0;
  if (0x12 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[9];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar15;
  if ((0x14 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[10], uVar8 != 0)) {
    uVar14 = *(undefined4 *)((long)piVar12 + uVar8);
  }
  *(undefined4 *)(param_1 + 0x80) = uVar14;
  puVar7 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x16 - (long)*piVar12)));
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar7 = (uint *)((long)piVar1 + uVar8);
    lVar13 = (long)puVar7 + (ulong)*puVar7;
  }
  uVar8 = 0xcbf29ce484222645;
  sVar5 = strlen((char *)(lVar13 + 4));
  bVar2 = *(byte *)(lVar13 + 4);
  if (bVar2 != 0) {
    pbVar9 = (byte *)(lVar13 + 5);
    do {
      uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x88) = uVar8;
  *(char **)(param_1 + 0x90) = (char *)(lVar13 + 4);
  *(size_t *)(param_1 + 0x98) = sVar5;
  if (*(long *)(param_1 + 0xa0) != 0) {
    plVar10 = (long *)(*(long *)(param_1 + 0xa0) + 0x48);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  puVar7 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x16 - (long)*piVar12)));
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar7 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar14 = 0;
  uVar17 = 0;
  uVar15 = 0;
  uVar18 = 0;
  uVar3 = *puVar11;
  if (4 < uVar3) {
    uVar17 = 0;
    uVar15 = 0;
    if ((ulong)puVar11[2] != 0) {
      uVar15 = *(undefined4 *)((long)piVar1 + (ulong)puVar11[2]);
    }
    if (uVar3 < 7) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      uVar17 = 0;
      if ((ulong)puVar11[3] != 0) {
        uVar17 = *(undefined4 *)((long)piVar1 + (ulong)puVar11[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar11[4] != 0)) {
        uVar18 = *(uint *)((long)piVar1 + (ulong)puVar11[4]);
      }
    }
  }
  *(ulong *)(param_1 + 0xb8) = (ulong)uVar18;
  *(ulong *)(param_1 + 0xb0) = CONCAT44(uVar17,uVar15);
  puVar7 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x16 - (long)*piVar12)));
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 != 0)) {
    uVar14 = *(undefined4 *)((long)piVar1 + uVar8);
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar14;
  puVar7 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x16 - (long)*piVar12)));
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar8 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)((long)piVar1 + uVar8) != '\0';
  }
  *(bool *)(param_1 + 0xc4) = bVar4;
  puVar7 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x16 - (long)*piVar12)));
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  uVar14 = 0;
  uVar15 = 0;
  if (0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) {
    uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar1 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 200) = uVar15;
  uVar15 = 0;
  if (0x18 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xc];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0xcc) = uVar15;
  uVar15 = 0;
  if (0x1a < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xd];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = uVar15;
  puVar7 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x1c - (long)*piVar12)));
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar3 = *puVar11;
  uVar17 = 0;
  uVar15 = 0;
  uVar18 = 0;
  if (4 < uVar3) {
    uVar17 = 0;
    uVar15 = 0;
    if ((ulong)puVar11[2] != 0) {
      uVar15 = *(undefined4 *)((long)piVar1 + (ulong)puVar11[2]);
    }
    if (uVar3 < 7) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      uVar17 = 0;
      if ((ulong)puVar11[3] != 0) {
        uVar17 = *(undefined4 *)((long)piVar1 + (ulong)puVar11[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar11[4] != 0)) {
        uVar18 = *(uint *)((long)piVar1 + (ulong)puVar11[4]);
      }
    }
  }
  uVar16 = 0;
  *(ulong *)(param_1 + 0xe8) = (ulong)uVar18;
  *(ulong *)(param_1 + 0xe0) = CONCAT44(uVar17,uVar15);
  if (0x1e < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0xf];
    uVar16 = 0;
    if (uVar8 != 0) {
      uVar16 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar16;
  uVar15 = 0;
  if (0x20 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x10];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar15;
  uVar15 = 0;
  if (0x22 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x11];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar15;
  uVar15 = 0;
  if (0x24 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x12];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar15;
  uVar15 = 0;
  if (0x26 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x13];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = uVar15;
  uVar15 = 0;
  if (0x28 < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x14];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x104) = uVar15;
  puVar7 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (0x2a - (long)*piVar12)));
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar3 = *puVar11;
  uVar17 = 0;
  uVar15 = 0;
  uVar8 = 0;
  if (4 < uVar3) {
    uVar17 = 0;
    uVar15 = 0;
    if ((ulong)puVar11[2] != 0) {
      uVar15 = *(undefined4 *)((long)piVar1 + (ulong)puVar11[2]);
    }
    if (uVar3 < 7) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      uVar17 = 0;
      if ((ulong)puVar11[3] != 0) {
        uVar17 = *(undefined4 *)((long)piVar1 + (ulong)puVar11[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar11[4] != 0)) {
        uVar8 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar11[4]);
      }
    }
  }
  *(ulong *)(param_1 + 0x118) = uVar8;
  *(ulong *)(param_1 + 0x110) = CONCAT44(uVar17,uVar15);
  uVar15 = 0;
  if (0x2c < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x16];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x120) = uVar15;
  uVar15 = 0;
  if (0x2e < *(ushort *)((long)piVar12 - (long)*piVar12)) {
    uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x17];
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = *(undefined4 *)((long)piVar12 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x124) = uVar15;
  if ((0x30 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[0x18], uVar8 != 0)) {
    uVar14 = *(undefined4 *)((long)piVar12 + uVar8);
  }
  *(undefined4 *)(param_1 + 0x128) = uVar14;
  return;
}


