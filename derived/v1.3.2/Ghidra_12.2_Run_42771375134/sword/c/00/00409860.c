/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409860; name: FUN_00409860
 */


void FUN_00409860(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x1c];
  puVar1 = PTR_DAT_02712b28 + 0x2b8;
  puVar2 = PTR_DAT_02712b28 + 0x350;
  *param_1 = (long)(PTR_DAT_02712b28 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  if (plVar3 == (long *)0x0) goto LAB_004098dc;
  if (*plVar3 == 0) {
LAB_004098c4:
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar3);
  }
  else {
    *(undefined4 *)(plVar3 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *plVar3 = 0;
    *(undefined4 *)((long)plVar3 + 0xc) = 0;
    plVar3 = (long *)param_1[0x1c];
    if (plVar3 != (long *)0x0) goto LAB_004098c4;
  }
  param_1[0x1c] = 0;
LAB_004098dc:
  puVar1 = PTR_DAT_02712b30 + 0x280;
  puVar2 = PTR_DAT_02712b30 + 0x318;
  *param_1 = (long)(PTR_DAT_02712b30 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  if (param_1[0x17] != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x17] = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
  }
  FUN_0047e190(param_1);
  return;
}


