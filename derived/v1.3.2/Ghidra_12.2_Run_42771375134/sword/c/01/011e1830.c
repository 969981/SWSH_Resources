/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e1830; name: FUN_011e1830
 */


void FUN_011e1830(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_011e1770();
  puVar2 = PTR_DAT_02710798;
  if ((uVar3 & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 4) {
    uVar3 = FUN_0153d450(*(undefined8 *)PTR_DAT_02710798,*(undefined4 *)(param_1 + 0x68));
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_0153d4c0(*(undefined8 *)puVar2,*(undefined4 *)(param_1 + 0x68));
    uVar4 = 5;
  }
  else if (iVar1 == 2) {
    uVar3 = FUN_0153d370(*(undefined8 *)PTR_DAT_02710798,*(undefined4 *)(param_1 + 0x68));
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar4 = 3;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar3 = FUN_0153d1b0(*(undefined8 *)PTR_DAT_02710798,*(undefined4 *)(param_1 + 0x68));
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_0153d300(*(undefined8 *)puVar2,*(undefined4 *)(param_1 + 0x68));
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  return;
}


