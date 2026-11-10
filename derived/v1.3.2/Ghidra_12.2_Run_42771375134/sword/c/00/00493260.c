/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00493260; name: FUN_00493260
 */


void FUN_00493260(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
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
  puVar1 = PTR_DAT_02712de0;
  if ((*(byte *)(param_1 + 0xfe) & 1) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_02712de0 != 0) {
    FUN_0043c3e0(*(long *)PTR_DAT_02712de0,param_1);
    FUN_0043c220(*(undefined8 *)puVar1,param_1);
  }
  FUN_00482b70(param_1,0,0,0,4);
  return;
}


