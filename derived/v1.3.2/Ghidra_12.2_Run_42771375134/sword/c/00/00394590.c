/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00394590; name: FUN_00394590
 */


void FUN_00394590(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x1b5;
  *param_1 = "Actors";
  param_1[2] = "actor0";
  param_1[3] = "actor1";
  puVar1 = PTR_LAB_027122b8;
  param_1[4] = PTR_LAB_027122b0;
  param_1[5] = puVar1;
  param_1[6] = "LocalPose";
  puVar2 = PTR_LAB_027122c8;
  puVar1 = PTR_LAB_027122c0;
  *(undefined4 *)(param_1 + 7) = 0x1b6;
  param_1[8] = puVar1;
  param_1[9] = puVar2;
  param_1[10] = "RelativeTransform";
  puVar1 = PTR_LAB_027122d0;
  *(undefined4 *)(param_1 + 0xb) = 0x1b7;
  param_1[0xc] = puVar1;
  param_1[0xd] = "RelativeLinearVelocity";
  *(undefined4 *)(param_1 + 0xe) = 0x1b8;
  param_1[0xf] = PTR_LAB_027122d8;
  param_1[0x10] = "RelativeAngularVelocity";
  puVar1 = PTR_LAB_027122e0;
  *(undefined4 *)(param_1 + 0x11) = 0x1b9;
  param_1[0x12] = puVar1;
  param_1[0x13] = "BreakForce";
  *(undefined4 *)(param_1 + 0x14) = 0x1ba;
  puVar1 = PTR_LAB_027122f0;
  param_1[0x15] = "force";
  param_1[0x16] = "torque";
  puVar2 = PTR_LAB_027122f8;
  param_1[0x17] = puVar1;
  param_1[0x18] = puVar2;
  param_1[0x19] = "ConstraintFlags";
  *(undefined4 *)(param_1 + 0x1a) = 0x1bb;
  puVar1 = PTR_LAB_027122e8;
  param_1[0x1b] = PTR_LAB_02712300;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = "InvMassScale0";
  puVar2 = PTR_LAB_02712310;
  puVar1 = PTR_LAB_02712308;
  *(undefined4 *)(param_1 + 0x1e) = 0x1bc;
  param_1[0x1f] = puVar1;
  param_1[0x20] = puVar2;
  param_1[0x21] = "InvInertiaScale0";
  puVar1 = PTR_LAB_02712318;
  *(undefined4 *)(param_1 + 0x22) = 0x1bd;
  puVar2 = PTR_LAB_02712320;
  param_1[0x23] = puVar1;
  param_1[0x24] = puVar2;
  param_1[0x25] = "InvMassScale1";
  *(undefined4 *)(param_1 + 0x26) = 0x1be;
  puVar1 = PTR_LAB_02712328;
  param_1[0x27] = PTR_LAB_02712330;
  param_1[0x28] = puVar1;
  param_1[0x29] = "InvInertiaScale1";
  puVar2 = PTR_LAB_02712340;
  puVar1 = PTR_LAB_02712338;
  *(undefined4 *)(param_1 + 0x2a) = 0x1bf;
  param_1[0x2b] = puVar1;
  param_1[0x2c] = puVar2;
  param_1[0x2d] = "Constraint";
  puVar1 = PTR_LAB_02712348;
  *(undefined4 *)(param_1 + 0x2e) = 0x1c0;
  param_1[0x2f] = puVar1;
  param_1[0x30] = &DAT_01d0fc7e;
  *(undefined4 *)(param_1 + 0x31) = 0x1c1;
  puVar1 = PTR_LAB_02712350;
  param_1[0x32] = PTR_LAB_02712358;
  param_1[0x33] = puVar1;
  param_1[0x34] = "Scene";
  puVar1 = PTR_LAB_02712360;
  *(undefined4 *)(param_1 + 0x35) = 0x1c2;
  param_1[0x36] = puVar1;
  param_1[0x37] = "UserData";
  puVar1 = PTR_LAB_02712370;
  *(undefined4 *)(param_1 + 0x38) = 0x1c3;
  puVar2 = PTR_LAB_02712378;
  param_1[0x39] = puVar1;
  param_1[0x3a] = puVar2;
  param_1[0x3b] = "Distance";
  *(undefined4 *)(param_1 + 0x3c) = 0x1d5;
  param_1[0x3d] = PTR_LAB_02712428;
  param_1[0x3e] = "MinDistance";
  *(undefined4 *)(param_1 + 0x3f) = 0x1d6;
  param_1[0x40] = PTR_LAB_02712430;
  param_1[0x41] = PTR_LAB_02712438;
  param_1[0x42] = "MaxDistance";
  puVar1 = PTR_LAB_02712440;
  *(undefined4 *)(param_1 + 0x43) = 0x1d7;
  puVar2 = PTR_LAB_02712448;
  param_1[0x44] = puVar1;
  param_1[0x45] = puVar2;
  param_1[0x46] = "Tolerance";
  *(undefined4 *)(param_1 + 0x47) = 0x1d8;
  param_1[0x48] = PTR_LAB_02712458;
  param_1[0x49] = PTR_LAB_02712460;
  param_1[0x4a] = "Stiffness";
  *(undefined4 *)(param_1 + 0x4b) = 0x1d9;
  param_1[0x4c] = PTR_LAB_02712468;
  param_1[0x4d] = PTR_LAB_02712470;
  param_1[0x4e] = "Damping";
  puVar1 = PTR_LAB_02712450;
  *(undefined4 *)(param_1 + 0x4f) = 0x1da;
  puVar2 = PTR_LAB_02712478;
  param_1[0x50] = puVar1;
  param_1[0x51] = puVar2;
  param_1[0x52] = "DistanceJointFlags";
  *(undefined4 *)(param_1 + 0x53) = 0x1db;
  param_1[0x54] = PTR_LAB_02712480;
  param_1[0x55] = PTR_LAB_02712488;
  param_1[0x56] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x57) = 0x1dc;
  param_1[0x58] = PTR_LAB_02712490;
  return;
}


