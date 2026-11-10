/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00939270; name: FUN_00939270
 */


uint FUN_00939270(long param_1,undefined1 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0093cc60(*(undefined8 *)(param_1 + 0x20));
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x10,param_2);
  return uVar1 & 1;
}


