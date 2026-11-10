/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b620; name: FUN_0087b620
 */


undefined1 FUN_0087b620(long param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar1 = FUN_00880a40(uVar2,uVar3);
  return uVar1;
}


