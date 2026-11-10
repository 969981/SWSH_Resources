/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f3a90; name: FUN_002f3a90
 */


void FUN_002f3a90(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02712078 + 0x10);
  if ((int)param_1[7] != 0) {
    uVar3 = 0;
    lVar4 = 8;
    do {
                    /* try { // try from 002f3acc to 002f3acf has its CatchHandler @ 002f3c18 */
      FUN_003fff00(*(undefined8 *)(param_1[1] + lVar4));
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (uVar3 < *(uint *)(param_1 + 7));
  }
  plVar2 = param_1 + 5;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
                    /* try { // try from 002f3af4 to 002f3af7 has its CatchHandler @ 002f3c08 */
  FUN_003ffb80(*plVar2);
  if ((int)param_1[7] != 0) {
    uVar3 = 0;
    lVar4 = 8;
    do {
                    /* try { // try from 002f3b10 to 002f3b13 has its CatchHandler @ 002f3c10 */
      FUN_003fff20(*(undefined8 *)(param_1[1] + lVar4));
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (uVar3 < *(uint *)(param_1 + 7));
    if (*(uint *)(param_1 + 7) != 0) {
      lVar4 = 0;
      uVar3 = 0;
      do {
        (*(code *)**(undefined8 **)(param_1[1] + lVar4))();
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x38;
      } while (uVar3 < *(uint *)(param_1 + 7));
    }
  }
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 002f3b64 to 002f3b77 has its CatchHandler @ 002f3c00 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  lVar4 = param_1[6];
  if (lVar4 != 0) {
                    /* try { // try from 002f3b80 to 002f3b93 has its CatchHandler @ 002f3bf8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_003ffb20(*plVar2);
  lVar4 = *plVar2;
  if (lVar4 != 0) {
                    /* try { // try from 002f3ba4 to 002f3bb7 has its CatchHandler @ 002f3bf4 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
  }
  FUN_003ff990(param_1[4]);
  lVar4 = param_1[4];
  if (lVar4 != 0) {
                    /* try { // try from 002f3bc8 to 002f3bdb has its CatchHandler @ 002f3bf0 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
  }
  FUN_002f3a10(param_1 + 2);
  return;
}


