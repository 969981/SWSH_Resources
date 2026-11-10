/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131acf0; name: FUN_0131acf0
 */


bool FUN_0131acf0(long *param_1)

{
  if ((((char)param_1[0x25] == '\0') && (param_1[3] != 0)) &&
     (*(char *)(param_1[3] + 0x170) != '\0')) {
    *(undefined1 *)(param_1 + 0x25) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,param_1 + 2);
    return true;
  }
  return (char)param_1[0x25] != '\0';
}


