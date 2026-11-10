/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045d100; name: FUN_0045d100
 */


undefined8 FUN_0045d100(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar1 = *(int *)(param_1 + 0xa8), *(int *)(param_1 + 0xa8) = iVar1 + 1, iVar1 == 0)) {
    lVar2 = *(long *)PTR_DAT_02712de0;
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar2 + 0x78);
    FUN_0043aa90(lVar2,*(undefined4 *)(param_1 + 0x6c));
    if ((*(int *)(param_1 + 0x78) != 0) &&
       (plVar3 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(int *)(param_1 + 0x78),0),
       plVar3 != (long *)0x0)) {
      FUN_00482bc0(plVar3,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_2,
                   param_3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((*(int *)(param_1 + 0x90) != 0) &&
       (plVar3 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(int *)(param_1 + 0x90),0),
       plVar3 != (long *)0x0)) {
      FUN_00482bc0(plVar3,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_2,
                   param_3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  return 1;
}


