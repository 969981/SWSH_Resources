/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a1ff0; name: FUN_007a1ff0
 */


void FUN_007a1ff0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  uVar2 = *(ulong *)(param_1 + 0x108);
  local_48 = param_2;
  if (uVar2 < *(ulong *)(param_1 + 0x110)) {
    lVar3 = *(long *)(param_1 + 0x100);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) goto LAB_007a2138;
    *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    *(undefined8 *)(lVar3 + uVar2 * 8) = local_48;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
    uVar2 = *(ulong *)(param_1 + 0x168);
    if (*(ulong *)(param_1 + 0x170) <= uVar2) goto LAB_007a2110;
  }
  else {
    local_38 = *(long *)(param_1 + 0x100) + uVar2 * 8;
    FUN_007a31a0(auStack_40,param_1 + 0xc0,&local_38,1,&local_48);
    uVar2 = *(ulong *)(param_1 + 0x168);
    if (*(ulong *)(param_1 + 0x170) <= uVar2) {
LAB_007a2110:
      local_38 = *(long *)(param_1 + 0x160) + uVar2 * 8;
      FUN_007a31a0(auStack_40,param_1 + 0x120,&local_38,1,&local_48);
      return;
    }
  }
  lVar3 = *(long *)(param_1 + 0x160);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    *(undefined8 *)(lVar3 + uVar2 * 8) = local_48;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 1;
    return;
  }
LAB_007a2138:
                    /* WARNING: Subroutine does not return */
  abort();
}


