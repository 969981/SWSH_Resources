/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d6aa0; name: FUN_001d6aa0
 */


void FUN_001d6aa0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  long **pplVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *local_268 [64];
  undefined1 local_68;
  long **local_60;
  ulong local_58;
  char local_48;
  undefined7 uStack_47;
  
  *param_2 = param_1;
  uVar3 = *(uint *)(param_2 + 1);
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    *(uint *)(param_2 + 1) = uVar3 & 0xfffffff | 0x80000000;
    pbVar1 = (byte *)((long)param_2 +
                     *(long *)(PTR_DAT_02711068 + (ulong)(uVar3 >> 0x18 & 0xf) * 8 + 0x30) + 0xc);
    if ((uVar3 & 1) != 0) {
      pbVar1 = (byte *)param_2[2];
    }
    if ((*pbVar1 >> 3 & 1) == 0) {
      local_58 = 0x4000000000;
      local_60 = local_268;
      local_68 = 1;
                    /* try { // try from 001d6b64 to 001d6b6b has its CatchHandler @ 001d6dcc */
      lVar4 = FUN_00206d30();
                    /* try { // try from 001d6b70 to 001d6b77 has its CatchHandler @ 001d6d6c */
      FUN_003d9790(param_2 + 4);
                    /* try { // try from 001d6b78 to 001d6ba3 has its CatchHandler @ 001d6ddc */
      uVar3 = FUN_001f3be0(param_2,&local_48);
      FUN_003e7b70(param_1 + 0x10,param_2 + 4,CONCAT71(uStack_47,local_48),uVar3,lVar4,param_4);
      if (uVar3 != 0) {
        lVar7 = *param_2;
        uVar8 = 0;
        do {
          plVar5 = (long *)(*(long *)(CONCAT71(uStack_47,local_48) + uVar8 * 8) + lVar4 + -0x20);
          if ((*(uint *)(plVar5 + 1) & 0xf000000) == 0x1000000) {
            *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) & 0x3fffffff | 0x80000000;
            *plVar5 = lVar7;
          }
                    /* try { // try from 001d6be8 to 001d6beb has its CatchHandler @ 001d6dec */
          FUN_00206d40();
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
      pplVar2 = local_60;
      if (((-1 < (long)local_58) && ((local_58 & 0x7fffffff00000000) != 0)) &&
         ((local_268 != local_60 && (local_60 != (long **)0x0)))) {
                    /* try { // try from 001d6c1c to 001d6c2f has its CatchHandler @ 001d6d44 */
        plVar5 = (long *)FUN_00400d30();
        (**(code **)(*plVar5 + 0x18))(plVar5,pplVar2);
      }
    }
    else {
      local_58 = 0x4000000000;
      local_60 = local_268;
      local_68 = 1;
                    /* try { // try from 001d6c7c to 001d6c83 has its CatchHandler @ 001d6d7c */
      lVar4 = FUN_00206d30();
                    /* try { // try from 001d6c88 to 001d6c8b has its CatchHandler @ 001d6d5c */
      FUN_003d9790(param_2 + 4);
                    /* try { // try from 001d6c8c to 001d6c97 has its CatchHandler @ 001d6d4c */
      uVar3 = FUN_001f3be0(param_2,&local_48);
      pplVar2 = local_60;
      if (uVar3 != 0) {
        lVar7 = *param_2;
        uVar8 = 0;
        do {
          plVar5 = (long *)(*(long *)(CONCAT71(uStack_47,local_48) + uVar8 * 8) + lVar4 + -0x20);
          if ((*(uint *)(plVar5 + 1) & 0xf000000) == 0x1000000) {
            *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) & 0x3fffffff | 0x80000000;
            *plVar5 = lVar7;
          }
          uVar8 = uVar8 + 1;
        } while (uVar3 != uVar8);
      }
      if ((((-1 < (long)local_58) && ((local_58 & 0x7fffffff00000000) != 0)) &&
          (local_268 != local_60)) && (local_60 != (long **)0x0)) {
                    /* try { // try from 001d6d0c to 001d6d1f has its CatchHandler @ 001d6d48 */
        plVar5 = (long *)FUN_00400d30();
        (**(code **)(*plVar5 + 0x18))(plVar5,pplVar2);
      }
    }
  }
  else {
    local_268[0] = param_2;
    if (uVar3 >> 0x1e < 3) {
      *(uint *)(param_2 + 1) = uVar3 & 0x3fffffff | 0x40000000;
      puVar6 = (undefined8 *)FUN_001d67d0(param_3,local_268,&local_48);
      if (local_48 == '\0') {
        *puVar6 = local_268[0];
      }
    }
    else {
      *(uint *)(param_2 + 1) = uVar3 & 0x3fffffff | 0x80000000;
      if ((uVar3 >> 0x1c & 1) == 0) {
        FUN_001d6940(param_3,local_268);
      }
    }
  }
  return;
}


