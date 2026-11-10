/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001beaa0; name: FUN_001beaa0
 */


void FUN_001beaa0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long local_58;
  long *local_50;
  uint local_48;
  uint local_44;
  
  local_50 = (long *)0x0;
  local_48 = 0;
  local_44 = 0;
  lVar6 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x230) != 0) {
    do {
                    /* try { // try from 001beb1c to 001beb27 has its CatchHandler @ 001bec60 */
      local_58 = lVar6;
      FUN_001bf240(&local_50,&local_58);
      lVar2 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar2;
      while( true ) {
        lVar6 = lVar2;
        if (lVar6 == 0) goto LAB_001beb4c;
        if ((local_44 & 0x7fffffff) <= local_48) break;
        local_50[local_48] = lVar6;
        local_48 = local_48 + 1;
        lVar2 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar2;
        local_58 = lVar6;
      }
    } while( true );
  }
LAB_001beb4c:
                    /* try { // try from 001beb4c to 001beb5b has its CatchHandler @ 001bec50 */
  FUN_001bed00(local_50,local_48,&local_58,param_1,0x20);
                    /* try { // try from 001beb64 to 001beb73 has its CatchHandler @ 001bec40 */
  FUN_001bed00(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_58,param_1,
               0x20);
  if (*(uint *)(param_1 + 0x218) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x210);
    puVar1 = puVar4 + *(uint *)(param_1 + 0x218);
    plVar5 = local_50;
    do {
      if (*(uint *)(param_1 + 0x220) != 0) {
        plVar3 = (long *)*puVar4;
        lVar6 = (ulong)*(uint *)(param_1 + 0x220) * 0x108;
        do {
          while ((plVar5 != local_50 + local_48 && (plVar3 == (long *)*plVar5))) {
            plVar5 = plVar5 + 1;
            plVar3 = plVar3 + 0x21;
            lVar6 = lVar6 + -0x108;
            if (lVar6 == 0) goto LAB_001bebec;
          }
          (**(code **)(*plVar3 + 0x18))(plVar3);
          plVar3 = plVar3 + 0x21;
          lVar6 = lVar6 + -0x108;
        } while (lVar6 != 0);
      }
LAB_001bebec:
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  plVar5 = local_50;
  if (((-1 < (int)local_44) && ((local_44 & 0x7fffffff) != 0)) && (local_50 != (long *)0x0)) {
                    /* try { // try from 001bec10 to 001bec23 has its CatchHandler @ 001bec3c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar5);
  }
  return;
}


