/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00491610; name: FUN_00491610
 */


void FUN_00491610(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long **)(param_1 + 200) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 200) + 0x40))();
      *(ushort *)(param_1 + 0xfd) = *(ushort *)(param_1 + 0xfd) & 0xfff7;
      if (*(int *)(param_1 + 0xd8) != 0) {
        lVar2 = *(long *)(param_1 + 0xd0);
        do {
          (**(code **)(**(long **)(lVar2 + 8) + 0x10))();
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != *(long *)(param_1 + 0xd0) + (ulong)*(uint *)(param_1 + 0xd8) * 0x10);
      }
      *(undefined4 *)(param_1 + 0xd8) = 0;
      if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))();
        *(undefined8 *)(param_1 + 0xe0) = 0;
      }
    }
    (**(code **)(**(long **)(param_1 + 200) + 0x18))();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  return;
}


