/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f0e0; name: FUN_0029f0e0
 */


void FUN_0029f0e0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
                    /* try { // try from 0029f0f8 to 0029f10b has its CatchHandler @ 0029f17c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
                    /* try { // try from 0029f134 to 0029f147 has its CatchHandler @ 0029f174 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
                    /* try { // try from 0029f150 to 0029f163 has its CatchHandler @ 0029f170 */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
  }
  else {
                    /* try { // try from 0029f114 to 0029f127 has its CatchHandler @ 0029f178 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


