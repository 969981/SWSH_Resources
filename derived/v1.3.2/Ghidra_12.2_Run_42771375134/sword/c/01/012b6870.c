/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b6870; name: FUN_012b6870
 */


void FUN_012b6870(long param_1,uint param_2)

{
  if ((param_2 == 0) || (*(char *)(param_1 + 0x54) != '\0')) {
    return;
  }
  if ((int)param_2 < 1) {
    FUN_0087d5a0(*(undefined8 *)(param_1 + 0x58),-param_2 & 0xff);
    return;
  }
  FUN_0087d560(*(undefined8 *)(param_1 + 0x58),param_2 & 0xff);
  return;
}


