/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00144ca0; name: FUN_00144ca0
 */


void FUN_00144ca0(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_70;
  ulong uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  if ((*(int *)(param_1 + 0x90) != 0) && (*(float *)(param_1 + 0x88) != 0.0)) {
    FUN_00144f80(param_1 + 0xb0,0,&local_120);
    if (*(int *)(param_1 + 0x48) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x40) + lVar7;
        lVar4 = *(long *)(lVar1 + 0x28);
        uStack_cc = *(undefined4 *)(lVar1 + 0x48);
        local_120 = *(undefined8 *)(lVar4 + 0x10);
        local_118 = *(undefined8 *)(lVar4 + 0x20);
        local_110 = *(int *)(lVar4 + 0x268);
        if (local_110 == 0) {
          local_110 = *(int *)(lVar4 + 0x18);
          local_108 = 0;
        }
        else {
          local_108 = *(undefined8 *)(lVar4 + 0x260);
        }
        local_100 = *(undefined4 *)(lVar4 + 0xa4);
        local_fc = *(undefined4 *)(lVar4 + 0xa8);
        local_f8 = *(undefined4 *)(lVar4 + 0xac);
        local_f4 = *(undefined4 *)(lVar4 + 0xb0);
        local_f0 = *(undefined4 *)(lVar4 + 0xb4);
        local_ec = *(undefined4 *)(lVar4 + 0xb8);
        local_e8 = *(undefined4 *)(lVar4 + 0xbc);
        local_e4 = *(undefined4 *)(lVar4 + 0x30);
        local_e0 = *(undefined4 *)(lVar4 + 0x34);
        local_dc = *(undefined4 *)(lVar4 + 0x38);
        local_d8 = *(undefined4 *)(lVar4 + 0x3c);
        local_d4 = *(undefined4 *)(lVar4 + 0x40);
        local_d0 = *(undefined4 *)(lVar4 + 0x44);
        local_c8 = (undefined4)*(undefined8 *)(lVar4 + 0x298);
        uStack_c4 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x298) >> 0x20);
        if (*(uint *)(param_1 + 0xb8) < (*(uint *)(param_1 + 0xbc) & 0x7fffffff)) {
          puVar5 = (undefined8 *)
                   (*(long *)(param_1 + 0xb0) + (ulong)*(uint *)(param_1 + 0xb8) * 0x60);
          puVar5[3] = local_108;
          puVar5[2] = CONCAT44(uStack_10c,local_110);
          puVar5[1] = local_118;
          *puVar5 = local_120;
          *(undefined4 *)(puVar5 + 4) = local_100;
          *(undefined4 *)((long)puVar5 + 0x24) = local_fc;
          *(undefined4 *)(puVar5 + 5) = local_f8;
          *(undefined4 *)((long)puVar5 + 0x2c) = local_f4;
          *(undefined4 *)(puVar5 + 6) = local_f0;
          *(undefined4 *)((long)puVar5 + 0x34) = local_ec;
          *(undefined4 *)(puVar5 + 7) = local_e8;
          *(undefined4 *)((long)puVar5 + 0x3c) = local_e4;
          *(undefined4 *)(puVar5 + 8) = local_e0;
          *(undefined4 *)((long)puVar5 + 0x44) = local_dc;
          *(undefined4 *)(puVar5 + 9) = local_d8;
          *(undefined4 *)((long)puVar5 + 0x4c) = local_d4;
          *(undefined4 *)(puVar5 + 10) = local_d0;
          *(undefined4 *)((long)puVar5 + 0x5c) = uStack_c4;
          *(ulong *)((long)puVar5 + 0x54) = CONCAT44(local_c8,uStack_cc);
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
        }
        else {
          FUN_00146960(param_1 + 0xb0,&local_120);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x50;
      } while (uVar8 < *(uint *)(param_1 + 0x48));
    }
    uVar2 = FUN_00151ac0(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
    uVar6 = *(uint *)(param_1 + 0xa8);
    local_70 = *(long *)(param_1 + 0xa0);
    if (uVar6 < uVar2) {
      if (local_70 != 0) {
        plVar3 = (long *)FUN_00400d30();
        (**(code **)(*plVar3 + 0x18))(plVar3,local_70);
      }
      local_70 = 0;
      if (uVar2 != 0) {
        plVar3 = (long *)FUN_00400d30();
        local_70 = (**(code **)(*plVar3 + 0x10))
                             (plVar3,uVar2,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelCloth/src/SwSolver.cpp"
                              ,0xa9);
      }
      *(long *)(param_1 + 0xa0) = local_70;
      *(uint *)(param_1 + 0xa8) = uVar2;
      uVar6 = uVar2;
    }
    uStack_68 = (ulong)uVar6;
    uStack_58 = 0;
                    /* try { // try from 00144f2c to 00144f37 has its CatchHandler @ 00144f78 */
    local_60 = local_70;
    FUN_0014f920(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),&local_120,
                 *(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8),
                 *(undefined4 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),&local_70);
                    /* try { // try from 00144f38 to 00144f3f has its CatchHandler @ 00144f64 */
    FUN_0014f9e0(&local_120);
    FUN_0014f9d0(&local_120);
  }
  return;
}


