/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec0430; name: FUN_00ec0430
 */


void FUN_00ec0430(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar3[4] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  puVar1 = PTR_DAT_02710a18 + 0x10;
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *plVar3 = (long)puVar1;
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  puVar2 = PTR_DAT_027202d8;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  plVar3[0x10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = lVar6;
  plVar3[9] = -0x340d631b7bddd9bb;
  plVar3[10] = (long)&DAT_01d38550;
  plVar3[0xd] = -0x340d631b7bddd9bb;
  plVar3[0xe] = -0x340d631b7bddd9bb;
  *(undefined4 *)(plVar3 + 0xf) = 0x23;
  *param_1 = plVar3;
  param_1[1] = param_2;
  param_1[2] = 0x98;
  param_1[3] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return;
}


