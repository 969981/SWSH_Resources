/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e80990; name: FUN_00e80990
 */


void FUN_00e80990(byte param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (plVar1 == plVar2) {
      return;
    }
    lVar4 = *plVar1;
    uVar3 = FUN_00e2ee10(lVar4 + 0x50);
    if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar3 & 1) == 0))
    break;
    plVar1 = plVar1 + 1;
  }
  *(byte *)(lVar4 + 0x218) = param_1 & 1;
  return;
}


