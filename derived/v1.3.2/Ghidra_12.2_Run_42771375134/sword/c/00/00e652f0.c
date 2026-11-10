/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e652f0; name: FUN_00e652f0
 */


void FUN_00e652f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 0x3c0) = param_2[2];
  *(undefined8 *)(param_1 + 0x3b8) = uVar2;
  *(undefined8 *)(param_1 + 0x3b0) = uVar1;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x3d8) = uVar4;
  *(undefined8 *)(param_1 + 0x3d0) = uVar2;
  *(undefined8 *)(param_1 + 0x3c8) = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x3f8) = param_2[1];
  uVar4 = *param_2;
  uVar6 = param_2[2];
  *(undefined8 *)(param_1 + 0x410) = uVar1;
  *(undefined8 *)(param_1 + 0x418) = uVar2;
  *(undefined8 *)(param_1 + 0x408) = uVar5;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x400) = uVar6;
  *(undefined8 *)(param_1 + 0x3f0) = uVar4;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x430) = *param_2;
  *(undefined8 *)(param_1 + 0x438) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x448) = param_2[3];
  *(undefined8 *)(param_1 + 0x440) = uVar1;
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)((long)param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x460) = uVar3;
  *(undefined8 *)(param_1 + 0x464) = 0xffffffff00000000;
  FUN_00e65730();
  return;
}


