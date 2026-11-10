/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcc8a0; name: FUN_00bcc8a0
 */


void FUN_00bcc8a0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_0271b730;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = (long)param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar4;
  param_1[0xf] = 0;
  param_1[9] = (long)(puVar1 + 0x48);
  plVar6 = param_1 + 0xc;
  *plVar6 = 0;
  puVar1 = PTR_DAT_02710848;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar3 = *(long *)(*(long *)puVar1 + 0x90);
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*plVar6 != 0) {
    (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
    *plVar6 = 0;
  }
  puVar1 = PTR_DAT_02710798;
  *plVar6 = lVar3;
  lVar3 = *(long *)(*(long *)puVar1 + 0x220);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  param_1[0xd] = lVar3;
  lVar3 = *(long *)(*(long *)puVar1 + 0x228);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = lVar3;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00866220(lVar4,param_2,0,0,0);
  *(long **)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0xb8;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  param_1[0xf] = lVar4;
  FUN_008664a0(lVar4,(long)param_1 + 0x84);
  return;
}


