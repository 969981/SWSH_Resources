/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00120610; name: FUN_00120610
 */


void FUN_00120610(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1c70);
  if ((lVar2 != 0) && (-1 < *(int *)(param_1 + 0x1c78))) {
                    /* try { // try from 00120630 to 00120643 has its CatchHandler @ 001206b0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x1c60);
  *(undefined8 *)(param_1 + 0x1c70) = 0;
  if ((lVar2 != 0) && (-1 < *(int *)(param_1 + 0x1c68))) {
                    /* try { // try from 00120658 to 0012066b has its CatchHandler @ 001206ac */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  *(undefined8 *)(param_1 + 0x1c60) = 0;
  if (((-1 < (int)*(uint *)(param_1 + 0x1bfc)) && ((*(uint *)(param_1 + 0x1bfc) & 0x7fffffff) != 0))
     && (lVar2 = *(long *)(param_1 + 0x1bf0), lVar2 != 0)) {
                    /* try { // try from 00120688 to 0012069b has its CatchHandler @ 001206a8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


