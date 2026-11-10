/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878310; name: FUN_00878310
 */


void FUN_00878310(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [28];
  
  uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_00869620(*(undefined8 *)(param_1 + 0x98));
  FUN_00864810(auStack_3c,uVar1,uVar2);
  FUN_00872cd0(*(undefined8 *)(param_1 + 0x98),auStack_3c);
  FUN_00871bc0(*(undefined8 *)(param_1 + 0x98),0);
  return;
}


