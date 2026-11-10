/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947db0; name: FUN_00947db0
 */


void FUN_00947db0(undefined8 param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_009423b0();
  uVar2 = FUN_00936d60(uVar1,*(undefined1 *)(param_3 + 1),param_3 + 8);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_009423b0(param_1);
    FUN_0093aa80(uVar1,8);
    if (*(char *)(param_3 + 0x10) != '\x01') {
      FUN_009423b0(param_1);
      FUN_0093a0b0();
      uVar1 = FUN_009423b0(param_1);
      FUN_0093a120(uVar1,*(undefined1 *)(param_3 + 1));
    }
    uVar1 = FUN_009423b0(param_1);
    FUN_0093aa30(uVar1,8,*(undefined1 *)(param_3 + 1));
    *param_2 = 1;
  }
  return;
}


