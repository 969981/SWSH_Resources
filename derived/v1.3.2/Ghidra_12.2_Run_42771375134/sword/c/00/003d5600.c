/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d5600; name: FUN_003d5600
 */


void FUN_003d5600(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long local_38;
  long *local_30;
  uint local_28;
  uint local_24;
  
  local_30 = (long *)0x0;
  local_28 = 0;
  local_24 = 0;
  lVar10 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x230) != 0) {
    do {
                    /* try { // try from 003d5674 to 003d567f has its CatchHandler @ 003d5864 */
      local_38 = lVar10;
      FUN_003d5e40(&local_30,&local_38);
      lVar7 = **(long **)(param_1 + 0x230);
      *(long *)(param_1 + 0x230) = lVar7;
      while( true ) {
        lVar10 = lVar7;
        if (lVar10 == 0) goto LAB_003d56a4;
        if ((local_24 & 0x7fffffff) <= local_28) break;
        local_30[local_28] = lVar10;
        local_28 = local_28 + 1;
        lVar7 = **(long **)(param_1 + 0x230);
        *(long *)(param_1 + 0x230) = lVar7;
        local_38 = lVar10;
      }
    } while( true );
  }
LAB_003d56a4:
                    /* try { // try from 003d56a4 to 003d56b3 has its CatchHandler @ 003d5854 */
  FUN_003d5900(local_30,local_28,&local_38,param_1,0x20);
                    /* try { // try from 003d56bc to 003d56cb has its CatchHandler @ 003d5844 */
  FUN_003d5900(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),&local_38,param_1,
               0x20);
  plVar5 = local_30;
  if (*(uint *)(param_1 + 0x218) != 0) {
    uVar4 = *(uint *)(param_1 + 0x220);
    plVar8 = *(long **)(param_1 + 0x210);
    plVar2 = plVar8 + *(uint *)(param_1 + 0x218);
    uVar9 = (ulong)uVar4 * 8 - 8;
    uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
    plVar3 = local_30 + local_28;
    plVar11 = local_30;
    do {
      if (uVar4 != 0) {
        lVar7 = *plVar8;
        lVar10 = lVar7;
        if ((uVar1 & 3) != 0) {
          lVar6 = -((ulong)uVar1 & 3);
          plVar12 = plVar11;
          do {
            plVar11 = plVar3;
            if ((plVar12 != plVar3) && (plVar11 = plVar12 + 1, lVar10 != *plVar12)) {
              plVar11 = plVar12;
            }
            lVar10 = lVar10 + 8;
            lVar6 = lVar6 + 1;
            plVar12 = plVar11;
          } while (lVar6 != 0);
        }
        if (0x17 < uVar9) {
          do {
            plVar12 = plVar3;
            if ((plVar11 != plVar3) && (plVar12 = plVar11 + 1, lVar10 != *plVar11)) {
              plVar12 = plVar11;
            }
            plVar11 = plVar3;
            if ((plVar12 != plVar3) && (plVar11 = plVar12 + 1, lVar10 + 8 != *plVar12)) {
              plVar11 = plVar12;
            }
            plVar12 = plVar3;
            if ((plVar11 != plVar3) && (plVar12 = plVar11 + 1, lVar10 + 0x10 != *plVar11)) {
              plVar12 = plVar11;
            }
            plVar11 = plVar3;
            if ((plVar12 != plVar3) && (plVar11 = plVar12 + 1, lVar10 + 0x18 != *plVar12)) {
              plVar11 = plVar12;
            }
            lVar10 = lVar10 + 0x20;
          } while (lVar7 + (ulong)uVar4 * 8 != lVar10);
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
  }
  if ((((local_24 & 0x7fffffff) != 0) && (-1 < (int)local_24)) && (local_30 != (long *)0x0)) {
                    /* try { // try from 003d581c to 003d582f has its CatchHandler @ 003d5840 */
    plVar8 = (long *)FUN_00400d30();
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar5);
  }
  return;
}


