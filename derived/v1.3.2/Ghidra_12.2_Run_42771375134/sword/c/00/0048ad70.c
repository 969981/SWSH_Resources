/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048ad70; name: FUN_0048ad70
 */


undefined8 FUN_0048ad70(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  cVar3 = *(char *)(param_2 + 0x40);
  if (((cVar3 == '\0') || (*(char *)(param_2 + 0x40) = cVar3 + -1, cVar3 == '\x01')) &&
     (*(char *)(param_2 + 0x41) == '\0')) {
    plVar5 = (long *)*param_1;
    uVar4 = *(uint *)(param_1 + 1);
    plVar1 = plVar5 + uVar4;
    if (uVar4 != 0) {
      lVar6 = (ulong)uVar4 << 3;
      do {
        if (*plVar5 == param_2) goto LAB_0048ade4;
        lVar6 = lVar6 + -8;
        plVar5 = plVar5 + 1;
      } while (lVar6 != 0);
      plVar5 = plVar1;
    }
LAB_0048ade4:
    if (plVar1 == plVar5) {
      return 0x24;
    }
    lVar6 = *plVar5;
    if (1 < uVar4) {
      *plVar5 = plVar1[-1];
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
    FUN_004896b0(lVar6);
    if (lVar6 != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_00489640(lVar6);
      FUN_00404870(uVar2,lVar6);
      return 1;
    }
  }
  return 1;
}


