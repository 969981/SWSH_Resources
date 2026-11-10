/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b8880; name: FUN_001b8880
 */


long * FUN_001b8880(undefined8 param_1,long *param_2,float *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  
  puVar1 = PTR_DAT_02711048;
  plVar2 = (long *)FUN_001b8df0(*(undefined8 *)PTR_DAT_02711048,param_1,param_2,param_3);
  if (plVar2 == (long *)0x0) {
    uVar4 = FUN_00400880();
    FUN_00400890(uVar4,0x20,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpFactory.cpp"
                 ,0x220,"Articulation link initialization failed: returned NULL.");
  }
  else if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0xf8))(&local_70,param_2);
    fVar6 = param_3[5] - local_60._4_4_;
    fVar11 = *param_3;
    fVar12 = param_3[1];
    fVar7 = param_3[4] - (float)local_60;
    fVar9 = param_3[2];
    fVar10 = param_3[3];
    local_60 = 0;
    fVar8 = (param_3[6] - local_58) + (param_3[6] - local_58);
    local_58 = 0.0;
    fVar13 = local_68._4_4_ * local_68._4_4_ + -0.5;
    fVar7 = fVar7 + fVar7;
    fVar6 = fVar6 + fVar6;
    fVar5 = (fVar7 * -(float)local_70 - fVar6 * local_70._4_4_) - fVar8 * (float)local_68;
    local_50 = ((local_68._4_4_ * fVar11 - fVar10 * (float)local_70) - fVar9 * local_70._4_4_) +
               fVar12 * (float)local_68;
    fStack_4c = ((local_68._4_4_ * fVar12 - fVar10 * local_70._4_4_) - fVar11 * (float)local_68) +
                fVar9 * (float)local_70;
    local_48 = ((local_68._4_4_ * fVar9 - fVar10 * (float)local_68) - fVar12 * (float)local_70) +
               fVar11 * local_70._4_4_;
    fStack_44 = local_68._4_4_ * fVar10 + fVar11 * (float)local_70 + fVar12 * local_70._4_4_ +
                fVar9 * (float)local_68;
    local_40 = (fVar13 * fVar7 + local_68._4_4_ * (fVar6 * (float)local_68 - fVar8 * local_70._4_4_)
               ) - fVar5 * (float)local_70;
    fStack_3c = (fVar13 * fVar6 +
                local_68._4_4_ * (fVar8 * (float)local_70 - fVar7 * (float)local_68)) -
                fVar5 * local_70._4_4_;
    local_38 = (fVar13 * fVar8 + local_68._4_4_ * (fVar7 * local_70._4_4_ - fVar6 * (float)local_70)
               ) - fVar5 * (float)local_68;
    local_70 = 0;
    local_68 = 0x3f80000000000000;
    lVar3 = FUN_001b8fe0(*(undefined8 *)puVar1,param_2,&local_50,plVar2,&local_70);
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      uVar4 = FUN_00400880();
      FUN_00400890(uVar4,0x20,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpFactory.cpp"
                   ,0x22f,
                   "Articulation link initialization failed due to joint creation failure: returned NULL."
                  );
      plVar2 = (long *)0x0;
    }
    else {
      plVar2[0x31] = lVar3;
    }
  }
  return plVar2;
}


