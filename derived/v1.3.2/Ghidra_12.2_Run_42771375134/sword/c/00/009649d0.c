/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009649d0; name: FUN_009649d0
 */


void FUN_009649d0(char *param_1,undefined1 *param_2,undefined1 *param_3,undefined2 *param_4,
                 undefined8 param_5)

{
  ushort *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  short sVar6;
  undefined2 uVar7;
  ushort uVar8;
  ushort uVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  ushort local_6c [6];
  
  *param_1 = '\0';
  *param_2 = 0;
  uVar7 = 0xf9;
  *param_3 = 0x1f;
  *param_4 = 0xf9;
  sVar6 = FUN_00965610(param_5,0);
  cVar2 = sVar6 != 0xf9;
  if ((bool)cVar2) {
    uVar7 = FUN_00965610(param_5,0);
    uVar13 = 0;
  }
  else {
    uVar13 = 5;
  }
  sVar6 = FUN_00965610(param_5,1);
  if (sVar6 != 0xf9) {
    uVar13 = 1;
    uVar7 = FUN_00965610(param_5,1);
    cVar2 = cVar2 + '\x01';
  }
  sVar6 = FUN_00965610(param_5,2);
  if (sVar6 != 0xf9) {
    uVar13 = 2;
    uVar7 = FUN_00965610(param_5,2);
    cVar2 = cVar2 + '\x01';
  }
  sVar6 = FUN_00965610(param_5,3);
  if (sVar6 != 0xf9) {
    uVar13 = 3;
    uVar7 = FUN_00965610(param_5,3);
    cVar2 = cVar2 + '\x01';
  }
  sVar6 = FUN_00965610(param_5,4);
  if (sVar6 != 0xf9) {
    uVar13 = 4;
    uVar7 = FUN_00965610(param_5,4);
    cVar2 = cVar2 + '\x01';
  }
  uVar8 = FUN_00965610(param_5,0);
  bVar3 = uVar8 != 0xf9;
  if (bVar3) {
    local_6c[0] = uVar8;
  }
  uVar15 = (ulong)bVar3;
  uVar9 = FUN_00965610(param_5,1);
  if (uVar9 != 0xf9) {
    if (bVar3 == 0) {
      uVar10 = 0;
    }
    else {
      bVar4 = uVar8 == uVar9;
      uVar10 = (ulong)(uint)bVar3;
      if (bVar3 == 0) {
        puVar11 = (ushort *)((ulong)local_6c | 2);
        lVar12 = 2 - uVar10;
        do {
          uVar8 = *puVar11;
          puVar1 = puVar11 + 1;
          puVar11 = puVar11 + 2;
          lVar12 = lVar12 + 2;
          bVar4 = (bool)(bVar4 | uVar8 == uVar9 | *puVar1 == uVar9);
        } while (lVar12 != 0);
        bVar4 = (bool)(bVar4 | *puVar11 == uVar9);
      }
      if (bVar4) goto LAB_00964be4;
    }
    uVar15 = (ulong)(bVar3 + 1);
    *(ushort *)((ulong)local_6c | uVar10 << 1) = uVar9;
  }
LAB_00964be4:
  uVar8 = FUN_00965610(param_5,2);
  uVar10 = uVar15;
  if (uVar8 != 0xf9) {
    iVar14 = (int)uVar15;
    if (iVar14 == 0) {
      uVar15 = 0;
    }
    else {
      bVar3 = local_6c[0] == uVar8;
      if (iVar14 != 1) {
        bVar3 = local_6c[0] == uVar8 || local_6c[1] == uVar8;
      }
      if (bVar3) goto LAB_00964c4c;
    }
    uVar10 = (ulong)(iVar14 + 1);
    local_6c[uVar15] = uVar8;
  }
LAB_00964c4c:
  uVar8 = FUN_00965610(param_5,3);
  uVar15 = uVar10;
  if (uVar8 != 0xf9) {
    iVar14 = (int)uVar10;
    if (iVar14 == 0) {
      uVar10 = 0;
    }
    else {
      bVar3 = local_6c[0] == uVar8;
      if ((iVar14 != 1) && (bVar3 = local_6c[0] == uVar8 || local_6c[1] == uVar8, iVar14 != 2)) {
        bVar3 = bVar3 || local_6c[2] == uVar8;
      }
      if (bVar3) goto LAB_00964ccc;
    }
    uVar15 = (ulong)(iVar14 + 1);
    local_6c[uVar10] = uVar8;
  }
LAB_00964ccc:
  uVar8 = FUN_00965610(param_5,4);
  uVar10 = uVar15;
  if (uVar8 != 0xf9) {
    iVar14 = (int)uVar15;
    if (iVar14 == 0) {
      uVar15 = 0;
    }
    else {
      bVar3 = local_6c[0] == uVar8;
      if (((iVar14 != 1) && (bVar3 = local_6c[0] == uVar8 || local_6c[1] == uVar8, iVar14 != 2)) &&
         (bVar3 = bVar3 || local_6c[2] == uVar8, iVar14 != 3)) {
        bVar3 = bVar3 || local_6c[3] == uVar8;
      }
      if (bVar3) goto LAB_00964d64;
    }
    uVar10 = (ulong)(iVar14 + 1);
    local_6c[uVar15] = uVar8;
  }
LAB_00964d64:
  *param_1 = cVar2;
  *param_2 = (char)uVar10;
  if ((int)uVar10 == 1) {
    *param_4 = uVar7;
  }
  if (cVar2 == '\x01') {
    uVar5 = FUN_00965700(param_5,uVar13);
    *param_3 = uVar5;
  }
  return;
}


