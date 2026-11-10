/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019e740; name: FUN_0019e740
 */


void FUN_0019e740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar1 = PTR_DAT_02710fd0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x68) = puVar1 + 0x10;
  *(long *)(param_1 + 0x90) = param_1;
  *(char **)(param_1 + 0x98) = "Pt::Dynamics.mergeDensity";
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  puVar1 = PTR_DAT_02710fd8 + 0x10;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined **)(param_1 + 0xa0) = puVar1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(long *)(param_1 + 200) = param_1;
  *(char **)(param_1 + 0xd0) = "Pt::Dynamics.mergeForce";
  return;
}


