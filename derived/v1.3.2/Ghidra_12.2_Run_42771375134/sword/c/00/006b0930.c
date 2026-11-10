/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b0930; name: FUN_006b0930
 */


void FUN_006b0930(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar3 = PTR_DAT_02715180;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_02715180 + 0x10);
  param_1[1] = lVar6;
  param_1[9] = (long)(puVar3 + 0x50);
  param_1[10] = (long)(puVar3 + 0x170);
  param_1[0xb] = 0;
  plVar7 = *(long **)(*(long *)PTR_DAT_02715188 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x68,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[7] = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  nn::os::GetTlsValue(*(undefined4 *)puVar1);
  puVar1 = PTR_DAT_02715190 + 0x10;
  plVar5[9] = (long)(PTR_DAT_02715190 + 0x48);
  *plVar5 = (long)puVar1;
  plVar5[1] = (long)plVar7;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = (long)(param_1 + 10);
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x68;
  plVar5[4] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  param_1[0xb] = (long)plVar5;
  return;
}


