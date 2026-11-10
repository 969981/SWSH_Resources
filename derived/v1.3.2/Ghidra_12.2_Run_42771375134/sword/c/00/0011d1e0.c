/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011d1e0; name: FUN_0011d1e0
 */


void FUN_0011d1e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_001f6290(param_1 + 0x24);
  FUN_00111330(param_1 + 5);
  if (((-1 < (int)*(uint *)((long)param_1 + 0x14)) &&
      ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) != 0)) && (lVar2 = param_1[1], lVar2 != 0)) {
                    /* try { // try from 0011d218 to 0011d22b has its CatchHandler @ 0011d25c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  nn::os::FinalizeMutex((MutexType *)*param_1);
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 0011d23c to 0011d24f has its CatchHandler @ 0011d260 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


