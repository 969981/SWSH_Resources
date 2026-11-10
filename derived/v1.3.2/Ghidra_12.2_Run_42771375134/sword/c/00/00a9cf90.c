/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9cf90; name: FUN_00a9cf90
 */


void FUN_00a9cf90(long *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  long local_90;
  undefined8 local_88;
  undefined1 *local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00a5fbd0();
  iVar2 = (**(code **)(*param_1 + 0x870))(param_1);
  if (iVar2 == 2) {
    *(undefined4 *)((long)param_1 + 0x16fc) = 0;
    (**(code **)(*param_1 + 0x810))(param_1,0);
    uVar3 = FUN_00878a80();
    *(undefined4 *)(param_1 + 0x2e8) = uVar3;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    FUN_00a9d760(&local_90,"bin/battle/waza/sequence/ee403.bseq");
  }
  else if (iVar2 == 1) {
    *(undefined8 *)((long)param_1 + 0x16fc) = 0x200000000;
    *(undefined4 *)((long)param_1 + 0x1704) = 2;
    (**(code **)(*param_1 + 0x810))(param_1,0);
    uVar3 = FUN_00878a80();
    *(undefined4 *)(param_1 + 0x2e8) = uVar3;
    (**(code **)(*param_1 + 0x810))(param_1,2);
    uVar3 = FUN_00878a80();
    *(undefined4 *)((long)param_1 + 0x1744) = uVar3;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    uVar5 = (**(code **)(*param_1 + 0x8a0))(param_1);
    if ((uVar5 & 1) == 0) {
      FUN_00a9d760(&local_90,"bin/battle/waza/sequence/ee404.bseq");
    }
    else {
      *(undefined4 *)((long)param_1 + 0x1724) = 2;
      lVar4 = (**(code **)(*param_1 + 0xa70))(param_1);
      if (lVar4 != 0) {
        pbVar6 = *(byte **)(lVar4 + 8);
        bVar1 = *pbVar6;
        if (bVar1 != 0) {
          uVar5 = 0xcbf29ce484222645;
          do {
            pbVar6 = pbVar6 + 1;
            uVar5 = (uVar5 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar6;
          } while (bVar1 != 0);
          if (uVar5 == 0x19e9a7850160c5fb) {
            FUN_00a9d760(&local_90,"bin/battle/waza/sequence/ee412.bseq");
            goto joined_r0x00a9d2a4;
          }
        }
      }
      FUN_00a9d760(&local_90,"bin/battle/waza/sequence/ee405.bseq");
    }
  }
  else {
    if (iVar2 != 0) goto LAB_00a9d3d0;
    *(undefined4 *)((long)param_1 + 0x16fc) = 0;
    (**(code **)(*param_1 + 0x810))(param_1,0);
    uVar3 = FUN_00878a80();
    *(undefined4 *)(param_1 + 0x2e8) = uVar3;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    FUN_00a9d760(&local_90,"bin/battle/waza/sequence/ee403.bseq");
    if ((local_48 != 0) && (local_60 != 0)) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    local_60 = 0;
    local_58 = 0xcbf29ce484222645;
    local_50 = &DAT_01d38550;
    local_48 = 0;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
    local_40 = local_70;
    local_58 = local_88;
    local_50 = local_80;
    local_70 = 0;
    local_48 = local_78;
    local_38 = local_68;
    if (local_78 == 0) {
      local_60 = local_90;
    }
    else {
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      }
      local_60 = local_90;
    }
    local_90 = 0;
    local_88 = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    lVar4 = FUN_009c5ff0(param_1);
    if (lVar4 == 0) goto LAB_00a9d3d0;
    uVar5 = FUN_008f8930();
    if ((uVar5 & 1) == 0) {
      FUN_00a9d760(&local_90,"bin/battle/waza/sequence/ee420.bseq");
      if ((local_48 != 0) && (local_60 != 0)) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      }
      local_60 = 0;
      local_58 = 0xcbf29ce484222645;
      local_50 = &DAT_01d38550;
      local_48 = 0;
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      }
      local_40 = local_70;
      local_58 = local_88;
      local_50 = local_80;
      local_70 = 0;
      local_48 = local_78;
      local_38 = local_68;
      if (local_78 == 0) {
        local_60 = local_90;
      }
      else {
        if (local_60 != 0) {
          (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        }
        local_60 = local_90;
      }
      local_90 = 0;
      local_88 = 0xcbf29ce484222645;
      local_80 = &DAT_01d38550;
      local_78 = 0;
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
    }
    uVar5 = FUN_008f8c40(lVar4);
    if ((uVar5 & 1) == 0) goto LAB_00a9d3d0;
    FUN_00a9d760(&local_90,"bin/battle/waza/sequence/ee410.bseq");
  }
joined_r0x00a9d2a4:
  if ((local_48 != 0) && (local_60 != 0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = local_70;
  local_58 = local_88;
  local_50 = local_80;
  local_70 = 0;
  local_48 = local_78;
  local_38 = local_68;
  if (local_78 == 0) {
    local_60 = local_90;
  }
  else {
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    local_60 = local_90;
  }
  local_90 = 0;
  local_88 = 0xcbf29ce484222645;
  local_80 = &DAT_01d38550;
  local_78 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
LAB_00a9d3d0:
  FUN_00a79ee0(param_1,&local_60,0);
  lVar4 = FUN_00aa4f60(*(undefined8 *)(param_1[0xb9] + 0x38));
  FUN_00a08cf0(lVar4 + 0x2f8,2,param_1);
  if ((local_48 != 0) && (local_60 != 0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


