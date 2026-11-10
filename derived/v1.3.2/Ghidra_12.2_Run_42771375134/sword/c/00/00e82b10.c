/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e82b10; name: FUN_00e82b10
 */


void FUN_00e82b10(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (plVar4 == plVar1) {
      return;
    }
    lVar2 = FUN_00e87f20(*plVar4 + 0x50);
    if ((lVar2 != 0) && (uVar3 = (**(code **)(*(long *)*plVar4 + 0x88))(), (uVar3 & 1) == 0)) break;
    plVar4 = plVar4 + 1;
  }
  lVar2 = *(long *)(lVar2 + 0x4b0);
  if (lVar2 == 0) {
    return;
  }
  plVar4 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_00e355d0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00e82bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


