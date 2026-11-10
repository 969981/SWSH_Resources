/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ccd40; name: FUN_001ccd40
 */


void FUN_001ccd40(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_248 [512];
  undefined1 local_48;
  undefined1 *local_40;
  ulong local_38;
  long local_28;
  
  if ((param_3 & 1) == 0) {
    FUN_001d7150(param_1,param_2,param_1 + 0x2088);
    if (((*(float *)((long)param_2 + 0x114) == 0.0) && (*(float *)((long)param_2 + 0xfc) == 0.0)) &&
       ((*(float *)(param_2 + 0x20) == 0.0 &&
        ((((*(float *)((long)param_2 + 0x104) == 0.0 && (*(float *)(param_2 + 0x21) == 0.0)) &&
          (*(float *)((long)param_2 + 0x10c) == 0.0)) && (*(float *)(param_2 + 0x22) == 0.0)))))) {
      *(undefined4 *)(param_2 + 0x23) = 1;
      cVar3 = *(char *)(param_1 + 0x1fb9);
    }
    else {
      *(undefined4 *)(param_2 + 0x23) = 0;
      cVar3 = *(char *)(param_1 + 0x1fb9);
    }
    if (cVar3 != '\0') {
      local_38 = 0x4000000000;
      local_40 = auStack_248;
      local_48 = 1;
                    /* try { // try from 001cce84 to 001cce8b has its CatchHandler @ 001ccf58 */
      lVar6 = FUN_00206d30();
                    /* try { // try from 001cce8c to 001cce97 has its CatchHandler @ 001ccf48 */
      uVar5 = FUN_001f0560(param_2,&local_28);
      puVar4 = local_40;
      if (uVar5 != 0) {
        uVar2 = *(uint *)(param_2 + 1);
        uVar9 = *param_2;
        uVar8 = 0;
        do {
          puVar1 = (undefined8 *)(*(long *)(local_28 + uVar8 * 8) + lVar6 + -0x20);
          if ((*(uint *)(puVar1 + 1) & 0xf000000) == 0x1000000) {
            *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) & 0x3fffffff | uVar2 & 0xc0000000;
            *puVar1 = uVar9;
          }
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
      if (((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) &&
         ((auStack_248 != local_40 && (local_40 != (undefined1 *)0x0)))) {
                    /* try { // try from 001ccf14 to 001ccf27 has its CatchHandler @ 001ccf44 */
        plVar7 = (long *)FUN_00400d30();
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar4);
      }
    }
  }
  else {
    FUN_001d74f0(param_1,param_2);
    if ((((*(float *)((long)param_2 + 0x114) == 0.0) && (*(float *)((long)param_2 + 0xfc) == 0.0))
        && (*(float *)(param_2 + 0x20) == 0.0)) &&
       (((*(float *)((long)param_2 + 0x104) == 0.0 && (*(float *)(param_2 + 0x21) == 0.0)) &&
        ((*(float *)((long)param_2 + 0x10c) == 0.0 && (*(float *)(param_2 + 0x22) == 0.0)))))) {
      *(undefined4 *)(param_2 + 0x23) = 1;
    }
    else {
      *(undefined4 *)(param_2 + 0x23) = 0;
    }
  }
  return;
}


