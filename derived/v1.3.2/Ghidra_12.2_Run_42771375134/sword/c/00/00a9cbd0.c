/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9cbd0; name: FUN_00a9cbd0
 */


void FUN_00a9cbd0(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  long local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  undefined8 local_68;
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  
  FUN_00a5fbd0();
  *(undefined4 *)((long)param_1 + 0x16fc) = 1;
  *(undefined4 *)(param_1 + 0x2e4) = 1;
  (**(code **)(*param_1 + 0x810))(param_1,1);
  uVar2 = FUN_00878a80();
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  iVar3 = (**(code **)(*param_1 + 0x870))(param_1);
  if (iVar3 == 1) {
    param_1[0x2e0] = 0x300000003;
    (**(code **)(*param_1 + 0x810))(param_1,3);
    uVar2 = FUN_00878a80();
    *(undefined4 *)((long)param_1 + 0x1744) = uVar2;
    uVar4 = (**(code **)(*param_1 + 0x890))(param_1);
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)((long)param_1 + 0x1724) = 3;
    }
  }
  local_70 = 0;
  local_68 = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  if (iVar3 == 1) {
    uVar4 = (**(code **)(*param_1 + 0x890))(param_1);
    if ((uVar4 & 1) == 0) {
      if ((param_2 & 1) == 0) {
        FUN_00a9d760(&local_a0,"bin/battle/waza/sequence/ee401.bseq");
      }
      else {
        FUN_00a9d760(&local_a0,"bin/battle/waza/sequence/ee407.bseq");
      }
    }
    else {
      lVar5 = (**(code **)(*param_1 + 0xa70))(param_1);
      if (lVar5 != 0) {
        pbVar6 = *(byte **)(lVar5 + 8);
        bVar1 = *pbVar6;
        if (bVar1 != 0) {
          uVar4 = 0xcbf29ce484222645;
          do {
            pbVar6 = pbVar6 + 1;
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar6;
          } while (bVar1 != 0);
          if (uVar4 == 0x19e9a8850160c7ae) {
            FUN_00a9d760(&local_a0,"bin/battle/waza/sequence/ee409.bseq");
            goto joined_r0x00a9ceac;
          }
        }
      }
      lVar5 = (**(code **)(*param_1 + 0xa70))(param_1);
      if (lVar5 != 0) {
        pbVar6 = *(byte **)(lVar5 + 8);
        bVar1 = *pbVar6;
        if (bVar1 != 0) {
          uVar4 = 0xcbf29ce484222645;
          do {
            pbVar6 = pbVar6 + 1;
            uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar6;
          } while (bVar1 != 0);
          if (uVar4 == 0x19e9a7850160c5fb) {
            FUN_00a9d760(&local_a0,"bin/battle/waza/sequence/ee411.bseq");
            goto joined_r0x00a9ceac;
          }
        }
      }
      if ((param_2 & 1) == 0) {
        FUN_00a9d760(&local_a0,"bin/battle/waza/sequence/ee402.bseq");
      }
      else {
        FUN_00a9d760(&local_a0,"bin/battle/waza/sequence/ee408.bseq");
      }
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_00a9d760(&local_a0,"bin/battle/waza/sequence/ee400.bseq");
  }
  else {
    FUN_00a9d760(&local_a0,"bin/battle/waza/sequence/ee406.bseq");
  }
joined_r0x00a9ceac:
  if ((local_58 != 0) && (local_70 != 0)) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  local_70 = 0;
  local_68 = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_50 = local_80;
  local_68 = local_98;
  local_60 = local_90;
  local_80 = 0;
  local_58 = local_88;
  local_48 = local_78;
  if (local_88 == 0) {
    local_70 = local_a0;
  }
  else {
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    local_70 = local_a0;
  }
  local_a0 = 0;
  local_98 = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  FUN_00a79ee0(param_1,&local_70,0);
  lVar5 = FUN_00aa4f60(*(undefined8 *)(param_1[0xb9] + 0x38));
  FUN_00a08cf0(lVar5 + 0x2f8,1,param_1);
  if ((local_58 != 0) && (local_70 != 0)) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  local_70 = 0;
  local_68 = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


