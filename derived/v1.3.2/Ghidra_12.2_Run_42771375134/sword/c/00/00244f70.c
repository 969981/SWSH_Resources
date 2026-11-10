/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00244f70; name: FUN_00244f70
 */


undefined8
FUN_00244f70(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
            uint param_6)

{
  ulong uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
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
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
LAB_0024509c:
    *(undefined2 *)(param_2 + 0x14) = 0x407;
  }
  else {
    if ((*(byte *)(param_1 + 0xd) >> 1 & 1) == 0) {
      pfVar2 = *(float **)(param_1 + 0x40);
      *(undefined2 *)(param_2 + 0x14) = 0x406;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0x38);
      local_50 = *puVar3;
      uStack_48 = (ulong)(uint)*(float *)(puVar3 + 1);
      uStack_40 = *(undefined8 *)((long)puVar3 + 0xc);
      uStack_38 = (ulong)(uint)*(float *)((long)puVar3 + 0x14);
      local_70 = *(undefined4 *)(param_3 + 0x18);
      local_64 = 0x47f7fffff;
      local_5c = 1;
      local_30 = CONCAT44(local_70,local_70);
      local_80 = CONCAT44(((float)((ulong)local_50 >> 0x20) + (float)((ulong)uStack_40 >> 0x20)) *
                          0.5,((float)local_50 + (float)uStack_40) * 0.5);
      uStack_78 = (ulong)(uint)((*(float *)(puVar3 + 1) + *(float *)((long)puVar3 + 0x14)) * 0.5);
                    /* try { // try from 00245048 to 00245063 has its CatchHandler @ 002450dc */
      uStack_6c = local_70;
      local_68 = local_70;
      uVar1 = FUN_002afc90(*(undefined4 *)(puVar3 + 3),param_4,param_5,&local_80,param_6 & 1,param_2
                          );
      pfVar2 = *(float **)(param_1 + 0x40);
      *(undefined2 *)(param_2 + 0x14) = 0x406;
      if ((uVar1 & 1) != 0) {
        if (*(float *)(param_2 + 0x30) == 0.0) {
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          *(float *)(param_2 + 0x24) = -*pfVar2;
          *(float *)(param_2 + 0x28) = -fVar4;
          *(float *)(param_2 + 0x2c) = -fVar5;
        }
        goto LAB_0024509c;
      }
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    *(float *)(param_2 + 0x24) = -*pfVar2;
    *(float *)(param_2 + 0x28) = -fVar4;
    *(float *)(param_2 + 0x2c) = -fVar5;
  }
  return 1;
}


