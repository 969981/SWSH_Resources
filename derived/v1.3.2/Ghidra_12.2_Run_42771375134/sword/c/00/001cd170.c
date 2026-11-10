/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cd170; name: FUN_001cd170
 */


void FUN_001cd170(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long **pplVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long local_280;
  long *local_278 [64];
  undefined1 local_78;
  long **local_70;
  ulong local_68;
  undefined8 *local_58;
  
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    if ((*(byte *)((long)param_2 +
                  *(long *)(PTR_DAT_02711068 +
                           ((ulong)*(byte *)((long)param_2 + 0xb) & 0xf) * 8 + 0x30) + 0xc) >> 3 & 1
        ) == 0) {
      local_68 = 0x4000000000;
      local_78 = 1;
      local_70 = local_278;
      pplVar1 = local_70;
      if (*(long *)(param_1 + 0x1180) != 0) {
        pplVar1 = (long **)(*(long *)(param_1 + 0x1180) + 0x218);
      }
                    /* try { // try from 001cd22c to 001cd22f has its CatchHandler @ 001cd4b8 */
      FUN_00206d30();
                    /* try { // try from 001cd234 to 001cd23b has its CatchHandler @ 001cd4a8 */
      FUN_003d9790(param_2 + 4);
                    /* try { // try from 001cd240 to 001cd24f has its CatchHandler @ 001cd498 */
      FUN_003e7e60(param_1 + 0x10,param_2 + 4,pplVar1,param_4 & 1);
      uVar2 = *(uint *)(pplVar1 + 0x42);
      if (uVar2 != 0) {
        lVar5 = *param_2;
        plVar6 = pplVar1[0x41];
        uVar7 = 0;
        do {
          lVar8 = plVar6[uVar7];
          uVar4 = *(uint *)(lVar8 + -0x18);
          puVar3 = (undefined8 *)(lVar8 + -0x20);
          if ((uVar4 >> 0x1c & 1) != 0) {
                    /* try { // try from 001cd280 to 001cd2c3 has its CatchHandler @ 001cd518 */
            FUN_001e4d30(puVar3);
            local_58 = puVar3;
            FUN_001d6940(lVar5 + 0x1fe8,&local_58);
            uVar4 = *(uint *)(lVar8 + -0x18) & 0xefffffff;
            *(uint *)(lVar8 + -0x18) = uVar4;
          }
          if ((uVar4 & 0xf000000) == 0x1000000) {
            *(uint *)(lVar8 + -0x18) = uVar4 & 0x3fffffff;
            *(undefined8 *)(lVar8 + -0x20) = 0;
          }
          FUN_00206d50(puVar3);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      pplVar1 = local_70;
      if (((-1 < (long)local_68) && ((local_68 & 0x7fffffff00000000) != 0)) &&
         ((local_278 != local_70 && (local_70 != (long **)0x0)))) {
                    /* try { // try from 001cd2f4 to 001cd307 has its CatchHandler @ 001cd460 */
        plVar6 = (long *)FUN_00400d30();
        (**(code **)(*plVar6 + 0x18))(plVar6,pplVar1);
      }
    }
    else {
      local_68 = 0x4000000000;
      local_70 = local_278;
      local_78 = 1;
                    /* try { // try from 001cd358 to 001cd35f has its CatchHandler @ 001cd488 */
      lVar5 = FUN_00206d30();
                    /* try { // try from 001cd364 to 001cd367 has its CatchHandler @ 001cd478 */
      FUN_003d9790(param_2 + 4);
                    /* try { // try from 001cd368 to 001cd373 has its CatchHandler @ 001cd468 */
      uVar2 = FUN_001f3be0(param_2,&local_280);
      if (uVar2 != 0) {
        lVar8 = *param_2;
        uVar7 = 0;
        do {
          puVar3 = (undefined8 *)(*(long *)(local_280 + uVar7 * 8) + lVar5 + -0x20);
          uVar4 = *(uint *)(puVar3 + 1);
          if ((uVar4 >> 0x1c & 1) != 0) {
                    /* try { // try from 001cd3a8 to 001cd3bf has its CatchHandler @ 001cd4c8 */
            FUN_001e4d30(puVar3);
            local_58 = puVar3;
            FUN_001d6940(lVar8 + 0x1fe8,&local_58);
            uVar4 = *(uint *)(puVar3 + 1) & 0xefffffff;
            *(uint *)(puVar3 + 1) = uVar4;
          }
          if ((uVar4 & 0xf000000) == 0x1000000) {
            *(uint *)(puVar3 + 1) = uVar4 & 0x3fffffff;
            *puVar3 = 0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      pplVar1 = local_70;
      if ((((-1 < (long)local_68) && ((local_68 & 0x7fffffff00000000) != 0)) &&
          (local_278 != local_70)) && (local_70 != (long **)0x0)) {
                    /* try { // try from 001cd414 to 001cd427 has its CatchHandler @ 001cd464 */
        plVar6 = (long *)FUN_00400d30();
        (**(code **)(*plVar6 + 0x18))(plVar6,pplVar1);
      }
    }
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xfffffff;
    *param_2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 1);
    local_278[0] = param_2;
    if (uVar2 >> 0x1e == 2) {
      *(uint *)(param_2 + 1) = uVar2 | 0xc0000000;
      if ((uVar2 >> 0x1c & 1) == 0) {
        puVar3 = (undefined8 *)FUN_001d67d0(param_3,local_278,&local_58);
        if ((char)local_58 == '\0') {
          *puVar3 = local_278[0];
        }
      }
    }
    else if (uVar2 >> 0x1e == 1) {
      *(uint *)(param_2 + 1) = uVar2 & 0x3fffffff;
      FUN_001d6940(param_3,local_278);
    }
  }
  return;
}


