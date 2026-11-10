/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088a270; name: FUN_0088a270
 */


void FUN_0088a270(long param_1,undefined8 *param_2,code *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [192];
  
  iVar2 = FUN_008783b0(param_2[1]);
  if (iVar2 != 0x84) {
    param_2 = param_2 + 1;
  }
  uVar5 = *param_2;
  uVar3 = FUN_008783b0(uVar5);
  uVar4 = FUN_008783c0(uVar5);
  FUN_0087f4c0(auStack_f0);
  FUN_0087f540(auStack_f0,uVar3,uVar4);
  iVar2 = FUN_0087f680(auStack_f0,0x31);
  FUN_0087f510(auStack_f0);
  if (iVar2 == 0x36c) {
    uVar1 = (*param_3)(2);
    *(undefined2 *)(param_1 + 0x2c) = uVar1;
  }
  return;
}


