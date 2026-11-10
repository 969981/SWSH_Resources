/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdba30; name: FUN_00bdba30
 */


void FUN_00bdba30(long param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x1920);
  if (*pcVar1 == '\0') {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 0x1924) = *(undefined8 *)(param_2 + 4);
      *pcVar1 = '\x01';
    }
    return;
  }
  if (*param_2 == '\0') {
    *pcVar1 = '\0';
    return;
  }
  *(undefined8 *)(param_1 + 0x1924) = *(undefined8 *)(param_2 + 4);
  return;
}


