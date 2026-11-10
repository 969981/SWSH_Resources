/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040f040; name: FUN_0040f040
 */


long * FUN_0040f040(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  plVar5 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x140);
  if (plVar5 != (long *)0x0) {
    FUN_00415150(plVar5,param_1);
    *(undefined4 *)(plVar5 + 0x21) = 0;
    puVar1 = PTR_DAT_02712b88 + 0x2c0;
    puVar2 = PTR_DAT_02712b88 + 0x380;
    puVar3 = PTR_DAT_02712b88 + 0x358;
    *plVar5 = (long)(PTR_DAT_02712b88 + 0x10);
    plVar5[0x1f] = (long)puVar2;
    plVar5[0x20] = 0;
    plVar5[3] = (long)puVar1;
    plVar5[6] = (long)puVar3;
    FUN_0045b6d0(plVar5 + 0x22);
    *(undefined1 *)(plVar5 + 0x25) = 1;
    plVar5[0x26] = 0;
    plVar5[0x27] = 0;
    iVar4 = (**(code **)(*plVar5 + 0x88))(plVar5);
    *(uint *)((long)plVar5 + 0x9c) =
         *(uint *)((long)plVar5 + 0x9c) & 0xfffc0000 |
         *(uint *)((long)plVar5 + 0x9c) & 0x1ffff | (uint)(iVar4 == 0 || iVar4 == 10) << 0x11;
    FUN_004821a0(plVar5);
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  return plVar5;
}


