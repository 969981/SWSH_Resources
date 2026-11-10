/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e172e0; name: FUN_00e172e0
 */


void FUN_00e172e0(undefined8 *param_1,long *param_2,long param_3,int *param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x110,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  *plVar5 = (long)(PTR_DAT_0271efa8 + 0x10);
  plVar5[1] = (long)param_4;
  plVar5[2] = *param_5;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x19) {
    lVar8 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xc];
    lVar8 = 0;
    if (uVar7 != 0) {
      lVar8 = *(long *)((long)param_4 + uVar7);
    }
  }
  plVar5[3] = lVar8;
  *(undefined4 *)(plVar5 + 4) = 0;
  puVar2 = PTR_DAT_0271efb0;
  *(undefined2 *)((long)plVar5 + 0x24) = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[5] = 0;
  plVar5[6] = (long)(puVar2 + 0x10);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar8 = FUN_0075ecb0();
  }
  plVar5[0xb] = lVar8;
  plVar5[0xc] = 0;
  *(undefined4 *)(plVar5 + 0xd) = 0;
  puVar1 = PTR_DAT_0271f300;
  plVar5[0xe] = 0;
  puVar2 = PTR_LAB_0271f308;
  *(undefined2 *)(plVar5 + 0xf) = 0;
  puVar3 = PTR_LAB_0271f310;
  plVar5[0x10] = param_3;
  puVar4 = PTR_LAB_0271f318;
  plVar5[0x16] = (long)plVar5;
  plVar5[0x12] = (long)puVar2;
  plVar5[0x13] = (long)puVar3;
  puVar2 = PTR_LAB_0271f320;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[0x14] = (long)puVar4;
  plVar5[0x15] = (long)puVar2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  *param_1 = plVar5;
  param_1[1] = param_2;
  param_1[2] = 0x110;
  param_1[3] = 0x10;
  return;
}


