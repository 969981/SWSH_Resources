/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00230200; name: FUN_00230200
 */


bool FUN_00230200(long param_1,long param_2,long param_3,float *param_4,float *param_5,
                 undefined8 param_6,long param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined **local_de8;
  long lStack_de0;
  long local_dd8;
  float *pfStack_dd0;
  long local_dc8;
  float *pfStack_dc0;
  float local_db8;
  undefined4 local_db4;
  undefined4 local_3b0;
  undefined8 local_a8;
  float *local_a0;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined8 local_60;
  long lStack_58;
  
  local_60 = *(undefined8 *)(param_2 + 8);
  lStack_58 = param_2;
  fabsf(*(float *)(param_2 + 0x14));
  fabsf(*(float *)(param_2 + 0x18));
  local_6c = 1.0 / *(float *)(param_2 + 0x10);
  local_70 = 1.0 / *(float *)(param_2 + 0x14);
  local_68 = 1.0 / *(float *)(param_2 + 0x18);
  fVar1 = *(float *)(param_3 + 0x10) - param_4[4];
  fVar5 = *(float *)(param_3 + 0x18) - param_4[6];
  fVar2 = *(float *)(param_3 + 0x14) - param_4[5];
  fVar6 = param_4[2];
  fVar7 = param_4[3];
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar2 = fVar2 + fVar2;
  fVar1 = fVar1 + fVar1;
  fVar5 = fVar5 + fVar5;
  fVar4 = fVar7 * fVar7 + -0.5;
  fVar3 = fVar1 * fVar8 + fVar2 * fVar9 + fVar5 * fVar6;
  local_80 = fVar8 * fVar3 + (fVar1 * fVar4 - fVar7 * (fVar5 * fVar9 - fVar2 * fVar6));
  fStack_7c = fVar9 * fVar3 + (fVar2 * fVar4 - fVar7 * (fVar1 * fVar6 - fVar5 * fVar8));
  local_78 = (fVar5 * fVar4 - fVar7 * (fVar2 * fVar8 - fVar1 * fVar9)) + fVar6 * fVar3;
  local_db4 = 0;
  local_3b0 = 0;
  local_db8 = *(float *)(param_1 + 4) + *param_5;
  local_98 = local_80 - local_db8;
  fStack_8c = local_80 + local_db8;
  local_94 = fStack_7c - local_db8;
  local_88 = fStack_7c + local_db8;
  local_90 = local_78 - local_db8;
  fStack_84 = local_78 + local_db8;
  local_db8 = local_db8 * local_db8;
  local_de8 = &PTR_LAB_025e44f8;
  pfStack_dc0 = &local_80;
  local_a0 = &local_70;
                    /* try { // try from 0023039c to 002303bf has its CatchHandler @ 002303e8 */
  lStack_de0 = param_1;
  local_dd8 = param_3;
  pfStack_dd0 = param_4;
  local_dc8 = param_7;
  local_a8 = param_8;
  FUN_00251d90(&local_70,param_4,&local_98,0,&local_de8);
  FUN_002303f0(&lStack_de0);
  return *(int *)(param_7 + 0x1000) != 0;
}


