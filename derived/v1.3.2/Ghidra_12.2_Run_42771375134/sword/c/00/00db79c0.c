/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db79c0; name: FUN_00db79c0
 */


void FUN_00db79c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x1f0);
  plVar2 = *(long **)(param_1 + 0x1e8);
  do {
    if (plVar2 == plVar1) goto LAB_00db7a08;
    lVar4 = *plVar2;
    uVar3 = FUN_00db8dc0(lVar4 + 0x50);
    plVar2 = plVar2 + 1;
  } while ((uVar3 & 1) == 0);
  *(undefined1 *)(lVar4 + 0x69) = 1;
LAB_00db7a08:
  *(undefined4 *)(param_1 + 0x21c) = 0;
  return;
}


