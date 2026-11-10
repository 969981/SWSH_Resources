/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01023430; name: FUN_01023430
 */


uint FUN_01023430(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long local_30;
  uint local_24;
  
  if ((param_2 < 0x40) &&
     (local_24 = param_2, FUN_0075b680(&local_30,*(undefined8 *)(param_1 + 8),&local_24),
     local_30 != 0)) {
    iVar1 = *(int *)(local_30 + 0x54);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
    if (((iVar1 != 0) &&
        (lVar3 = *(long *)(param_1 + (long)(int)local_24 * 0x110 + 0x58), lVar3 != 0)) &&
       (*(char *)(lVar3 + 0x170) != '\0')) {
      FUN_0075b680(&local_30,*(undefined8 *)(param_1 + 8),&local_24);
      FUN_01023500(&local_30);
      uVar2 = FUN_0075a3e0();
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      }
      goto LAB_010234ec;
    }
  }
  uVar2 = 0;
LAB_010234ec:
  return uVar2 & 1;
}


