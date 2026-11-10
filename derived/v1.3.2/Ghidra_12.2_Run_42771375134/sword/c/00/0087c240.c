/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087c240; name: FUN_0087c240
 */


void FUN_0087c240(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((param_2 & 0xff) != (param_3 & 0xff)) {
    if (((param_3 | param_2) & 0xff) < 4) {
      uVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),param_2);
      uVar2 = FUN_0086a040(*(undefined8 *)(param_1 + 0x98),param_2);
      uVar3 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),param_2);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      uVar4 = FUN_00869ee0(uVar5,param_3);
      FUN_00870bc0(uVar5,param_2,uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      uVar4 = FUN_0086a040(uVar5,param_3);
      FUN_00870d20(uVar5,param_2,uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      uVar4 = FUN_0086a1a0(uVar5,param_3);
      FUN_00870e80(uVar5,param_2,uVar4);
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),param_3,uVar1);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),param_3,uVar3);
      FUN_00870d20(*(undefined8 *)(param_1 + 0x98),param_3,uVar2);
      return;
    }
  }
  return;
}


