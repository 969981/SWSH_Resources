/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30d30; name: FUN_00e30d30
 */


void FUN_00e30d30(long param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  *(undefined1 *)((long)param_2 + 6) = 1;
  *(undefined2 *)(param_2 + 3) = 0xffff;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  puVar5 = param_2 + 4;
  puVar5[0] = 0;
  puVar5[1] = 0;
  *(undefined8 *)((long)param_2 + 0x36) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_2 + 0x3e) = 0xffffffff;
  *(undefined8 *)((long)param_2 + 0x16) = 0;
  *(undefined8 *)((long)param_2 + 0x2e) = 0;
  *(undefined4 *)((long)param_2 + 0x46) = 0xff0000;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined2 *)((long)param_2 + 0x4a) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *param_2 = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0xc);
  bVar1 = *(byte *)(param_1 + 0x14);
  *(byte *)((long)param_2 + 6) = bVar1;
  iVar3 = *(int *)(param_1 + 0x18);
  if (1 < iVar3 - 1U) {
    if (iVar3 != 0) goto LAB_00e30dd8;
    bVar2 = FUN_014ae360();
    iVar3 = (uint)(bVar2 < bVar1) << 1;
  }
  param_2[2] = iVar3;
LAB_00e30dd8:
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0x19) {
    iVar3 = -1;
  }
  *(short *)(param_2 + 3) = (short)iVar3;
  if (*(uint *)(param_1 + 0x1c) < 3) {
    *puVar5 = *(uint *)(param_1 + 0x1c);
  }
  if (*(uint *)(param_1 + 0x24) < 4) {
    param_2[5] = *(uint *)(param_1 + 0x24);
  }
  uVar4 = 1;
  if (*(short *)(param_1 + 0x28) == 0) {
    uVar4 = 2;
  }
  param_2[6] = uVar4;
  *(undefined2 *)(param_2 + 7) = *(undefined2 *)(param_1 + 0x28);
  param_2[8] = *(undefined4 *)(param_1 + 0x44);
  param_2[9] = *(undefined4 *)(param_1 + 0x48);
  param_2[10] = *(undefined4 *)(param_1 + 0x4c);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x50);
  param_2[0xc] = (uint)*(byte *)(param_1 + 0x54);
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x56);
  bVar1 = *(byte *)(param_1 + 0x57);
  if ((char)bVar1 < -1) {
    *(byte *)((long)param_2 + 0x35) = ~bVar1;
  }
  else {
    *(short *)((long)param_2 + 0x36) = (short)(char)bVar1;
    *(short *)(param_2 + 0xe) = (short)*(char *)(param_1 + 0x58);
    *(short *)((long)param_2 + 0x3a) = (short)*(char *)(param_1 + 0x59);
    *(short *)(param_2 + 0xf) = (short)*(char *)(param_1 + 0x5a);
    *(short *)((long)param_2 + 0x3e) = (short)*(char *)(param_1 + 0x5b);
    *(short *)(param_2 + 0x10) = (short)*(char *)(param_1 + 0x5c);
  }
  *(undefined1 *)((long)param_2 + 0x42) = *(undefined1 *)(param_1 + 0x5d);
  *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(param_1 + 0x5e);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x5f);
  *(undefined1 *)((long)param_2 + 0x45) = *(undefined1 *)(param_1 + 0x60);
  *(undefined1 *)((long)param_2 + 0x46) = *(undefined1 *)(param_1 + 0x61);
  *(undefined1 *)((long)param_2 + 0x47) = *(undefined1 *)(param_1 + 0x62);
  return;
}


