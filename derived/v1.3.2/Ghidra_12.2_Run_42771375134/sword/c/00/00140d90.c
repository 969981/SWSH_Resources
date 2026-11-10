/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00140d90; name: FUN_00140d90
 */


void FUN_00140d90(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
                    /* try { // try from 00140da8 to 00140dbb has its CatchHandler @ 00140e28 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[2];
  if (lVar2 != 0) {
                    /* try { // try from 00140dc4 to 00140dd7 has its CatchHandler @ 00140e24 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
                    /* try { // try from 00140de0 to 00140df3 has its CatchHandler @ 00140e20 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00140dfc to 00140e0f has its CatchHandler @ 00140e1c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


