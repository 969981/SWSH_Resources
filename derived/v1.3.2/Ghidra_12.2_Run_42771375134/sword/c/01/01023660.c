/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01023660; name: FUN_01023660
 */


uint FUN_01023660(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long local_30;
  uint local_24;
  
  local_24 = param_2 + 0x40;
  if ((local_24 & 0xffffffc0) != 0x40) {
    return 0xffffffff;
  }
  FUN_0075b680(&local_30,*(undefined8 *)(param_1 + 8),&local_24);
  if (local_30 == 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(local_30 + 0x54);
  if (local_30 == 0) {
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  else {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  FUN_0075b680(&local_30,*(undefined8 *)(param_1 + 8),&local_24);
  FUN_01023500(&local_30);
  uVar2 = FUN_0075a3e0();
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  if ((uVar2 & 1) == 0) {
    local_24 = 0xffffffff;
  }
  return local_24;
}


