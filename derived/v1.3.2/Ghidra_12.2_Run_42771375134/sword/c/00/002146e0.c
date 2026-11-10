/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002146e0; name: FUN_002146e0
 */


void FUN_002146e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x17;
  *(undefined4 *)(param_1 + 4) = 0x18;
  puVar1 = PTR_LAB_027113d8;
  *param_1 = "Scene";
  puVar2 = PTR_LAB_027113e0;
  param_1[2] = puVar1;
  param_1[3] = &DAT_01d0fc7e;
  puVar1 = PTR_LAB_027113e8;
  param_1[7] = "ActorFlags";
  param_1[5] = puVar2;
  param_1[6] = puVar1;
  *(undefined4 *)(param_1 + 8) = 0x19;
  puVar1 = PTR_LAB_027113f0;
  param_1[9] = PTR_LAB_027113f8;
  param_1[10] = puVar1;
  param_1[0xb] = "DominanceGroup";
  puVar2 = PTR_LAB_02711408;
  puVar1 = PTR_LAB_02711400;
  *(undefined4 *)(param_1 + 0xc) = 0x1a;
  param_1[0xd] = puVar1;
  param_1[0xe] = puVar2;
  param_1[0xf] = "OwnerClient";
  puVar1 = PTR_LAB_02711410;
  *(undefined4 *)(param_1 + 0x10) = 0x1b;
  puVar2 = PTR_LAB_02711418;
  param_1[0x13] = "ClientBehaviorFlags";
  param_1[0x11] = puVar1;
  param_1[0x12] = puVar2;
  *(undefined4 *)(param_1 + 0x14) = 0x1c;
  puVar1 = PTR_LAB_02711428;
  param_1[0x15] = PTR_LAB_02711420;
  param_1[0x16] = puVar1;
  param_1[0x17] = "Aggregate";
  puVar1 = PTR_LAB_02711430;
  *(undefined4 *)(param_1 + 0x18) = 0x1d;
  param_1[0x19] = puVar1;
  param_1[0x1a] = "UserData";
  puVar1 = PTR_LAB_02711438;
  *(undefined4 *)(param_1 + 0x1b) = 0x1e;
  puVar2 = PTR_LAB_02711440;
  param_1[0x1e] = "GlobalPose";
  param_1[0x1c] = puVar1;
  param_1[0x1d] = puVar2;
  *(undefined4 *)(param_1 + 0x1f) = 0x21;
  puVar1 = PTR_LAB_02711458;
  param_1[0x20] = PTR_LAB_02711450;
  param_1[0x21] = puVar1;
  param_1[0x22] = "Shapes";
  puVar1 = PTR_LAB_02711448;
  param_1[0x24] = PTR_LAB_02711460;
  param_1[0x25] = puVar1;
  *(undefined4 *)(param_1 + 0x23) = 0x22;
  param_1[0x26] = "Constraints";
  puVar1 = PTR_LAB_02711468;
  *(undefined4 *)(param_1 + 0x27) = 0x23;
  puVar2 = PTR_LAB_02711470;
  param_1[0x2a] = "CMassLocalPose";
  param_1[0x28] = puVar1;
  param_1[0x29] = puVar2;
  *(undefined4 *)(param_1 + 0x2b) = 0x26;
  puVar1 = PTR_LAB_02711480;
  param_1[0x2c] = PTR_LAB_02711478;
  param_1[0x2d] = puVar1;
  param_1[0x2e] = &DAT_01d328bd;
  puVar1 = PTR_LAB_02711488;
  param_1[0x30] = PTR_LAB_02711490;
  param_1[0x31] = puVar1;
  *(undefined4 *)(param_1 + 0x2f) = 0x27;
  param_1[0x32] = "InvMass";
  puVar1 = PTR_LAB_02711498;
  *(undefined4 *)(param_1 + 0x33) = 0x28;
  param_1[0x34] = puVar1;
  param_1[0x35] = "MassSpaceInertiaTensor";
  *(undefined4 *)(param_1 + 0x36) = 0x29;
  puVar1 = PTR_LAB_027114a8;
  param_1[0x37] = PTR_LAB_027114a0;
  param_1[0x38] = puVar1;
  param_1[0x39] = "MassSpaceInvInertiaTensor";
  puVar1 = PTR_LAB_027114b0;
  *(undefined4 *)(param_1 + 0x3a) = 0x2a;
  param_1[0x3b] = puVar1;
  param_1[0x3c] = "LinearVelocity";
  puVar1 = PTR_LAB_027114b8;
  *(undefined4 *)(param_1 + 0x3d) = 0x2b;
  puVar2 = PTR_LAB_027114c0;
  param_1[0x40] = "AngularVelocity";
  param_1[0x3e] = puVar1;
  param_1[0x3f] = puVar2;
  *(undefined4 *)(param_1 + 0x41) = 0x2c;
  param_1[0x42] = PTR_LAB_027114c8;
  param_1[0x43] = PTR_LAB_027114d0;
  param_1[0x44] = "RigidBodyFlags";
  *(undefined4 *)(param_1 + 0x45) = 0x2d;
  param_1[0x46] = PTR_LAB_027114d8;
  param_1[0x47] = PTR_LAB_027114e0;
  param_1[0x48] = "MinCCDAdvanceCoefficient";
  puVar1 = PTR_LAB_027114e8;
  *(undefined4 *)(param_1 + 0x49) = 0x2e;
  puVar2 = PTR_LAB_027114f0;
  param_1[0x4a] = puVar1;
  param_1[0x4b] = puVar2;
  param_1[0x4c] = "MaxDepenetrationVelocity";
  *(undefined4 *)(param_1 + 0x4d) = 0x2f;
  param_1[0x4e] = PTR_LAB_027114f8;
  param_1[0x4f] = PTR_LAB_02711500;
  param_1[0x50] = "MaxContactImpulse";
  *(undefined4 *)(param_1 + 0x51) = 0x30;
  param_1[0x52] = PTR_LAB_02711508;
  param_1[0x53] = PTR_LAB_02711510;
  return;
}


