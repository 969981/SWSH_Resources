/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f3a10; name: FUN_002f3a10
 */


void FUN_002f3a10(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
                    /* try { // try from 002f3a30 to 002f3a43 has its CatchHandler @ 002f3a7c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 - lVar3);
  }
  FUN_003ff990(param_1[1]);
  lVar2 = param_1[1];
  if (lVar2 != 0) {
                    /* try { // try from 002f3a54 to 002f3a67 has its CatchHandler @ 002f3a78 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


