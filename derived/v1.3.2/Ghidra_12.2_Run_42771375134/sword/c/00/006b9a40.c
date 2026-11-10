/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b9a40; name: FUN_006b9a40
 */


void FUN_006b9a40(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  puVar1 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  puVar2 = PTR_DAT_027151d8;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  plVar3[5] = lVar5;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 8) = 0x3f800000;
  puVar1 = PTR_DAT_027151e0;
  *(undefined4 *)(plVar3 + 7) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  *param_1 = plVar3;
  param_1[1] = param_2;
  param_1[2] = 0x48;
  param_1[3] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return;
}


