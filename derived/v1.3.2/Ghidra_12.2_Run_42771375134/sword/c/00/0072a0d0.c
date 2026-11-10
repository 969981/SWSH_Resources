/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072a0d0; name: FUN_0072a0d0
 */


void FUN_0072a0d0(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar4 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar7 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_02715bc0;
  *param_1 = (long)(PTR_DAT_02715bc0 + 0x10);
  param_1[1] = lVar7;
  param_1[9] = (long)(puVar2 + 0x50);
  FUN_006cee90((long)param_1 + 0x5c,1,0);
  param_1[0xd] = 0;
  param_1[0xe] = *param_2;
  param_1[0xf] = param_2[1];
  param_1[0x10] = param_2[2];
  lVar5 = param_2[3];
  param_1[0x11] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  plVar1 = param_1 + 0xea;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar2 = PTR_DAT_02710810 + 0x10;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)((long)param_1 + 0x2cc) = 0x3f;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = (long)puVar2;
  param_1[0x7c] = 0;
  *(undefined4 *)((long)param_1 + 0x3ec) = 0x3f;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = (long)puVar2;
  param_1[0xa0] = 0;
  *(undefined4 *)((long)param_1 + 0x50c) = 0x3f;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = (long)puVar2;
  param_1[0xc4] = 0;
  *(undefined4 *)((long)param_1 + 0x62c) = 0x3f;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = (long)puVar2;
  param_1[0xe8] = 0;
  *(undefined4 *)((long)param_1 + 0x74c) = 0x3f;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0x3fffffffff;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc5) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe9) = 0xffffffff;
  param_1[0x12] = (long)puVar2;
  param_1[0x13] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = (long)puVar2;
  param_1[0x37] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  param_1[0xed] = lVar5;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xef) = 0;
  FUN_019a42d0(param_1 + 0xf0);
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  FUN_019a4740(param_1 + 0xfe);
  *(undefined8 *)((long)param_1 + 0x844) = 0;
  *(undefined8 *)((long)param_1 + 0x83c) = 0;
  *(undefined8 *)((long)param_1 + 0x834) = 0;
  *(undefined8 *)((long)param_1 + 0x82c) = 0;
  *(undefined8 *)((long)param_1 + 0x824) = 0;
  puVar3 = (undefined8 *)((long)param_1 + 0x80c);
  *puVar3 = 0;
  *(undefined8 *)((long)param_1 + 0x81c) = 0;
  *(undefined8 *)((long)param_1 + 0x814) = 0;
  FUN_019a44e0(param_1 + 0x10a);
  *(undefined2 *)(param_1 + 0x11d) = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)((long)param_1 + 0x8ea) = 1;
  FUN_0199c030(param_1 + 0xf6);
  *(undefined4 *)(param_1 + 0xf6) = 0x3020002;
  *(ushort *)((long)param_1 + 0x7b4) = *(ushort *)((long)param_1 + 0x7b4) & 0xfff0 | 10;
  puVar4 = PTR_DAT_027155e8;
  FUN_019a42f0(param_1 + 0xf0,PTR_DAT_027155e8,param_1 + 0xf6);
  FUN_0199c0f0(puVar3);
  *(ushort *)(param_1 + 0x102) = *(ushort *)(param_1 + 0x102) | 3;
  FUN_019a4760(param_1 + 0xfe,puVar4,puVar3);
  FUN_0199c080(param_1 + 0x115);
  FUN_0199c0b0(param_1 + 0x10f);
  *(undefined1 *)(param_1 + 0x10f) = 1;
  param_1[0x112] = (long)(param_1 + 0x115);
  lVar5 = *plVar1;
  if ((ulong)((param_1[0xec] - lVar5 >> 4) * -0x1084210842108421) < param_3) {
    lVar8 = param_1[0xeb];
    lVar7 = (**(code **)(*(long *)param_1[0xed] + 0x10))((long *)param_1[0xed],param_3 * 0x1f0,0x10)
    ;
    if (lVar7 == 0) {
      (**(code **)(*(long *)param_1[0xed] + 0xb8))();
    }
    puVar4 = PTR_DAT_02710860;
    lVar11 = lVar7 + (lVar8 - lVar5 >> 4) * 0x10;
    lVar5 = *plVar1;
    lVar8 = param_1[0xeb];
    lVar9 = lVar11;
    if (lVar8 == lVar5) {
      lVar8 = lVar5;
    }
    else {
      do {
        lVar10 = param_1[0xed];
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
        lVar8 = lVar8 + -0x1f0;
        lVar9 = lVar9 + -0x1f0;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        FUN_0071c9a0(lVar9,lVar8);
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      } while (lVar5 != lVar8);
      lVar5 = param_1[0xeb];
      lVar8 = *plVar1;
    }
    lVar6 = param_1[0xec];
    *plVar1 = lVar9;
    param_1[0xeb] = lVar11;
    param_1[0xec] = lVar7 + param_3 * 0x1f0;
    while (lVar5 != lVar8) {
      lVar5 = lVar5 + -0x1f0;
      FUN_00784490(lVar5);
    }
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0072a60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[0xed] + 0x18))((long *)param_1[0xed],lVar8,lVar6 - lVar8,0x10);
      return;
    }
  }
  return;
}


