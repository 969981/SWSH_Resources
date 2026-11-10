/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf3ea0; name: FUN_00bf3ea0
 */


undefined8 FUN_00bf3ea0(long param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00c026b0(*(undefined8 *)(param_1 + 0xf0));
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_00bf2fa0(param_1), (uVar2 & 1) != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x68);
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(int *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    if (param_2 != -1) {
      *(undefined1 *)(param_1 + 0x98) = 1;
      FUN_00bf3f40(param_1);
      FUN_00bf4050(param_1);
      FUN_00bf49d0(param_1);
      FUN_00bf4d50(param_1);
      FUN_00bf3cb0(param_1);
      *(undefined1 *)(param_1 + 0x15a) = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


