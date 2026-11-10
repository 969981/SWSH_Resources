/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039b240; name: FUN_0039b240
 */


void FUN_0039b240(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar2 != 0) {
                    /* try { // try from 0039b25c to 0039b26f has its CatchHandler @ 0039b280 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  param_1[2] = 0;
  return;
}


