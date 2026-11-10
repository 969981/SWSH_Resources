/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014be9e0; name: FUN_014be9e0
 */


void FUN_014be9e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_0272a330;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[9] = (long)(puVar2 + 0x48);
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)plVar5;
  plVar7 = param_1 + 0xb;
  *plVar7 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x38,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_01992930(plVar4);
  puVar1 = PTR_DAT_0272a308;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[3] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = -0xffffff01000000;
  *(undefined4 *)((long)plVar4 + 0x24) = 1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar6 = (long *)*plVar7;
  *plVar7 = (long)plVar4;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],plVar6,param_1[0xd],param_1[0xe]);
  }
  param_1[0xc] = (long)plVar5;
  param_1[0xd] = 0x38;
  param_1[0xe] = 8;
  return;
}


