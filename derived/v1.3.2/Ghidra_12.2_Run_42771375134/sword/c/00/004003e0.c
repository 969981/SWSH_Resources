/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004003e0; name: FUN_004003e0
 */


void FUN_004003e0(undefined8 *param_1)

{
  nn::os::FinalizeMutex((MutexType *)*param_1);
                    /* try { // try from 004003fc to 00400403 has its CatchHandler @ 00400410 */
  FUN_00401580(param_1,*param_1);
  return;
}


