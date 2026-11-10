/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f4dc00; name: FUN_00f4dc00
 */


void FUN_00f4dc00(undefined8 param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x15) {
    uVar6 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = *(undefined4 *)((long)param_2 + uVar7);
    }
  }
  *(undefined4 *)(param_3 + 0x28) = uVar6;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[2];
    if ((ulong)uVar4 != 0) {
      uVar4 = (ushort)*(byte *)((long)param_2 + (ulong)uVar4);
    }
  }
  *(ushort *)(param_3 + 0x2c) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x13) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[9];
    if ((ulong)uVar4 != 0) {
      uVar4 = (ushort)*(byte *)((long)param_2 + (ulong)uVar4);
    }
  }
  *(ushort *)(param_3 + 0x2e) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x19) {
    uVar7 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = (ulong)*(uint *)((long)param_2 + uVar8);
    }
  }
  *(ulong *)(param_3 + 0x20) = uVar7;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x2f) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x17], uVar7 == 0)) {
    lVar9 = 0x3ffffffff;
LAB_00f4dcec:
    *(long *)(param_3 + 0x18) = lVar9;
  }
  else {
    uVar1 = *(uint *)((long)param_2 + uVar7);
    if (uVar1 < 3) {
      lVar9 = 0x3ffffffff - ((ulong)uVar1 << 0x20);
      goto LAB_00f4dcec;
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x33) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x19], uVar7 == 0)) {
    uVar5 = 0xff;
LAB_00f4dd34:
    *(undefined2 *)(param_3 + 0x30) = uVar5;
  }
  else {
    uVar1 = *(uint *)((long)param_2 + uVar7);
    if (uVar1 < 3) {
      uVar5 = (undefined2)(0x1000000ff >> (((ulong)uVar1 & 3) << 4));
      goto LAB_00f4dd34;
    }
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x31) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x18];
    if (((ulong)uVar4 != 0) &&
       (iVar2 = *(int *)((long)param_2 + (ulong)uVar4), uVar4 = (ushort)iVar2, iVar2 == 0x19)) {
      uVar4 = 0xffff;
    }
  }
  *(ushort *)(param_3 + 0x32) = uVar4;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x41) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x20], uVar7 == 0)) {
    cVar3 = -1;
  }
  else {
    uVar1 = *(uint *)((long)param_2 + uVar7);
    if (3 < uVar1) goto LAB_00f4dda8;
    cVar3 = (char)uVar1 + -1;
  }
  *(char *)(param_3 + 0x34) = cVar3;
LAB_00f4dda8:
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x3b) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x1d];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      cVar3 = *(char *)((long)param_2 + uVar7);
      if (*(char *)((long)param_2 + uVar7) < -1) {
        *(byte *)(param_3 + 0x48) = (cVar3 + (cVar3 >> 7) ^ cVar3 >> 7) - 1;
        return;
      }
      if (cVar3 == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(char *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x36) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x37) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x1b];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(char *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(char *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x38) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x39) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x1c];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(char *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(char *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x3a) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x3d) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x1e];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(char *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(char *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x3c) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x3f) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x1f];
    uVar7 = (ulong)uVar4;
    if (uVar7 != 0) {
      if (*(char *)((long)param_2 + uVar7) == -1) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (ushort)*(char *)((long)param_2 + uVar7);
      }
    }
  }
  *(ushort *)(param_3 + 0x3e) = uVar4;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x35) {
    *(undefined2 *)(param_3 + 0x40) = 0;
    return;
  }
  uVar4 = ((ushort *)((long)param_2 - (long)*param_2))[0x1a];
  uVar7 = (ulong)uVar4;
  if (uVar7 != 0) {
    if (*(char *)((long)param_2 + uVar7) == -1) {
      *(undefined2 *)(param_3 + 0x40) = 0xffff;
      return;
    }
    uVar4 = (ushort)*(char *)((long)param_2 + uVar7);
  }
  *(ushort *)(param_3 + 0x40) = uVar4;
  return;
}


