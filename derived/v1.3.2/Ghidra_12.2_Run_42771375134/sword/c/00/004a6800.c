/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a6800; name: FUN_004a6800
 */


void FUN_004a6800(undefined8 param_1,long param_2,uint param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  float *pfVar4;
  float fVar5;
  long *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  pbVar3 = *(byte **)(param_2 + 0x18);
  if (pbVar3 != (byte *)0x0) {
    uVar2 = 0;
    pfVar4 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
    do {
      if ((uint)pbVar3[uVar2 + 1] == (param_3 & 0xff)) goto LAB_004a685c;
      uVar2 = uVar2 + 1;
      pfVar4 = pfVar4 + 4;
    } while (uVar2 < *pbVar3);
  }
  pfVar4 = (float *)0x0;
LAB_004a685c:
  fVar5 = (float)param_1;
  if (param_3 == 0xb) {
    local_60 = *(long **)(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    local_58 = CONCAT31(local_58._1_3_,lVar1 == 0);
    if (lVar1 == 0) {
      (**(code **)(*local_60 + 200))(param_1,local_60,&local_60,0);
      *pfVar4 = fVar5;
    }
    else {
      (**(code **)(*local_60 + 0xd0))(param_1,local_60,lVar1,&local_60,0);
      *pfVar4 = fVar5;
    }
  }
  else {
    local_60 = *(long **)(param_2 + 0x10);
    local_58 = 0;
    local_50 = 0;
    local_40 = 0xff;
    local_48 = 0xff;
    local_38 = 0;
    FUN_004a4f60(param_1,fVar5 - *pfVar4,*(long *)(param_2 + 8) + 0x40,
                 *(undefined4 *)(PTR_DAT_02712b48 + (ulong)param_3 * 4),&local_60);
    *pfVar4 = fVar5;
  }
  if ((param_4 & 1) != 0) {
    pfVar4[2] = 0.0;
    pfVar4[3] = 0.0;
  }
  return;
}


