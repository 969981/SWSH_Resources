/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00394d00; name: FUN_00394d00
 */


void FUN_00394d00(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_LAB_027122b0;
  *(undefined4 *)(param_1 + 1) = 0x1b5;
  *param_1 = "Actors";
  puVar2 = PTR_LAB_027122b8;
  param_1[2] = "actor0";
  param_1[3] = "actor1";
  param_1[4] = puVar1;
  param_1[5] = puVar2;
  param_1[6] = "LocalPose";
  puVar1 = PTR_LAB_027122c0;
  *(undefined4 *)(param_1 + 7) = 0x1b6;
  puVar2 = PTR_LAB_027122c8;
  param_1[8] = puVar1;
  param_1[9] = puVar2;
  param_1[10] = "RelativeTransform";
  *(undefined4 *)(param_1 + 0xb) = 0x1b7;
  param_1[0xc] = PTR_LAB_027122d0;
  param_1[0xd] = "RelativeLinearVelocity";
  puVar1 = PTR_LAB_027122d8;
  *(undefined4 *)(param_1 + 0xe) = 0x1b8;
  param_1[0xf] = puVar1;
  param_1[0x10] = "RelativeAngularVelocity";
  puVar1 = PTR_LAB_027122e0;
  *(undefined4 *)(param_1 + 0x11) = 0x1b9;
  param_1[0x12] = puVar1;
  param_1[0x13] = "BreakForce";
  *(undefined4 *)(param_1 + 0x14) = 0x1ba;
  param_1[0x15] = "force";
  param_1[0x16] = "torque";
  puVar1 = PTR_LAB_027122f8;
  param_1[0x17] = PTR_LAB_027122f0;
  param_1[0x18] = puVar1;
  param_1[0x19] = "ConstraintFlags";
  puVar1 = PTR_LAB_027122e8;
  param_1[0x1b] = PTR_LAB_02712300;
  param_1[0x1c] = puVar1;
  *(undefined4 *)(param_1 + 0x1a) = 0x1bb;
  param_1[0x1d] = "InvMassScale0";
  puVar1 = PTR_LAB_02712308;
  *(undefined4 *)(param_1 + 0x1e) = 0x1bc;
  puVar2 = PTR_LAB_02712310;
  param_1[0x21] = "InvInertiaScale0";
  param_1[0x1f] = puVar1;
  param_1[0x20] = puVar2;
  *(undefined4 *)(param_1 + 0x22) = 0x1bd;
  puVar1 = PTR_LAB_02712320;
  param_1[0x23] = PTR_LAB_02712318;
  param_1[0x24] = puVar1;
  param_1[0x25] = "InvMassScale1";
  puVar1 = PTR_LAB_02712328;
  param_1[0x27] = PTR_LAB_02712330;
  param_1[0x28] = puVar1;
  *(undefined4 *)(param_1 + 0x26) = 0x1be;
  param_1[0x29] = "InvInertiaScale1";
  puVar1 = PTR_LAB_02712338;
  *(undefined4 *)(param_1 + 0x2a) = 0x1bf;
  puVar2 = PTR_LAB_02712340;
  param_1[0x2d] = "Constraint";
  param_1[0x2b] = puVar1;
  param_1[0x2c] = puVar2;
  *(undefined4 *)(param_1 + 0x2e) = 0x1c0;
  param_1[0x2f] = PTR_LAB_02712348;
  param_1[0x30] = &DAT_01d0fc7e;
  puVar1 = PTR_LAB_02712350;
  param_1[0x32] = PTR_LAB_02712358;
  param_1[0x33] = puVar1;
  *(undefined4 *)(param_1 + 0x31) = 0x1c1;
  param_1[0x34] = "Scene";
  puVar1 = PTR_LAB_02712360;
  *(undefined4 *)(param_1 + 0x35) = 0x1c2;
  param_1[0x36] = puVar1;
  param_1[0x37] = "UserData";
  *(undefined4 *)(param_1 + 0x38) = 0x1c3;
  puVar1 = PTR_LAB_02712378;
  param_1[0x39] = PTR_LAB_02712370;
  param_1[0x3a] = puVar1;
  param_1[0x3b] = "Position";
  puVar1 = PTR_LAB_027124c0;
  *(undefined4 *)(param_1 + 0x3c) = 0x1e4;
  param_1[0x3d] = puVar1;
  param_1[0x3e] = "Velocity";
  puVar1 = PTR_LAB_027124c8;
  *(undefined4 *)(param_1 + 0x3f) = 0x1e5;
  param_1[0x41] = "Limit";
  *(undefined4 *)(param_1 + 0x42) = 0x1e6;
  param_1[0x40] = puVar1;
  param_1[0x43] = PTR_LAB_027124d0;
  param_1[0x44] = PTR_LAB_027124d8;
  param_1[0x45] = "PrismaticJointFlags";
  *(undefined4 *)(param_1 + 0x46) = 0x1e7;
  param_1[0x47] = PTR_LAB_027124e0;
  param_1[0x48] = PTR_LAB_027124e8;
  param_1[0x49] = "ProjectionLinearTolerance";
  puVar1 = PTR_LAB_027124f0;
  *(undefined4 *)(param_1 + 0x4a) = 0x1e8;
  puVar2 = PTR_LAB_027124f8;
  param_1[0x4b] = puVar1;
  param_1[0x4c] = puVar2;
  param_1[0x4d] = "ProjectionAngularTolerance";
  *(undefined4 *)(param_1 + 0x4e) = 0x1e9;
  param_1[0x4f] = PTR_LAB_02712500;
  param_1[0x50] = PTR_LAB_02712508;
  param_1[0x51] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x52) = 0x1ea;
  param_1[0x53] = PTR_LAB_02712510;
  return;
}


