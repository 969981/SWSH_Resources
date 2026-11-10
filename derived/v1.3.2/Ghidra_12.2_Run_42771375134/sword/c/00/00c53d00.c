/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c53d00; name: FUN_00c53d00
 */


undefined4 FUN_00c53d00(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 2;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x8c) = 1;
    nn::os::GetSystemTick();
    uVar2 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    break;
  case 1:
    nn::os::GetSystemTick();
    lVar3 = nn::os::ConvertToTimeSpan();
    lVar3 = lVar3 - *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 0xa0) = lVar3;
    if (25.0 < (double)lVar3 / DAT_01cd50a0) {
      *(undefined4 *)(param_1 + 0x8c) = 5;
    }
    uVar4 = FUN_011fcf90(*(undefined8 *)PTR_DAT_02718f20);
    if ((uVar4 & 1) == 0) {
      uVar1 = FUN_00c53df0(param_1);
      *(undefined4 *)(param_1 + 0x8c) = uVar1;
    }
    break;
  case 4:
    goto switchD_00c53d30_caseD_4;
  case 5:
    return 3;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x90);
switchD_00c53d30_caseD_4:
  return uVar1;
}


