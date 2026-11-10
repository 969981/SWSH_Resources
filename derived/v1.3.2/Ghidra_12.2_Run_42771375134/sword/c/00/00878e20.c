/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878e20; name: FUN_00878e20
 */


ulong FUN_00878e20(long param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  
  switch(param_2) {
  case 0:
    lVar9 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar9 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 0;
      sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
      sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
      if (sVar4 != sVar5) {
        *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
      }
    }
    puVar10 = *(uint **)(lVar9 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      bVar1 = *(byte *)((long)puVar10 +
                       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x50 +
                       0x29);
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    else {
      bVar1 = PTR_DAT_02717398[0x21];
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
      if (puVar10 != (uint *)0x0) {
        uVar6 = FUN_00867720(puVar10 + 2,0x140);
        *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
        FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      }
      if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
        FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    return (ulong)bVar1;
  case 1:
    lVar9 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar9 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 0;
      sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
      sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
      if (sVar4 != sVar5) {
        *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
      }
    }
    puVar10 = *(uint **)(lVar9 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      bVar1 = *(byte *)((long)puVar10 +
                       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x50 +
                       0x2a);
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    else {
      bVar1 = PTR_DAT_02717398[0x22];
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
      if (puVar10 != (uint *)0x0) {
        uVar6 = FUN_00867720(puVar10 + 2,0x140);
        *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
        FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      }
      if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
        FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    return (ulong)bVar1;
  case 2:
    break;
  case 3:
    lVar9 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar9 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 0;
      sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
      sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
      if (sVar4 != sVar5) {
        *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
      }
    }
    puVar10 = *(uint **)(lVar9 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      uVar3 = (ushort)puVar10[(ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] *
                              0x14 + 0xc];
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    else {
      uVar3 = *(ushort *)(PTR_DAT_02717398 + 0x28);
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
      if (puVar10 != (uint *)0x0) {
        uVar6 = FUN_00867720(puVar10 + 2,0x140);
        *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
        FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      }
      if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
        FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    return (ulong)uVar3;
  case 4:
    lVar9 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar9 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 0;
      sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
      sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
      if (sVar4 != sVar5) {
        *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
      }
    }
    puVar10 = *(uint **)(lVar9 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      bVar1 = (byte)puVar10[(ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] *
                            0x14 + 0xb];
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    else {
      bVar1 = PTR_DAT_02717398[0x24];
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
      if (puVar10 != (uint *)0x0) {
        uVar6 = FUN_00867720(puVar10 + 2,0x140);
        *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
        FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      }
      if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
        FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    return (ulong)bVar1;
  case 5:
    lVar9 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar9 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 0;
      sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
      sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
      if (sVar4 != sVar5) {
        *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
      }
    }
    puVar10 = *(uint **)(lVar9 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      bVar1 = *(byte *)((long)puVar10 +
                       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x50 +
                       0x2d);
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    else {
      bVar1 = PTR_DAT_02717398[0x25];
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
      if (puVar10 != (uint *)0x0) {
        uVar6 = FUN_00867720(puVar10 + 2,0x140);
        *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
        FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      }
      if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
        FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    return (ulong)bVar1;
  case 6:
    lVar9 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar9 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 0;
      sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
      sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
      if (sVar4 != sVar5) {
        *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
      }
    }
    puVar10 = *(uint **)(lVar9 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      bVar1 = *(byte *)((long)puVar10 +
                       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x50 +
                       0x2e);
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    else {
      bVar1 = PTR_DAT_02717398[0x26];
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
      if (puVar10 != (uint *)0x0) {
        uVar6 = FUN_00867720(puVar10 + 2,0x140);
        *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
        FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      }
      if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
        FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    return (ulong)bVar1;
  case 7:
    lVar9 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar9 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 0;
      sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
      sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
      if (sVar4 != sVar5) {
        *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
      }
    }
    puVar10 = *(uint **)(lVar9 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      uVar3 = *(ushort *)
               ((long)puVar10 +
               (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x50 + 0x32);
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    else {
      uVar3 = *(ushort *)(PTR_DAT_02717398 + 0x2a);
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
      if (puVar10 != (uint *)0x0) {
        uVar6 = FUN_00867720(puVar10 + 2,0x140);
        *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
        FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      }
      if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
        FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    return (ulong)uVar3;
  case 8:
    uVar8 = FUN_0086cf80(*(undefined8 *)(param_1 + 0x98));
    return uVar8;
  case 9:
    lVar9 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar9 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      if (*(long *)(lVar9 + 8) != 0) {
        FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 0;
      sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
      sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
      if (sVar4 != sVar5) {
        *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
      }
    }
    puVar10 = *(uint **)(lVar9 + 0x10);
    if (((byte)puVar10[1] >> 2 & 1) == 0) {
      bVar1 = *(byte *)((long)puVar10 +
                       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x50 +
                       0x35);
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    else {
      bVar1 = PTR_DAT_02717398[0x2d];
      cVar2 = *(char *)(lVar9 + 0x18);
    }
    if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
      if (puVar10 != (uint *)0x0) {
        uVar6 = FUN_00867720(puVar10 + 2,0x140);
        *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
        FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
      }
      if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
        FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
      }
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    return (ulong)(bVar1 & 0x7f);
  case 10:
    uVar7 = FUN_00874470(*(undefined8 *)(param_1 + 0x98));
    return (ulong)(uVar7 & 0xff);
  case 0xb:
    uVar7 = FUN_008745b0(*(undefined8 *)(param_1 + 0x98));
    return (ulong)(uVar7 & 0xff);
  case 0xc:
    uVar7 = FUN_008746f0(*(undefined8 *)(param_1 + 0x98));
    return (ulong)(uVar7 & 0xffff);
  case 0xd:
    uVar7 = FUN_00874830(*(undefined8 *)(param_1 + 0x98));
    return (ulong)(uVar7 & 0xff);
  case 0xe:
    uVar7 = FUN_0086db00(*(undefined8 *)(param_1 + 0x98));
    return (ulong)(uVar7 & 0xff);
  case 0xf:
    uVar7 = FUN_0086dc40(*(undefined8 *)(param_1 + 0x98));
    return (ulong)(uVar7 & 0xff);
  case 0x10:
    uVar7 = FUN_0086dd80(*(undefined8 *)(param_1 + 0x98));
    return (ulong)(uVar7 & 0xffff);
  case 0x11:
    uVar7 = FUN_0086dec0(*(undefined8 *)(param_1 + 0x98));
    return (ulong)(uVar7 & 0xff);
  default:
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x98);
  if (*(char *)(lVar9 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
    if (*(long *)(lVar9 + 8) != 0) {
      FUN_00867850(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
    }
    *(undefined1 *)(lVar9 + 0x18) = 0;
    sVar4 = *(short *)(*(long *)(lVar9 + 0x10) + 6);
    sVar5 = FUN_00867720(*(long *)(lVar9 + 0x10) + 8,0x140);
    if (sVar4 != sVar5) {
      *(ushort *)(*(long *)(lVar9 + 0x10) + 4) = *(ushort *)(*(long *)(lVar9 + 0x10) + 4) | 4;
    }
  }
  puVar10 = *(uint **)(lVar9 + 0x10);
  if (((byte)puVar10[1] >> 2 & 1) == 0) {
    bVar1 = *(byte *)((long)puVar10 +
                     (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x50 +
                     0x2b);
    cVar2 = *(char *)(lVar9 + 0x18);
  }
  else {
    bVar1 = PTR_DAT_02717398[0x23];
    cVar2 = *(char *)(lVar9 + 0x18);
  }
  if ((cVar2 == '\0') && (*(char *)(lVar9 + 0x19) == '\0')) {
    if (puVar10 != (uint *)0x0) {
      uVar6 = FUN_00867720(puVar10 + 2,0x140);
      *(undefined2 *)(*(long *)(lVar9 + 0x10) + 6) = uVar6;
      FUN_008677c0(*(undefined4 **)(lVar9 + 0x10) + 2,0x140,**(undefined4 **)(lVar9 + 0x10));
    }
    if ((*(long *)(lVar9 + 8) != 0) && (*(undefined4 **)(lVar9 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar9 + 8),0x10,**(undefined4 **)(lVar9 + 0x10));
    }
    *(undefined1 *)(lVar9 + 0x18) = 1;
  }
  return (ulong)bVar1;
}


