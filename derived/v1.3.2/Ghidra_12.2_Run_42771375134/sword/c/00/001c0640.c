/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c0640; name: FUN_001c0640
 */


void FUN_001c0640(long param_1)

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
                    /* try { // try from 001c06c0 to 001c06cb has its CatchHandler @ 001c0808 */
      local_48 = lVar6;
      FUN_001c0df0(&local_60,&local_48);
      lVar2 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar2;
      while( true ) {
        lVar6 = lVar2;
        if (lVar6 == 0) goto LAB_001c06f0;
        if ((uStack_54 & 0x7fffffff) <= local_58) break;
        local_60[local_58] = lVar6;
        local_58 = local_58 + 1;
        lVar2 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar2;
        local_48 = lVar6;
      }
    } while( true );
  }
LAB_001c06f0:
                    /* try { // try from 001c06f0 to 001c06ff has its CatchHandler @ 001c07f8 */
  FUN_001c08b0(local_60,local_58,&local_48,param_1,0x20);
                    /* try { // try from 001c0708 to 001c0717 has its CatchHandler @ 001c07e8 */
  FUN_001c08b0(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_48,param_1,
               0x20);
  if (*(uint *)(param_1 + 0x218) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x210);
    puVar1 = puVar4 + *(uint *)(param_1 + 0x218);
    plVar5 = local_60;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        lVar6 = (ulong)*(uint *)(param_1 + 0x220) * 0x1d0;
        plVar3 = (long *)*puVar4;
        do {
          while ((plVar5 != local_60 + local_58 && (plVar3 == (long *)*plVar5))) {
            plVar5 = plVar5 + 1;
            plVar3 = plVar3 + 0x3a;
            lVar6 = lVar6 + -0x1d0;
            if (lVar6 == 0) goto LAB_001c0790;
          }
          (**(code **)(*plVar3 + 0x18))(plVar3);
          plVar3 = plVar3 + 0x3a;
          lVar6 = lVar6 + -0x1d0;
        } while (lVar6 != 0);
      }
LAB_001c0790:
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  plVar5 = local_60;
  if (((-1 < (int)uStack_54) && ((uStack_54 & 0x7fffffff) != 0)) && (local_60 != (long *)0x0)) {
                    /* try { // try from 001c07b4 to 001c07c7 has its CatchHandler @ 001c07e4 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar5);
  }
  return;
}


