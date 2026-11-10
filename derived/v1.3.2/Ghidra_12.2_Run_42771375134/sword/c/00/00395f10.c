/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00395f10; name: FUN_00395f10
 */


void FUN_00395f10(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_LAB_02712698;
  *(undefined4 *)(param_1 + 1) = 0x215;
  puVar2 = PTR_LAB_027126a0;
  *param_1 = "Stiffness";
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  param_1[4] = "Damping";
  puVar1 = PTR_LAB_027126a8;
  *(undefined4 *)(param_1 + 5) = 0x216;
  puVar2 = PTR_LAB_027126b0;
  param_1[8] = "ForceLimit";
  param_1[6] = puVar1;
  param_1[7] = puVar2;
  *(undefined4 *)(param_1 + 9) = 0x219;
  puVar1 = PTR_LAB_027126c8;
  param_1[10] = PTR_LAB_027126c0;
  param_1[0xb] = puVar1;
  param_1[0xc] = "Flags";
  puVar2 = PTR_LAB_027126d0;
  puVar1 = PTR_LAB_027126b8;
  *(undefined4 *)(param_1 + 0xd) = 0x21a;
  param_1[0xe] = puVar2;
  param_1[0xf] = puVar1;
  return;
}


