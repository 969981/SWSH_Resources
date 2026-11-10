/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa56c0; name: FUN_00aa56c0
 */


ulong FUN_00aa56c0(long param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 5;
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar3 = 6;
  }
  if (*(char *)(param_1 + 10) == '\0') {
    *(char *)(param_1 + 10) = '\x01';
    return 2;
  }
  uVar4 = 3;
  do {
    uVar1 = uVar4 & 0xff;
    if (uVar3 < uVar1) {
      return 0x10;
    }
    pcVar2 = (char *)(param_1 + (ulong)uVar1 + 8);
    uVar4 = uVar1 + 1;
  } while (*pcVar2 != '\0');
  *pcVar2 = '\x01';
  return (ulong)uVar1;
}


