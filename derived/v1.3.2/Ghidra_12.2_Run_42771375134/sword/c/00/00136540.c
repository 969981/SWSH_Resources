/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00136540; name: FUN_00136540
 */


void FUN_00136540(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
                    /* try { // try from 00136558 to 001365ab has its CatchHandler @ 001365c4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[3] = 0;
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[4] = 0;
  }
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[2] = 0;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


