/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029fff0; name: FUN_0029fff0
 */


void FUN_0029fff0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02711f90 + 0x10;
  param_1[2] = (long)(PTR_DAT_02711f90 + 0xd0);
  *param_1 = (long)puVar1;
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    lVar3 = param_1[10];
    if (lVar3 != 0) {
                    /* try { // try from 002a0028 to 002a003b has its CatchHandler @ 002a0194 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[0xd];
    param_1[10] = 0;
    if (lVar3 != 0) {
                    /* try { // try from 002a0048 to 002a005b has its CatchHandler @ 002a0190 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[0xe];
    param_1[0xd] = 0;
    if (lVar3 != 0) {
                    /* try { // try from 002a0068 to 002a007b has its CatchHandler @ 002a018c */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[0xc];
    param_1[0xe] = 0;
    if (lVar3 != 0) {
                    /* try { // try from 002a0088 to 002a009b has its CatchHandler @ 002a0188 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[6];
    param_1[0xc] = 0;
    if (lVar3 != 0) {
                    /* try { // try from 002a00a8 to 002a00bb has its CatchHandler @ 002a0184 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[5];
    param_1[6] = 0;
    if (lVar3 != 0) {
                    /* try { // try from 002a00c8 to 002a00db has its CatchHandler @ 002a0180 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[0x10];
    param_1[5] = 0;
    if (lVar3 != 0) {
                    /* try { // try from 002a00e8 to 002a00fb has its CatchHandler @ 002a017c */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[0x11];
    param_1[0x10] = 0;
    if (lVar3 != 0) {
                    /* try { // try from 002a0108 to 002a011b has its CatchHandler @ 002a0178 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    lVar3 = param_1[0x12];
    param_1[0x11] = 0;
    if (lVar3 != 0) {
                    /* try { // try from 002a0128 to 002a013b has its CatchHandler @ 002a0174 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
    param_1[0x12] = 0;
    lVar3 = param_1[0x13];
    if (lVar3 != 0) {
      FUN_002a06d0(lVar3);
                    /* try { // try from 002a0150 to 002a0163 has its CatchHandler @ 002a0170 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
  }
  return;
}


