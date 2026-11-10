/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e834e0; name: FUN_00e834e0
 */


void FUN_00e834e0(undefined8 param_1)

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
  if (*(long *)(lVar2 + 0x400) == 0) {
    return;
  }
  plVar4 = (long *)(*(long *)(lVar2 + 0x400) + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar2 = *(long *)(lVar2 + 0x400);
  if (lVar2 == 0) {
    FUN_00dab570(0,1,param_1);
    return;
  }
  plVar4 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_00dab570(lVar2,1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00e835bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


