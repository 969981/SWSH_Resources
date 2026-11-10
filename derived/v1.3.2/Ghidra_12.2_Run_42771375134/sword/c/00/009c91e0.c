/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c91e0; name: FUN_009c91e0
 */


void FUN_009c91e0(long param_1,char param_2,byte param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x60);
  if ((((*pcVar1 == param_2) || (pcVar1 = (char *)(param_1 + 0x74), *pcVar1 == param_2)) ||
      (pcVar1 = (char *)(param_1 + 0x88), *pcVar1 == param_2)) ||
     (((pcVar1 = (char *)(param_1 + 0x9c), *pcVar1 == param_2 ||
       (pcVar1 = (char *)(param_1 + 0xb0), *pcVar1 == param_2)) ||
      (pcVar1 = (char *)(param_1 + 0xc4), *pcVar1 == param_2)))) {
    pcVar1[0x11] = param_3 & 1;
    return;
  }
  return;
}


