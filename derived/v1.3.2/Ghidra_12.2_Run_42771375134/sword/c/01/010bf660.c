/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bf660; name: FUN_010bf660
 */


void FUN_010bf660(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long local_70;
  undefined4 local_64;
  uint local_60;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  long local_48;
  
  local_64 = 0x38;
  local_48 = *(long *)(param_1 + 8);
  lVar3 = FUN_0166fe50(auStack_58,local_48,&local_64,&local_48);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f0) = 0;
  }
  *(long *)(param_1 + 0x5f0) = lVar3;
  puVar1 = PTR_DAT_02710860;
  uVar5 = *(ulong *)(lVar3 + 0xf0);
  if ((int)uVar5 == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x5e8);
    local_70 = lVar3;
  }
  else {
    uVar7 = 0;
    do {
      uStack_5c = uStack_5c & 0xffffff00;
      uVar8 = *(ulong *)(lVar3 + 0xe8);
      local_60 = uVar7;
      if (uVar8 < uVar5) {
        lVar9 = *(long *)(lVar3 + 0xe0);
        uVar10 = *(undefined8 *)(lVar3 + 0xa0);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *(ulong *)(lVar9 + uVar8 * 8) = CONCAT44(uStack_5c,local_60);
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *(long *)(lVar3 + 0xe8) = *(long *)(lVar3 + 0xe8) + 1;
      }
      else {
        local_48 = *(long *)(lVar3 + 0xe0) + uVar8 * 8;
        FUN_008caa00(auStack_58,lVar3 + 0xa0,&local_48,1,&local_60);
      }
      lVar3 = *(long *)(param_1 + 0x5f0);
      uVar5 = *(ulong *)(lVar3 + 0xf0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)uVar5);
    uVar10 = *(undefined8 *)(param_1 + 0x5e8);
    local_70 = lVar3;
    if (lVar3 == 0) goto LAB_010bf7b4;
  }
  (**(code **)(*(long *)(local_70 + 0x48) + 0x10))((long *)(local_70 + 0x48));
LAB_010bf7b4:
  FUN_016c2cb0(uVar10,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x5e8),0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5e8),0);
  FUN_016bef00(*(undefined8 *)(param_1 + 0x5e8));
  (**(code **)(**(long **)(param_1 + 0x5e8) + 0x50))();
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5e8),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5d8),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5e0),1);
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar3 == 0) {
    uVar2 = FUN_01524de0(0);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar2 = FUN_01524de0(lVar3);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_016bff10(*(undefined8 *)(param_1 + 0x5e8),uVar2,0);
  return;
}


