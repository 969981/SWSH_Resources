/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa5730; name: FUN_00aa5730
 */


ulong FUN_00aa5730(long param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 8;
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar3 = 10;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(char *)(param_1 + 0xf) = '\x01';
    return 7;
  }
  uVar4 = 8;
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


