/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a49050; name: FUN_00a49050
 */


void FUN_00a49050(undefined8 *param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_3 * 0xd8;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,lVar7,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  if (param_3 != 0) {
    puVar1 = PTR_DAT_02718e98 + 0x10;
    plVar4 = plVar2;
    do {
      lVar5 = *param_4;
      lVar6 = *param_5;
      param_3 = param_3 + -1;
      plVar4[0xc] = 0;
      plVar4[0xd] = 0;
      plVar4[0x10] = 0;
      plVar4[10] = 0;
      plVar4[0xb] = 0;
      plVar4[8] = 0;
      plVar4[9] = 0;
      *plVar4 = (long)puVar1;
      plVar4[1] = lVar5;
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[2] = lVar6;
      plVar4[3] = 0;
      plVar4[0xe] = 0;
      plVar4[0xf] = -0x100000000;
      plVar4[0x19] = 0;
      plVar4[0x1a] = 0;
      plVar4[0x17] = 0;
      plVar4[0x18] = 0;
      plVar4[0x15] = 0;
      plVar4[0x16] = 0;
      plVar4[0x13] = 0;
      plVar4[0x14] = 0;
      plVar4[0x11] = 0;
      plVar4[0x12] = 0;
      plVar4 = plVar4 + 0x1b;
    } while (param_3 != 0);
  }
  *param_1 = plVar2;
  param_1[1] = param_2;
  param_1[2] = lVar7;
  param_1[3] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


