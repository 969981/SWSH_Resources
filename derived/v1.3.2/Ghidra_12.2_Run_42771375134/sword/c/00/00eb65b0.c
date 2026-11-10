/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb65b0; name: FUN_00eb65b0
 */


long FUN_00eb65b0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar4 == plVar1) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x5d8);
  while( true ) {
    lVar3 = *plVar4;
    uVar2 = FUN_015b5230(lVar3 + 0x50);
    if ((((uVar2 & 1) != 0) && (lVar5 == *(long *)(lVar3 + 0x5d0))) &&
       (uVar2 = (**(code **)(*(long *)*plVar4 + 0x88))(), (uVar2 & 1) == 0)) break;
    plVar4 = plVar4 + 1;
    if (plVar1 == plVar4) {
      return 0;
    }
  }
  return lVar3;
}


