/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00543dd0; name: FUN_00543dd0
 */


uint FUN_00543dd0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1[0x10] == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,0);
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1,1);
  if (-1 < (int)uVar2) {
    uVar2 = uVar1 & (int)uVar1 >> 0x1f;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,2);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1,3);
  if (-1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,4);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1,5);
  if (-1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,6);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1,7);
  if (-1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,8);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1,9);
  uVar3 = param_1[0x10];
  if (-1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  if (uVar3 != 0) {
    uVar4 = uVar3 + *(long *)(uVar3 - 8) * 8;
    do {
      uVar4 = uVar4 - 8;
    } while (uVar3 <= uVar4);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x10] = 0;
  }
  return uVar2;
}


