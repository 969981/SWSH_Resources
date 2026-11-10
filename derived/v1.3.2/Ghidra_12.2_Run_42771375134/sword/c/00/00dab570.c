/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab570; name: FUN_00dab570
 */


void FUN_00dab570(long param_1,byte param_2,undefined8 *param_3)

{
  *(byte *)(param_1 + 0xae30) = param_2 & 1;
  *(undefined8 *)(param_1 + 0xae48) = param_3[1];
  *(undefined8 *)(param_1 + 0xae40) = *param_3;
  *(undefined1 *)(param_1 + 0x82) = 1;
  return;
}


