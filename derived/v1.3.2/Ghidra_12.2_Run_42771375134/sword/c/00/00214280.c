/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00214280; name: FUN_00214280
 */


void FUN_00214280(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0xc;
  *(undefined4 *)(param_1 + 4) = 0xd;
  *param_1 = "ReferenceCount";
  param_1[2] = PTR_LAB_02711358;
  param_1[3] = "DynamicFriction";
  puVar1 = PTR_LAB_02711370;
  param_1[5] = PTR_LAB_02711368;
  param_1[6] = puVar1;
  param_1[7] = "StaticFriction";
  puVar1 = PTR_LAB_02711360;
  param_1[9] = PTR_LAB_02711378;
  param_1[10] = puVar1;
  *(undefined4 *)(param_1 + 8) = 0xe;
  param_1[0xb] = "Restitution";
  puVar1 = PTR_LAB_02711380;
  *(undefined4 *)(param_1 + 0xc) = 0xf;
  puVar2 = PTR_LAB_02711388;
  param_1[0xf] = "Flags";
  param_1[0xd] = puVar1;
  param_1[0xe] = puVar2;
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  puVar1 = PTR_LAB_02711398;
  param_1[0x11] = PTR_LAB_02711390;
  param_1[0x12] = puVar1;
  param_1[0x13] = "FrictionCombineMode";
  puVar1 = PTR_LAB_027113a0;
  param_1[0x15] = PTR_LAB_027113a8;
  param_1[0x16] = puVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x11;
  param_1[0x17] = "RestitutionCombineMode";
  puVar1 = PTR_LAB_027113b0;
  *(undefined4 *)(param_1 + 0x18) = 0x12;
  puVar2 = PTR_LAB_027113b8;
  param_1[0x1b] = "ConcreteTypeName";
  param_1[0x19] = puVar1;
  param_1[0x1a] = puVar2;
  *(undefined4 *)(param_1 + 0x1c) = 0x13;
  param_1[0x1d] = PTR_LAB_027113c0;
  param_1[0x1e] = "UserData";
  puVar2 = PTR_LAB_027113d0;
  puVar1 = PTR_LAB_027113c8;
  *(undefined4 *)(param_1 + 0x1f) = 0x14;
  param_1[0x20] = puVar2;
  param_1[0x21] = puVar1;
  return;
}


