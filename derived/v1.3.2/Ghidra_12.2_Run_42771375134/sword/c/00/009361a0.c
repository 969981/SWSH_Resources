/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009361a0; name: FUN_009361a0
 */


void FUN_009361a0(long param_1,undefined8 param_2,ulong param_3,int *param_4,undefined8 *param_5,
                 ulong param_6)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined1 auStack_88 [40];
  
  uVar12 = param_3 & 0xffffffff;
  iVar10 = (int)param_3;
  if (iVar10 == 0) {
    cVar6 = '\0';
    cVar5 = '\0';
  }
  else {
    if (iVar10 == 1) {
      lVar11 = 0;
      cVar5 = '\0';
      cVar6 = '\0';
    }
    else {
      lVar11 = 0;
      cVar5 = '\0';
      cVar6 = '\0';
      do {
        piVar16 = param_4 + lVar11;
        lVar11 = lVar11 + 2;
        iVar1 = *piVar16;
        iVar2 = piVar16[1];
        if (7 < iVar1) {
          cVar6 = cVar6 + '\x01';
        }
        if (iVar1 < 7) {
          cVar5 = cVar5 + '\x01';
        }
        if (7 < iVar2) {
          cVar6 = cVar6 + '\x01';
        }
        if (iVar2 < 7) {
          cVar5 = cVar5 + '\x01';
        }
      } while (uVar12 - (param_3 & 1) != lVar11);
    }
    if ((param_3 & 1) != 0) {
      if (param_4[lVar11] < 7) {
        cVar5 = cVar5 + '\x01';
      }
      if (7 < param_4[lVar11]) {
        cVar6 = cVar6 + '\x01';
      }
    }
  }
  if ((param_6 & 1) == 0) {
    if (cVar6 == '\0') {
      if (cVar5 != '\0') {
        FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xba,0x5d,0xffff0000);
        return;
      }
    }
    else {
      FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xba,0x5c,0xffff0000);
      cVar5 = thunk_FUN_008fa2d0(*(undefined8 *)(param_1 + 8),param_2);
      if (cVar5 == -1) {
        uVar7 = FUN_008e0a00(param_2);
        FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xb0,uVar7,1,1,0x106,uVar7,0);
        return;
      }
    }
  }
  else {
    if (cVar6 != '\0') {
      FUN_0093ac80(auStack_88);
      if (iVar10 != 0) {
        uVar14 = uVar12;
        puVar15 = param_5;
        piVar16 = param_4;
        do {
          if (7 < *piVar16) {
            uVar8 = FUN_008e0a00(*puVar15);
            FUN_0093ad00(auStack_88,uVar8);
          }
          piVar16 = piVar16 + 1;
          puVar15 = puVar15 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      switch(cVar6) {
      case '\x01':
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,0);
        FUN_00917e70(uVar13,0xbb,8,*puVar9,0xffff0000);
        break;
      case '\x02':
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,0);
        uVar7 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,1);
        FUN_00917e70(uVar13,0xbb,0xc,uVar7,*puVar9,0xffff0000);
        break;
      case '\x03':
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,0);
        uVar7 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,1);
        uVar3 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,2);
        FUN_00917e70(uVar13,0xbb,0x10,uVar7,uVar3,*puVar9,0xffff0000);
        break;
      case '\x04':
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,0);
        uVar7 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,1);
        uVar3 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,2);
        uVar4 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,3);
        FUN_00917e70(uVar13,0xbb,0x14,uVar7,uVar3,uVar4,*puVar9,0xffff0000);
      }
      cVar6 = thunk_FUN_008fa2d0(*(undefined8 *)(param_1 + 8),param_2);
      if (cVar6 == -1) {
        uVar7 = FUN_008e0a00(param_2);
        FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xb0,uVar7,1,1,0x106,uVar7,0);
      }
    }
    if (cVar5 != '\0') {
      FUN_0093ac80(auStack_88);
      if (iVar10 != 0) {
        do {
          if (*param_4 < 7) {
            uVar8 = FUN_008e0a00(*param_5);
            FUN_0093ad00(auStack_88,uVar8);
          }
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      switch(cVar5) {
      case '\x01':
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,0);
        FUN_00917e70(uVar13,0xbb,0x18,*puVar9,0xffff0000);
        break;
      case '\x02':
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,0);
        uVar7 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,1);
        FUN_00917e70(uVar13,0xbb,0x1c,uVar7,*puVar9,0xffff0000);
        break;
      case '\x03':
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,0);
        uVar7 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,1);
        uVar3 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,2);
        FUN_00917e70(uVar13,0xbb,0x20,uVar7,uVar3,*puVar9,0xffff0000);
        break;
      case '\x04':
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,0);
        uVar7 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,1);
        uVar3 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,2);
        uVar4 = *puVar9;
        puVar9 = (undefined1 *)FUN_0093aca0(auStack_88,3);
        FUN_00917e70(uVar13,0xbb,0x24,uVar7,uVar3,uVar4,*puVar9,0xffff0000);
      }
    }
  }
  return;
}


