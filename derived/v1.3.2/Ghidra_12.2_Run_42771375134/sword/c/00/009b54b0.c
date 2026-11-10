/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b54b0; name: FUN_009b54b0
 */


bool FUN_009b54b0(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  if ((((*(long *)(param_1 + 0x88) == 0) || (*(char *)(*(long *)(param_1 + 0x88) + 0xa60) == '\0'))
      || (*(long *)(param_1 + 0x3b8) == 0)) || (uVar2 = FUN_009c40a0(), (uVar2 & 1) == 0)) {
    cVar1 = *(char *)(param_1 + 0x3ab);
    *(undefined1 *)(param_1 + 0x3ab) = 0;
    return cVar1 != '\0';
  }
  if (*(char *)(param_1 + 0x3ac) == '\0') {
    *(undefined1 *)(param_1 + 0x3ac) = 1;
    return true;
  }
  return false;
}


