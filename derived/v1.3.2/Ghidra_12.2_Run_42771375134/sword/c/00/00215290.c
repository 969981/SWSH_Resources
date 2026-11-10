/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00215290; name: FUN_00215290
 */


void FUN_00215290(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x48;
  *(undefined4 *)(param_1 + 5) = 0x49;
  *param_1 = "ParentPose";
  param_1[4] = "ChildPose";
  puVar1 = PTR_LAB_027115e8;
  param_1[2] = PTR_LAB_027115e0;
  param_1[3] = puVar1;
  puVar1 = PTR_LAB_02711600;
  param_1[6] = PTR_LAB_027115f8;
  param_1[7] = puVar1;
  param_1[8] = "TargetOrientation";
  puVar1 = PTR_LAB_027115f0;
  param_1[10] = PTR_LAB_02711608;
  param_1[0xb] = puVar1;
  *(undefined4 *)(param_1 + 9) = 0x4a;
  param_1[0xc] = "TargetVelocity";
  puVar1 = PTR_LAB_02711610;
  *(undefined4 *)(param_1 + 0xd) = 0x4b;
  puVar2 = PTR_LAB_02711618;
  param_1[0x10] = "DriveType";
  param_1[0xe] = puVar1;
  param_1[0xf] = puVar2;
  *(undefined4 *)(param_1 + 0x11) = 0x4c;
  puVar1 = PTR_LAB_02711628;
  param_1[0x12] = PTR_LAB_02711620;
  param_1[0x13] = puVar1;
  param_1[0x14] = "Stiffness";
  puVar1 = PTR_LAB_02711630;
  param_1[0x16] = PTR_LAB_02711638;
  param_1[0x17] = puVar1;
  *(undefined4 *)(param_1 + 0x15) = 0x4d;
  param_1[0x18] = "Damping";
  puVar1 = PTR_LAB_02711640;
  *(undefined4 *)(param_1 + 0x19) = 0x4e;
  puVar2 = PTR_LAB_02711648;
  param_1[0x1c] = "InternalCompliance";
  param_1[0x1a] = puVar1;
  param_1[0x1b] = puVar2;
  *(undefined4 *)(param_1 + 0x1d) = 0x4f;
  puVar1 = PTR_LAB_02711658;
  param_1[0x1e] = PTR_LAB_02711650;
  param_1[0x1f] = puVar1;
  param_1[0x20] = "ExternalCompliance";
  puVar1 = PTR_LAB_02711660;
  param_1[0x22] = PTR_LAB_02711668;
  param_1[0x23] = puVar1;
  param_1[0x24] = "SwingLimit";
  *(undefined4 *)(param_1 + 0x21) = 0x50;
  *(undefined4 *)(param_1 + 0x25) = 0x51;
  puVar1 = PTR_LAB_02711670;
  param_1[0x26] = "zLimit";
  param_1[0x27] = "yLimit";
  puVar2 = PTR_LAB_02711680;
  param_1[0x28] = puVar1;
  param_1[0x29] = puVar2;
  param_1[0x2a] = "TangentialStiffness";
  *(undefined4 *)(param_1 + 0x2b) = 0x52;
  puVar1 = PTR_LAB_02711688;
  param_1[0x2c] = PTR_LAB_02711698;
  param_1[0x2d] = puVar1;
  param_1[0x2e] = "TangentialDamping";
  puVar2 = PTR_LAB_027116a0;
  puVar1 = PTR_LAB_02711690;
  *(undefined4 *)(param_1 + 0x2f) = 0x53;
  param_1[0x30] = puVar2;
  param_1[0x31] = puVar1;
  param_1[0x32] = "SwingLimitContactDistance";
  puVar1 = PTR_LAB_027116a8;
  *(undefined4 *)(param_1 + 0x33) = 0x54;
  puVar2 = PTR_LAB_027116b0;
  param_1[0x34] = puVar1;
  param_1[0x35] = puVar2;
  param_1[0x36] = "SwingLimitEnabled";
  *(undefined4 *)(param_1 + 0x37) = 0x55;
  puVar1 = PTR_LAB_027116b8;
  param_1[0x38] = PTR_LAB_027116c0;
  param_1[0x39] = puVar1;
  param_1[0x3a] = "TwistLimit";
  *(undefined4 *)(param_1 + 0x3b) = 0x56;
  puVar2 = PTR_LAB_027116c8;
  puVar1 = PTR_LAB_02711678;
  param_1[0x3c] = "lower";
  param_1[0x3d] = "upper";
  param_1[0x40] = "TwistLimitEnabled";
  param_1[0x3e] = puVar2;
  param_1[0x3f] = puVar1;
  puVar1 = PTR_LAB_027116d0;
  *(undefined4 *)(param_1 + 0x41) = 0x57;
  puVar2 = PTR_LAB_027116d8;
  param_1[0x42] = puVar1;
  param_1[0x43] = puVar2;
  param_1[0x44] = "TwistLimitContactDistance";
  *(undefined4 *)(param_1 + 0x45) = 0x58;
  param_1[0x46] = PTR_LAB_027116e0;
  param_1[0x47] = PTR_LAB_027116e8;
  param_1[0x48] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x49) = 0x59;
  param_1[0x4a] = PTR_LAB_027116f0;
  return;
}


