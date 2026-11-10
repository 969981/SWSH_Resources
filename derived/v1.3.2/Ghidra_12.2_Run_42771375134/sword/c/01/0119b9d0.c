/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119b9d0; name: FUN_0119b9d0
 */


bool FUN_0119b9d0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x1a8) == 0) {
    bVar1 = true;
    lVar2 = *(long *)(param_1 + 0x1c0);
  }
  else {
    bVar1 = *(char *)(param_1 + 0x1b8) != '\0';
    lVar2 = *(long *)(param_1 + 0x1c0);
  }
  if (lVar2 != 0) {
    bVar1 = (*(byte *)(param_1 + 0x1d0) & bVar1) != 0;
  }
  if (*(long *)(param_1 + 0x1d8) != 0) {
    bVar1 = (*(byte *)(param_1 + 0x1e8) & bVar1) != 0;
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    bVar1 = (*(byte *)(param_1 + 0x200) & bVar1) != 0;
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    bVar1 = (*(byte *)(param_1 + 0x218) & bVar1) != 0;
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    bVar1 = (*(byte *)(param_1 + 0x230) & bVar1) != 0;
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    bVar1 = (*(byte *)(param_1 + 0x248) & bVar1) != 0;
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    bVar1 = (*(byte *)(param_1 + 0x260) & bVar1) != 0;
  }
  return bVar1;
}


