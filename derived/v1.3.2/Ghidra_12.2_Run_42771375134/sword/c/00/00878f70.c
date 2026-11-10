/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878f70; name: FUN_00878f70
 */


void FUN_00878f70(long param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  long lVar6;
  uint *puVar7;
  
  uVar3 = (undefined1)param_3;
  uVar5 = (undefined2)param_3;
  switch(param_2) {
  case 0:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       ((long)puVar7 +
       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x29) = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x21] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 1:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       ((long)puVar7 +
       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x2a) = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x22] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 2:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       ((long)puVar7 +
       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x2b) = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x23] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 3:
    break;
  case 4:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       (puVar7 + (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x14 + 0xb) =
           uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x24] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 5:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       ((long)puVar7 +
       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x2d) = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x25] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 6:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       ((long)puVar7 +
       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x2e) = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x26] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 7:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined2 *)
       ((long)puVar7 +
       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x32) = uVar5;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      *(undefined2 *)(PTR_DAT_027173a0 + 0x2a) = uVar5;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 8:
    FUN_00873c90(*(undefined8 *)(param_1 + 0x98),param_3);
    return;
  case 9:
    FUN_00873de0(*(undefined8 *)(param_1 + 0x98),param_3);
    return;
  case 10:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       ((long)puVar7 +
       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x23) = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x1b] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 0xb:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       (puVar7 + (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x14 + 9) =
           uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x1c] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 0xc:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined2 *)
       ((long)puVar7 +
       (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x26) = uVar5;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      *(undefined2 *)(PTR_DAT_027173a0 + 0x1e) = uVar5;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 0xd:
    lVar6 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
      }
      *(undefined1 *)(lVar6 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
      sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      if (sVar2 != sVar4) {
        *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
      }
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (((byte)puVar7[1] >> 2 & 1) == 0) {
      *(undefined1 *)
       (puVar7 + (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x14 + 10) =
           uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    else {
      PTR_DAT_027173a0[0x20] = uVar3;
      cVar1 = *(char *)(lVar6 + 0x18);
    }
    if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
      return;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    }
    if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
    return;
  case 0xe:
    FUN_00874970(*(undefined8 *)(param_1 + 0x98),param_3);
    return;
  case 0xf:
    FUN_00874ac0(*(undefined8 *)(param_1 + 0x98),param_3);
    return;
  case 0x10:
    FUN_00874c10(*(undefined8 *)(param_1 + 0x98),param_3);
    return;
  case 0x11:
    FUN_00874d60(*(undefined8 *)(param_1 + 0x98),param_3);
    return;
  default:
    return;
  }
  lVar6 = *(long *)(param_1 + 0x98);
  if (*(char *)(lVar6 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
    if (*(long *)(lVar6 + 8) != 0) {
      FUN_00867850(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
    }
    *(undefined1 *)(lVar6 + 0x18) = 0;
    sVar2 = *(short *)(*(long *)(lVar6 + 0x10) + 6);
    sVar4 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
    if (sVar2 != sVar4) {
      *(ushort *)(*(long *)(lVar6 + 0x10) + 4) = *(ushort *)(*(long *)(lVar6 + 0x10) + 4) | 4;
    }
  }
  puVar7 = *(uint **)(lVar6 + 0x10);
  if (((byte)puVar7[1] >> 2 & 1) == 0) {
    *(undefined2 *)
     (puVar7 + (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x14 + 0xc) =
         uVar5;
    cVar1 = *(char *)(lVar6 + 0x18);
  }
  else {
    *(undefined2 *)(PTR_DAT_027173a0 + 0x28) = uVar5;
    cVar1 = *(char *)(lVar6 + 0x18);
  }
  if ((cVar1 != '\0') || (*(char *)(lVar6 + 0x19) != '\0')) {
    return;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar5 = FUN_00867720(*(long *)(lVar6 + 0x10) + 8,0x140);
    *(undefined2 *)(*(long *)(lVar6 + 0x10) + 6) = uVar5;
    FUN_008677c0(*(undefined4 **)(lVar6 + 0x10) + 2,0x140,**(undefined4 **)(lVar6 + 0x10));
  }
  if ((*(long *)(lVar6 + 8) != 0) && (*(undefined4 **)(lVar6 + 0x10) != (undefined4 *)0x0)) {
    FUN_008677c0(*(long *)(lVar6 + 8),0x10,**(undefined4 **)(lVar6 + 0x10));
  }
  *(undefined1 *)(lVar6 + 0x18) = 1;
  return;
}


