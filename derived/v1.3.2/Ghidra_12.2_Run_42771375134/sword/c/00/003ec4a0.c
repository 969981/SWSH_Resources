/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ec4a0; name: FUN_003ec4a0
 */


void FUN_003ec4a0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *local_60;
  uint local_58;
  uint uStack_54;
  long local_48;
  
  local_58 = 0;
  uStack_54 = 0;
  local_60 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x230) != 0) {
    do {
                    /* try { // try from 003ec520 to 003ec52b has its CatchHandler @ 003ec668 */
      local_48 = lVar7;
      FUN_003ecc50(&local_60,&local_48);
      lVar3 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar3;
      while( true ) {
        lVar7 = lVar3;
        if (lVar7 == 0) goto LAB_003ec550;
        if ((uStack_54 & 0x7fffffff) <= local_58) break;
        local_60[local_58] = lVar7;
        local_58 = local_58 + 1;
        lVar3 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar3;
        local_48 = lVar7;
      }
    } while( true );
  }
LAB_003ec550:
                    /* try { // try from 003ec550 to 003ec55f has its CatchHandler @ 003ec658 */
  FUN_003ec710(local_60,local_58,&local_48,param_1,0x20);
                    /* try { // try from 003ec568 to 003ec577 has its CatchHandler @ 003ec648 */
  FUN_003ec710(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_48,param_1,
               0x20);
  if (*(uint *)(param_1 + 0x218) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x210);
    puVar1 = puVar5 + *(uint *)(param_1 + 0x218);
    plVar6 = local_60;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        lVar7 = (ulong)*(uint *)(param_1 + 0x220) * 0x38;
        puVar4 = (undefined8 *)*puVar5;
        do {
          while ((plVar6 != local_60 + local_58 && (puVar4 == (undefined8 *)*plVar6))) {
            plVar6 = plVar6 + 1;
            puVar4 = puVar4 + 7;
            lVar7 = lVar7 + -0x38;
            if (lVar7 == 0) goto LAB_003ec5f0;
          }
          (**(code **)*puVar4)(puVar4);
          puVar4 = puVar4 + 7;
          lVar7 = lVar7 + -0x38;
        } while (lVar7 != 0);
      }
LAB_003ec5f0:
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  plVar6 = local_60;
  if (((-1 < (int)uStack_54) && ((uStack_54 & 0x7fffffff) != 0)) && (local_60 != (long *)0x0)) {
                    /* try { // try from 003ec614 to 003ec627 has its CatchHandler @ 003ec644 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,plVar6);
  }
  return;
}


