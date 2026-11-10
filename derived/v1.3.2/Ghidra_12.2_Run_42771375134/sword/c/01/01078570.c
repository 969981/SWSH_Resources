/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01078570; name: FUN_01078570
 */


void FUN_01078570(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar7;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = *param_3;
  *param_3 = 0;
  *param_2 = lVar3;
  param_2[1] = param_3[1];
  lVar3 = param_3[2];
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[2] = lVar3;
  param_2[3] = 0;
  lVar4 = param_3[5];
  param_3[1] = 0;
  param_2[5] = lVar4;
  param_2[6] = param_3[6];
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  lVar3 = param_3[9];
  param_2[9] = lVar3;
  *(int *)(param_2 + 10) = (int)param_3[10];
  if (lVar3 != 0) {
    uVar6 = param_2[1];
    uVar5 = *(ulong *)(lVar4 + 8);
    if ((uVar6 - 1 & uVar6) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(*param_2 + uVar5 * 8) = param_2 + 5;
    param_3[5] = 0;
    param_3[9] = 0;
  }
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return;
}


