/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094e120; name: FUN_0094e120
 */


void FUN_0094e120(undefined8 param_1,int *param_2,undefined1 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_009424e0(param_1,*param_3);
  uVar5 = FUN_009423e0(param_1);
  uVar2 = FUN_0092ee60(uVar5,uVar4);
  uVar1 = FUN_008e4cb0(uVar4);
  iVar3 = FUN_008ec010(uVar1,uVar2);
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  *param_2 = iVar3;
  return;
}


