/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00394970; name: FUN_00394970
 */


void FUN_00394970(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_LAB_027122b0;
  *(undefined4 *)(param_1 + 1) = 0x1b5;
  *param_1 = "Actors";
  param_1[2] = "actor0";
  param_1[3] = "actor1";
  puVar2 = PTR_LAB_027122b8;
  param_1[4] = puVar1;
  param_1[5] = puVar2;
  param_1[6] = "LocalPose";
  *(undefined4 *)(param_1 + 7) = 0x1b6;
  puVar1 = PTR_LAB_027122c8;
  param_1[8] = PTR_LAB_027122c0;
  param_1[9] = puVar1;
  param_1[10] = "RelativeTransform";
  puVar1 = PTR_LAB_027122d0;
  *(undefined4 *)(param_1 + 0xb) = 0x1b7;
  param_1[0xc] = puVar1;
  param_1[0xd] = "RelativeLinearVelocity";
  puVar1 = PTR_LAB_027122d8;
  *(undefined4 *)(param_1 + 0xe) = 0x1b8;
  param_1[0xf] = puVar1;
  param_1[0x10] = "RelativeAngularVelocity";
  *(undefined4 *)(param_1 + 0x11) = 0x1b9;
  param_1[0x12] = PTR_LAB_027122e0;
  param_1[0x13] = "BreakForce";
  *(undefined4 *)(param_1 + 0x14) = 0x1ba;
  puVar2 = PTR_LAB_027122f8;
  puVar1 = PTR_LAB_027122f0;
  param_1[0x15] = "force";
  param_1[0x16] = "torque";
  param_1[0x19] = "ConstraintFlags";
  param_1[0x17] = puVar1;
  param_1[0x18] = puVar2;
  puVar2 = PTR_LAB_02712300;
  *(undefined4 *)(param_1 + 0x1a) = 0x1bb;
  puVar1 = PTR_LAB_027122e8;
  param_1[0x1b] = puVar2;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = "InvMassScale0";
  *(undefined4 *)(param_1 + 0x1e) = 0x1bc;
  puVar1 = PTR_LAB_02712310;
  param_1[0x1f] = PTR_LAB_02712308;
  param_1[0x20] = puVar1;
  param_1[0x21] = "InvInertiaScale0";
  puVar2 = PTR_LAB_02712320;
  puVar1 = PTR_LAB_02712318;
  *(undefined4 *)(param_1 + 0x22) = 0x1bd;
  param_1[0x23] = puVar1;
  param_1[0x24] = puVar2;
  param_1[0x25] = "InvMassScale1";
  puVar2 = PTR_LAB_02712330;
  *(undefined4 *)(param_1 + 0x26) = 0x1be;
  puVar1 = PTR_LAB_02712328;
  param_1[0x27] = puVar2;
  param_1[0x28] = puVar1;
  param_1[0x29] = "InvInertiaScale1";
  *(undefined4 *)(param_1 + 0x2a) = 0x1bf;
  puVar1 = PTR_LAB_02712340;
  param_1[0x2b] = PTR_LAB_02712338;
  param_1[0x2c] = puVar1;
  param_1[0x2d] = "Constraint";
  puVar1 = PTR_LAB_02712348;
  *(undefined4 *)(param_1 + 0x2e) = 0x1c0;
  param_1[0x2f] = puVar1;
  param_1[0x30] = &DAT_01d0fc7e;
  puVar2 = PTR_LAB_02712358;
  *(undefined4 *)(param_1 + 0x31) = 0x1c1;
  puVar1 = PTR_LAB_02712350;
  param_1[0x34] = "Scene";
  param_1[0x32] = puVar2;
  param_1[0x33] = puVar1;
  *(undefined4 *)(param_1 + 0x35) = 0x1c2;
  param_1[0x36] = PTR_LAB_02712360;
  param_1[0x37] = "UserData";
  puVar1 = PTR_LAB_02712378;
  param_1[0x39] = PTR_LAB_02712370;
  param_1[0x3a] = puVar1;
  *(undefined4 *)(param_1 + 0x38) = 0x1c3;
  param_1[0x3b] = "ProjectionLinearTolerance";
  puVar1 = PTR_LAB_02712498;
  *(undefined4 *)(param_1 + 0x3c) = 0x1df;
  puVar2 = PTR_LAB_027124a0;
  param_1[0x3f] = "ProjectionAngularTolerance";
  param_1[0x3d] = puVar1;
  param_1[0x3e] = puVar2;
  *(undefined4 *)(param_1 + 0x40) = 0x1e0;
  param_1[0x41] = PTR_LAB_027124a8;
  param_1[0x42] = PTR_LAB_027124b0;
  param_1[0x43] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x44) = 0x1e1;
  param_1[0x45] = PTR_LAB_027124b8;
  return;
}


