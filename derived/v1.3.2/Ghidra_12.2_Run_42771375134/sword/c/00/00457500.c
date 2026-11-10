/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00457500; name: FUN_00457500
 */


void FUN_00457500(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *local_50;
  undefined1 local_48;
  
  puVar2 = PTR_DAT_02713040;
  if (*PTR_DAT_02713040 == '\0') {
    *PTR_DAT_02713040 = 1;
    nn::os::LockMutex((MutexType *)PTR_DAT_02713030);
    puVar1 = PTR_DAT_02713038;
    if (*(int *)(PTR_DAT_02713038 + 8) != 0) {
      uVar3 = 0;
      do {
        local_50 = *(long **)(*(long *)puVar1 + uVar3 * 8);
        local_48 = 1;
        (**(code **)(*local_50 + 200))(0,local_50,&local_50,1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(puVar1 + 8));
    }
    if (*(code **)(PTR_DAT_02712b90 + 0x48) != (code *)0x0) {
      (**(code **)(PTR_DAT_02712b90 + 0x48))(*puVar2,*(undefined8 *)(PTR_DAT_02712b90 + 0x50));
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02713030);
  }
  return;
}


