/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00428e10; name: FUN_00428e10
 */


void FUN_00428e10(float param_1,float param_2,uint *param_3,uint param_4)

{
  undefined8 uVar1;
  double __x;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = 1.0 - (double)param_2 * (double)param_2;
  dVar5 = (double)NEON_ucvtf((ulong)param_3[0x12]);
  __x = pow(10.0,(dVar5 * -3.0) / ((double)param_4 * (double)param_1));
  dVar2 = log10(__x);
  dVar5 = DAT_01cd5140;
  if (1.0 < dVar7 * DAT_01cd5140 * dVar2) {
    dVar7 = DAT_01cd5398 / dVar2;
  }
  dVar8 = 1.0 / ((double)param_4 * (double)param_1);
  dVar3 = (double)NEON_ucvtf((ulong)*param_3);
  dVar3 = pow(10.0,dVar3 * -3.0 * dVar8);
  dVar4 = log10(dVar3);
  uVar1 = DAT_01cd51c8;
  dVar5 = dVar5 - dVar5 * (double)(float)SQRT(1.0 - dVar7) * (double)(float)SQRT(1.0 - dVar7);
  dVar6 = (double)NEON_ucvtf((ulong)param_3[6]);
  dVar7 = (double)NEON_fminnm(dVar5 * dVar4,DAT_01cd51c8);
  param_3[0x19] = (uint)(float)(dVar3 - dVar3 * dVar7);
  param_3[0x1a] = (uint)-(float)dVar7;
  dVar7 = pow(10.0,dVar6 * -3.0 * dVar8);
  dVar3 = log10(dVar7);
  dVar3 = (double)NEON_fminnm(dVar5 * dVar3,uVar1);
  dVar4 = (double)NEON_ucvtf((ulong)param_3[0xc]);
  param_3[0x1c] = (uint)(float)(dVar7 - dVar7 * dVar3);
  param_3[0x1d] = (uint)-(float)dVar3;
  dVar7 = pow(10.0,dVar4 * -3.0 * dVar8);
  dVar3 = log10(dVar7);
  dVar3 = (double)NEON_fminnm(dVar5 * dVar3,uVar1);
  dVar5 = (double)NEON_fminnm(dVar5 * dVar2,uVar1);
  param_3[0x1f] = (uint)(float)(dVar7 - dVar7 * dVar3);
  param_3[0x20] = (uint)-(float)dVar3;
  param_3[0x22] = (uint)(float)(__x - __x * dVar5);
  param_3[0x23] = (uint)-(float)dVar5;
  return;
}


