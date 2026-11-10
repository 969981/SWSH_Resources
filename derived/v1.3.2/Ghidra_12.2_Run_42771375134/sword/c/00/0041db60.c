/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041db60; name: FUN_0041db60
 */


void FUN_0041db60(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  FUN_0041b4d0(param_1 + 0x60);
  puVar3 = PTR_DAT_02712a90;
  plVar5 = (long *)(param_1 + 0x78);
  if (*plVar5 != 0) {
    lVar7 = *plVar5;
    lVar6 = 0;
    do {
      while( true ) {
        lVar4 = lVar7;
        lVar7 = *(long *)(lVar4 + 0x18);
        lVar1 = 0;
        if (*(long *)(lVar4 + 8) != 0) {
          lVar1 = *(long *)(lVar4 + 8) + 0x2c0;
        }
        if (lVar1 == param_2) break;
        lVar6 = lVar4;
        if (lVar7 == 0) {
          return;
        }
      }
      plVar2 = plVar5;
      if (*plVar5 != lVar4) {
        plVar2 = (long *)(lVar6 + 0x18);
      }
      *plVar2 = lVar7;
      FUN_00404870(*(undefined4 *)puVar3);
    } while (lVar7 != 0);
  }
  return;
}


