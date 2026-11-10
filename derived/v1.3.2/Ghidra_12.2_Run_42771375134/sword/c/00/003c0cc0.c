/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c0cc0; name: FUN_003c0cc0
 */


void FUN_003c0cc0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  plVar2 = *(long **)(param_1 + 0x28);
  *(int *)(*(long *)(param_1 + 0x88) + 0x94) = *(int *)(*(long *)(param_1 + 0x88) + 0x94) + -1;
  while( true ) {
    if (iVar1 == 0) {
      *(ushort *)(param_1 + 0xb4) = *(ushort *)(param_1 + 0xb4) & 0xfeff;
      return;
    }
    if (*(char *)(*plVar2 + 0x24) == '\x04') break;
    iVar1 = iVar1 + -1;
    plVar2 = plVar2 + 1;
  }
  return;
}


