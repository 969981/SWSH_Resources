/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00214ba0; name: FUN_00214ba0
 */


void FUN_00214ba0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_002146e0();
  *(undefined4 *)(param_1 + 0x2a8) = 0x33;
  *(undefined4 *)(param_1 + 0x2c8) = 0x34;
  *(char **)(param_1 + 0x2a0) = "LinearDamping";
  *(char **)(param_1 + 0x2c0) = "AngularDamping";
  *(undefined **)(param_1 + 0x2b0) = PTR_LAB_02711518;
  *(undefined **)(param_1 + 0x2b8) = PTR_LAB_02711520;
  *(undefined **)(param_1 + 0x2d0) = PTR_LAB_02711528;
  *(undefined **)(param_1 + 0x2d8) = PTR_LAB_02711530;
  *(char **)(param_1 + 0x2e0) = "MaxAngularVelocity";
  puVar1 = PTR_LAB_02711538;
  *(undefined4 *)(param_1 + 0x2e8) = 0x35;
  puVar2 = PTR_LAB_02711540;
  *(undefined **)(param_1 + 0x2f0) = puVar1;
  *(undefined **)(param_1 + 0x2f8) = puVar2;
  *(char **)(param_1 + 0x300) = "IsSleeping";
  *(undefined4 *)(param_1 + 0x308) = 0x36;
  *(undefined **)(param_1 + 0x310) = PTR_LAB_02711550;
  *(char **)(param_1 + 0x318) = "SleepThreshold";
  *(undefined4 *)(param_1 + 800) = 0x37;
  *(undefined **)(param_1 + 0x328) = PTR_LAB_02711558;
  *(undefined **)(param_1 + 0x330) = PTR_LAB_02711560;
  *(char **)(param_1 + 0x338) = "StabilizationThreshold";
  puVar1 = PTR_LAB_02711548;
  *(undefined4 *)(param_1 + 0x340) = 0x38;
  puVar2 = PTR_LAB_02711568;
  *(undefined **)(param_1 + 0x348) = puVar1;
  *(undefined **)(param_1 + 0x350) = puVar2;
  *(char **)(param_1 + 0x358) = "RigidDynamicLockFlags";
  *(undefined4 *)(param_1 + 0x360) = 0x39;
  *(undefined **)(param_1 + 0x368) = PTR_LAB_02711570;
  *(undefined **)(param_1 + 0x370) = PTR_LAB_02711578;
  *(char **)(param_1 + 0x378) = "WakeCounter";
  *(undefined4 *)(param_1 + 0x380) = 0x3a;
  *(undefined **)(param_1 + 0x388) = PTR_LAB_02711580;
  *(undefined **)(param_1 + 0x390) = PTR_LAB_02711588;
  *(char **)(param_1 + 0x398) = "SolverIterationCounts";
  *(undefined4 *)(param_1 + 0x3a0) = 0x3b;
  *(char **)(param_1 + 0x3a8) = "minPositionIters";
  puVar1 = PTR_LAB_02711590;
  *(char **)(param_1 + 0x3b0) = "minVelocityIters";
  puVar2 = PTR_LAB_02711598;
  *(undefined **)(param_1 + 0x3b8) = puVar1;
  *(undefined **)(param_1 + 0x3c0) = puVar2;
  *(char **)(param_1 + 0x3c8) = "ContactReportThreshold";
  *(undefined4 *)(param_1 + 0x3d0) = 0x3c;
  *(undefined **)(param_1 + 0x3d8) = PTR_LAB_027115a0;
  *(undefined **)(param_1 + 0x3e0) = PTR_LAB_027115a8;
  *(char **)(param_1 + 1000) = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x3f0) = 0x3d;
  *(undefined **)(param_1 + 0x3f8) = PTR_LAB_027115b0;
  return;
}


