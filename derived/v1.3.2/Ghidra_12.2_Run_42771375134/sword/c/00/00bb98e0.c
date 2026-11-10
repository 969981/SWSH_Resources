/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb98e0; name: FUN_00bb98e0
 */


undefined8 FUN_00bb98e0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_18;
  
  uVar2 = FUN_00bd1e90(*(undefined8 *)(param_1 + 0x5f0));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x620) = 1;
  if (*(int *)(param_1 + 0x5cc) == 0) {
    FUN_00bb5520(param_1,0);
    iVar1 = *(int *)(param_1 + 0x618);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x618);
  }
  if (iVar1 == 2) {
    FUN_00bb9a00(param_1,0);
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_18 = FUN_016b8190();
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_18);
    return 1;
  case 1:
    FUN_00bbc160(param_1,&local_18);
    return 1;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_18);
    return 1;
  default:
    FUN_00bbcd10(param_1,&local_18);
    return 1;
  }
}


