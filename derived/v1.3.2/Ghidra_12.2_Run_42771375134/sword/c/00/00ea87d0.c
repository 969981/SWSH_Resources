/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea87d0; name: FUN_00ea87d0
 */


void FUN_00ea87d0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  long local_28;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 7) ||
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3], uVar10 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar10);
    lVar11 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00e43220(param_1,param_2,param_3,lVar11);
  puVar6 = PTR_DAT_0271fc88;
  *param_1 = (long)(PTR_DAT_0271fc88 + 0x10);
  param_1[9] = (long)(puVar6 + 0x290);
  param_1[10] = (long)(puVar6 + 0x2d0);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    uVar15 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    uVar15 = 0;
    if (uVar10 != 0) {
      uVar15 = *(undefined4 *)((long)param_4 + uVar10);
    }
  }
  *(undefined4 *)((long)param_1 + 0x5cc) = uVar15;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    uVar9 = 0;
  }
  else {
    uVar9 = ((ushort *)((long)param_4 - (long)*param_4))[5];
    if ((ulong)uVar9 != 0) {
      uVar9 = (ushort)*(undefined4 *)((long)param_4 + (ulong)uVar9);
    }
  }
  *(ushort *)(param_1 + 0xba) = uVar9;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xd) {
    uVar15 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6];
    uVar15 = 0;
    if (uVar10 != 0) {
      uVar15 = *(undefined4 *)((long)param_4 + uVar10);
    }
  }
  *(undefined4 *)((long)param_1 + 0x5d4) = uVar15;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xf) {
    bVar7 = false;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7];
    bVar7 = false;
    if (uVar10 != 0) {
      bVar7 = *(char *)((long)param_4 + uVar10) != '\0';
    }
  }
  *(bool *)(param_1 + 0xbb) = bVar7;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x11) {
    uVar15 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[8];
    uVar15 = 0;
    if (uVar10 != 0) {
      uVar15 = *(undefined4 *)((long)param_4 + uVar10);
    }
  }
  *(undefined4 *)((long)param_1 + 0x5dc) = uVar15;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x13) {
    lVar11 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9];
    lVar11 = 0;
    if (uVar10 != 0) {
      lVar11 = *(long *)((long)param_4 + uVar10);
    }
  }
  param_1[0xbd] = lVar11;
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 0x15) ||
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[10], uVar10 == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)((long)param_4 + uVar10);
  }
  param_1[0xbe] = lVar11;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  lVar11 = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  if (0x16 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xb];
    lVar11 = 0;
    if (uVar10 != 0) {
      lVar11 = *(long *)((long)param_4 + uVar10);
    }
  }
  param_1[0xc5] = 0xffffffff;
  param_1[199] = 0xffffffff;
  uVar15 = 0;
  param_1[0xc9] = 0xffffffff;
  param_1[0xcb] = 0xffffffff;
  param_1[0xcd] = 0xffffffff;
  param_1[0xcf] = 0xffffffff;
  param_1[0xd1] = 0xffffffff;
  param_1[0xd3] = 0xffffffff;
  param_1[0xd5] = 0xffffffff;
  param_1[0xd7] = 0xffffffff;
  param_1[0xd9] = 0xffffffff;
  param_1[0xdb] = 0xffffffff;
  param_1[0xdd] = 0xffffffff;
  param_1[0xdf] = 0xffffffff;
  param_1[0xe1] = 0xffffffff;
  param_1[0xe3] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe5) = 0xffffffff;
  param_1[0xc4] = lVar11;
  param_1[0xc6] = 0;
  param_1[200] = 0;
  param_1[0xca] = 0;
  param_1[0xcc] = 0;
  param_1[0xce] = 0;
  param_1[0xd0] = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
  param_1[0xd6] = 0;
  param_1[0xd8] = 0;
  param_1[0xda] = 0;
  param_1[0xdc] = 0;
  param_1[0xde] = 0;
  param_1[0xe0] = 0;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  *(undefined8 *)((long)param_1 + 0x72c) = 0;
  *(undefined8 *)((long)param_1 + 0x734) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x73c) = 0;
  *(undefined8 *)((long)param_1 + 0x744) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x74c) = 0;
  *(undefined8 *)((long)param_1 + 0x754) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x75c) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x76c) = 0;
  *(undefined8 *)((long)param_1 + 0x774) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x77c) = 0;
  *(undefined8 *)((long)param_1 + 0x784) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x78c) = 0;
  *(undefined8 *)((long)param_1 + 0x794) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x79c) = 0;
  *(undefined8 *)((long)param_1 + 0x7a4) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x7ac) = 0;
  param_1[0xf6] = 0;
  if ((0x1a < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xd], uVar10 != 0)) {
    uVar15 = *(undefined4 *)((long)param_4 + uVar10);
  }
  *(undefined4 *)(param_1 + 0xf7) = uVar15;
  *(undefined1 *)((long)param_1 + 0x7bc) = 0;
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 0x1d) ||
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xe], uVar10 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar10);
    lVar11 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00e6e2a0(param_1 + 0xf8,lVar11);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x1f) {
    uVar8 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xf];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (undefined1)*(undefined4 *)((long)param_4 + uVar10);
    }
  }
  *(undefined1 *)(param_1 + 0xfd) = uVar8;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x21) {
    uVar8 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x10];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (undefined1)*(undefined4 *)((long)param_4 + uVar10);
    }
  }
  *(undefined1 *)((long)param_1 + 0x7e9) = uVar8;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x23) {
    bVar7 = false;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x11];
    bVar7 = false;
    if (uVar10 != 0) {
      bVar7 = *(char *)((long)param_4 + uVar10) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x7ea) = bVar7;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  param_1[0xff] = 0;
  param_1[0xfe] = 0;
  FUN_0131e1c0(param_1 + 0x102);
  local_28 = param_1[0x35];
  uVar15 = FUN_00e83970(*(undefined4 *)((long)param_1 + 0x5cc),&local_28);
  *(undefined1 *)((long)param_1 + 0x4da) = 1;
  *(undefined4 *)((long)param_1 + 0x5cc) = uVar15;
  (**(code **)(*param_1 + 0x250))(param_1,1);
  if ((0x18 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xc], uVar10 != 0)) {
    uVar12 = (ulong)*(uint *)((long)param_4 + uVar10);
    puVar1 = (uint *)((long)((long)param_4 + uVar10) + uVar12);
    if ((puVar1 != (uint *)0x0) && (uVar3 = *puVar1, uVar3 != 0)) {
      lVar2 = uVar10 + uVar12;
      lVar11 = 0;
      uVar10 = 0;
      lVar13 = 0x628;
      do {
        if (0x18 < uVar10) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar12 = (ulong)*(uint *)((long)param_4 + lVar11 + lVar2 + 4);
        lVar4 = lVar11 + uVar12 + lVar2;
        lVar5 = lVar11 + (uVar12 - (long)*(int *)((long)param_4 + lVar4 + 4)) + lVar2;
        if (*(ushort *)((long)param_4 + lVar5 + 4) < 5) {
          uVar15 = 0;
        }
        else {
          uVar14 = (ulong)*(ushort *)((long)param_4 + lVar5 + 8);
          uVar15 = 0;
          if (uVar14 != 0) {
            uVar15 = *(undefined4 *)((long)param_4 + lVar11 + uVar12 + uVar14 + lVar2 + 4);
          }
        }
        *(undefined4 *)((long)param_1 + lVar13) = uVar15;
        lVar5 = lVar11 + (uVar12 - (long)*(int *)((long)param_4 + lVar4 + 4)) + lVar2;
        uVar9 = *(ushort *)((long)param_4 + lVar5 + 4);
        uVar15 = 0;
        if (0xc < uVar9) {
          uVar14 = (ulong)*(ushort *)((long)param_4 + lVar5 + 0x10);
          uVar15 = 0;
          if ((uVar14 != 0) &&
             (uVar15 = 0,
             *(char *)((long)param_4 + lVar11 + uVar12 + uVar14 + lVar2 + 4) != '\0' && 0xe < uVar9)
             ) {
            uVar14 = (ulong)*(ushort *)((long)param_4 + lVar5 + 0x12);
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = *(undefined4 *)((long)param_4 + lVar11 + uVar12 + uVar14 + lVar2 + 4);
            }
          }
        }
        *(undefined4 *)((long)param_1 + lVar11 * 4 + 0x62c) = uVar15;
        lVar5 = lVar11 + (uVar12 - (long)*(int *)((long)param_4 + lVar4 + 4)) + lVar2;
        if ((*(ushort *)((long)param_4 + lVar5 + 4) < 7) ||
           (uVar14 = (ulong)*(ushort *)((long)param_4 + lVar5 + 10), uVar14 == 0)) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined4 *)((long)param_4 + lVar11 + uVar12 + uVar14 + lVar2 + 4);
        }
        *(undefined4 *)((long)param_1 + lVar13 + 8) = uVar15;
        lVar4 = lVar11 + (uVar12 - (long)*(int *)((long)param_4 + lVar4 + 4)) + lVar2;
        if ((*(ushort *)((long)param_4 + lVar4 + 4) < 9) ||
           (uVar14 = (ulong)*(ushort *)((long)param_4 + lVar4 + 0xc), uVar14 == 0)) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined4 *)((long)param_4 + lVar11 + uVar12 + uVar14 + lVar2 + 4);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 4;
        *(undefined4 *)((long)param_1 + lVar13 + 0xc) = uVar15;
        lVar13 = lVar13 + 0x10;
      } while (uVar10 < uVar3);
    }
  }
  if (2 < *(byte *)(param_1 + 0xfc) - 1) {
    *(undefined1 *)(param_1 + 0xfc) = 3;
  }
  if (0xc < *(byte *)((long)param_1 + 0x7e9)) {
    *(undefined1 *)((long)param_1 + 0x7e9) = 0xd;
  }
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x1000;
  return;
}


