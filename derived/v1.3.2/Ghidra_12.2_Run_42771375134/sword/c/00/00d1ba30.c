/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d1ba30; name: FUN_00d1ba30
 */


bool FUN_00d1ba30(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long local_28;
  
  FUN_00d1a660(param_1,*(undefined4 *)(param_1 + 0x348));
  FUN_00d1bae0(&local_28);
  lVar1 = local_28;
  FUN_00d1a660(param_1,*(undefined4 *)(param_1 + 0x348));
  FUN_00d1bc50(&local_28);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0xa4) != '\0')) {
    if (local_28 != 0) {
      bVar2 = *(char *)(local_28 + 0xa4) != '\0';
      goto LAB_00d1baa8;
    }
    bVar3 = true;
  }
  else {
    bVar2 = false;
    bVar3 = false;
    if (local_28 == 0) goto LAB_00d1babc;
LAB_00d1baa8:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    bVar3 = bVar2;
  }
  if (lVar1 == 0) {
    return bVar3;
  }
LAB_00d1babc:
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return bVar3;
}


