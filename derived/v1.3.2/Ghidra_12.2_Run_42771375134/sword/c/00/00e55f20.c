/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e55f20; name: FUN_00e55f20
 */


void FUN_00e55f20(long param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  byte local_24 [4];
  
  local_24[0] = param_2 & 1;
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 600);
  if (lVar1 == 0) {
    FUN_0151d150(0,*(undefined4 *)(param_1 + 0x6d0),param_1 + 0x6c0,local_24);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_0151d150(lVar1,*(undefined4 *)(param_1 + 0x6d0),param_1 + 0x6c0,local_24);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


