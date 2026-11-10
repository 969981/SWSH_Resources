/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a79cd0; name: FUN_00a79cd0
 */


void FUN_00a79cd0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  uVar4 = FUN_01020350();
  if (2 < uVar4) {
    uVar1 = *param_2;
    uVar3 = param_2[1];
    uVar2 = param_2[2];
    *(undefined8 *)(param_1 + 0x1fa0) = param_2[3];
    *(undefined8 *)(param_1 + 0x1f98) = uVar2;
    *(undefined8 *)(param_1 + 0x1f90) = uVar3;
    *(undefined8 *)(param_1 + 0x1f88) = uVar1;
    uVar1 = param_2[4];
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    *(undefined8 *)(param_1 + 0x1fc0) = param_2[7];
    *(undefined8 *)(param_1 + 0x1fb8) = uVar2;
    *(undefined8 *)(param_1 + 0x1fb0) = uVar3;
    *(undefined8 *)(param_1 + 0x1fa8) = uVar1;
    uVar1 = param_2[8];
    uVar3 = param_2[9];
    uVar2 = param_2[10];
    *(undefined8 *)(param_1 + 0x1fe0) = param_2[0xb];
    *(undefined8 *)(param_1 + 0x1fd8) = uVar2;
    *(undefined8 *)(param_1 + 0x1fd0) = uVar3;
    *(undefined8 *)(param_1 + 0x1fc8) = uVar1;
  }
  return;
}


