/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cdfb0; name: FUN_001cdfb0
 */


void FUN_001cdfb0(long param_1,long *param_2,undefined8 param_3)

{
  long **pplVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long local_278;
  undefined8 *local_270;
  long *local_268 [64];
  undefined1 local_68;
  long **local_60;
  ulong local_58;
  
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    local_58 = 0x4000000000;
    local_60 = local_268;
    local_68 = 1;
                    /* try { // try from 001ce02c to 001ce033 has its CatchHandler @ 001ce250 */
    lVar4 = FUN_00206d30();
                    /* try { // try from 001ce038 to 001ce03b has its CatchHandler @ 001ce240 */
    FUN_003d9790(param_2 + 4);
                    /* try { // try from 001ce03c to 001ce047 has its CatchHandler @ 001ce230 */
    uVar2 = FUN_001f0560(param_2,&local_278);
    if (uVar2 != 0) {
      lVar8 = *param_2;
      uVar7 = 0;
      do {
        puVar3 = (undefined8 *)(*(long *)(local_278 + uVar7 * 8) + lVar4 + -0x20);
        uVar6 = *(uint *)(puVar3 + 1);
        if ((uVar6 >> 0x1c & 1) != 0) {
                    /* try { // try from 001ce07c to 001ce093 has its CatchHandler @ 001ce2c0 */
          FUN_001e4d30(puVar3);
          local_270 = puVar3;
          FUN_001d6940(lVar8 + 0x1fe8,&local_270);
          uVar6 = *(uint *)(puVar3 + 1) & 0xefffffff;
          *(uint *)(puVar3 + 1) = uVar6;
        }
        if ((uVar6 & 0xf000000) == 0x1000000) {
          *(uint *)(puVar3 + 1) = uVar6 & 0x3fffffff;
          *puVar3 = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
    pplVar1 = local_60;
    if ((((-1 < (long)local_58) && ((local_58 & 0x7fffffff00000000) != 0)) &&
        (local_268 != local_60)) && (local_60 != (long **)0x0)) {
                    /* try { // try from 001ce0e8 to 001ce0fb has its CatchHandler @ 001ce228 */
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,pplVar1);
    }
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xfffffff;
    *param_2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 1);
    if (uVar2 >> 0x1e == 2) {
      *(uint *)(param_2 + 1) = uVar2 | 0xc0000000;
      if ((uVar2 >> 0x1c & 1) == 0) {
        local_268[0] = param_2;
        puVar3 = (undefined8 *)FUN_001d67d0(param_3,local_268,&local_270);
        if ((char)local_270 == '\0') {
          *puVar3 = local_268[0];
        }
      }
    }
    else if (uVar2 >> 0x1e == 1) {
      *(uint *)(param_2 + 1) = uVar2 & 0x3fffffff;
      local_268[0] = param_2;
      FUN_001d6940(param_3,local_268);
    }
    local_58 = 0x4000000000;
    local_60 = local_268;
    local_68 = 1;
                    /* try { // try from 001ce148 to 001ce14f has its CatchHandler @ 001ce270 */
    lVar4 = FUN_00206d30();
                    /* try { // try from 001ce150 to 001ce15b has its CatchHandler @ 001ce260 */
    uVar2 = FUN_001f0560(param_2,&local_270);
    pplVar1 = local_60;
    if (uVar2 != 0) {
      uVar6 = *(uint *)(param_2 + 1);
      lVar8 = *param_2;
      uVar7 = 0;
      do {
        plVar5 = (long *)(local_270[uVar7] + lVar4 + -0x20);
        if ((*(uint *)(plVar5 + 1) & 0xf000000) == 0x1000000) {
          *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) & 0x3fffffff | uVar6 & 0xc0000000;
          *plVar5 = lVar8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    if (((-1 < (long)local_58) && ((local_58 & 0x7fffffff00000000) != 0)) &&
       ((local_268 != local_60 && (local_60 != (long **)0x0)))) {
                    /* try { // try from 001ce1d8 to 001ce1eb has its CatchHandler @ 001ce22c */
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,pplVar1);
    }
  }
  return;
}


