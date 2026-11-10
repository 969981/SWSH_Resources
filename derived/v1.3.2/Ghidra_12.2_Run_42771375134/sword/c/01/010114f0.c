/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010114f0; name: FUN_010114f0
 */


void FUN_010114f0(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xf0,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar2 = PTR_DAT_02710a18;
  lVar8 = *param_3;
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[2] = 0;
  plVar3[3] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  puVar1 = PTR_DAT_02723570;
  plVar6 = (long *)0x0;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x80) == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = *(long **)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  plVar3[0x10] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = (long)plVar6;
  plVar3[10] = (long)plVar6;
  plVar3[0xb] = 0x1fffffffffffffff;
  plVar3[0x12] = (long)plVar6;
  plVar3[0x13] = 0x1fffffffffffffff;
  plVar3[0x18] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,0x2000,8);
  FUN_01011850(plVar3 + 0x12,uVar7,0x400,plVar3[0x1a] + plVar3[0x1b] * 8,0,0);
  plVar3[9] = lVar8;
  *param_1 = plVar3;
  param_1[1] = param_2;
  param_1[2] = 0xf0;
  param_1[3] = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return;
}


