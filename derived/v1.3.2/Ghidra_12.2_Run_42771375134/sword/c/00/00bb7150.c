/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb7150; name: FUN_00bb7150
 */


void FUN_00bb7150(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x5cc) - 2U < 3) {
    return;
  }
  if (*(int *)(param_1 + 0x5cc) == 1) {
    iVar3 = 2;
  }
  else {
    iVar3 = 2;
    if (*(int *)(param_1 + 0x618) != 1) {
      iVar3 = 3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x61c) + 1;
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar1 / iVar3;
  }
  *(int *)(param_1 + 0x61c) = iVar1 - iVar2 * iVar3;
  FUN_00bb4e40(param_1);
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_18 = FUN_016b8190();
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_18);
    return;
  case 1:
    FUN_00bbc160(param_1,&local_18);
    return;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_18);
    return;
  default:
    FUN_00bbcd10(param_1,&local_18);
    return;
  }
}


