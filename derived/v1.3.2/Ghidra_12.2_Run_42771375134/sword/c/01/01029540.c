/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029540; name: FUN_01029540
 */


bool FUN_01029540(long param_1)

{
  bool bVar1;
  long lVar2;
  long local_28;
  
  if (*(long *)(param_1 + 0x170) == 0) {
    bVar1 = false;
  }
  else {
    FUN_01029800(&local_28);
    if (local_28 == 0) {
      bVar1 = false;
      lVar2 = *(long *)(param_1 + 0x68);
      goto joined_r0x010295c8;
    }
    lVar2 = FUN_011b7ff0();
    bVar1 = lVar2 != 0;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  lVar2 = *(long *)(param_1 + 0x68);
joined_r0x010295c8:
  if (lVar2 == 0) {
    return bVar1;
  }
  return (bool)(bVar1 | *(char *)(lVar2 + 0x170) != '\0');
}


