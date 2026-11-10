/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093ef30; name: FUN_0093ef30
 */


bool FUN_0093ef30(undefined8 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_008f94e0(param_2);
  uVar4 = FUN_00931920(param_1[1]);
  uVar4 = FUN_008df3c0(uVar4,uVar1);
  uVar3 = FUN_008f94e0(param_2);
  uVar3 = FUN_008f9310(*param_1,uVar3);
  cVar2 = FUN_00914230(uVar4,uVar3);
  return cVar2 != '\0';
}


