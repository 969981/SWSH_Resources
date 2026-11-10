/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a26a60; name: FUN_00a26a60
 */


void FUN_00a26a60(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint local_78;
  uint uStack_74;
  uint local_6c;
  undefined1 auStack_68 [8];
  long local_58;
  
  puVar3 = PTR_DAT_02710798;
  *(undefined8 *)(param_1 + 0x428) = 0;
  lVar7 = *(long *)(*(long *)puVar3 + 0x1d8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_6c = 0;
  lVar5 = FUN_015200a0(lVar7,1,&local_6c);
  puVar3 = PTR_DAT_02710860;
  if (local_6c != 0) {
    uVar9 = 0;
    do {
      uVar2 = *(uint *)(lVar5 + uVar9 * 4);
      uVar1 = uVar2 & 0x7fff;
      uVar2 = uVar2 >> 0xf & 0x7fff;
      iVar4 = FUN_00888d50(uVar1);
      if (iVar4 != 0 && uVar2 != 0) {
        uVar8 = *(ulong *)(param_1 + 0x428);
        local_78 = uVar1;
        uStack_74 = uVar2;
        if (uVar8 < *(ulong *)(param_1 + 0x430)) {
          lVar10 = *(long *)(param_1 + 0x420);
          uVar11 = *(undefined8 *)(param_1 + 0x3e0);
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          *(ulong *)(lVar10 + uVar8 * 8) = CONCAT44(uStack_74,local_78);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          *(long *)(param_1 + 0x428) = *(long *)(param_1 + 0x428) + 1;
        }
        else {
          local_58 = *(long *)(param_1 + 0x420) + uVar8 * 8;
          FUN_00a2cc00(auStack_68,param_1 + 0x3e0,&local_58,1,&local_78);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_6c);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


