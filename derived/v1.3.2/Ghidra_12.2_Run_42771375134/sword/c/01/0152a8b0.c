/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152a8b0; name: FUN_0152a8b0
 */


int FUN_0152a8b0(long param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  
  iVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x62);
  lVar3 = 0x97;
  do {
    if (((pcVar2[-2] != '\0') || (pcVar2[-1] != '\0')) || (*pcVar2 != '\0')) {
      iVar1 = iVar1 + 1;
    }
    pcVar2 = pcVar2 + 0xb0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return iVar1;
}


