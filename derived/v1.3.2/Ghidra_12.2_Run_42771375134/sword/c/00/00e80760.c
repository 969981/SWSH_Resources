/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e80760; name: FUN_00e80760
 */


void FUN_00e80760(long *param_1,undefined4 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (plVar4 == plVar1) {
      FUN_00e45710(0,0,0,param_2,0);
      return;
    }
    lVar3 = *plVar4;
    uVar2 = FUN_01593610(lVar3 + 0x50);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar3 + 0x1a0) == *param_1)) &&
       (uVar2 = (**(code **)(*(long *)*plVar4 + 0x88))(), (uVar2 & 1) == 0)) break;
    plVar4 = plVar4 + 1;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_00e45710(0,0,lVar3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00e80848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


