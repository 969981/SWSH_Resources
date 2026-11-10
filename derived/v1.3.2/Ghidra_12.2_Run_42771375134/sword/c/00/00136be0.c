/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00136be0; name: FUN_00136be0
 */


void FUN_00136be0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
                    /* try { // try from 00136bf8 to 00136c0b has its CatchHandler @ 00136d2c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 != 0) {
                    /* try { // try from 00136c18 to 00136c2b has its CatchHandler @ 00136d08 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
                    /* try { // try from 00136c38 to 00136c4b has its CatchHandler @ 00136d04 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 != 0) {
                    /* try { // try from 00136c58 to 00136c6b has its CatchHandler @ 00136d00 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 != 0) {
                    /* try { // try from 00136c78 to 00136c8b has its CatchHandler @ 00136cfc */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
                    /* try { // try from 00136c98 to 00136cab has its CatchHandler @ 00136cf8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_00137b20(param_1 + 0x120);
  FUN_002d45a0(param_1 + 0xd8);
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 != 0) {
                    /* try { // try from 00136cc8 to 00136cdb has its CatchHandler @ 00136cf4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}


