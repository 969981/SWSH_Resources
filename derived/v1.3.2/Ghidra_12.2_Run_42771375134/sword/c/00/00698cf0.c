/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00698cf0; name: FUN_00698cf0
 */


void FUN_00698cf0(undefined4 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  *param_1 = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x50))(param_2);
  param_1[1] = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  param_1[2] = uVar4;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x28))(param_2);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 4) = *puVar2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 8) = *puVar2;
  *(undefined8 *)(param_1 + 10) = uVar1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 200))(param_2);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0xc) = *puVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar4 = (**(code **)(*param_2 + 0xe0))(param_2);
  param_1[0x10] = uVar4;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x108))(param_2);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x14) = *puVar2;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  lVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  param_1[0x18] = *(undefined4 *)(lVar3 + 4);
  param_1[0x19] = *(undefined4 *)(lVar3 + 8);
  param_1[0x1a] = *(undefined4 *)(lVar3 + 0xc);
  return;
}


