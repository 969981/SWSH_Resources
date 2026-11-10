/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072dec0; name: FUN_0072dec0
 */


void FUN_0072dec0(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar3 = PTR_DAT_02715bc8;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = lVar5;
  param_1[9] = (long)(puVar3 + 0x48);
  param_1[0xc] = (long)(PTR_DAT_02715af8 + 0x10);
  lVar4 = *(long *)(param_2 + 8);
  param_1[0xd] = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x12);
    lVar4 = *(long *)(param_2 + 0x10);
    lVar5 = *(long *)(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 0x28);
    param_1[0x10] = *(long *)(param_2 + 0x20);
    param_1[0x11] = lVar1;
    param_1[0xe] = lVar4;
    param_1[0xf] = lVar5;
  }
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x22);
    lVar4 = *(long *)(param_2 + 0x90);
    lVar5 = *(long *)(param_2 + 0x98);
    lVar1 = *(long *)(param_2 + 0xa8);
    param_1[0x20] = *(long *)(param_2 + 0xa0);
    param_1[0x21] = lVar1;
    param_1[0x1e] = lVar4;
    param_1[0x1f] = lVar5;
  }
  puVar3 = PTR_DAT_02715b00;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0xc] = (long)(puVar3 + 0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    if (lVar4 != 0) goto LAB_0072e014;
  }
  lVar4 = FUN_0075ecb0();
LAB_0072e014:
  param_1[0x31] = lVar4;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  param_1[0x37] = lVar4;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  FUN_0072e0e0(param_1 + 0x2e,
               *(long *)(*(long *)(param_2 + 8) + 0x268) - *(long *)(*(long *)(param_2 + 8) + 0x260)
               >> 5,1);
  lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x2c8) - *(long *)(*(long *)(param_2 + 8) + 0x2c0) >> 3
  ;
  uVar6 = lVar4 * 0x6db6db6db6db6db7;
  uVar7 = param_1[0x35] - param_1[0x34] >> 2;
  if (uVar6 >= uVar7 && uVar6 - uVar7 != 0) {
    FUN_0072e680(param_1 + 0x34,uVar6 - uVar7);
    return;
  }
  if (uVar6 < uVar7) {
    param_1[0x35] = param_1[0x34] + lVar4 * -0x4924924924924924;
  }
  return;
}


