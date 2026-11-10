/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047e190; name: FUN_0047e190
 */


void FUN_0047e190(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_02713268 + 0x270;
  puVar2 = PTR_DAT_02713268 + 0x308;
  *param_1 = (long)(PTR_DAT_02713268 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  FUN_00488850();
  plVar3 = (long *)param_1[0x15];
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != 0) {
      *(undefined4 *)(plVar3 + 1) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *plVar3 = 0;
      *(undefined4 *)((long)plVar3 + 0xc) = 0;
      plVar3 = (long *)param_1[0x15];
      if (plVar3 == (long *)0x0) goto LAB_0047e20c;
    }
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar3);
  }
LAB_0047e20c:
  if (param_1[0x14] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  param_1[0x14] = 0;
  FUN_00481df0(param_1);
  return;
}


