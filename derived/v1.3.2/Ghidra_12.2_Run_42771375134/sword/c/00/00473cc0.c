/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00473cc0; name: FUN_00473cc0
 */


undefined8 FUN_00473cc0(long *param_1,long param_2,long *param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ushort uVar4;
  
  if ((param_1[7] != param_3[2]) || ((int)param_1[9] != *(int *)((long)param_3 + 0x1c))) {
    FUN_00473aa0(param_1);
  }
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(int *)(param_1 + 0xb) = (int)param_3[4];
  param_1[6] = 0;
  *(int *)((long)param_1 + 0x44) = (int)param_3[3];
  bVar2 = *(byte *)((long)param_3 + 9);
  if (*(byte *)(param_3 + 1) - 0x80 < 0x21) {
    uVar4 = 0xff;
    if ((1L << ((ulong)(*(byte *)(param_3 + 1) - 0x80) & 0x3f) & 0x100010001U) != 0) {
      uVar4 = (ushort)*(byte *)((long)param_3 + 10);
    }
  }
  else {
    uVar4 = 0xff;
  }
  *(int *)((long)param_1 + 0x6c) = param_5;
  *(ushort *)(param_1 + 8) = uVar4 | (ushort)bVar2 << 8;
  *(undefined1 *)(param_1 + 8) = 0xff;
  if (param_5 == 3) goto LAB_00473e28;
  lVar3 = *param_3;
  param_1[6] = lVar3;
  if (param_5 == 1) {
LAB_00473da4:
    uVar4 = 0xff;
    if ((*(byte *)(param_3 + 1) - 0x80 < 0x21) &&
       ((1L << ((ulong)(*(byte *)(param_3 + 1) - 0x80) & 0x3f) & 0x100010001U) != 0)) {
      uVar4 = (ushort)*(byte *)((long)param_3 + 10);
    }
    *(ushort *)(param_1 + 8) = uVar4 | (ushort)*(byte *)((long)param_3 + 9) << 8;
    if ((param_1[7] == 0) && (param_3[2] != 0)) {
      param_1[7] = param_3[2];
      FUN_004c4840();
    }
    FUN_00473ec0(param_1,param_4);
    iVar1 = *(int *)((long)param_3 + 0x1c);
    *(int *)(param_1 + 9) = iVar1;
    if ((((*(char *)((long)param_1 + 0x41) == -1) && (iVar1 == 0)) && ((char)param_1[8] == -1)) &&
       (param_1[3] == 0)) {
      *(undefined4 *)((long)param_1 + 0x6c) = 2;
    }
    lVar3 = param_1[6];
  }
  else if (param_5 != 2) {
    param_1[3] = param_3[5];
    goto LAB_00473da4;
  }
  if (lVar3 == 0) {
    *(undefined4 *)((long)param_1 + 0x6c) = 3;
  }
LAB_00473e28:
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*(long *)param_1[2] + 0x30))((long *)param_1[2],lVar3,param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(lVar3 + 8);
  (**(code **)(*param_1 + 0x28))(param_1);
  return 1;
}


