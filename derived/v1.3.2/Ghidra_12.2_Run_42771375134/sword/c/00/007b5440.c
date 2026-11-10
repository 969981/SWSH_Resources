/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b5440; name: FUN_007b5440
 */


undefined8 FUN_007b5440(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_007a9e00(*(undefined2 *)(param_2 + 8),param_2 + 0x88);
  if (((uVar1 & 1) == 0) || (plVar2 = *(long **)(param_1 + 0x58), plVar2 == (long *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x007b5480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  return uVar3;
}


