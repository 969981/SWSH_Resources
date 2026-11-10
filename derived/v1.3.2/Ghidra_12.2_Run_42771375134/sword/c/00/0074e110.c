/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074e110; name: FUN_0074e110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0074e110(undefined4 *param_1,long param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  byte *pbVar9;
  int *piVar10;
  ushort *puVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar12 = 0xcbf29ce484222645;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 4) = &DAT_01d38550;
  uVar7 = _UNK_01d49dc8;
  uVar6 = _DAT_01d49dc0;
  *(undefined8 *)(param_1 + 10) = 1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x16) = uVar7;
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  if (*(char *)(param_2 + 0x170) == '\0') {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)((long)*(uint **)(param_2 + 400) + (ulong)**(uint **)(param_2 + 400));
  }
  puVar11 = (ushort *)((long)piVar10 - (long)*piVar10);
  uVar5 = *puVar11;
  if (uVar5 < 5) {
    lVar13 = 0;
    *param_1 = 0;
  }
  else {
    uVar15 = 0;
    if ((ulong)puVar11[2] != 0) {
      uVar15 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[2]);
    }
    *param_1 = uVar15;
    if ((uVar5 < 7) || ((ulong)puVar11[3] == 0)) {
      lVar13 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar10 + (ulong)puVar11[3]);
      lVar13 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  sVar8 = strlen((char *)(lVar13 + 4));
  bVar4 = *(byte *)(lVar13 + 4);
  if (bVar4 != 0) {
    pbVar9 = (byte *)(lVar13 + 5);
    do {
      uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
      bVar4 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar4 != 0);
  }
  *(ulong *)(param_1 + 2) = uVar12;
  *(char **)(param_1 + 4) = (char *)(lVar13 + 4);
  *(size_t *)(param_1 + 6) = sVar8;
  uVar5 = puVar11[4];
  *(undefined8 *)(param_1 + 8) = 0;
  uVar15 = 0;
  if ((ulong)uVar5 != 0) {
    uVar15 = *(undefined4 *)((long)piVar10 + (ulong)uVar5);
  }
  uVar14 = 0;
  param_1[10] = uVar15;
  uVar15 = 0;
  if ((ulong)puVar11[5] != 0) {
    uVar15 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[5]);
  }
  param_1[0xb] = uVar15;
  if ((ulong)puVar11[6] != 0) {
    uVar14 = *(undefined4 *)((long)piVar10 + (ulong)puVar11[6]);
  }
  param_1[0xc] = uVar14;
  puVar2 = (undefined4 *)((long)piVar10 + (ulong)puVar11[7]);
  uVar15 = *puVar2;
  puVar3 = (undefined4 *)0x0;
  if (puVar11[7] != 0) {
    puVar3 = puVar2;
  }
  uVar14 = puVar3[1];
  *(ulong *)(param_1 + 0x12) = (ulong)(uint)puVar2[2];
  *(ulong *)(param_1 + 0x10) = CONCAT44(uVar14,uVar15);
  puVar2 = (undefined4 *)((long)piVar10 + (ulong)puVar11[8]);
  uVar15 = *puVar2;
  puVar3 = (undefined4 *)0x0;
  if (puVar11[8] != 0) {
    puVar3 = puVar2;
  }
  uVar14 = puVar3[1];
  *(ulong *)(param_1 + 0x16) = (ulong)(uint)puVar2[2];
  *(ulong *)(param_1 + 0x14) = CONCAT44(uVar14,uVar15);
  puVar2 = (undefined4 *)((long)piVar10 + (ulong)puVar11[9]);
  uVar15 = *puVar2;
  puVar3 = (undefined4 *)0x0;
  if (puVar11[9] != 0) {
    puVar3 = puVar2;
  }
  uVar14 = puVar3[1];
  *(ulong *)(param_1 + 0x1a) = (ulong)(uint)puVar2[2];
  *(ulong *)(param_1 + 0x18) = CONCAT44(uVar14,uVar15);
  return;
}


