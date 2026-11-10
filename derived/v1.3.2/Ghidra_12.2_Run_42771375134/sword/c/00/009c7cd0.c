/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c7cd0; name: FUN_009c7cd0
 */


void FUN_009c7cd0(long param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 3);
  if (-1 < cVar1) {
    *(char *)(param_1 + 3) = cVar1 + '\x10';
    *(undefined4 *)(param_1 + (ulong)((uint)(int)cVar1 >> 4 & 0xf) * 4 + 4) = param_2;
  }
  return;
}


