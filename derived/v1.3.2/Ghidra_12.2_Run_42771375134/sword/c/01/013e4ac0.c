/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e4ac0; name: FUN_013e4ac0
 */


void FUN_013e4ac0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long local_28;
  
  plVar3 = (long *)*param_1;
  if (*plVar3 == 0) {
    plVar1 = (long *)param_1[1];
    lVar4 = *param_2;
    if (*plVar1 != 0) {
      local_28 = lVar4;
      uVar2 = (*(code *)*plVar1)(plVar1 + 4,&local_28);
      if ((uVar2 & 1) == 0) {
        return;
      }
      plVar3 = (long *)*param_1;
    }
    *plVar3 = lVar4;
  }
  return;
}


