/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f48d70; name: FUN_00f48d70
 */


void FUN_00f48d70(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x19) {
    uVar6 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = *(undefined4 *)((long)param_2 + uVar7);
    }
  }
  *(undefined4 *)(param_3 + 0x28) = uVar6;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x13) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[9];
    if ((ulong)uVar4 != 0) {
      uVar4 = (ushort)*(undefined4 *)((long)param_2 + (ulong)uVar4);
    }
  }
  *(ushort *)(param_3 + 0x2c) = uVar4;
  *(undefined2 *)(param_3 + 0x2e) = 0x32;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x1d) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe], uVar7 == 0)) {
    uVar8 = 0x3ffffffff;
LAB_00f48e0c:
    *(undefined8 *)(param_3 + 0x18) = uVar8;
  }
  else {
    uVar2 = *(uint *)((long)param_2 + uVar7);
    if (uVar2 < 3) {
      uVar8 = *(undefined8 *)(&DAT_02161c70 + (long)(int)uVar2 * 8);
      goto LAB_00f48e0c;
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x21) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10], uVar7 == 0)) {
    uVar5 = 0xff;
LAB_00f48e54:
    *(undefined2 *)(param_3 + 0x30) = uVar5;
  }
  else {
    uVar2 = *(uint *)((long)param_2 + uVar7);
    if (uVar2 < 3) {
      uVar5 = (undefined2)(0x1000000ff >> (((ulong)uVar2 & 3) << 4));
      goto LAB_00f48e54;
    }
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1f) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0xf];
    if (((ulong)uVar4 != 0) &&
       (iVar1 = *(int *)((long)param_2 + (ulong)uVar4), uVar4 = (ushort)iVar1, iVar1 == 0x19)) {
      uVar4 = 0xffff;
    }
  }
  *(ushort *)(param_3 + 0x32) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2f) {
    uVar3 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x17];
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar2 = *(uint *)((long)param_2 + uVar7);
      if (4 < uVar2) goto LAB_00f48edc;
      uVar3 = (undefined1)(0xfeff020100 >> (((ulong)uVar2 & 7) << 3));
    }
  }
  *(undefined1 *)(param_3 + 0x34) = uVar3;
LAB_00f48edc:
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x29) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x14];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(int *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(undefined4 *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x36) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x25) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x12];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(int *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(undefined4 *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x38) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x27) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x13];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(int *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(undefined4 *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x3a) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2b) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x15];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(int *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(undefined4 *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x3c) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2d) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x16];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(int *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(undefined4 *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x3e) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x23) {
    *(undefined2 *)(param_3 + 0x40) = 0;
    return;
  }
  uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x11];
  uVar7 = (ulong)uVar4;
  if (uVar7 != 0) {
    if (*(int *)((long)param_2 + uVar7) == -1) {
      *(undefined2 *)(param_3 + 0x40) = 0xffff;
      return;
    }
    uVar4 = (ushort)*(undefined4 *)((long)param_2 + uVar7);
  }
  *(ushort *)(param_3 + 0x40) = uVar4;
  return;
}


