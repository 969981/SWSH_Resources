/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00138800; name: FUN_00138800
 */


void FUN_00138800(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 00138814 to 00138817 has its CatchHandler @ 0013897c */
  FUN_00138a60();
  lVar3 = *(long *)(param_1 + 0x14d0);
  if (lVar3 != 0) {
                    /* try { // try from 00138820 to 00138833 has its CatchHandler @ 00138a4c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    *(undefined8 *)(param_1 + 0x14d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x14d0) = 0;
  *(undefined4 *)(param_1 + 0x14d8) = 0;
  if (((-1 < (int)*(uint *)(param_1 + 0x14bc)) && ((*(uint *)(param_1 + 0x14bc) & 0x7fffffff) != 0))
     && (lVar3 = *(long *)(param_1 + 0x14b0), lVar3 != 0)) {
                    /* try { // try from 00138858 to 0013886b has its CatchHandler @ 00138970 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  lVar3 = 0x1010;
  do {
    uVar1 = *(uint *)(param_1 + lVar3 + 0x94);
    if (((-1 < (int)uVar1) && ((uVar1 & 0x7fffffff) != 0)) &&
       (lVar4 = *(long *)(param_1 + lVar3 + 0x88), lVar4 != 0)) {
                    /* try { // try from 0013888c to 0013889f has its CatchHandler @ 00138a50 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
                    /* try { // try from 001388b0 to 001388c3 has its CatchHandler @ 00138978 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (lVar3 != 0) {
                    /* try { // try from 001388d8 to 001388eb has its CatchHandler @ 00138974 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_00136540(param_1 + 0x30);
  if (((-1 < (int)*(uint *)(param_1 + 0x2c)) && ((*(uint *)(param_1 + 0x2c) & 0x7fffffff) != 0)) &&
     (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
                    /* try { // try from 00138918 to 0013892b has its CatchHandler @ 0013896c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x1c)) && ((*(uint *)(param_1 + 0x1c) & 0x7fffffff) != 0)) &&
     (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
                    /* try { // try from 00138944 to 00138957 has its CatchHandler @ 00138968 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  return;
}


