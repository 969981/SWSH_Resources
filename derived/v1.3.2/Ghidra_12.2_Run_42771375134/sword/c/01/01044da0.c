/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01044da0; name: FUN_01044da0
 */


undefined8 FUN_01044da0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((param_2[4] == 0) && (param_2[5] == 0)) {
    return 0;
  }
  if ((param_2[4] == *(long *)(param_1 + 0x2d8)) && (param_2[5] == *(long *)(param_1 + 0x2e0))) {
    return 0;
  }
  uVar4 = FUN_011f4020(param_1 + 0x2d0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0xa0) == 0) && (*(long *)(param_1 + 0xa8) == 0)) {
    puVar5 = (undefined8 *)(param_1 + 0x80);
  }
  else if ((*(long *)(param_1 + 0x120) == 0) && (*(long *)(param_1 + 0x128) == 0)) {
    puVar5 = (undefined8 *)(param_1 + 0x100);
  }
  else {
    if (*(long *)(param_1 + 0x1a0) != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x1a8) != 0) {
      return 0;
    }
    puVar5 = (undefined8 *)(param_1 + 0x180);
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  puVar5[2] = param_2[2];
  puVar5[3] = uVar3;
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[7];
  puVar5[6] = param_2[6];
  puVar5[7] = uVar3;
  puVar5[4] = uVar1;
  puVar5[5] = uVar2;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = param_2[0xb];
  puVar5[10] = param_2[10];
  puVar5[0xb] = uVar3;
  puVar5[8] = uVar1;
  puVar5[9] = uVar2;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xf];
  puVar5[0xe] = param_2[0xe];
  puVar5[0xf] = uVar3;
  puVar5[0xc] = uVar1;
  puVar5[0xd] = uVar2;
  return 1;
}


