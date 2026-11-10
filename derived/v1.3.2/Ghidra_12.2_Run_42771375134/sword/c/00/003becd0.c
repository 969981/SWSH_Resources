/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003becd0; name: FUN_003becd0
 */


undefined8 FUN_003becd0(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(char *)((long)puVar1 + 0x1f) != '\x01') {
    return 0;
  }
  if (*(char *)(puVar1 + 7) == '\0') {
    return 0;
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  param_2[4] = puVar1[4];
  param_2[5] = puVar1[5];
  param_2[6] = puVar1[6];
  return 1;
}


