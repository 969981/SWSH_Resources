/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff6d0; name: FUN_003ff6d0
 */


void FUN_003ff6d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  nn::os::FinalizeMutex((MutexType *)*plVar1);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
                    /* try { // try from 003ff6f4 to 003ff707 has its CatchHandler @ 003ff734 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 003ff710 to 003ff723 has its CatchHandler @ 003ff730 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


