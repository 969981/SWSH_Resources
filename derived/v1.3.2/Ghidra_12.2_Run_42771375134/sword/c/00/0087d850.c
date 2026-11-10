/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d850; name: FUN_0087d850
 */


void FUN_0087d850(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_3c [28];
  
  uVar3 = FUN_0086ad20(*(undefined8 *)(param_1 + 0x98));
  if ((uVar3 & 1) != 0) {
    FUN_00871a70(*(undefined8 *)(param_1 + 0x98),0);
    FUN_008741d0(*(undefined8 *)(param_1 + 0x98),100);
    lVar4 = FUN_00866030();
    FUN_00870290(*(undefined8 *)(param_1 + 0x98),*(undefined1 *)(lVar4 + 0x278));
    uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar2 = FUN_00869620(*(undefined8 *)(param_1 + 0x98));
    FUN_00864810(auStack_3c,uVar1,uVar2);
    FUN_00872cd0(*(undefined8 *)(param_1 + 0x98),auStack_3c);
    FUN_00871bc0(*(undefined8 *)(param_1 + 0x98),0);
    FUN_00874080(*(undefined8 *)(param_1 + 0x98),0);
  }
  return;
}


