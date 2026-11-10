/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a39df0; name: FUN_00a39df0
 */


void FUN_00a39df0(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == 3) {
    FUN_00ffa290(param_1,1,1);
    FUN_00ffa160(param_1,0,1);
    lVar1 = *(long *)(param_1[0x98] + 0x58);
  }
  else {
    if (param_2 != 2) {
      return;
    }
    FUN_00ffa290(param_1,1,1);
    FUN_00ffa160(param_1,0,1);
    (**(code **)(*param_1 + 0x88))(param_1);
    lVar1 = *(long *)(param_1[0x98] + 0x58);
  }
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_00a3a020(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00a39e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


