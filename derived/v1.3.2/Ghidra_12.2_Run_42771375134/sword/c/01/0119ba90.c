/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119ba90; name: FUN_0119ba90
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_0119ba90(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_0120e640(*(undefined8 *)PTR_DAT_027185f8);
  if (lVar2 == 0) {
    return true;
  }
  if ((*(long *)(param_1 + 0x1a8) == 0) || (*(long *)(param_1 + 0x1b0) == lVar2)) {
    bVar1 = true;
    lVar3 = *(long *)(param_1 + 0x1c0);
  }
  else {
    bVar1 = *(char *)(param_1 + 0x1b8) != '\0';
    lVar3 = *(long *)(param_1 + 0x1c0);
  }
  if ((lVar3 == 0) || (*(long *)(param_1 + 0x1c8) == lVar2)) {
    lVar3 = *(long *)(param_1 + 0x1d8);
  }
  else {
    bVar1 = (*(byte *)(param_1 + 0x1d0) & bVar1) != 0;
    lVar3 = *(long *)(param_1 + 0x1d8);
  }
  if ((lVar3 == 0) || (*(long *)(param_1 + 0x1e0) == lVar2)) {
    lVar3 = *(long *)(param_1 + 0x1f0);
  }
  else {
    bVar1 = (*(byte *)(param_1 + 0x1e8) & bVar1) != 0;
    lVar3 = *(long *)(param_1 + 0x1f0);
  }
  if ((lVar3 != 0) && (*(long *)(param_1 + 0x1f8) != lVar2)) {
    bVar1 = (*(byte *)(param_1 + 0x200) & bVar1) != 0;
  }
  if ((*(long *)(param_1 + 0x208) != 0) && (*(long *)(param_1 + 0x210) != lVar2)) {
    bVar1 = (*(byte *)(param_1 + 0x218) & bVar1) != 0;
  }
  if ((*(long *)(param_1 + 0x220) != 0) && (*(long *)(param_1 + 0x228) != lVar2)) {
    bVar1 = (*(byte *)(param_1 + 0x230) & bVar1) != 0;
  }
  if ((*(long *)(param_1 + 0x238) != 0) && (*(long *)(param_1 + 0x240) != lVar2)) {
    bVar1 = (*(byte *)(param_1 + 0x248) & bVar1) != 0;
  }
  if ((*(long *)(param_1 + 0x250) != 0) && (*(long *)(param_1 + 600) != lVar2)) {
    bVar1 = (*(byte *)(param_1 + 0x260) & bVar1) != 0;
  }
  return bVar1;
}


