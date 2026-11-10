/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f40c0; name: FUN_002f40c0
 */


void FUN_002f40c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02712088 + 0x10);
  FUN_003ff990(param_1[5]);
  lVar2 = param_1[5];
  if (lVar2 != 0) {
                    /* try { // try from 002f40f0 to 002f4103 has its CatchHandler @ 002f4150 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  FUN_002f3a10(param_1 + 2);
  *param_1 = (long)(PTR_DAT_02712080 + 0x10);
  FUN_003ffe80(param_1[1]);
  lVar2 = param_1[1];
  if (lVar2 != 0) {
                    /* try { // try from 002f412c to 002f413f has its CatchHandler @ 002f414c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


