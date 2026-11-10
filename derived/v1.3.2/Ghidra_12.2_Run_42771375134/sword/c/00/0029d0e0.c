/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029d0e0; name: FUN_0029d0e0
 */


void FUN_0029d0e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  *param_1 = (long)(PTR_DAT_02711f78 + 0x10);
  if (lVar2 != 0) {
                    /* try { // try from 0029d108 to 0029d11b has its CatchHandler @ 0029d26c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
                    /* try { // try from 0029d124 to 0029d137 has its CatchHandler @ 0029d268 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[10];
  if (lVar2 != 0) {
                    /* try { // try from 0029d140 to 0029d153 has its CatchHandler @ 0029d264 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[10] = 0;
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
                    /* try { // try from 0029d160 to 0029d173 has its CatchHandler @ 0029d260 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[0xb] = 0;
  }
  lVar2 = param_1[0xc];
  if (lVar2 != 0) {
                    /* try { // try from 0029d180 to 0029d193 has its CatchHandler @ 0029d25c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[0xc] = 0;
  }
  lVar2 = param_1[8];
  if (lVar2 != 0) {
                    /* try { // try from 0029d1a0 to 0029d1b3 has its CatchHandler @ 0029d258 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[8] = 0;
  }
  lVar2 = param_1[0xd];
  if (lVar2 != 0) {
                    /* try { // try from 0029d1c0 to 0029d1d3 has its CatchHandler @ 0029d254 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
                    /* try { // try from 0029d1dc to 0029d1ef has its CatchHandler @ 0029d250 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[0xe] = 0;
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
                    /* try { // try from 0029d1fc to 0029d20f has its CatchHandler @ 0029d24c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[0xf] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    FUN_002a06d0(lVar2);
                    /* try { // try from 0029d224 to 0029d237 has its CatchHandler @ 0029d248 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[0x10] = 0;
  }
  return;
}


