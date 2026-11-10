/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d2560; name: FUN_001d2560
 */


void FUN_001d2560(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long local_38;
  long *local_30;
  uint local_28;
  uint local_24;
  
  local_30 = (long *)0x0;
  local_28 = 0;
  local_24 = 0;
  lVar7 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x230) != 0) {
    do {
                    /* try { // try from 001d25d4 to 001d25df has its CatchHandler @ 001d2704 */
      local_38 = lVar7;
      FUN_001d2ce0(&local_30,&local_38);
      lVar4 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar4;
      while( true ) {
        lVar7 = lVar4;
        if (lVar7 == 0) goto LAB_001d2604;
        if ((local_24 & 0x7fffffff) <= local_28) break;
        local_30[local_28] = lVar7;
        local_28 = local_28 + 1;
        lVar4 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar4;
        local_38 = lVar7;
      }
    } while( true );
  }
LAB_001d2604:
                    /* try { // try from 001d2604 to 001d2613 has its CatchHandler @ 001d26f4 */
  FUN_001d27a0(local_30,local_28,&local_38,param_1,0x20);
                    /* try { // try from 001d261c to 001d262b has its CatchHandler @ 001d26e4 */
  FUN_001d27a0(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_38,param_1,
               0x20);
  plVar3 = local_30;
  if (*(uint *)(param_1 + 0x218) != 0) {
    plVar5 = *(long **)(param_1 + 0x210);
    plVar1 = plVar5 + *(uint *)(param_1 + 0x218);
    plVar6 = local_30;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        lVar7 = *plVar5;
        lVar4 = (ulong)*(uint *)(param_1 + 0x220) * 0x180;
        do {
          plVar2 = local_30 + local_28;
          if (plVar6 != local_30 + local_28) {
            plVar2 = plVar6 + 1;
            if (lVar7 != *plVar6) {
              plVar2 = plVar6;
            }
          }
          plVar6 = plVar2;
          lVar7 = lVar7 + 0x180;
          lVar4 = lVar4 + -0x180;
        } while (lVar4 != 0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  if ((((local_24 & 0x7fffffff) != 0) && (-1 < (int)local_24)) && (local_30 != (long *)0x0)) {
                    /* try { // try from 001d26bc to 001d26cf has its CatchHandler @ 001d26e0 */
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar3);
  }
  return;
}


