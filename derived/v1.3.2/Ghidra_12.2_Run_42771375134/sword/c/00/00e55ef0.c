/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e55ef0; name: FUN_00e55ef0
 */


void FUN_00e55ef0(long param_1,int param_2)

{
  param_1 = param_1 + (long)param_2 * 0x10;
  *(undefined8 *)(param_1 + 0x600) = 0xcbf29ce484222645;
  *(undefined1 *)(param_1 + 0x608) = 0;
  return;
}


