/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b9600; name: FUN_007b9600
 */


void FUN_007b9600(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_50;
  undefined1 auStack_48 [8];
  long local_38;
  
  local_50 = param_1 + 0x1e0;
  uVar3 = *(ulong *)(param_1 + 0x98);
  lVar2 = param_1 + 0x50;
  if (uVar3 < *(ulong *)(param_1 + 0xa0)) {
    lVar4 = *(long *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) goto LAB_007b97f0;
    *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar5;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    *(long *)(lVar4 + uVar3 * 8) = local_50;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    uVar3 = *(long *)(param_1 + 0x98) + 1;
    *(ulong *)(param_1 + 0x98) = uVar3;
  }
  else {
    local_38 = *(long *)(param_1 + 0x90) + uVar3 * 8;
    FUN_007ba220(auStack_48,lVar2,&local_38,1,&local_50);
    uVar3 = *(ulong *)(param_1 + 0x98);
  }
  local_50 = param_1 + 0x110;
  if (uVar3 < *(ulong *)(param_1 + 0xa0)) {
    lVar4 = *(long *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) goto LAB_007b97f0;
    *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar5;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    *(long *)(lVar4 + uVar3 * 8) = local_50;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    uVar3 = *(long *)(param_1 + 0x98) + 1;
    *(ulong *)(param_1 + 0x98) = uVar3;
  }
  else {
    local_38 = *(long *)(param_1 + 0x90) + uVar3 * 8;
    FUN_007ba220(auStack_48,lVar2,&local_38,1,&local_50);
    uVar3 = *(ulong *)(param_1 + 0x98);
  }
  local_50 = param_1 + 0x130;
  if (uVar3 < *(ulong *)(param_1 + 0xa0)) {
    lVar1 = *(long *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_007b97f0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *(long *)(lVar1 + uVar3 * 8) = local_50;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  }
  else {
    local_38 = *(long *)(param_1 + 0x90) + uVar3 * 8;
    FUN_007ba220(auStack_48,lVar2,&local_38,1,&local_50);
  }
  return;
}


