/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00883c20; name: FUN_00883c20
 */


void FUN_00883c20(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
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
  puVar2 = PTR_DAT_02717410;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar6 = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x98);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  plVar5 = param_1 + 0xb;
  do {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
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
    FUN_00866220(lVar4,param_2,0,1,0);
    *(long **)(lVar4 + 8) = param_2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0xb8;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*plVar5 != 0) {
      (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
      *plVar5 = 0;
    }
    uVar6 = uVar6 + 1;
    *plVar5 = lVar4;
    plVar5 = plVar5 + 1;
  } while (uVar6 < 6);
  return;
}


