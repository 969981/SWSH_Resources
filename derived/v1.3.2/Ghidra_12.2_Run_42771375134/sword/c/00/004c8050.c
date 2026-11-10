/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c8050; name: FUN_004c8050
 */


void FUN_004c8050(long *param_1,undefined4 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  float local_28;
  float local_24;
  
  FUN_004d1680();
  puVar2 = PTR_DAT_027131f8;
  param_1[0x6b] = -0x3a7fffff3a800000;
  *(undefined4 *)(param_1 + 0x6a) = param_2;
  param_1[0x6c] = 0xc5800000;
  param_1[0x18] = (long)(puVar2 + 0x168);
  *param_1 = (long)(puVar2 + 0x10);
  *(byte *)((long)param_1 + 0x354) = *(byte *)((long)param_1 + 0x354) & 0xfc | 2;
  FUN_004c8210(param_3,param_1 + 0x6d,&local_28);
  *(float *)((long)param_1 + 0x36c) = 1.0 - 1.0 / local_28;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  local_38 = 0;
  if ((*(ulong **)(param_3 + 0x38) == (ulong *)0x0) ||
     ((**(ulong **)(param_3 + 0x38) & 1L << ((ulong)*(uint *)(PTR_DAT_02712b48 + 0x74) & 0x3f)) == 0
     )) {
    local_24 = *(float *)(PTR_DAT_02712b40 + 0x74);
    pfVar3 = *(float **)(param_3 + 0x90);
    pfVar4 = pfVar3;
    if (pfVar3 != (float *)0x0) {
      uVar5 = 0;
      pfVar4 = (float *)((long)pfVar3 + ((ulong)(*(byte *)pfVar3 + 4) & 0x1fc));
      do {
        if (*(byte *)((long)pfVar3 + uVar5 + 1) == 0x1d) goto LAB_004c8188;
        uVar5 = uVar5 + 1;
        pfVar4 = pfVar4 + 1;
      } while (uVar5 < *(byte *)pfVar3);
      pfVar4 = (float *)0x0;
    }
LAB_004c8188:
    pfVar3 = &local_24;
    if (pfVar4 != (float *)0x0) {
      pfVar3 = pfVar4;
    }
    fVar6 = *pfVar3;
  }
  else {
    fVar6 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_3 + 0x30,
                                (ulong)*(uint *)(PTR_DAT_02712b48 + 0x74),&local_60);
  }
  bVar1 = *(byte *)(param_3 + 0x164);
  *(byte *)(param_3 + 0x164) = bVar1 & 0xef;
  *(byte *)((long)param_1 + 0x354) = *(byte *)((long)param_1 + 0x354) & 0xfb | bVar1 >> 1 & 4;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = expf((float)(int)-(uint)*(ushort *)PTR_DAT_02712ac0 / (fVar6 * DAT_01d4bdac));
  }
  *(float *)((long)param_1 + 0x364) = fVar6;
  return;
}


