/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecb1a0; name: FUN_00ecb1a0
 */


void FUN_00ecb1a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  puVar1 = PTR_DAT_02720358 + 0x10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)plVar5;
  param_1[9] = -0x340d631b7bddd9bb;
  param_1[10] = 0;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x18,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_008932d0(lVar3);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar6 = (long *)param_1[0xb];
  param_1[0xb] = lVar3;
  if (plVar6 != (long *)0x0) {
    if (*plVar6 != 0) {
      (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
      *plVar6 = 0;
    }
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],plVar6,param_1[0xd],param_1[0xe]);
  }
  param_1[0xc] = (long)plVar5;
  param_1[0xd] = 0x18;
  param_1[0xe] = 8;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  return;
}


