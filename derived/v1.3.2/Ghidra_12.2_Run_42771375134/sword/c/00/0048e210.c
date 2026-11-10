/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e210; name: FUN_0048e210
 */


undefined8 FUN_0048e210(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0x198) == param_2) && (uVar1 = FUN_0048e270(param_1), (uVar1 & 1) == 0))
  {
    uVar3 = 1;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x200);
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048e258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,param_2);
      return uVar3;
    }
  }
  return uVar3;
}


