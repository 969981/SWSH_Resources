/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ecde0; name: FUN_003ecde0
 */


void FUN_003ecde0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long local_58;
  long *local_50;
  uint local_48;
  uint local_44;
  
  local_50 = (long *)0x0;
  local_48 = 0;
  local_44 = 0;
  lVar3 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x230) != 0) {
    do {
                    /* try { // try from 003ece5c to 003ece67 has its CatchHandler @ 003ecf98 */
      local_58 = lVar3;
      FUN_003ed580(&local_50,&local_58);
      lVar2 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar2;
      while( true ) {
        lVar3 = lVar2;
        if (lVar3 == 0) goto LAB_003ece8c;
        if ((local_44 & 0x7fffffff) <= local_48) break;
        local_50[local_48] = lVar3;
        local_48 = local_48 + 1;
        lVar2 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar2;
        local_58 = lVar3;
      }
    } while( true );
  }
LAB_003ece8c:
                    /* try { // try from 003ece8c to 003ece9b has its CatchHandler @ 003ecf88 */
  FUN_003ed040(local_50,local_48,&local_58,param_1,0x20);
                    /* try { // try from 003ecea4 to 003eceb3 has its CatchHandler @ 003ecf78 */
  FUN_003ed040(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_58,param_1,
               0x20);
  if (*(uint *)(param_1 + 0x218) != 0) {
    plVar4 = *(long **)(param_1 + 0x210);
    plVar1 = plVar4 + *(uint *)(param_1 + 0x218);
    plVar5 = local_50;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        lVar3 = *plVar4;
        lVar2 = (ulong)*(uint *)(param_1 + 0x220) * 0x90;
        do {
          while ((plVar5 != local_50 + local_48 && (lVar3 == *plVar5))) {
            plVar5 = plVar5 + 1;
            lVar3 = lVar3 + 0x90;
            lVar2 = lVar2 + -0x90;
            if (lVar2 == 0) goto LAB_003ecf24;
          }
          FUN_003c5300(lVar3);
          lVar3 = lVar3 + 0x90;
          lVar2 = lVar2 + -0x90;
        } while (lVar2 != 0);
      }
LAB_003ecf24:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  plVar5 = local_50;
  if (((-1 < (int)local_44) && ((local_44 & 0x7fffffff) != 0)) && (local_50 != (long *)0x0)) {
                    /* try { // try from 003ecf48 to 003ecf5b has its CatchHandler @ 003ecf74 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,plVar5);
  }
  return;
}


