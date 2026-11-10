/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c21f0; name: FUN_001c21f0
 */


void FUN_001c21f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *local_60;
  uint local_58;
  uint uStack_54;
  long local_48;
  
  local_58 = 0;
  uStack_54 = 0;
  local_60 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x230) != 0) {
    do {
                    /* try { // try from 001c2270 to 001c227b has its CatchHandler @ 001c23b8 */
      local_48 = lVar6;
      FUN_001c29a0(&local_60,&local_48);
      lVar2 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar2;
      while( true ) {
        lVar6 = lVar2;
        if (lVar6 == 0) goto LAB_001c22a0;
        if ((uStack_54 & 0x7fffffff) <= local_58) break;
        local_60[local_58] = lVar6;
        local_58 = local_58 + 1;
        lVar2 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar2;
        local_48 = lVar6;
      }
    } while( true );
  }
LAB_001c22a0:
                    /* try { // try from 001c22a0 to 001c22af has its CatchHandler @ 001c23a8 */
  FUN_001c2460(local_60,local_58,&local_48,param_1,0x20);
                    /* try { // try from 001c22b8 to 001c22c7 has its CatchHandler @ 001c2398 */
  FUN_001c2460(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_48,param_1,
               0x20);
  if (*(uint *)(param_1 + 0x218) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x210);
    puVar1 = puVar4 + *(uint *)(param_1 + 0x218);
    plVar5 = local_60;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        lVar6 = (ulong)*(uint *)(param_1 + 0x220) * 0xb8;
        plVar3 = (long *)*puVar4;
        do {
          while ((plVar5 != local_60 + local_58 && (plVar3 == (long *)*plVar5))) {
            plVar5 = plVar5 + 1;
            plVar3 = plVar3 + 0x17;
            lVar6 = lVar6 + -0xb8;
            if (lVar6 == 0) goto LAB_001c2340;
          }
          (**(code **)(*plVar3 + 0x18))(plVar3);
          plVar3 = plVar3 + 0x17;
          lVar6 = lVar6 + -0xb8;
        } while (lVar6 != 0);
      }
LAB_001c2340:
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  plVar5 = local_60;
  if (((-1 < (int)uStack_54) && ((uStack_54 & 0x7fffffff) != 0)) && (local_60 != (long *)0x0)) {
                    /* try { // try from 001c2364 to 001c2377 has its CatchHandler @ 001c2394 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar5);
  }
  return;
}


