/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211c90; name: FUN_01211c90
 */


void FUN_01211c90(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    pcVar2 = (char *)(*(long *)(param_1 + 0xa0) + 0x1b0);
    do {
      if (pcVar2[0x50] != '\0') {
        pcVar2[0x50] = '\0';
      }
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
      }
      if (pcVar2[-0xc0] != '\0') {
        pcVar2[-0xc0] = '\0';
      }
      if (pcVar2[-0x114] != '\0') {
        if (pcVar2[-0x10c] != '\0') {
          pcVar2[-0x10c] = '\0';
        }
        pcVar2[-0x114] = '\0';
      }
      if (pcVar2[-0x150] != '\0') {
        pcVar2[-0x150] = '\0';
      }
      if (pcVar2[-0x164] != '\0') {
        pcVar2[-0x164] = '\0';
      }
      if (pcVar2[-0x188] != '\0') {
        pcVar2[-0x188] = '\0';
      }
      if (pcVar2[-0x198] != '\0') {
        pcVar2[-0x198] = '\0';
      }
      lVar1 = lVar1 + -1;
      if (pcVar2[-0x1a0] != '\0') {
        pcVar2[-0x1a0] = '\0';
      }
      pcVar2 = pcVar2 + 0x260;
    } while (lVar1 != 0);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_01219310(param_1 + 0xc0);
  FUN_01218720(param_1 + 0x2a0);
  return;
}


