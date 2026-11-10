/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e3bd0; name: FUN_001e3bd0
 */


void FUN_001e3bd0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if ((lVar3 != 0) && (-1 < (int)plVar2[1])) {
                    /* try { // try from 001e3bfc to 001e3c0f has its CatchHandler @ 001e3c60 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
    }
    *plVar2 = 0;
                    /* try { // try from 001e3c14 to 001e3c27 has its CatchHandler @ 001e3c64 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar2);
    lVar3 = param_1[1];
    *param_1 = 0;
    if (lVar3 != 0) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    param_1[1] = 0;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


