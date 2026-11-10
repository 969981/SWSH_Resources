/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b7810; name: FUN_007b7810
 */


undefined8 FUN_007b7810(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  uVar2 = *(ulong *)(param_1 + 0x98);
  if (0xf < uVar2) {
    return 0;
  }
  local_48 = param_2;
  if (uVar2 < *(ulong *)(param_1 + 0xa0)) {
    lVar3 = *(long *)(param_1 + 0x90);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) goto LAB_007b7978;
    *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    *(undefined8 *)(lVar3 + uVar2 * 8) = local_48;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
    uVar2 = *(ulong *)(param_1 + 0xf8);
    if (*(ulong *)(param_1 + 0x100) <= uVar2) goto LAB_007b794c;
  }
  else {
    local_38 = *(long *)(param_1 + 0x90) + uVar2 * 8;
    FUN_007ba040(auStack_40,param_1 + 0x50,&local_38,1,&local_48);
    uVar2 = *(ulong *)(param_1 + 0xf8);
    if (*(ulong *)(param_1 + 0x100) <= uVar2) {
LAB_007b794c:
      local_38 = *(long *)(param_1 + 0xf0) + uVar2 * 8;
      FUN_007ba040(auStack_40,param_1 + 0xb0,&local_38,1,&local_48);
      return 1;
    }
  }
  lVar3 = *(long *)(param_1 + 0xf0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    *(undefined8 *)(lVar3 + uVar2 * 8) = local_48;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
    return 1;
  }
LAB_007b7978:
                    /* WARNING: Subroutine does not return */
  abort();
}


