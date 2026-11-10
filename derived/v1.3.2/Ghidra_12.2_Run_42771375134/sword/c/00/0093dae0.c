/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093dae0; name: FUN_0093dae0
 */


void FUN_0093dae0(long param_1,byte param_2,byte param_3,undefined1 param_4)

{
  byte bVar1;
  
  bVar1 = param_2;
  if (param_3 <= param_2) {
    bVar1 = param_3;
  }
  *(byte *)(param_1 + 1) = param_2;
  *(byte *)(param_1 + 3) = param_3;
  *(undefined1 *)(param_1 + 5) = param_4;
  *(undefined1 *)(param_1 + 4) = param_4;
  *(byte *)(param_1 + 2) = bVar1;
  return;
}


