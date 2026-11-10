/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01519940; name: FUN_01519940
 */


void FUN_01519940(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  param_1[1] = *(undefined8 *)(param_2 + 0x70);
  param_1[2] = uVar3;
  *param_1 = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  param_1[5] = *(undefined8 *)(param_2 + 0x90);
  param_1[6] = uVar2;
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  return;
}


