/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096b100; name: FUN_0096b100
 */


void FUN_0096b100(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_00942420();
  uVar2 = FUN_00946690(uVar1,*param_3,*(undefined4 *)(param_3 + 4));
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar1,param_3 + 8);
    *param_2 = 1;
  }
  return;
}


