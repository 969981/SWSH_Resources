/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01319840; name: FUN_01319840
 */


void FUN_01319840(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  FUN_0131acf0();
  piVar4 = *(int **)(param_1 + 0x130);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar4 + uVar5);
    piVar4 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
    piVar6 = (int *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
    piVar6 = (int *)0x0;
    if (uVar5 != 0) {
      puVar1 = (uint *)((long)piVar4 + uVar5);
      piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar7 = 0;
  uVar9 = 0;
  if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + uVar5);
    }
  }
  uVar8 = param_2[1];
  uVar10 = 0;
  param_2[1] = uVar8;
  *param_2 = CONCAT44((int)((ulong)*param_2 >> 0x20),uVar9);
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (6 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = *(undefined4 *)((long)piVar2 + uVar5);
    }
  }
  uVar11 = 0;
  param_2[1] = uVar8;
  *param_2 = CONCAT44(uVar10,uVar9);
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (8 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
    uVar11 = 0;
    if (uVar5 != 0) {
      uVar11 = *(uint *)((long)piVar2 + uVar5);
    }
  }
  param_2[1] = (ulong)uVar11;
  *param_2 = CONCAT44(uVar10,uVar9);
  uVar9 = 0;
  if (6 < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar5 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar6 + uVar5);
    }
  }
  *(undefined4 *)(param_2 + 2) = uVar9;
  uVar9 = 0;
  if (8 < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar5 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar6 + uVar5);
    }
  }
  *(undefined4 *)((long)param_2 + 0x14) = uVar9;
  uVar9 = 0;
  if (10 < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar5 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[5];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar6 + uVar5);
    }
  }
  *(undefined4 *)(param_2 + 3) = uVar9;
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0xc - (long)*piVar6)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar9 = 0;
  if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + uVar5);
    }
  }
  *(undefined4 *)((long)param_2 + 0x1c) = uVar9;
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0xc - (long)*piVar6)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar9 = 0;
  if (6 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + uVar5);
    }
  }
  *(undefined4 *)(param_2 + 4) = uVar9;
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0xc - (long)*piVar6)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar9 = 0;
  if (8 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + uVar5);
    }
  }
  *(undefined4 *)((long)param_2 + 0x24) = uVar9;
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0xc - (long)*piVar6)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar9 = 0;
  if (10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + uVar5);
    }
  }
  *(undefined4 *)(param_2 + 5) = uVar9;
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0xc - (long)*piVar6)));
  piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar9 = 0;
  if (0xc < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar5 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[6];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar6 + uVar5);
    }
  }
  *(undefined4 *)((long)param_2 + 0x2c) = uVar9;
  uVar9 = 0;
  if (10 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar4 + uVar5);
    }
  }
  *(undefined4 *)(param_2 + 6) = uVar9;
  uVar9 = 0;
  if (6 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar4 + uVar5);
    }
  }
  *(undefined4 *)((long)param_2 + 0x34) = uVar9;
  if ((8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar5 != 0)) {
    uVar7 = *(undefined4 *)((long)piVar4 + uVar5);
  }
  *(undefined4 *)(param_2 + 7) = uVar7;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) {
    uVar9 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar4 + uVar5);
    }
  }
  *(undefined4 *)((long)param_2 + 0x3c) = uVar9;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)piVar4 + uVar5) != '\0';
    }
  }
  *(bool *)(param_2 + 8) = bVar3;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x11) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)piVar4 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_2 + 0x41) = bVar3;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x15) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[10];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)piVar4 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_2 + 0x42) = bVar3;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x13) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[9];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)piVar4 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_2 + 0x43) = bVar3;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x19) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xc];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)piVar4 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_2 + 0x44) = bVar3;
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x17) {
    *(undefined1 *)((long)param_2 + 0x45) = 0;
    return;
  }
  uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb];
  if (uVar5 == 0) {
    *(undefined1 *)((long)param_2 + 0x45) = 0;
    return;
  }
  *(bool *)((long)param_2 + 0x45) = *(char *)((long)piVar4 + uVar5) != '\0';
  return;
}


