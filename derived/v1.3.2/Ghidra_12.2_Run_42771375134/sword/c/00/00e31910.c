/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e31910; name: FUN_00e31910
 */


void FUN_00e31910(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_2 + 5) = *param_3;
  *(undefined2 *)((long)param_2 + 0x2c) = *(undefined2 *)(param_3 + 1);
  *(ushort *)((long)param_2 + 0x2e) = (ushort)*(byte *)((long)param_3 + 6);
  param_2[4] = (ulong)*(uint *)(param_1 + 0x2a0);
  iVar3 = param_3[2];
  if (iVar3 == 2) {
    uVar4 = 0x1ffffffff;
LAB_00e31984:
    param_2[3] = uVar4;
LAB_00e31988:
    iVar3 = param_3[4];
    if (iVar3 == 2) goto LAB_00e319c4;
LAB_00e31994:
    if (iVar3 == 1) {
      uVar2 = 0;
    }
    else {
      if (iVar3 != 0) goto LAB_00e319d4;
      uVar2 = 0xff;
      if ((*(byte *)(param_1 + 0x2ac) >> 5 & 1) != 0) {
        uVar2 = 0;
        if (*(int *)(param_1 + 0x298) != 1) {
          uVar2 = 0xff;
        }
        if (*(int *)(param_1 + 0x298) == 0) {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    if (iVar3 == 1) {
      uVar4 = 0x2ffffffff;
      goto LAB_00e31984;
    }
    if (iVar3 != 0) goto LAB_00e31988;
    param_2[3] = 0x3ffffffff;
    *(byte *)((long)param_2 + 0x35) = (byte)(*(uint *)(param_1 + 0x2a8) >> 2) & 2 | 1;
    iVar3 = param_3[4];
    if (iVar3 != 2) goto LAB_00e31994;
LAB_00e319c4:
    uVar2 = 1;
  }
  *(undefined2 *)(param_2 + 6) = uVar2;
LAB_00e319d4:
  if ((*(byte *)(param_1 + 0x2ac) >> 3 & 1) == 0) {
    *(undefined2 *)((long)param_2 + 0x32) = *(undefined2 *)(param_3 + 3);
    uVar1 = param_3[5];
  }
  else {
    *(ushort *)((long)param_2 + 0x32) = (ushort)*(byte *)(param_1 + 0x29c);
    uVar1 = param_3[5];
  }
  if (uVar1 < 4) {
    *(char *)((long)param_2 + 0x34) = (char)uVar1 + -1;
  }
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)((long)param_3 + 0x35);
  *(undefined2 *)((long)param_2 + 0x36) = *(undefined2 *)((long)param_3 + 0x36);
  *(undefined2 *)(param_2 + 7) = *(undefined2 *)(param_3 + 0xe);
  *(undefined2 *)((long)param_2 + 0x3a) = *(undefined2 *)((long)param_3 + 0x3a);
  *(undefined2 *)((long)param_2 + 0x3c) = *(undefined2 *)(param_3 + 0xf);
  *(undefined2 *)((long)param_2 + 0x3e) = *(undefined2 *)((long)param_3 + 0x3e);
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_3 + 0x10);
  if (*(char *)((long)param_3 + 0x4b) != '\0') {
    *(undefined1 *)(param_2 + 1) = 1;
    *param_2 = *(undefined8 *)(param_3 + 0x14);
  }
  return;
}


