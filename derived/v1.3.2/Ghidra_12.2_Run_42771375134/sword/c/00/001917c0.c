/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001917c0; name: FUN_001917c0
 */


void FUN_001917c0(long param_1)

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
                    /* try { // try from 00191834 to 0019183f has its CatchHandler @ 00191964 */
      local_38 = lVar7;
      FUN_00191f40(&local_30,&local_38);
      lVar4 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar4;
      while( true ) {
        lVar7 = lVar4;
        if (lVar7 == 0) goto LAB_00191864;
        if ((local_24 & 0x7fffffff) <= local_28) break;
        local_30[local_28] = lVar7;
        local_28 = local_28 + 1;
        lVar4 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar4;
        local_38 = lVar7;
      }
    } while( true );
  }
LAB_00191864:
                    /* try { // try from 00191864 to 00191873 has its CatchHandler @ 00191954 */
  FUN_00191a00(local_30,local_28,&local_38,param_1,0x20);
                    /* try { // try from 0019187c to 0019188b has its CatchHandler @ 00191944 */
  FUN_00191a00(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_38,param_1,
               0x20);
  plVar3 = local_30;
  if (*(uint *)(param_1 + 0x218) != 0) {
    plVar5 = *(long **)(param_1 + 0x210);
    plVar1 = plVar5 + *(uint *)(param_1 + 0x218);
    plVar6 = local_30;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        lVar7 = *plVar5;
        lVar4 = (ulong)*(uint *)(param_1 + 0x220) * 0x38;
        do {
          plVar2 = local_30 + local_28;
          if (plVar6 != local_30 + local_28) {
            plVar2 = plVar6 + 1;
            if (lVar7 != *plVar6) {
              plVar2 = plVar6;
            }
          }
          plVar6 = plVar2;
          lVar7 = lVar7 + 0x38;
          lVar4 = lVar4 + -0x38;
        } while (lVar4 != 0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  if ((((local_24 & 0x7fffffff) != 0) && (-1 < (int)local_24)) && (local_30 != (long *)0x0)) {
                    /* try { // try from 0019191c to 0019192f has its CatchHandler @ 00191940 */
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar3);
  }
  return;
}


