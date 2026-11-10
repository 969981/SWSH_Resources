/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d2ff0; name: FUN_003d2ff0
 */


void FUN_003d2ff0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long local_58;
  long *local_50;
  uint local_48;
  uint local_44;
  
  local_50 = (long *)0x0;
  local_48 = 0;
  local_44 = 0;
  lVar7 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x230) != 0) {
    do {
                    /* try { // try from 003d306c to 003d3077 has its CatchHandler @ 003d31b0 */
      local_58 = lVar7;
      FUN_003d3790(&local_50,&local_58);
      lVar3 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar3;
      while( true ) {
        lVar7 = lVar3;
        if (lVar7 == 0) goto LAB_003d309c;
        if ((local_44 & 0x7fffffff) <= local_48) break;
        local_50[local_48] = lVar7;
        local_48 = local_48 + 1;
        lVar3 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar3;
        local_58 = lVar7;
      }
    } while( true );
  }
LAB_003d309c:
                    /* try { // try from 003d309c to 003d30ab has its CatchHandler @ 003d31a0 */
  FUN_003d3250(local_50,local_48,&local_58,param_1,0x20);
                    /* try { // try from 003d30b4 to 003d30c3 has its CatchHandler @ 003d3190 */
  FUN_003d3250(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_58,param_1,
               0x20);
  if (*(uint *)(param_1 + 0x218) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x210);
    puVar1 = puVar5 + *(uint *)(param_1 + 0x218);
    plVar6 = local_50;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        puVar4 = (undefined8 *)*puVar5;
        lVar7 = (ulong)*(uint *)(param_1 + 0x220) * 0x50;
        do {
          while ((plVar6 != local_50 + local_48 && (puVar4 == (undefined8 *)*plVar6))) {
            plVar6 = plVar6 + 1;
            puVar4 = puVar4 + 10;
            lVar7 = lVar7 + -0x50;
            if (lVar7 == 0) goto LAB_003d313c;
          }
          (**(code **)*puVar4)(puVar4);
          puVar4 = puVar4 + 10;
          lVar7 = lVar7 + -0x50;
        } while (lVar7 != 0);
      }
LAB_003d313c:
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  plVar6 = local_50;
  if (((-1 < (int)local_44) && ((local_44 & 0x7fffffff) != 0)) && (local_50 != (long *)0x0)) {
                    /* try { // try from 003d3160 to 003d3173 has its CatchHandler @ 003d318c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,plVar6);
  }
  return;
}


