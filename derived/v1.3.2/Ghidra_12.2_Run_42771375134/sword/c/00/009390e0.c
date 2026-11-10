/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009390e0; name: FUN_009390e0
 */


void FUN_009390e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  
  uVar1 = FUN_008e0a00(param_2);
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = 0;
    uVar2 = 0x1f;
  }
  else {
    uVar2 = FUN_008e0a00(*param_3);
    uVar3 = *(undefined2 *)(param_3 + 1);
  }
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x47,uVar1,uVar2,uVar3);
  return;
}


