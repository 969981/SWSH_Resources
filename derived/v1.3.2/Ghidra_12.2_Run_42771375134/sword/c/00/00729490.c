/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00729490; name: FUN_00729490
 */


void FUN_00729490(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  puVar6 = &DAT_0213f2ac;
  do {
    uVar2 = *puVar6;
    if (uVar2 == 4) {
      lVar5 = *(long *)(param_3 + 0x48);
      lVar8 = *(long *)(param_3 + 0x50);
      if (lVar5 != lVar8) {
        FUN_0072b810(param_2,lVar5 + 0x20,lVar5 + 0x40,4);
        while (lVar5 + 0x240 != lVar8) {
          FUN_0072b810(param_2,lVar5 + 0x260,lVar5 + 0x280,*puVar6);
          lVar5 = lVar5 + 0x240;
        }
      }
    }
    else {
      lVar5 = *(long *)(param_2 + (ulong)uVar2 * 0x120 + 0x1a0);
      if ((((lVar5 != 0) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x78) + *(long *)(&UNK_0213f2c8 + (ulong)uVar2 * 8))
           , lVar5 != 0)) && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) &&
         (iVar9 = *(int *)(lVar5 + 4), 0 < iVar9)) {
        lVar8 = 0;
LAB_00729560:
        do {
          lVar7 = *(long *)(param_3 + 0x48);
          lVar1 = *(long *)(param_3 + 0x50);
          lVar8 = lVar8 + 1;
          if (lVar7 != lVar1) {
            lVar4 = *(long *)(lVar5 + lVar8 * 0x10 + 0x10);
            do {
              iVar3 = strcmp(*(char **)(lVar7 + 0x28),(char *)(lVar4 + 2));
              if (iVar3 == 0) {
                FUN_0072b810(param_2,lVar7 + 0x20,lVar7 + 0x40,*puVar6);
                iVar9 = *(int *)(lVar5 + 4);
                if (iVar9 <= lVar8) goto LAB_007295c4;
                goto LAB_00729560;
              }
              lVar7 = lVar7 + 0x240;
            } while (lVar1 != lVar7);
          }
        } while (lVar8 < iVar9);
      }
    }
LAB_007295c4:
    puVar6 = puVar6 + 1;
    if (puVar6 == (uint *)&UNK_0213f2c4) {
      return;
    }
  } while( true );
}


