/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ad910; name: FUN_014ad910
 */


void FUN_014ad910(int *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_008783b0(param_2);
  *param_1 = iVar3;
  uVar2 = FUN_008783c0(param_2);
  *(undefined2 *)(param_1 + 1) = uVar2;
  iVar3 = FUN_0087ccf0(param_2);
  param_1[2] = iVar3;
  bVar1 = FUN_0087ea90(param_2);
  *(byte *)(param_1 + 3) = bVar1 & 1;
  bVar1 = FUN_0087d610(param_2,2);
  *(byte *)((long)param_1 + 0xd) = bVar1 & 1;
  iVar3 = FUN_0087ec90(param_2);
  param_1[4] = iVar3;
  uVar4 = FUN_00879760(param_2);
  param_1[5] = uVar4 & 0xff;
  param_1[6] = -1;
  iVar3 = *param_1;
  if (iVar3 == 0x365) {
    uVar4 = FUN_00878dd0(param_2);
    param_1[6] = uVar4 & 0xff;
    iVar3 = *param_1;
  }
  if ((iVar3 == 0x37a) && ((short)param_1[1] == 1)) {
    *(undefined2 *)(param_1 + 1) = 0;
    param_1[5] = 2;
  }
  return;
}


