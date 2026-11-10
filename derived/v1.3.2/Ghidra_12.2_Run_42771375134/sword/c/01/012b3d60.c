/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b3d60; name: FUN_012b3d60
 */


void FUN_012b3d60(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_48;
  
  local_48 = *param_3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_012b2fa0(param_1,param_2,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  puVar2 = PTR_DAT_02727428;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x53] = 0;
  param_1[9] = (long)(puVar2 + 0xa8);
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x50) = 10;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x250,0x10);
    if (lVar4 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    plVar1 = param_1 + 0x51;
    FUN_014c5f50(lVar4,0x12,0x40,param_2);
    *(long **)(lVar4 + 8) = param_2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x250;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      *plVar1 = 0;
    }
    *plVar1 = lVar4;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_0077d050(lVar4,0x20);
      *(long **)(lVar4 + 8) = param_2;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (param_1[0x52] != 0) {
        (**(code **)(*(long *)(param_1[0x52] + 0x48) + 0x18))();
        param_1[0x52] = 0;
      }
      param_1[0x52] = lVar4;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
        if (lVar4 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_0077d050(lVar4,0x20);
        *(long **)(lVar4 + 8) = param_2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x80;
        *(undefined8 *)(lVar4 + 0x20) = 8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (param_1[0x53] != 0) {
          (**(code **)(*(long *)(param_1[0x53] + 0x48) + 0x18))();
          param_1[0x53] = 0;
        }
        param_1[0x53] = lVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


