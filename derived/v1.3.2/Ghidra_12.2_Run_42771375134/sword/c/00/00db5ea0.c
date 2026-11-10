/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db5ea0; name: FUN_00db5ea0
 */


undefined8 FUN_00db5ea0(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  
  *(undefined8 *)(param_1 + 0x288) = in_x5;
  *(undefined8 *)(param_1 + 0x358) = in_x6;
  *(undefined2 *)(param_1 + 0x1c5) = 0x101;
  *(undefined4 *)(param_1 + 900) = 0x18;
  return 1;
}


