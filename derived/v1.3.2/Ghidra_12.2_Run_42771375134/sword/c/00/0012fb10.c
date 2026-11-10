/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012fb10; name: FUN_0012fb10
 */


void FUN_0012fb10(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
                    /* try { // try from 0012fb28 to 0012fb3b has its CatchHandler @ 0012fb94 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x14)) && ((*(uint *)(param_1 + 0x14) & 0x7fffffff) != 0)) &&
     (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
                    /* try { // try from 0012fb70 to 0012fb83 has its CatchHandler @ 0012fb90 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


