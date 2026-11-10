/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00759670; name: FUN_00759670
 */


void FUN_00759670(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x460) = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x478) = uVar3;
  *(undefined8 *)(param_1 + 0x470) = uVar2;
  *(undefined8 *)(param_1 + 0x468) = uVar1;
  return;
}


