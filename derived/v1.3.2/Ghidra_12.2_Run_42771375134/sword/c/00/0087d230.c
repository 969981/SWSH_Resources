/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d230; name: FUN_0087d230
 */


void FUN_0087d230(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_4c [28];
  
  uVar3 = FUN_0077d470(param_2);
  FUN_00872cd0(*(undefined8 *)(param_1 + 0x98),uVar3);
  FUN_00871bc0(*(undefined8 *)(param_1 + 0x98),1);
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_00869620(*(undefined8 *)(param_1 + 0x98));
  FUN_00864810(auStack_4c,uVar1,uVar2);
  uVar4 = FUN_0077d930(uVar3,auStack_4c);
  if ((uVar4 & 1) != 0) {
    FUN_00871bc0(*(undefined8 *)(param_1 + 0x98),0);
  }
  return;
}


