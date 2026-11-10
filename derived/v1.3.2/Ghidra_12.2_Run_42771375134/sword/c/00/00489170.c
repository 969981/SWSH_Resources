/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00489170; name: FUN_00489170
 */


long * FUN_00489170(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_027132a0 + 0x10);
  if (plVar3 == (long *)0x0) {
    return param_1;
  }
  if (*plVar3 != 0) {
    FUN_004b3a20(param_1);
    FUN_004b2910(param_1,0);
    plVar3 = (long *)param_1[2];
    if (plVar3 == (long *)0x0) goto LAB_00489214;
  }
  puVar2 = PTR_DAT_02712a90;
  uVar1 = *(undefined4 *)PTR_DAT_02712a90;
  *plVar3 = 0;
  if (plVar3[4] != 0) {
    *(undefined4 *)(plVar3 + 5) = 0;
    FUN_00404870(*(undefined4 *)puVar2);
    plVar3[4] = 0;
    *(undefined4 *)((long)plVar3 + 0x2c) = 0;
  }
  if (plVar3[2] != 0) {
    *(undefined4 *)(plVar3 + 3) = 0;
    FUN_00404870(*(undefined4 *)puVar2);
    plVar3[2] = 0;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
  }
  FUN_00404870(uVar1,plVar3);
LAB_00489214:
  param_1[2] = 0;
  return param_1;
}


