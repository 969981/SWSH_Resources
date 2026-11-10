/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00163090; name: FUN_00163090
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00163090(float param_1,float param_2,float param_3,undefined8 param_4,long param_5,
                 ulong param_6,undefined8 *param_7,float *param_8)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  *param_7 = 0;
  *(undefined4 *)(param_7 + 1) = 0;
  param_7[2] = 0;
  *(undefined4 *)(param_7 + 3) = 0;
  *(float *)(param_7 + 4) = *param_8;
  *(float *)((long)param_7 + 0x24) = param_8[1];
  *(float *)(param_7 + 5) = param_8[2];
  *(float *)(param_7 + 6) = *param_8;
  *(float *)((long)param_7 + 0x34) = param_8[1];
  *(float *)(param_7 + 7) = param_8[2];
  param_7[10] = 0x7f7fffffff7fffff;
  param_7[0xb] = 0;
  local_50 = *(undefined8 *)param_8;
  uStack_70 = CONCAT44(-param_8[1],-*param_8);
  uStack_48 = (ulong)(uint)param_8[2];
  uStack_68 = (ulong)(uint)-param_8[2];
  local_60 = 0;
  uStack_58 = 0;
  uStack_78 = _UNK_01d49dd8;
  local_80 = _DAT_01d49dd0;
                    /* try { // try from 00163168 to 00163177 has its CatchHandler @ 00163248 */
  FUN_0015d5c0(param_4,*(undefined4 *)(param_5 + (param_6 & 0xffffffff) * 0x30 + 0x28),&local_60,
               param_7 + 0xc,param_6 & 0xffffffff,&local_80,param_7 + 0x10);
  fVar4 = (*param_8 * *(float *)(param_7 + 0xe) + param_8[1] * *(float *)((long)param_7 + 0x74) +
          param_8[2] * *(float *)(param_7 + 0xf)) -
          (*param_8 * *(float *)(param_7 + 0x12) + param_8[1] * *(float *)((long)param_7 + 0x94) +
          param_8[2] * *(float *)(param_7 + 0x13));
  if (fVar4 < 0.0) {
                    /* try { // try from 001631c4 to 001631e3 has its CatchHandler @ 00163244 */
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDynamics/src/DyArticulationHelper.cpp"
                 ,0x4a1,
                 "Warning: articulation ill-conditioned or under severe stress, tangential spring ignored"
                );
  }
  fVar2 = 0.0;
  if (0.0 < fVar4) {
    fVar2 = 1.0 / fVar4;
  }
  fVar4 = param_2 * param_3 + param_3 * param_3 * param_1;
  fVar3 = 1.0 / (fVar4 + 1.0);
  *(float *)((long)param_7 + 0x2c) = -(fVar4 * fVar3 * fVar2);
  *(undefined4 *)((long)param_7 + 0x1c) = 0;
  *(undefined4 *)((long)param_7 + 0xc) = 0;
  *(float *)((long)param_7 + 0x3c) = 1.0 - fVar3;
  return;
}


