/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d74f0; name: FUN_001d74f0
 */


void FUN_001d74f0(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long **pplVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *local_248 [64];
  undefined1 local_48;
  long **local_40;
  ulong local_38;
  char local_28;
  undefined7 uStack_27;
  
  *param_2 = param_1;
  uVar3 = *(uint *)(param_2 + 1);
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    *(uint *)(param_2 + 1) = uVar3 & 0xfffffff | 0x80000000;
    local_38 = 0x4000000000;
    local_40 = local_248;
    local_48 = 1;
                    /* try { // try from 001d7574 to 001d757b has its CatchHandler @ 001d7748 */
    lVar5 = FUN_00206d30();
                    /* try { // try from 001d7580 to 001d7583 has its CatchHandler @ 001d7738 */
    FUN_003d9790(param_2 + 4);
                    /* try { // try from 001d7584 to 001d758f has its CatchHandler @ 001d7728 */
    uVar3 = FUN_001f0560(param_2,&local_28);
    pplVar2 = local_40;
    if (uVar3 != 0) {
      lVar8 = *param_2;
      uVar7 = 0;
      do {
        plVar6 = (long *)(*(long *)(CONCAT71(uStack_27,local_28) + uVar7 * 8) + lVar5 + -0x20);
        if ((*(uint *)(plVar6 + 1) & 0xf000000) == 0x1000000) {
          *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) & 0x3fffffff | 0x80000000;
          *plVar6 = lVar8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    if ((((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) &&
        (local_248 != local_40)) && (local_40 != (long **)0x0)) {
                    /* try { // try from 001d7604 to 001d7617 has its CatchHandler @ 001d7720 */
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,pplVar2);
    }
  }
  else {
    if (uVar3 >> 0x1e < 3) {
      *(uint *)(param_2 + 1) = uVar3 & 0x3fffffff | 0x40000000;
      local_248[0] = param_2;
      puVar4 = (undefined8 *)FUN_001d67d0(param_3,local_248,&local_28);
      if (local_28 == '\0') {
        *puVar4 = local_248[0];
      }
    }
    else {
      *(uint *)(param_2 + 1) = uVar3 & 0x3fffffff | 0x80000000;
      if ((uVar3 >> 0x1c & 1) == 0) {
        local_248[0] = param_2;
        FUN_001d6940(param_3,local_248);
      }
    }
    local_38 = 0x4000000000;
    local_40 = local_248;
    local_48 = 1;
                    /* try { // try from 001d7660 to 001d7667 has its CatchHandler @ 001d77a8 */
    lVar5 = FUN_00206d30();
                    /* try { // try from 001d7668 to 001d7673 has its CatchHandler @ 001d7798 */
    uVar3 = FUN_001f0560(param_2,&local_28);
    pplVar2 = local_40;
    if (uVar3 != 0) {
      uVar1 = *(uint *)(param_2 + 1);
      lVar8 = *param_2;
      uVar7 = 0;
      do {
        plVar6 = (long *)(*(long *)(CONCAT71(uStack_27,local_28) + uVar7 * 8) + lVar5 + -0x20);
        if ((*(uint *)(plVar6 + 1) & 0xf000000) == 0x1000000) {
          *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) & 0x3fffffff | uVar1 & 0xc0000000;
          *plVar6 = lVar8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    if (((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) &&
       ((local_248 != local_40 && (local_40 != (long **)0x0)))) {
                    /* try { // try from 001d76f0 to 001d7703 has its CatchHandler @ 001d7724 */
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,pplVar2);
    }
  }
  return;
}


