/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488220; name: FUN_00488220
 */


void FUN_00488220(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float local_3c;
  float local_38;
  float local_34;
  
  local_38 = 0.0;
  pfVar2 = *(float **)(param_1 + 0x90);
  pfVar3 = pfVar2;
  if (pfVar2 != (float *)0x0) {
    uVar5 = 0;
    pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
    do {
      if (*(byte *)((long)pfVar2 + uVar5 + 1) == 0xc) goto LAB_00488284;
      uVar5 = uVar5 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar5 < *(byte *)pfVar2);
    pfVar3 = (float *)0x0;
  }
LAB_00488284:
  pfVar2 = &local_38;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  *param_3 = *pfVar2;
  local_34 = 0.0;
  pfVar2 = *(float **)(param_1 + 0x90);
  pfVar3 = pfVar2;
  if (pfVar2 != (float *)0x0) {
    uVar5 = 0;
    pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
    do {
      if (*(byte *)((long)pfVar2 + uVar5 + 1) == 0xd) goto LAB_004882dc;
      uVar5 = uVar5 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar5 < *(byte *)pfVar2);
    pfVar3 = (float *)0x0;
  }
LAB_004882dc:
  pfVar2 = &local_34;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  param_3[1] = *pfVar2;
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar1 = param_1 + 0x30;
    if ((*(byte *)(lVar4 + 2) >> 2 & 1) != 0) {
      fVar6 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,lVar1,0x12,param_2);
      *param_3 = *param_3 + fVar6;
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 == 0) goto LAB_00488374;
    }
    if ((*(byte *)(lVar4 + 2) >> 3 & 1) != 0) {
      fVar6 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,lVar1,0x13,param_2);
      param_3[1] = param_3[1] + fVar6;
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 == 0) goto LAB_00488374;
    }
    if ((*(byte *)(lVar4 + 3) & 1) != 0) {
      fVar6 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,lVar1,0x18,param_2);
      param_3[2] = fVar6;
      goto LAB_004883f0;
    }
  }
LAB_00488374:
  local_3c = 0.0;
  pfVar2 = *(float **)(param_1 + 0x90);
  pfVar3 = pfVar2;
  if (pfVar2 != (float *)0x0) {
    uVar5 = 0;
    pfVar3 = (float *)((long)pfVar2 + ((ulong)(*(byte *)pfVar2 + 4) & 0x1fc));
    do {
      if (*(byte *)((long)pfVar2 + uVar5 + 1) == 0xe) goto LAB_004883b8;
      uVar5 = uVar5 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar5 < *(byte *)pfVar2);
    pfVar3 = (float *)0x0;
  }
LAB_004883b8:
  pfVar2 = &local_3c;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  param_3[2] = *pfVar2;
LAB_004883f0:
  *(byte *)(param_3 + 3) = *(byte *)(param_1 + 0x9f) & 1;
  *(byte *)((long)param_3 + 0xd) = (byte)(*(uint *)(param_1 + 0x9c) >> 0x13) & 1;
  return;
}


