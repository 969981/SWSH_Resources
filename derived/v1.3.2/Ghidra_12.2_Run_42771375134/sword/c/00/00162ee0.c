/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00162ee0; name: FUN_00162ee0
 */


void FUN_00162ee0(float param_1,float param_2,undefined8 param_3,long param_4,ulong param_5,
                 undefined8 *param_6,float *param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  *param_6 = 0;
  *(undefined4 *)(param_6 + 1) = 0;
  param_6[2] = 0;
  *(undefined4 *)(param_6 + 3) = 0;
  *(float *)(param_6 + 4) = *param_7;
  *(float *)((long)param_6 + 0x24) = param_7[1];
  *(float *)(param_6 + 5) = param_7[2];
  *(float *)(param_6 + 6) = *param_7;
  *(float *)((long)param_6 + 0x34) = param_7[1];
  fVar3 = param_7[2];
  param_6[10] = &DAT_7f7fffff00000000;
  param_6[0xb] = 0;
  *(float *)(param_6 + 7) = fVar3;
  local_50 = *(undefined8 *)param_7;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = CONCAT44(-param_7[1],-*param_7);
  uStack_68 = (ulong)(uint)-param_7[2];
  uStack_48 = (ulong)(uint)param_7[2];
                    /* try { // try from 00162fb0 to 00162fbf has its CatchHandler @ 00163084 */
  FUN_0015d5c0(param_3,*(undefined4 *)(param_4 + (param_5 & 0xffffffff) * 0x30 + 0x28),&local_60,
               param_6 + 0xc,param_5 & 0xffffffff,&local_80,param_6 + 0x10);
  fVar3 = (*param_7 * *(float *)(param_6 + 0xe) + param_7[1] * *(float *)((long)param_6 + 0x74) +
          param_7[2] * *(float *)(param_6 + 0xf)) -
          (*param_7 * *(float *)(param_6 + 0x12) + param_7[1] * *(float *)((long)param_6 + 0x94) +
          param_7[2] * *(float *)(param_6 + 0x13));
  if (fVar3 < 0.0) {
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDynamics/src/DyArticulationHelper.cpp"
                 ,0x486,
                 "Warning: articulation ill-conditioned or under severe stress, joint limit ignored"
                );
  }
  fVar2 = 0.0;
  if (0.0 < fVar3) {
    fVar2 = 1.0 / fVar3;
  }
  *(float *)((long)param_6 + 0x2c) = -fVar2;
  fVar2 = -(fVar2 * param_1 * param_2);
  fVar3 = fVar2;
  if (param_1 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)((long)param_6 + 0xc) = fVar2;
  *(float *)((long)param_6 + 0x1c) = fVar3;
  *(undefined4 *)((long)param_6 + 0x3c) = 0x3f800000;
  return;
}


