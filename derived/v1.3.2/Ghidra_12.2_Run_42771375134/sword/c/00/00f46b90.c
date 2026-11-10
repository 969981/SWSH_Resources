/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f46b90; name: FUN_00f46b90
 */


void FUN_00f46b90(undefined8 param_1,int *param_2,long param_3)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0x1ffffffff;
  *(undefined8 *)(param_3 + 0x20) = 0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1b) {
    uVar3 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = *(undefined4 *)((long)param_2 + uVar5);
    }
  }
  *(undefined4 *)(param_3 + 0x28) = uVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x11) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[8];
    if ((ulong)uVar2 != 0) {
      uVar2 = (ushort)*(byte *)((long)param_2 + (ulong)uVar2);
    }
  }
  *(ushort *)(param_3 + 0x2c) = uVar2;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x19) {
    cVar1 = '\0';
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
    cVar1 = '\0';
    if (uVar5 != 0) {
      cVar1 = *(char *)((long)param_2 + uVar5);
    }
  }
  *(short *)(param_3 + 0x2e) = (short)cVar1;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x23) {
    uVar2 = 0;
LAB_00f46c54:
    *(ushort *)(param_3 + 0x30) = uVar2;
  }
  else {
    uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[0x11];
    if (((ulong)uVar2 == 0) ||
       (uVar4 = *(uint *)((long)param_2 + (ulong)uVar2), uVar2 = (ushort)uVar4, uVar4 < 3))
    goto LAB_00f46c54;
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x21) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[0x10];
    if ((ulong)uVar2 != 0) {
      uVar2 = (ushort)*(undefined4 *)((long)param_2 + (ulong)uVar2);
    }
  }
  *(ushort *)(param_3 + 0x32) = uVar2;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x31) {
    uVar4 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x18];
    uVar4 = 0;
    if ((uVar5 != 0) && (uVar4 = *(uint *)((long)param_2 + uVar5), 2 < uVar4)) goto LAB_00f46cb8;
  }
  *(char *)(param_3 + 0x34) = (char)uVar4;
LAB_00f46cb8:
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2b) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[0x15];
    if ((ulong)uVar2 != 0) {
      uVar2 = (ushort)*(char *)((long)param_2 + (ulong)uVar2);
    }
  }
  *(ushort *)(param_3 + 0x36) = uVar2;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x27) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[0x13];
    if ((ulong)uVar2 != 0) {
      uVar2 = (ushort)*(char *)((long)param_2 + (ulong)uVar2);
    }
  }
  *(ushort *)(param_3 + 0x38) = uVar2;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x29) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[0x14];
    if ((ulong)uVar2 != 0) {
      uVar2 = (ushort)*(char *)((long)param_2 + (ulong)uVar2);
    }
  }
  *(ushort *)(param_3 + 0x3a) = uVar2;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2d) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[0x16];
    if ((ulong)uVar2 != 0) {
      uVar2 = (ushort)*(char *)((long)param_2 + (ulong)uVar2);
    }
  }
  *(ushort *)(param_3 + 0x3c) = uVar2;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2f) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[0x17];
    if ((ulong)uVar2 != 0) {
      uVar2 = (ushort)*(char *)((long)param_2 + (ulong)uVar2);
    }
  }
  *(ushort *)(param_3 + 0x3e) = uVar2;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x25) {
    *(undefined2 *)(param_3 + 0x40) = 0;
    return;
  }
  uVar2 = ((ushort *)((long)param_2 - (long)*param_2))[0x12];
  if ((ulong)uVar2 != 0) {
    uVar2 = (ushort)*(char *)((long)param_2 + (ulong)uVar2);
  }
  *(ushort *)(param_3 + 0x40) = uVar2;
  return;
}


