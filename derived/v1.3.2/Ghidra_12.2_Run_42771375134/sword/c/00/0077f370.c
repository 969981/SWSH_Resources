/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077f370; name: FUN_0077f370
 */


void FUN_0077f370(long param_1)

{
  int iVar1;
  uint uVar2;
  int local_24;
  
  uVar2 = 0;
  do {
    do {
      iVar1 = FUN_0077f3f0(param_1,&local_24);
      if (local_24 == 1) goto LAB_0077f3bc;
    } while (local_24 != 0);
    if (iVar1 != 1) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < *(byte *)(param_1 + 0xa4));
LAB_0077f3bc:
  if (*(int *)(param_1 + 0x114) == 1) {
    *(undefined4 *)(param_1 + 0x114) = 2;
  }
  *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_1 + 0xa5);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_1 + 0xa6);
  return;
}


