/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b650; name: FUN_0040b650
 */


void FUN_0040b650(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_02712a90;
  puVar2 = PTR_DAT_02712a60;
  plVar4 = (long *)(param_1 + 0x10);
  if (*plVar4 != 0) {
    lVar7 = *plVar4;
    lVar6 = 0;
    do {
      while (lVar5 = lVar7, *(int *)(lVar5 + 8) != 1) {
        lVar7 = *(long *)(lVar5 + 0x18);
        lVar6 = lVar5;
        if (*(long *)(lVar5 + 0x18) == 0) {
          return;
        }
      }
      FUN_00406d20(*(undefined8 *)puVar2,*(undefined8 *)(lVar5 + 0x10));
      lVar7 = *(long *)(lVar5 + 0x18);
      plVar1 = plVar4;
      if (*plVar4 != lVar5) {
        plVar1 = (long *)(lVar6 + 0x18);
      }
      *plVar1 = lVar7;
      FUN_00404870(*(undefined4 *)puVar3,lVar5);
    } while (lVar7 != 0);
  }
  return;
}


