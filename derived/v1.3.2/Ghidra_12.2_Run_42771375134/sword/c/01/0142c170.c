/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142c170; name: FUN_0142c170
 */


void FUN_0142c170(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long local_88;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 auStack_60 [8];
  long local_58;
  
  if (*(long *)(param_1 + 0x650) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0142c3d0(&local_78);
  uVar9 = *(undefined8 *)(param_1 + 8);
  local_80 = uVar9;
  local_70 = FUN_0132bb10(local_78);
  lVar6 = FUN_0142ce80(&local_58,uVar9,&local_70,&local_80);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x658) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x658) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x658) = 0;
  }
  *(long *)(param_1 + 0x658) = lVar6;
  puVar2 = PTR_DAT_02710860;
  if (*(int *)(lVar6 + 0xf0) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x650);
    local_88 = lVar6;
  }
  else {
    uVar10 = 0;
    do {
      uVar7 = FUN_0132bb30(local_78,uVar10);
      if ((param_2 != uVar10) && ((uVar7 & 1) != 0)) {
        lVar6 = *(long *)(param_1 + 0x658);
        local_68 = 0;
        uVar7 = *(ulong *)(lVar6 + 0xe8);
        local_70 = uVar10;
        if (uVar7 < *(ulong *)(lVar6 + 0xf0)) {
          lVar11 = *(long *)(lVar6 + 0xe0);
          uVar9 = *(undefined8 *)(lVar6 + 0xa0);
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar9;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          puVar1 = (ulong *)(lVar11 + uVar7 * 0x10);
          *puVar1 = local_70;
          puVar1[1] = CONCAT71(uStack_67,local_68);
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          *(long *)(lVar6 + 0xe8) = *(long *)(lVar6 + 0xe8) + 1;
        }
        else {
          local_58 = *(long *)(lVar6 + 0xe0) + uVar7 * 0x10;
          FUN_0142d8c0(auStack_60,lVar6 + 0xa0,&local_58,1,&local_70);
        }
      }
      local_88 = *(long *)(param_1 + 0x658);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(local_88 + 0xf0));
    uVar9 = *(undefined8 *)(param_1 + 0x650);
    if (local_88 == 0) goto LAB_0142c2fc;
  }
  (**(code **)(*(long *)(local_88 + 0x48) + 0x10))((long *)(local_88 + 0x48));
LAB_0142c2fc:
  FUN_016c2cb0(uVar9,&local_88);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  FUN_016bef00(*(undefined8 *)(param_1 + 0x650));
  uVar9 = *(undefined8 *)(param_1 + 0x650);
  uVar3 = FUN_016c0030(uVar9);
  FUN_016bff10(uVar9,uVar3,0);
  iVar4 = FUN_016c0010(*(undefined8 *)(param_1 + 0x650));
  iVar5 = FUN_016c0020(*(undefined8 *)(param_1 + 0x650));
  if (*(uint *)(*(long *)(param_1 + 0x658) + 0xe8) <= (uint)(iVar5 + iVar4)) {
    FUN_016bff10(*(undefined8 *)(param_1 + 0x650),0,0);
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


