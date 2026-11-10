/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65920; name: FUN_00e65920
 */


void FUN_00e65920(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_1 + 0x3b0);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 0x3c8);
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x448) = param_2[3];
  *(undefined8 *)(param_1 + 0x440) = uVar2;
  *(undefined8 *)(param_1 + 0x438) = uVar3;
  *(undefined8 *)(param_1 + 0x430) = uVar1;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0x468) = param_2[7];
  *(undefined8 *)(param_1 + 0x460) = uVar2;
  *(undefined8 *)(param_1 + 0x458) = uVar3;
  *(undefined8 *)(param_1 + 0x450) = uVar1;
  *(undefined4 *)(param_1 + 0x470) = 0;
  return;
}


