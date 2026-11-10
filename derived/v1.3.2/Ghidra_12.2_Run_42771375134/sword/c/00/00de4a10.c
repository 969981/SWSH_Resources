/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de4a10; name: FUN_00de4a10
 */


void FUN_00de4a10(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ushort *puVar8;
  int iVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar5 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar5);
    lVar6 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar6);
  puVar4 = PTR_DAT_0271ec90;
  *param_1 = (long)(PTR_DAT_0271ec90 + 0x10);
  param_1[9] = (long)(puVar4 + 0x198);
  param_1[10] = (long)(puVar4 + 0x1d8);
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0;
  *(undefined8 *)((long)param_1 + 0x3c4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0x100000000;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0x100000000;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0x100000000;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined4 *)((long)param_1 + 0x444) = 0;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  puVar1 = (undefined8 *)((long)param_1 + 0x424);
  *puVar1 = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x75] = param_1[0x17];
  param_1[0x74] = param_1[0x16];
  uVar11 = 0;
  if (6 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    uVar11 = 0;
    if (uVar5 != 0) {
      uVar11 = *(undefined4 *)((long)param_4 + uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x76) = uVar11;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    piVar7 = (int *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
    piVar7 = (int *)0x0;
    if (uVar5 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar5);
      piVar7 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  puVar8 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar3 = *puVar8;
  if (uVar3 < 7) {
    if (4 < uVar3) {
      lVar6 = 0;
      uVar5 = 0;
      goto LAB_00de4c60;
    }
    fVar13 = 0.0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    uVar12 = 0;
    uVar11 = 0;
LAB_00de4ccc:
    uVar14 = uVar11;
    *(undefined4 *)(param_1 + 0x79) = uVar12;
    *(float *)((long)param_1 + 0x3cc) = (fVar13 * DAT_01d4bb38) / DAT_01d4c284;
  }
  else {
    uVar11 = 0;
    if ((ulong)puVar8[3] != 0) {
      uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[3]);
    }
    uVar12 = 0;
    if (uVar3 < 9) {
LAB_00de4c54:
      uVar5 = 0;
      lVar6 = CONCAT44(uVar12,uVar11);
LAB_00de4c60:
      uVar11 = 0;
LAB_00de4c64:
      uVar12 = 0;
      uVar10 = (ulong)puVar8[2];
      iVar9 = 0;
      if (uVar10 != 0) {
LAB_00de4c6c:
        iVar9 = *(int *)((long)piVar7 + uVar10);
      }
    }
    else {
      if ((ulong)puVar8[4] == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[4]);
      }
      if (uVar3 < 0xb) goto LAB_00de4c54;
      uVar5 = 0;
      if ((ulong)puVar8[5] != 0) {
        uVar5 = (ulong)*(uint *)((long)piVar7 + (ulong)puVar8[5]);
      }
      lVar6 = CONCAT44(uVar12,uVar11);
      if (uVar3 < 0x15) goto LAB_00de4c60;
      uVar11 = 0;
      if ((ulong)puVar8[10] != 0) {
        uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[10]);
      }
      if ((uVar3 < 0x19) || ((ulong)puVar8[0xc] == 0)) goto LAB_00de4c64;
      uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[0xc]);
      uVar10 = (ulong)puVar8[2];
      if (uVar10 != 0) goto LAB_00de4c6c;
      iVar9 = 0;
    }
    if (uVar3 < 0xd) {
      uVar14 = 0;
LAB_00de4cbc:
      fVar13 = 0.0;
      *(int *)(param_1 + 0x78) = iVar9;
      param_1[0x7b] = uVar5;
      param_1[0x7a] = lVar6;
    }
    else {
      uVar14 = 0;
      if ((ulong)puVar8[6] != 0) {
        uVar14 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[6]);
      }
      if ((uVar3 < 0x11) || ((ulong)puVar8[8] == 0)) goto LAB_00de4cbc;
      fVar13 = *(float *)((long)piVar7 + (ulong)puVar8[8]);
      *(int *)(param_1 + 0x78) = iVar9;
      param_1[0x7b] = uVar5;
      param_1[0x7a] = lVar6;
    }
    if (iVar9 != 1) goto LAB_00de4ccc;
  }
  *(undefined4 *)((long)param_1 + 0x3c4) = uVar14;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xd) {
    piVar7 = (int *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6];
    piVar7 = (int *)0x0;
    if (uVar5 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar5);
      piVar7 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  puVar8 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar3 = *puVar8;
  if (uVar3 < 7) {
    if (4 < uVar3) {
      lVar6 = 0;
      uVar5 = 0;
      goto LAB_00de4e14;
    }
    fVar13 = 0.0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    uVar12 = 0;
    uVar11 = 0;
LAB_00de4e80:
    uVar14 = uVar11;
    *(undefined4 *)(param_1 + 0x7d) = uVar12;
    *(float *)((long)param_1 + 0x3ec) = (fVar13 * DAT_01d4bb38) / DAT_01d4c284;
  }
  else {
    uVar11 = 0;
    if ((ulong)puVar8[3] != 0) {
      uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[3]);
    }
    uVar12 = 0;
    if (uVar3 < 9) {
LAB_00de4e08:
      uVar5 = 0;
      lVar6 = CONCAT44(uVar12,uVar11);
LAB_00de4e14:
      uVar11 = 0;
LAB_00de4e18:
      uVar12 = 0;
      uVar10 = (ulong)puVar8[2];
      iVar9 = 0;
      if (uVar10 != 0) {
LAB_00de4e20:
        iVar9 = *(int *)((long)piVar7 + uVar10);
      }
    }
    else {
      if ((ulong)puVar8[4] == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[4]);
      }
      if (uVar3 < 0xb) goto LAB_00de4e08;
      uVar5 = 0;
      if ((ulong)puVar8[5] != 0) {
        uVar5 = (ulong)*(uint *)((long)piVar7 + (ulong)puVar8[5]);
      }
      lVar6 = CONCAT44(uVar12,uVar11);
      if (uVar3 < 0x15) goto LAB_00de4e14;
      uVar11 = 0;
      if ((ulong)puVar8[10] != 0) {
        uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[10]);
      }
      if ((uVar3 < 0x19) || ((ulong)puVar8[0xc] == 0)) goto LAB_00de4e18;
      uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[0xc]);
      uVar10 = (ulong)puVar8[2];
      if (uVar10 != 0) goto LAB_00de4e20;
      iVar9 = 0;
    }
    if (uVar3 < 0xd) {
      uVar14 = 0;
LAB_00de4e70:
      fVar13 = 0.0;
      *(int *)(param_1 + 0x7c) = iVar9;
      param_1[0x7f] = uVar5;
      param_1[0x7e] = lVar6;
    }
    else {
      uVar14 = 0;
      if ((ulong)puVar8[6] != 0) {
        uVar14 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[6]);
      }
      if ((uVar3 < 0x11) || ((ulong)puVar8[8] == 0)) goto LAB_00de4e70;
      fVar13 = *(float *)((long)piVar7 + (ulong)puVar8[8]);
      *(int *)(param_1 + 0x7c) = iVar9;
      param_1[0x7f] = uVar5;
      param_1[0x7e] = lVar6;
    }
    if (iVar9 != 1) goto LAB_00de4e80;
  }
  *(undefined4 *)((long)param_1 + 0x3e4) = uVar14;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xf) {
    piVar7 = (int *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7];
    piVar7 = (int *)0x0;
    if (uVar5 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar5);
      piVar7 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  puVar8 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar3 = *puVar8;
  if (uVar3 < 7) {
    if (4 < uVar3) {
      lVar6 = 0;
      uVar5 = 0;
      goto LAB_00de4fc8;
    }
    fVar13 = 0.0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    uVar12 = 0;
    uVar11 = 0;
LAB_00de5034:
    uVar14 = uVar11;
    *(undefined4 *)(param_1 + 0x81) = uVar12;
    *(float *)((long)param_1 + 0x40c) = (fVar13 * DAT_01d4bb38) / DAT_01d4c284;
  }
  else {
    uVar11 = 0;
    if ((ulong)puVar8[3] != 0) {
      uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[3]);
    }
    uVar12 = 0;
    if (uVar3 < 9) {
LAB_00de4fbc:
      uVar5 = 0;
      lVar6 = CONCAT44(uVar12,uVar11);
LAB_00de4fc8:
      uVar11 = 0;
LAB_00de4fcc:
      uVar12 = 0;
      uVar10 = (ulong)puVar8[2];
      iVar9 = 0;
      if (uVar10 != 0) {
LAB_00de4fd4:
        iVar9 = *(int *)((long)piVar7 + uVar10);
      }
    }
    else {
      if ((ulong)puVar8[4] == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[4]);
      }
      if (uVar3 < 0xb) goto LAB_00de4fbc;
      uVar5 = 0;
      if ((ulong)puVar8[5] != 0) {
        uVar5 = (ulong)*(uint *)((long)piVar7 + (ulong)puVar8[5]);
      }
      lVar6 = CONCAT44(uVar12,uVar11);
      if (uVar3 < 0x15) goto LAB_00de4fc8;
      uVar11 = 0;
      if ((ulong)puVar8[10] != 0) {
        uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[10]);
      }
      if ((uVar3 < 0x19) || ((ulong)puVar8[0xc] == 0)) goto LAB_00de4fcc;
      uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[0xc]);
      uVar10 = (ulong)puVar8[2];
      if (uVar10 != 0) goto LAB_00de4fd4;
      iVar9 = 0;
    }
    if (uVar3 < 0xd) {
      uVar14 = 0;
LAB_00de5024:
      fVar13 = 0.0;
      *(int *)(param_1 + 0x80) = iVar9;
      param_1[0x83] = uVar5;
      param_1[0x82] = lVar6;
    }
    else {
      uVar14 = 0;
      if ((ulong)puVar8[6] != 0) {
        uVar14 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[6]);
      }
      if ((uVar3 < 0x11) || ((ulong)puVar8[8] == 0)) goto LAB_00de5024;
      fVar13 = *(float *)((long)piVar7 + (ulong)puVar8[8]);
      *(int *)(param_1 + 0x80) = iVar9;
      param_1[0x83] = uVar5;
      param_1[0x82] = lVar6;
    }
    if (iVar9 != 1) goto LAB_00de5034;
  }
  *(undefined4 *)((long)param_1 + 0x404) = uVar14;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    piVar7 = (int *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    piVar7 = (int *)0x0;
    if (uVar5 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar5);
      piVar7 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  puVar8 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar3 = *puVar8;
  if (uVar3 < 7) {
    if (4 < uVar3) {
      lVar6 = 0;
      uVar5 = 0;
      goto LAB_00de517c;
    }
    fVar13 = 0.0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    uVar12 = 0;
    uVar11 = 0;
LAB_00de51e8:
    uVar14 = uVar11;
    *(undefined4 *)(param_1 + 0x85) = uVar12;
    *(float *)((long)param_1 + 0x42c) = (fVar13 * DAT_01d4bb38) / DAT_01d4c284;
  }
  else {
    uVar11 = 0;
    if ((ulong)puVar8[3] != 0) {
      uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[3]);
    }
    uVar12 = 0;
    if (uVar3 < 9) {
LAB_00de5170:
      uVar5 = 0;
      lVar6 = CONCAT44(uVar12,uVar11);
LAB_00de517c:
      uVar11 = 0;
LAB_00de5180:
      uVar12 = 0;
      uVar10 = (ulong)puVar8[2];
      iVar9 = 0;
      if (uVar10 != 0) {
LAB_00de5188:
        iVar9 = *(int *)((long)piVar7 + uVar10);
      }
    }
    else {
      if ((ulong)puVar8[4] == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[4]);
      }
      if (uVar3 < 0xb) goto LAB_00de5170;
      uVar5 = 0;
      if ((ulong)puVar8[5] != 0) {
        uVar5 = (ulong)*(uint *)((long)piVar7 + (ulong)puVar8[5]);
      }
      lVar6 = CONCAT44(uVar12,uVar11);
      if (uVar3 < 0x15) goto LAB_00de517c;
      uVar11 = 0;
      if ((ulong)puVar8[10] != 0) {
        uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[10]);
      }
      if ((uVar3 < 0x19) || ((ulong)puVar8[0xc] == 0)) goto LAB_00de5180;
      uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[0xc]);
      uVar10 = (ulong)puVar8[2];
      if (uVar10 != 0) goto LAB_00de5188;
      iVar9 = 0;
    }
    if (uVar3 < 0xd) {
      uVar14 = 0;
LAB_00de51d8:
      fVar13 = 0.0;
      *(int *)(param_1 + 0x84) = iVar9;
      param_1[0x87] = uVar5;
      param_1[0x86] = lVar6;
    }
    else {
      uVar14 = 0;
      if ((ulong)puVar8[6] != 0) {
        uVar14 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[6]);
      }
      if ((uVar3 < 0x11) || ((ulong)puVar8[8] == 0)) goto LAB_00de51d8;
      fVar13 = *(float *)((long)piVar7 + (ulong)puVar8[8]);
      *(int *)(param_1 + 0x84) = iVar9;
      param_1[0x87] = uVar5;
      param_1[0x86] = lVar6;
    }
    if (iVar9 != 1) goto LAB_00de51e8;
  }
  *(undefined4 *)puVar1 = uVar14;
  if (((4 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
      (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 != 0)) &&
     (*(int *)((long)piVar7 + uVar5) != 0)) goto LAB_00de53e8;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xf) {
    piVar7 = (int *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7];
    piVar7 = (int *)0x0;
    if (uVar5 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar5);
      piVar7 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  puVar8 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar3 = *puVar8;
  if (uVar3 < 7) {
    if (4 < uVar3) {
      lVar6 = 0;
      uVar5 = 0;
      goto LAB_00de5354;
    }
    fVar13 = 0.0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    param_1[0x87] = 0;
    param_1[0x86] = 0;
    uVar12 = 0;
    uVar11 = 0;
LAB_00de53c0:
    uVar14 = uVar11;
    *(undefined4 *)(param_1 + 0x85) = uVar12;
    *(float *)((long)param_1 + 0x42c) = (fVar13 * DAT_01d4bb38) / DAT_01d4c284;
  }
  else {
    uVar11 = 0;
    if ((ulong)puVar8[3] != 0) {
      uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[3]);
    }
    uVar12 = 0;
    if (uVar3 < 9) {
LAB_00de5348:
      uVar5 = 0;
      lVar6 = CONCAT44(uVar12,uVar11);
LAB_00de5354:
      uVar11 = 0;
LAB_00de5358:
      uVar12 = 0;
      uVar10 = (ulong)puVar8[2];
      iVar9 = 0;
      if (uVar10 != 0) {
LAB_00de5360:
        iVar9 = *(int *)((long)piVar7 + uVar10);
      }
    }
    else {
      if ((ulong)puVar8[4] == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[4]);
      }
      if (uVar3 < 0xb) goto LAB_00de5348;
      uVar5 = 0;
      if ((ulong)puVar8[5] != 0) {
        uVar5 = (ulong)*(uint *)((long)piVar7 + (ulong)puVar8[5]);
      }
      lVar6 = CONCAT44(uVar12,uVar11);
      if (uVar3 < 0x15) goto LAB_00de5354;
      uVar11 = 0;
      if ((ulong)puVar8[10] != 0) {
        uVar11 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[10]);
      }
      if ((uVar3 < 0x19) || ((ulong)puVar8[0xc] == 0)) goto LAB_00de5358;
      uVar12 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[0xc]);
      uVar10 = (ulong)puVar8[2];
      if (uVar10 != 0) goto LAB_00de5360;
      iVar9 = 0;
    }
    if (uVar3 < 0xd) {
      uVar14 = 0;
LAB_00de53b0:
      fVar13 = 0.0;
      *(int *)(param_1 + 0x84) = iVar9;
      param_1[0x87] = uVar5;
      param_1[0x86] = lVar6;
    }
    else {
      uVar14 = 0;
      if ((ulong)puVar8[6] != 0) {
        uVar14 = *(undefined4 *)((long)piVar7 + (ulong)puVar8[6]);
      }
      if ((uVar3 < 0x11) || ((ulong)puVar8[8] == 0)) goto LAB_00de53b0;
      fVar13 = *(float *)((long)piVar7 + (ulong)puVar8[8]);
      *(int *)(param_1 + 0x84) = iVar9;
      param_1[0x87] = uVar5;
      param_1[0x86] = lVar6;
    }
    if (iVar9 != 1) goto LAB_00de53c0;
  }
  *(undefined4 *)puVar1 = uVar14;
LAB_00de53e8:
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x13) {
    lVar6 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9];
    lVar6 = 0;
    if (uVar5 != 0) {
      lVar6 = *(long *)((long)param_4 + uVar5);
    }
  }
  param_1[0x88] = lVar6;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x11) {
    *(undefined4 *)(param_1 + 0x89) = 0;
    return;
  }
  uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[8];
  uVar11 = 0;
  if (uVar5 != 0) {
    uVar11 = *(undefined4 *)((long)param_4 + uVar5);
  }
  *(undefined4 *)(param_1 + 0x89) = uVar11;
  return;
}


