/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01519a00; name: FUN_01519a00
 */


void FUN_01519a00(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  tm local_58;
  
  *(undefined4 *)(param_1 + 0xb8) = 0x5a0;
  puVar1 = PTR_DAT_027108c0;
  FUN_01029c20(*(undefined8 *)PTR_DAT_027108c0,1);
  FUN_01029cb0(*(undefined8 *)puVar1);
  FUN_01029ad0(&local_58);
  *(char **)(param_1 + 0x98) = local_58.tm_zone;
  *(undefined8 *)(param_1 + 0x68) = local_58._0_8_;
  *(undefined8 *)(param_1 + 0x70) = local_58._8_8_;
  *(undefined8 *)(param_1 + 0x88) = local_58._32_8_;
  *(long *)(param_1 + 0x90) = local_58.tm_gmtoff;
  *(undefined8 *)(param_1 + 0x78) = local_58._16_8_;
  *(undefined8 *)(param_1 + 0x80) = local_58._24_8_;
  mktime(&local_58);
  uVar2 = FUN_01029b00();
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  return;
}


