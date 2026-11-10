/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045d060; name: FUN_0045d060
 */


undefined8 FUN_0045d060(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    puVar1 = PTR_DAT_02712de0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_004397a0(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x6c));
    if ((*(int *)(param_1 + 0x78) != 0) &&
       (plVar2 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(int *)(param_1 + 0x78),0),
       plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0xb0))
                (plVar2,*(undefined8 *)(param_1 + 0x50),plVar2,*(undefined4 *)(param_1 + 0x6c));
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  return 1;
}


