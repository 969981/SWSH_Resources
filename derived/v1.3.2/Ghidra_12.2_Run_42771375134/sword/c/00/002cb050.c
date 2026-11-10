/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002cb050; name: FUN_002cb050
 */


undefined8
FUN_002cb050(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
            long param_6,float *param_7)

{
  ulong uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_80;
  ulong uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 local_30;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    uVar2 = 0x407;
LAB_002cb178:
    *(ushort *)(param_2 + 0x14) = uVar2;
  }
  else {
    *(undefined2 *)(param_2 + 0x14) = 0x406;
    if ((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) {
      local_50 = *param_5;
      uStack_48 = (ulong)(uint)*(float *)(param_5 + 1);
      local_70 = *(undefined4 *)(param_5 + 3);
      uStack_40 = *(undefined8 *)((long)param_5 + 0xc);
      uStack_38 = (ulong)(uint)*(float *)((long)param_5 + 0x14);
      local_30 = CONCAT44(local_70,local_70);
      local_64 = 0x47f7fffff;
      uStack_78 = (ulong)(uint)((*(float *)(param_5 + 1) + *(float *)((long)param_5 + 0x14)) * 0.5);
      local_5c = 1;
      local_80 = CONCAT44(((float)((ulong)local_50 >> 0x20) + (float)((ulong)uStack_40 >> 0x20)) *
                          0.5,((float)local_50 + (float)uStack_40) * 0.5);
      uStack_6c = local_70;
      local_68 = local_70;
                    /* try { // try from 002cb110 to 002cb12b has its CatchHandler @ 002cb190 */
      uVar1 = FUN_002b0700(*(undefined4 *)(param_6 + 0x18),param_3,param_4,&local_80,
                           *(undefined1 *)(param_1 + 0x14),1,param_2);
      if ((uVar1 & 1) != 0) {
        uVar2 = *(ushort *)(param_2 + 0x14) | 1;
        goto LAB_002cb178;
      }
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
    fVar3 = param_7[1];
    fVar4 = param_7[2];
    *(float *)(param_2 + 0x24) = -*param_7;
    *(float *)(param_2 + 0x28) = -fVar3;
    *(float *)(param_2 + 0x2c) = -fVar4;
  }
  return 1;
}


