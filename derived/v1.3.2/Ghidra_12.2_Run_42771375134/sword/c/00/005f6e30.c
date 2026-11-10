/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f6e30; name: FUN_005f6e30
 */


void FUN_005f6e30(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (0 < (int)lVar5) {
    lVar6 = (long)(int)lVar5;
    do {
      while( true ) {
        lVar8 = *(long *)(param_1 + 0x40);
        lVar7 = lVar6 + -1;
        if (*(long *)(lVar8 + lVar7 * 8) == param_2) break;
        bVar1 = lVar6 < 2;
        lVar6 = lVar7;
        if (bVar1) goto LAB_005f6ed0;
      }
      if (lVar6 < lVar5) {
        *(undefined8 *)(lVar8 + lVar7 * 8) = *(undefined8 *)(lVar8 + lVar6 * 8);
        lVar5 = *(long *)(param_1 + 0x28);
        if (lVar6 + 1 < lVar5) {
          lVar8 = lVar6;
          do {
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar8 * 8);
            *puVar3 = puVar3[1];
            lVar5 = *(long *)(param_1 + 0x28);
            lVar2 = lVar8 + 2;
            lVar8 = lVar8 + 1;
          } while (lVar2 < lVar5);
        }
      }
      lVar5 = lVar5 + -1;
      *(long *)(param_1 + 0x28) = lVar5;
      bVar1 = 1 < lVar6;
      lVar6 = lVar7;
    } while (bVar1);
  }
LAB_005f6ed0:
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    lVar5 = 0;
  }
  else {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x40) + lVar5 * 8;
  }
  *(long *)(param_1 + 0x50) = lVar5;
  plVar4 = (long *)FUN_005cbf70();
                    /* WARNING: Could not recover jumptable at 0x005f6f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x58))(plVar4,param_2);
  return;
}


