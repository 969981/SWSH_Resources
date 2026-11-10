/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f1830; name: FUN_004f1830
 */


void FUN_004f1830(long param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long local_48;
  undefined4 local_40;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  undefined4 local_14;
  
  fVar5 = *(float *)(param_1 + 0x8c) * 0.5;
  fVar6 = *param_2 - fVar5;
  fVar7 = param_2[1] - fVar5;
  fStack_34 = param_3[1] - fVar5;
  local_38 = *param_3 - fVar5;
  local_30 = param_3[2] - fVar5;
  fStack_2c = (float)NEON_fminnm(*param_3 + fVar5,*param_2 + fVar5);
  if (local_38 <= fVar6) {
    local_38 = fVar6;
  }
  local_28 = (float)NEON_fminnm(param_3[1] + fVar5,param_2[1] + fVar5);
  if (fStack_34 <= fVar7) {
    fStack_34 = fVar7;
  }
  fStack_24 = (float)NEON_fminnm(param_3[2] + fVar5,param_2[2] + fVar5);
  bVar1 = false;
  bVar3 = false;
  if (local_38 < fStack_2c) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(fStack_34) && !NAN(local_28)) {
      bVar1 = fStack_34 < local_28;
      bVar3 = false;
    }
  }
  bVar2 = false;
  bVar4 = false;
  if (bVar1 != bVar3) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(local_30) && !NAN(fStack_24)) {
      bVar2 = local_30 < fStack_24;
      bVar4 = false;
    }
  }
  if (bVar2 != bVar4) {
    local_40 = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 8) = 0;
    local_14 = 0;
    local_48 = param_1;
    FUN_004f26b0(*(long *)(param_1 + 0x80),*(undefined8 *)(*(long *)(param_1 + 0x80) + 8),&local_38,
                 &local_14,&local_48);
    if (1 < *(uint *)(param_1 + 0x88)) {
      FUN_004f1920(param_1 + 0x10,param_1);
    }
  }
  return;
}


