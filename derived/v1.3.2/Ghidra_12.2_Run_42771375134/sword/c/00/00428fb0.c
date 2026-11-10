/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00428fb0; name: FUN_00428fb0
 */


undefined8
FUN_00428fb0(float param_1,float param_2,long param_3,undefined8 param_4,uint *param_5,uint param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = 1.0 - (double)param_2 * (double)param_2;
  dVar4 = (double)NEON_ucvtf((ulong)param_5[3]);
  dVar4 = pow(10.0,(dVar4 * -3.0) / ((double)param_6 * (double)param_1));
  dVar2 = log10(dVar4);
  dVar4 = DAT_01cd5140;
  if (1.0 < dVar5 * DAT_01cd5140 * dVar2) {
    dVar5 = DAT_01cd5398 / dVar2;
  }
  uVar1 = FUN_0042b140(param_3,param_4,*param_5);
  if (((((int)uVar1 == 1) &&
       (uVar1 = FUN_0042b140(param_3 + 0x18,param_4,param_5[1]), (int)uVar1 == 1)) &&
      (uVar1 = FUN_0042b140(param_3 + 0x30,param_4,param_5[2]), (int)uVar1 == 1)) &&
     (uVar1 = FUN_0042b140(param_3 + 0x48,param_4,param_5[3]), (int)uVar1 == 1)) {
    dVar6 = 1.0 / ((double)param_6 * (double)param_1);
    dVar2 = (double)NEON_ucvtf((ulong)*param_5);
    dVar2 = pow(10.0,dVar2 * -3.0 * dVar6);
    dVar3 = log10(dVar2);
    uVar1 = DAT_01cd51c8;
    dVar4 = dVar4 - dVar4 * (double)(float)SQRT(1.0 - dVar5) * (double)(float)SQRT(1.0 - dVar5);
    dVar5 = (double)NEON_fminnm(dVar3 * dVar4,DAT_01cd51c8);
    *(float *)(param_3 + 100) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x68) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[1]);
    dVar2 = pow(10.0,dVar2 * -3.0 * dVar6);
    dVar5 = log10(dVar2);
    dVar5 = (double)NEON_fminnm(dVar5 * dVar4,uVar1);
    *(float *)(param_3 + 0x70) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x74) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[2]);
    dVar2 = pow(10.0,dVar2 * -3.0 * dVar6);
    dVar5 = log10(dVar2);
    dVar5 = (double)NEON_fminnm(dVar5 * dVar4,uVar1);
    *(float *)(param_3 + 0x7c) = (float)(dVar2 - dVar2 * dVar5);
    *(float *)(param_3 + 0x80) = -(float)dVar5;
    dVar2 = (double)NEON_ucvtf((ulong)param_5[3]);
    dVar2 = pow(10.0,dVar2 * -3.0 * dVar6);
    dVar5 = log10(dVar2);
    dVar4 = (double)NEON_fminnm(dVar5 * dVar4,uVar1);
    uVar1 = 1;
    *(float *)(param_3 + 0x88) = (float)(dVar2 - dVar2 * dVar4);
    *(float *)(param_3 + 0x8c) = -(float)dVar4;
  }
  return uVar1;
}


