/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00395990; name: FUN_00395990
 */


void FUN_00395990(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x1ff;
  *(undefined4 *)(param_1 + 5) = 0x200;
  *param_1 = "Restitution";
  param_1[4] = "BounceThreshold";
  puVar1 = PTR_LAB_027125e0;
  param_1[2] = PTR_LAB_027125d8;
  param_1[3] = puVar1;
  puVar1 = PTR_LAB_027125f8;
  param_1[6] = PTR_LAB_027125f0;
  param_1[7] = puVar1;
  param_1[8] = "Stiffness";
  puVar1 = PTR_LAB_027125e8;
  param_1[10] = PTR_LAB_02712600;
  param_1[0xb] = puVar1;
  *(undefined4 *)(param_1 + 9) = 0x201;
  param_1[0xc] = "Damping";
  puVar1 = PTR_LAB_02712608;
  *(undefined4 *)(param_1 + 0xd) = 0x202;
  puVar2 = PTR_LAB_02712610;
  param_1[0x10] = "ContactDistance";
  param_1[0xe] = puVar1;
  param_1[0xf] = puVar2;
  *(undefined4 *)(param_1 + 0x11) = 0x203;
  puVar1 = PTR_LAB_02712620;
  param_1[0x12] = PTR_LAB_02712618;
  param_1[0x13] = puVar1;
  param_1[0x14] = "Value";
  puVar2 = PTR_LAB_02712630;
  puVar1 = PTR_LAB_02712628;
  *(undefined4 *)(param_1 + 0x15) = 0x206;
  param_1[0x16] = puVar2;
  param_1[0x17] = puVar1;
  return;
}


