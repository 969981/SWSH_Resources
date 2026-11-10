/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddd3e0; name: FUN_00ddd3e0
 */


void FUN_00ddd3e0(long param_1)

{
  long lVar1;
  
  FUN_00dbdb70();
  if (*(long *)(param_1 + 0x5e0) == 0) {
    if (*(int *)(param_1 + 0x624) != 1) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x5e0);
  }
  else {
    lVar1 = FUN_00794780();
    if (((lVar1 == 0) || (*(int *)(lVar1 + 0x17c) < 1)) || (*(char *)(lVar1 + 0xc) == '\0')) {
      *(undefined4 *)(param_1 + 0x624) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x624) == 1) {
      *(undefined4 *)(param_1 + 0x624) = 2;
      return;
    }
    if (*(int *)(param_1 + 0x624) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x624) = 1;
    lVar1 = *(long *)(param_1 + 0x5e0);
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_00db81b0(lVar1,*(undefined4 *)(param_1 + 0x5f0),1);
  return;
}


