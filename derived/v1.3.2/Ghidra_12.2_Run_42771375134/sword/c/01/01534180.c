/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534180; name: FUN_01534180
 */


void FUN_01534180(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  ushort *puVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar5 = FUN_014ae400(0);
  if ((uint)uVar5 == 0) {
    uVar5 = FUN_014ae400(1,param_2);
    if ((uint)uVar5 == 0) {
      uVar5 = FUN_014ae400(2,param_2);
      if ((uint)uVar5 == 0) {
        return;
      }
      bVar1 = 0xd2 < (uint)uVar5;
      uVar4 = 0xd1;
      iVar7 = 2;
    }
    else {
      bVar1 = 0xd3 < (uint)uVar5;
      uVar4 = 0xd2;
      iVar7 = 1;
    }
  }
  else {
    iVar7 = 0;
    uVar4 = 399;
    bVar1 = 400 < (uint)uVar5;
  }
  uVar10 = ((uint)uVar5 & 0xffff) - 1;
  if (bVar1) {
    uVar10 = 0xffffffff;
  }
  if (uVar4 < uVar10) {
    return;
  }
  if (iVar7 == 2) {
    param_1 = param_1 + 0x72f0;
    lVar8 = param_1 + (ulong)uVar10 * 0x30;
  }
  else if (iVar7 == 1) {
    param_1 = param_1 + 0x4b60;
    lVar8 = param_1 + (ulong)uVar10 * 0x30;
  }
  else {
    param_1 = param_1 + 0x60;
    lVar8 = param_1 + (ulong)uVar10 * 0x30;
  }
  if (lVar8 == 0) {
    return;
  }
  if (param_6 == 2) {
    uVar4 = FUN_01534550(uVar5,param_2);
    uVar4 = uVar4 ^ 1;
    if ((param_2 != 0x37c) && ((uVar4 & 1) == 0)) {
      uVar4 = 0;
      puVar9 = (uint *)(param_1 + (ulong)uVar10 * 0x30 + 0x20);
      uVar10 = *puVar9 & 0xf0007fff;
      goto LAB_01534500;
    }
  }
  else {
    uVar4 = 1;
  }
  if (param_2 == 0x292) {
    uVar13 = 0;
    if ((param_5 & 0xffff) != 1) {
      uVar13 = param_5;
    }
    uVar6 = FUN_00864990(0x292,uVar13);
    param_5 = uVar13;
    puVar3 = PTR_DAT_0272a9e8;
joined_r0x01534314:
    PTR_DAT_0272a9e8 = puVar3;
    if ((uVar6 & 1) == 0) {
      puVar11 = (ushort *)(puVar3 + 4);
      uVar6 = 1;
      do {
        if (puVar11[-2] == param_2) {
          uVar6 = uVar6 - 1;
LAB_01534418:
          if (*(short *)(puVar3 + (uVar6 & 0xffffffff) * 4 + 2) == 0) goto LAB_015344e8;
          break;
        }
        if (*puVar11 == param_2) goto LAB_01534418;
        uVar12 = uVar6 + 1;
        uVar6 = uVar6 + 2;
        puVar11 = puVar11 + 4;
      } while (uVar12 < 0x90);
      uVar13 = 0;
      while (uVar6 = FUN_00864990(param_2,uVar13), (uVar6 & 1) == 0) {
        uVar6 = 0;
        puVar11 = (ushort *)(puVar3 + 0xc);
        uVar13 = uVar13 + 1;
        uVar12 = 2;
        while (puVar11[-6] != param_2) {
          if (puVar11[-4] == param_2) {
            uVar6 = uVar6 | 1;
            break;
          }
          if (puVar11[-2] == param_2) {
            uVar6 = uVar12;
            break;
          }
          if (*puVar11 == param_2) {
            uVar6 = uVar6 + 3;
            break;
          }
          if (puVar11[2] == param_2) {
            uVar6 = uVar6 + 4;
            break;
          }
          if (puVar11[4] == param_2) {
            uVar6 = uVar6 + 5;
            break;
          }
          uVar2 = uVar12 + 4;
          uVar6 = uVar6 + 6;
          uVar12 = uVar12 + 6;
          puVar11 = puVar11 + 0xc;
          if (0x8f < uVar2) goto LAB_015344e8;
        }
        if (*(ushort *)(puVar3 + (uVar6 & 0xffffffff) * 4 + 2) <= uVar13) goto LAB_015344e8;
      }
      param_5 = uVar13;
    }
  }
  else {
    if (param_2 == 0x2ce) {
      if ((param_5 & 0xffff) == 3) {
        param_5 = 0;
      }
      else if ((param_5 & 0xffff) == 2) {
        param_5 = 1;
        uVar6 = FUN_00864990(0x2ce,1);
        puVar3 = PTR_DAT_0272a9e8;
        goto joined_r0x01534314;
      }
LAB_015343c4:
      uVar6 = FUN_00864990(param_2,param_5);
      puVar3 = PTR_DAT_0272a9e8;
      goto joined_r0x01534314;
    }
    if (param_2 == 0x306) {
      uVar13 = 0;
      if (6 < (param_5 & 0xffff)) {
        uVar13 = param_5;
      }
      uVar6 = FUN_00864990(0x306,uVar13);
      param_5 = uVar13;
      puVar3 = PTR_DAT_0272a9e8;
      goto joined_r0x01534314;
    }
    puVar11 = (ushort *)(PTR_DAT_0272a9e8 + 4);
    uVar6 = 1;
    do {
      if (puVar11[-2] == param_2) {
        uVar6 = uVar6 - 1;
LAB_015343a4:
        if ((uint)*(ushort *)(PTR_DAT_0272a9e8 + (uVar6 & 0xffffffff) * 4 + 2) <= (param_5 & 0xffff)
           ) {
          param_5 = 0;
        }
        goto joined_r0x015343b8;
      }
      if (*puVar11 == param_2) goto LAB_015343a4;
      uVar12 = uVar6 + 1;
      uVar6 = uVar6 + 2;
      puVar11 = puVar11 + 4;
    } while (uVar12 < 0x90);
    if ((param_5 & 0xffff) != 0) {
      param_5 = 0;
    }
joined_r0x015343b8:
    if (param_2 != 0x365) goto LAB_015343c4;
  }
LAB_015344e8:
  puVar9 = (uint *)(param_1 + (ulong)uVar10 * 0x30 + 0x20);
  uVar10 = *puVar9 & 0xf0000000 | *puVar9 & 0x7fff | (param_5 & 0xff) << 0xf;
LAB_01534500:
  uVar4 = (param_3 & 3) << 0x1d | (~uVar4 & 1) << 0x1c;
  *puVar9 = uVar10;
  uVar13 = uVar4 | uVar10 & 0x8fffffff | 0x80000000;
  if ((param_4 & 1) == 0) {
    uVar13 = uVar4 | uVar10 & 0xfffffff;
  }
  *puVar9 = uVar13;
  return;
}


