/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aefe0; name: FUN_005aefe0
 */


void FUN_005aefe0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_027139b0;
  iVar2 = *(int *)PTR_DAT_027139b0;
  if (iVar2 < 1) {
    plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar3,0);
    *(long **)PTR_DAT_027139b8 = plVar3;
    *(undefined4 *)puVar1 = 1;
  }
  else {
    plVar3 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar2 + 1;
    if (1 < iVar2 + 1) goto LAB_005af0b4;
  }
  if (plVar3 == (long *)0x0) {
    iVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar3 + 0x20))(plVar3);
    FUN_005b9b10(uVar4,plVar3);
    iVar2 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005af0b4:
  *(int *)puVar1 = iVar2;
  FUN_0057aca0(*(undefined4 *)(param_1 + 0x1e8),plVar3);
  return;
}


