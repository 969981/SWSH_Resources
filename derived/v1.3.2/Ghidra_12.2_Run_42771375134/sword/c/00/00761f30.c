/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00761f30; name: FUN_00761f30
 */


void FUN_00761f30(long param_1,undefined8 param_2,undefined4 param_3)

{
  if ((*(char *)(param_1 + 0xca) == '\0') && (*(char *)(param_1 + 0xc9) != '\0')) {
    if (*(char *)(param_1 + 200) != '\0') {
      FUN_00764420(*(undefined8 *)(param_1 + 0x60));
    }
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  if (*(char *)(param_1 + 200) == '\0') {
    return;
  }
  FUN_00764bd0(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  return;
}


