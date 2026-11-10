/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011d270; name: FUN_0011d270
 */


void FUN_0011d270(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa48);
  if (puVar2 != (undefined8 *)0x0) {
    if (((-1 < (int)*(uint *)((long)puVar2 + 0x14)) &&
        ((*(uint *)((long)puVar2 + 0x14) & 0x7fffffff) != 0)) && (puVar2[1] != 0)) {
                    /* try { // try from 0011d2b0 to 0011d2b3 has its CatchHandler @ 0011d428 */
      (**(code **)(*(long *)*puVar2 + 0x18))();
      puVar2 = *(undefined8 **)(param_1 + 0xa48);
      if (puVar2 == (undefined8 *)0x0) goto LAB_0011d2d0;
    }
                    /* try { // try from 0011d2bc to 0011d2cf has its CatchHandler @ 0011d460 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar2);
  }
LAB_0011d2d0:
  *(undefined8 *)(param_1 + 0xa48) = 0;
                    /* try { // try from 0011d2d8 to 0011d2df has its CatchHandler @ 0011d458 */
  FUN_0011d4d0(param_1 + 0x1c0);
  nn::os::FinalizeMutex(*(MutexType **)(param_1 + 0x6d8));
  lVar3 = *(long *)(param_1 + 0x6d8);
  if (lVar3 != 0) {
                    /* try { // try from 0011d2f0 to 0011d303 has its CatchHandler @ 0011d4c8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x6b0);
  if ((lVar3 != 0) && (-1 < *(int *)(param_1 + 0x6b8))) {
                    /* try { // try from 0011d314 to 0011d327 has its CatchHandler @ 0011d440 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x6a0);
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  if ((lVar3 != 0) && (-1 < *(int *)(param_1 + 0x6a8))) {
                    /* try { // try from 0011d33c to 0011d34f has its CatchHandler @ 0011d43c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x690);
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  if ((lVar3 != 0) && (-1 < *(int *)(param_1 + 0x698))) {
                    /* try { // try from 0011d364 to 0011d377 has its CatchHandler @ 0011d438 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x690) = 0;
  if ((lVar3 != 0) && (-1 < *(int *)(param_1 + 0x688))) {
                    /* try { // try from 0011d38c to 0011d39f has its CatchHandler @ 0011d434 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x670);
  *(undefined8 *)(param_1 + 0x680) = 0;
  if ((lVar3 != 0) && (-1 < *(int *)(param_1 + 0x678))) {
                    /* try { // try from 0011d3b4 to 0011d3c7 has its CatchHandler @ 0011d430 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  *(undefined8 *)(param_1 + 0x670) = 0;
  FUN_0011cf10(param_1 + 0x438);
  FUN_0011cff0(param_1 + 0x200);
                    /* try { // try from 0011d3dc to 0011d3e3 has its CatchHandler @ 0011d444 */
  FUN_0011d4d0(param_1 + 0x1c0);
  lVar3 = *(long *)(param_1 + 0x1f0);
  if ((lVar3 != 0) && (-1 < *(int *)(param_1 + 0x1f8))) {
                    /* try { // try from 0011d3f4 to 0011d407 has its CatchHandler @ 0011d42c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_0011d130(param_1 + 0x1b0);
  FUN_0011d1e0(param_1);
  return;
}


