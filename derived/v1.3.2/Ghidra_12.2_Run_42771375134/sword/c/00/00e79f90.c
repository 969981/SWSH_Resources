/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e79f90; name: FUN_00e79f90
 */


void FUN_00e79f90(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,uint param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long local_58;
  
  plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (plVar4 == plVar1) {
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
  local_58 = lVar3;
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_00e7fce0(&local_58,param_2,param_3,param_4,param_5 & 1,param_6 & 1);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  local_58 = 0;
                    /* WARNING: Could not recover jumptable at 0x00e7a0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


