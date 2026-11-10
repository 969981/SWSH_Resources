/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00823fc0; name: FUN_00823fc0
 */


long FUN_00823fc0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == param_2) {
    return *(long *)(param_3 + 0x18);
  }
  uVar1 = FUN_00823fc0();
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  return param_3;
}


