/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6aa00; name: FUN_00d6aa00
 */


void FUN_00d6aa00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_00d6aa30();
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x578) = param_3[1];
  *(undefined8 *)(param_1 + 0x570) = uVar1;
  return;
}


