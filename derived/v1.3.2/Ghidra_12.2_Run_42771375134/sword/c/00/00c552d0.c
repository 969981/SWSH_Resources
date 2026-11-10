/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c552d0; name: FUN_00c552d0
 */


void FUN_00c552d0(long *param_1,undefined4 param_2,long *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  
  local_48 = *param_4;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = *param_5;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN_00c55520(param_1,param_2,param_3,&local_48,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  puVar1 = PTR_DAT_0271bdd0;
  param_1[0x18] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x98);
  param_1[10] = (long)(puVar1 + 0x108);
  lVar5 = *(long *)(param_1[0x10] + 0x350);
  if (lVar5 != 0) {
    local_70 = -0x106122acd047a43d;
    local_68 = "Waist";
    local_60 = 5;
    local_58 = 0;
    iVar2 = FUN_00722fb0(lVar5,&local_70);
    if (iVar2 < 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x1b8) + (long)iVar2 * 0x130;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_1[0x10] + 0x58);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_3;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*param_3 + 0x10))(param_3,0xa8,8);
      if (lVar4 == 0) {
        (**(code **)(*param_3 + 0xb8))(param_3);
      }
      local_70 = lVar6;
      FUN_00c56c10(lVar4,param_3,&local_70,lVar5);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      *(long **)(lVar4 + 8) = param_3;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0xa8;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (param_1[0x18] != 0) {
        (**(code **)(*(long *)(param_1[0x18] + 0x48) + 0x18))();
        param_1[0x18] = 0;
      }
      param_1[0x18] = lVar4;
    }
  }
  return;
}


