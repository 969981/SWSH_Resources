/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007946a0; name: FUN_007946a0
 */


void FUN_007946a0(long param_1,byte param_2)

{
  FUN_0078ce20(*(undefined8 *)(param_1 + 0x270));
  *(byte *)(param_1 + 0x278) = param_2 & 1;
  if (**(char **)(param_1 + 0x218) == '\0') {
    FUN_0078ade0(*(undefined8 *)(param_1 + 0xf8),param_1 + 0x100,*(undefined8 *)(param_1 + 0x270));
    return;
  }
  FUN_0078aff0();
  return;
}


