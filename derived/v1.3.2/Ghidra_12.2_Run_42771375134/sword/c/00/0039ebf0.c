/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039ebf0; name: FUN_0039ebf0
 */


void FUN_0039ebf0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
                    /* try { // try from 0039ec08 to 0039ec1b has its CatchHandler @ 0039ec98 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar2 != 0) {
                    /* try { // try from 0039ec28 to 0039ec3b has its CatchHandler @ 0039ec94 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar2 != 0) {
                    /* try { // try from 0039ec48 to 0039ec5b has its CatchHandler @ 0039ec90 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar2 != 0) {
                    /* try { // try from 0039ec68 to 0039ec7b has its CatchHandler @ 0039ec8c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


