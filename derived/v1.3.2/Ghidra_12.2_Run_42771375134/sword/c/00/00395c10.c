/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00395c10; name: FUN_00395c10
 */


void FUN_00395c10(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_LAB_027125d8;
  *(undefined4 *)(param_1 + 1) = 0x1ff;
  puVar2 = PTR_LAB_027125e0;
  *param_1 = "Restitution";
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  param_1[4] = "BounceThreshold";
  puVar1 = PTR_LAB_027125f0;
  *(undefined4 *)(param_1 + 5) = 0x200;
  puVar2 = PTR_LAB_027125f8;
  param_1[8] = "Stiffness";
  param_1[6] = puVar1;
  param_1[7] = puVar2;
  *(undefined4 *)(param_1 + 9) = 0x201;
  puVar1 = PTR_LAB_027125e8;
  param_1[10] = PTR_LAB_02712600;
  param_1[0xb] = puVar1;
  param_1[0xc] = "Damping";
  puVar1 = PTR_LAB_02712610;
  param_1[0xe] = PTR_LAB_02712608;
  param_1[0xf] = puVar1;
  *(undefined4 *)(param_1 + 0xd) = 0x202;
  param_1[0x10] = "ContactDistance";
  puVar1 = PTR_LAB_02712618;
  *(undefined4 *)(param_1 + 0x11) = 0x203;
  puVar2 = PTR_LAB_02712620;
  param_1[0x14] = "Upper";
  param_1[0x12] = puVar1;
  param_1[0x13] = puVar2;
  *(undefined4 *)(param_1 + 0x15) = 0x20d;
  puVar1 = PTR_LAB_02712660;
  param_1[0x16] = PTR_LAB_02712658;
  param_1[0x17] = puVar1;
  param_1[0x18] = "Lower";
  puVar2 = PTR_LAB_02712670;
  puVar1 = PTR_LAB_02712668;
  *(undefined4 *)(param_1 + 0x19) = 0x20e;
  param_1[0x1a] = puVar2;
  param_1[0x1b] = puVar1;
  return;
}


