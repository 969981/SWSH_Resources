/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941990; name: FUN_00941990
 */


bool FUN_00941990(undefined8 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_008f94e0(param_2);
  bVar2 = FUN_00951120(param_1[3],uVar1);
  uVar1 = FUN_008f94e0(param_2);
  uVar5 = FUN_00931920(param_1[1]);
  uVar5 = FUN_008df3c0(uVar5,uVar1);
  uVar4 = FUN_008f94e0(param_2);
  uVar4 = FUN_008f9310(*param_1,uVar4);
  bVar3 = FUN_00914230(uVar5,uVar4);
  return bVar2 < bVar3;
}


