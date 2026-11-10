/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c5000; name: FUN_001c5000
 */


void FUN_001c5000(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long local_68;
  long *local_60;
  uint local_58;
  uint local_54;
  
  local_60 = (long *)0x0;
  local_58 = 0;
  local_54 = 0;
  lVar7 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x230) != 0) {
    do {
                    /* try { // try from 001c5080 to 001c508b has its CatchHandler @ 001c5200 */
      local_68 = lVar7;
      FUN_001c57e0(&local_60,&local_68);
      lVar3 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar3;
      while( true ) {
        lVar7 = lVar3;
        if (lVar7 == 0) goto LAB_001c50b0;
        if ((local_54 & 0x7fffffff) <= local_58) break;
        local_60[local_58] = lVar7;
        local_58 = local_58 + 1;
        lVar3 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar3;
        local_68 = lVar7;
      }
    } while( true );
  }
LAB_001c50b0:
                    /* try { // try from 001c50b0 to 001c50bf has its CatchHandler @ 001c51f0 */
  FUN_001c52a0(local_60,local_58,&local_68,param_1,0x20);
                    /* try { // try from 001c50c8 to 001c50d7 has its CatchHandler @ 001c51e0 */
  FUN_001c52a0(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_68,param_1,
               0x20);
  if (*(uint *)(param_1 + 0x218) != 0) {
    plVar5 = *(long **)(param_1 + 0x210);
    plVar1 = plVar5 + *(uint *)(param_1 + 0x218);
    plVar6 = local_60;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        lVar3 = (ulong)*(uint *)(param_1 + 0x220) * 0x58;
        lVar7 = *plVar5;
LAB_001c5100:
        do {
          if ((plVar6 == local_60 + local_58) || (lVar7 != *plVar6)) {
            if ((-1 < (int)*(uint *)(lVar7 + 0x54)) && ((*(uint *)(lVar7 + 0x54) & 0x7fffffff) != 0)
               ) {
              lVar4 = *(long *)(lVar7 + 0x48);
              if (lVar7 == lVar4) {
                *(undefined1 *)(lVar7 + 0x40) = 0;
                lVar7 = lVar7 + 0x58;
                lVar3 = lVar3 + -0x58;
                if (lVar3 == 0) break;
                goto LAB_001c5100;
              }
              if (lVar4 != 0) {
                    /* try { // try from 001c5140 to 001c5153 has its CatchHandler @ 001c523c */
                plVar2 = (long *)FUN_00400d30();
                (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
              }
            }
          }
          else {
            plVar6 = plVar6 + 1;
          }
          lVar3 = lVar3 + -0x58;
          lVar7 = lVar7 + 0x58;
        } while (lVar3 != 0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  plVar6 = local_60;
  if (((-1 < (int)local_54) && ((local_54 & 0x7fffffff) != 0)) && (local_60 != (long *)0x0)) {
                    /* try { // try from 001c51ac to 001c51bf has its CatchHandler @ 001c51dc */
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar6);
  }
  return;
}


