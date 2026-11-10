/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103ce40; name: FUN_0103ce40
 */


void FUN_0103ce40(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  
  uVar2 = FUN_012b4090(param_2 + 0x68);
  if ((uVar2 & 1) == 0) {
    FUN_012b4040(param_1);
    return;
  }
  local_58 = 0xf5fd7b0f1f12073f;
  local_50 = "pages";
  local_48 = 5;
  FUN_012b4250(auStack_40,param_2 + 0x68,&local_58);
  uVar2 = FUN_012b4090(auStack_40);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar1 = FUN_012b40f0(auStack_40);
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  FUN_012b4190(param_1,auStack_40,(long)(int)uVar1);
  return;
}


