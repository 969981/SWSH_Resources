/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7e260; name: FUN_00e7e260
 */


long FUN_00e7e260(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar3 = FUN_00e813b0(*plVar1 + 0x50);
    if ((lVar3 != 0) && (uVar4 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar4 & 1) == 0)) break;
    plVar1 = plVar1 + 1;
  }
  return lVar3;
}


