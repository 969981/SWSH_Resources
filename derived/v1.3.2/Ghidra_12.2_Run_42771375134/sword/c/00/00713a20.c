/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00713a20; name: FUN_00713a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00713a20(ulong *param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  size_t sVar11;
  ushort *puVar12;
  byte *pbVar13;
  ushort *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  uVar17 = 0xcbf29ce484222645;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *param_1 = 0xcbf29ce484222645;
  param_1[1] = (ulong)&DAT_01d38550;
  uVar9 = _UNK_01d4b588;
  uVar8 = _DAT_01d4b580;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = uVar9;
  param_1[10] = uVar8;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar15 = (undefined8 *)((long)param_1 + 0x74);
  *puVar15 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  piVar1 = (int *)((long)*(uint **)(param_2 + 400) + (ulong)**(uint **)(param_2 + 400));
  puVar12 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar12 < 0x19) {
    piVar16 = (int *)0x0;
    lVar18 = 0;
    if (4 < *puVar12) {
      uVar6 = puVar12[2];
      goto joined_r0x00713adc;
    }
  }
  else {
    if ((ulong)puVar12[0xc] == 0) {
      uVar6 = puVar12[2];
joined_r0x00713adc:
      piVar16 = (int *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar12[0xc]);
      piVar16 = (int *)((long)puVar2 + (ulong)*puVar2);
      uVar6 = puVar12[2];
    }
    if ((ulong)uVar6 == 0) {
      lVar18 = 0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + (ulong)uVar6);
      lVar18 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  sVar11 = strlen((char *)(lVar18 + 4));
  bVar5 = *(byte *)(lVar18 + 4);
  if (bVar5 != 0) {
    pbVar13 = (byte *)(lVar18 + 5);
    do {
      uVar17 = (uVar17 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar5 != 0);
  }
  *param_1 = uVar17;
  param_1[1] = (ulong)(lVar18 + 4);
  param_1[2] = sVar11;
  param_1[3] = 0;
  puVar12 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar6 = *puVar12;
  uVar20 = 0;
  if ((ulong)puVar12[3] != 0) {
    uVar20 = *(undefined4 *)((long)piVar1 + (ulong)puVar12[3]);
  }
  uVar19 = 0;
  *(undefined4 *)(param_1 + 4) = uVar20;
  uVar20 = 0;
  if ((ulong)puVar12[4] != 0) {
    uVar20 = *(undefined4 *)((long)piVar1 + (ulong)puVar12[4]);
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar20;
  uVar20 = 0;
  if ((ulong)puVar12[5] != 0) {
    uVar20 = *(undefined4 *)((long)piVar1 + (ulong)puVar12[5]);
  }
  *(undefined4 *)(param_1 + 5) = uVar20;
  if ((ulong)puVar12[6] != 0) {
    uVar19 = *(undefined4 *)((long)piVar1 + (ulong)puVar12[6]);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = uVar19;
  puVar3 = (undefined4 *)((long)piVar1 + (ulong)puVar12[8]);
  uVar20 = *puVar3;
  puVar4 = (undefined4 *)0x0;
  if (puVar12[8] != 0) {
    puVar4 = puVar3;
  }
  uVar19 = puVar4[1];
  param_1[7] = (ulong)(uint)puVar3[2];
  param_1[6] = CONCAT44(uVar19,uVar20);
  puVar3 = (undefined4 *)((long)piVar1 + (ulong)puVar12[9]);
  uVar20 = *puVar3;
  puVar4 = (undefined4 *)0x0;
  if (puVar12[9] != 0) {
    puVar4 = puVar3;
  }
  uVar19 = puVar4[1];
  param_1[9] = (ulong)(uint)puVar3[2];
  param_1[8] = CONCAT44(uVar19,uVar20);
  puVar3 = (undefined4 *)((long)piVar1 + (ulong)puVar12[10]);
  uVar20 = *puVar3;
  puVar4 = (undefined4 *)0x0;
  if (puVar12[10] != 0) {
    puVar4 = puVar3;
  }
  uVar19 = puVar4[1];
  param_1[0xb] = (ulong)(uint)puVar3[2];
  param_1[10] = CONCAT44(uVar19,uVar20);
  puVar3 = (undefined4 *)((long)piVar1 + (ulong)puVar12[0xb]);
  uVar20 = *puVar3;
  puVar4 = (undefined4 *)0x0;
  if (puVar12[0xb] != 0) {
    puVar4 = puVar3;
  }
  uVar19 = puVar4[1];
  param_1[0xd] = (ulong)(uint)puVar3[2];
  param_1[0xc] = CONCAT44(uVar19,uVar20);
  puVar14 = (ushort *)((long)piVar16 - (long)*piVar16);
  uVar7 = *puVar14;
  if (uVar7 < 5) {
    *(undefined1 *)(param_1 + 0xe) = 0;
LAB_00713ce4:
    *(undefined4 *)puVar15 = 0;
LAB_00713ce8:
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  else {
    bVar10 = false;
    if ((ulong)puVar14[2] != 0) {
      bVar10 = *(char *)((long)piVar16 + (ulong)puVar14[2]) != '\0';
    }
    *(bool *)(param_1 + 0xe) = bVar10;
    if (uVar7 < 7) goto LAB_00713ce4;
    if ((ulong)puVar14[3] == 0) {
      *(undefined4 *)puVar15 = 0;
      if (8 < uVar7) goto LAB_00713ca0;
      goto LAB_00713ce8;
    }
    *(undefined4 *)puVar15 = *(undefined4 *)((long)piVar16 + (ulong)puVar14[3]);
    if (uVar7 < 9) goto LAB_00713ce8;
LAB_00713ca0:
    uVar20 = 0;
    if ((ulong)puVar14[4] != 0) {
      uVar20 = *(undefined4 *)((long)piVar16 + (ulong)puVar14[4]);
    }
    *(undefined4 *)(param_1 + 0xf) = uVar20;
    if ((10 < uVar7) && ((ulong)puVar14[5] != 0)) {
      *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)((long)piVar16 + (ulong)puVar14[5]);
      goto joined_r0x00713cfc;
    }
  }
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
joined_r0x00713cfc:
  uVar20 = 0;
  if (0x1a < uVar6) {
    uVar20 = 0;
    if ((ulong)puVar12[0xd] != 0) {
      uVar20 = *(undefined4 *)((long)piVar1 + (ulong)puVar12[0xd]);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = uVar20;
  return;
}


