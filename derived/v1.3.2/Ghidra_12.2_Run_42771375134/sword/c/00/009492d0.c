/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009492d0; name: FUN_009492d0
 */


void FUN_009492d0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  uVar2 = FUN_008e1810(*param_3,0xf);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(param_3 + 1) != '\0') {
      uVar3 = FUN_009423b0(param_1);
      uVar1 = FUN_008e0a00(*param_3);
      FUN_009360c0(uVar3,0x4b0,uVar1);
    }
    *param_2 = 1;
  }
  return;
}


