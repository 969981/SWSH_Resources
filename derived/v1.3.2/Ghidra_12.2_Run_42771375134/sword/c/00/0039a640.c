/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a640; name: FUN_0039a640
 */


void FUN_0039a640(long param_1)

{
  long *plVar1;
  long lVar2;
  
  nn::os::FinalizeMutex(*(MutexType **)(param_1 + 0x70));
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
                    /* try { // try from 0039a660 to 0039a673 has its CatchHandler @ 0039a68c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  FUN_0039a080(param_1 + 0x30);
  FUN_0039a080(param_1);
  return;
}


