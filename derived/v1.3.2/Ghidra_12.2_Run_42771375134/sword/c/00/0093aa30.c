/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093aa30; name: FUN_0093aa30
 */


uint FUN_0093aa30(long param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0093d8c0(*(undefined8 *)(param_1 + 0x20));
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x7d,param_2,param_3);
  return uVar1 & 1;
}


