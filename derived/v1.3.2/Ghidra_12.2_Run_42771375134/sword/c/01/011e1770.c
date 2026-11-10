/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e1770; name: FUN_011e1770
 */


bool FUN_011e1770(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_02710798;
  if (*(int *)(param_1 + 100) != 1) goto switchD_011e17a8_default;
  switch(*(undefined4 *)(param_1 + 0x60)) {
  case 0:
  case 1:
  case 5:
    goto switchD_011e17a8_caseD_0;
  case 2:
    uVar2 = FUN_0153d370(*(undefined8 *)PTR_DAT_02710798,*(undefined4 *)(param_1 + 0x68));
    break;
  case 3:
    uVar3 = *(undefined8 *)PTR_DAT_02710798;
    goto LAB_011e17f4;
  case 4:
    uVar2 = FUN_0153d450(*(undefined8 *)PTR_DAT_02710798,*(undefined4 *)(param_1 + 0x68));
    break;
  default:
    goto switchD_011e17a8_default;
  }
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)puVar1;
LAB_011e17f4:
    FUN_0153d4c0(uVar3,*(undefined4 *)(param_1 + 0x68));
switchD_011e17a8_caseD_0:
    *(undefined4 *)(param_1 + 100) = 2;
  }
switchD_011e17a8_default:
  return *(int *)(param_1 + 100) != 0;
}


