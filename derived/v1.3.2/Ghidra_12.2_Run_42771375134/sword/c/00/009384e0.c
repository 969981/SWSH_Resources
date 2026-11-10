/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009384e0; name: FUN_009384e0
 */


uint FUN_009384e0(long param_1,undefined1 param_2,undefined2 param_3,undefined1 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_0093c650(*(undefined8 *)(param_1 + 0x20));
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x1a,param_2,param_4,param_3);
  return uVar1 & 1;
}


