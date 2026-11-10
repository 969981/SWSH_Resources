/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00893790; name: FUN_00893790
 */


bool FUN_00893790(long param_1)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    if ((*(char *)(param_1 + 0xd) != '\0') && (0 < *(int *)(param_1 + 0x10))) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      return false;
    }
    if ((*(char *)(param_1 + 0xe) != '\0') && (0 < *(int *)(param_1 + 0x10))) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      return true;
    }
  }
  return 0 < *(int *)(param_1 + 8);
}


