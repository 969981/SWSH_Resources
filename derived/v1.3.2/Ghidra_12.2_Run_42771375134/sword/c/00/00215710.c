/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00215710; name: FUN_00215710
 */


void FUN_00215710(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x5c;
  *(undefined4 *)(param_1 + 4) = 0x5d;
  *param_1 = "Scene";
  param_1[2] = PTR_LAB_027116f8;
  param_1[3] = "MaxProjectionIterations";
  puVar1 = PTR_LAB_02711710;
  param_1[5] = PTR_LAB_02711708;
  param_1[6] = puVar1;
  param_1[7] = "SeparationTolerance";
  puVar1 = PTR_LAB_02711700;
  param_1[9] = PTR_LAB_02711718;
  param_1[10] = puVar1;
  *(undefined4 *)(param_1 + 8) = 0x5e;
  param_1[0xb] = "InternalDriveIterations";
  puVar1 = PTR_LAB_02711720;
  *(undefined4 *)(param_1 + 0xc) = 0x5f;
  puVar2 = PTR_LAB_02711728;
  param_1[0xf] = "ExternalDriveIterations";
  param_1[0xd] = puVar1;
  param_1[0xe] = puVar2;
  *(undefined4 *)(param_1 + 0x10) = 0x60;
  puVar1 = PTR_LAB_02711738;
  param_1[0x11] = PTR_LAB_02711730;
  param_1[0x12] = puVar1;
  param_1[0x13] = "SolverIterationCounts";
  *(undefined4 *)(param_1 + 0x14) = 0x61;
  puVar2 = PTR_LAB_02711748;
  puVar1 = PTR_LAB_02711740;
  param_1[0x15] = "minPositionIters";
  param_1[0x16] = "minVelocityIters";
  param_1[0x19] = "IsSleeping";
  param_1[0x17] = puVar2;
  param_1[0x18] = puVar1;
  puVar1 = PTR_LAB_02711750;
  *(undefined4 *)(param_1 + 0x1a) = 0x62;
  param_1[0x1b] = puVar1;
  param_1[0x1c] = "SleepThreshold";
  *(undefined4 *)(param_1 + 0x1d) = 99;
  puVar1 = PTR_LAB_02711760;
  param_1[0x1e] = PTR_LAB_02711758;
  param_1[0x1f] = puVar1;
  param_1[0x20] = "StabilizationThreshold";
  puVar2 = PTR_LAB_02711770;
  puVar1 = PTR_LAB_02711768;
  *(undefined4 *)(param_1 + 0x21) = 100;
  param_1[0x22] = puVar1;
  param_1[0x23] = puVar2;
  param_1[0x24] = "WakeCounter";
  puVar1 = PTR_LAB_02711778;
  *(undefined4 *)(param_1 + 0x25) = 0x65;
  puVar2 = PTR_LAB_02711780;
  param_1[0x26] = puVar1;
  param_1[0x27] = puVar2;
  param_1[0x28] = "Links";
  *(undefined4 *)(param_1 + 0x29) = 0x66;
  puVar1 = PTR_LAB_02711788;
  param_1[0x2a] = PTR_LAB_02711798;
  param_1[0x2b] = puVar1;
  param_1[0x2c] = &DAT_01d0fc7e;
  puVar2 = PTR_LAB_027117a0;
  puVar1 = PTR_LAB_02711790;
  *(undefined4 *)(param_1 + 0x2d) = 0x67;
  param_1[0x2e] = puVar2;
  param_1[0x2f] = puVar1;
  param_1[0x30] = "Aggregate";
  puVar1 = PTR_LAB_027117a8;
  *(undefined4 *)(param_1 + 0x31) = 0x68;
  param_1[0x32] = puVar1;
  param_1[0x33] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x34) = 0x69;
  param_1[0x35] = PTR_LAB_027117b0;
  param_1[0x36] = "UserData";
  puVar2 = PTR_LAB_027117c0;
  puVar1 = PTR_LAB_027117b8;
  *(undefined4 *)(param_1 + 0x37) = 0x6a;
  param_1[0x38] = puVar1;
  param_1[0x39] = puVar2;
  return;
}


