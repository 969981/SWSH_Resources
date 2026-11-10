/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5a6a0; name: FUN_00a5a6a0
 */


void FUN_00a5a6a0(long param_1)

{
  if (*(char *)(param_1 + 0x689) != '\0') {
    FUN_010364c0(param_1,3);
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x658),0);
    if (*(char *)(*(long *)(param_1 + 0x660) + 0x58) != '\0') {
      FUN_01039080();
    }
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined1 *)(param_1 + 0x689) = 0;
  }
  return;
}


