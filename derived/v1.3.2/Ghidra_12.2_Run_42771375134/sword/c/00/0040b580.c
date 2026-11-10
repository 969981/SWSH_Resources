/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b580; name: FUN_0040b580
 */


void FUN_0040b580(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  puVar3 = PTR_DAT_02712a90;
  puVar2 = PTR_DAT_02712a60;
  lVar4 = *plVar5;
  while (lVar4 != 0) {
    if (*(int *)(lVar4 + 8) == 1) {
      FUN_00406d20(*(undefined8 *)puVar2,*(undefined8 *)(lVar4 + 0x10));
    }
    lVar6 = *(long *)(lVar4 + 0x18);
    plVar1 = plVar5;
    if (*plVar5 != lVar4) {
      plVar1 = (long *)&SUB_00000018;
    }
    *plVar1 = lVar6;
    FUN_00404870(*(undefined4 *)puVar3,lVar4);
    lVar4 = lVar6;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80) = 0;
    lVar4 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar4 != 0) {
      FUN_00408b50();
      return;
    }
  }
  return;
}


