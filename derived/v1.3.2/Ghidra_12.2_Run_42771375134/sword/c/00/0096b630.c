/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096b630; name: FUN_0096b630
 */


void FUN_0096b630(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  
  uVar7 = FUN_009423b0();
  uVar2 = *(undefined4 *)(param_3 + 4);
  puVar1 = param_3 + 8;
  uVar4 = *param_3;
  uVar5 = FUN_00943f50(puVar1);
  uVar6 = FUN_00943f40(puVar1);
  puVar8 = (undefined4 *)FUN_00943fc0(puVar1);
  uVar3 = *puVar8;
  lVar9 = FUN_00943fc0(puVar1);
  FUN_0093a0e0(uVar7,uVar4,uVar2,uVar5,uVar6,uVar3,*(undefined4 *)(lVar9 + 4));
  return;
}


