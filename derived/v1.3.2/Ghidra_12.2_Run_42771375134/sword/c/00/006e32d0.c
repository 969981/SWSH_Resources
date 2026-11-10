/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e32d0; name: FUN_006e32d0
 */


void FUN_006e32d0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[2] = lVar2;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  uVar4 = param_1[1];
  param_1[6] = lVar2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  if (uVar4 < 8) {
    uVar3 = 8;
    goto LAB_006e3364;
  }
  if (uVar4 != 8) {
    if ((uVar4 - 1 & uVar4) == 0) {
      uVar3 = 8;
      if (8 < uVar4) goto LAB_006e3364;
    }
    else {
      uVar3 = std::__next_prime(0);
      if (uVar3 < 9) {
        uVar3 = 8;
      }
      if (uVar3 < uVar4) {
LAB_006e3364:
        FUN_0010e4d0(param_1,uVar3);
        return;
      }
    }
  }
  return;
}


