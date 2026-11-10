/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5c20; name: FUN_005c5c20
 */


undefined8 FUN_005c5c20(long param_1,wchar_t *param_2)

{
  ulong __len;
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  wchar_t *local_40;
  mbstate_t mStack_38;
  
  mbsinit(&mStack_38);
  local_40 = param_2;
  sVar1 = wcsrtombs((char *)0x0,&local_40,0,&mStack_38);
  if (sVar1 != 0xffffffffffffffff) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    __len = sVar1 + 1;
    if (uVar3 < __len) {
      FUN_005c5e00(param_1,__len,1);
      uVar3 = *(ulong *)(param_1 + 0x20);
    }
    if (((sVar1 < uVar3) || (__len <= uVar3)) ||
       (uVar3 = FUN_005c5e00(param_1,__len,1), (uVar3 & 1) != 0)) {
      *(undefined1 *)(*(long *)(param_1 + 8) + sVar1) = 0;
      *(size_t *)(param_1 + 0x10) = sVar1;
    }
    local_40 = param_2;
    sVar2 = wcsrtombs(*(char **)(param_1 + 8),&local_40,__len,&mStack_38);
    if (sVar2 != 0xffffffffffffffff) {
      *(undefined1 *)(*(long *)(param_1 + 8) + sVar1) = 0;
      return 1;
    }
  }
  return 0;
}


