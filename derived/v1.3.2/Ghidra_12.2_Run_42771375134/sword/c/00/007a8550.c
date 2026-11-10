/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a8550; name: FUN_007a8550
 */


void FUN_007a8550(long param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined7 uStack_38;
  undefined1 local_31;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  undefined4 local_28;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if ((plVar1 == (long *)0x0) || (*(long *)(param_1 + 0x58) != 0)) {
    return;
  }
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x800000,8);
  *(long *)(param_1 + 0x58) = lVar2;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_007a8690(lVar2,lVar2,0x800000);
  if (param_2 == '\0') {
    FUN_007a90b0(param_1);
  }
  else if (param_2 == '\x03') {
    FUN_007a9210(param_1);
  }
  else if (param_2 == '\x02') {
    FUN_007a8f80(param_1);
  }
  FUN_007a8770(param_1);
  local_28 = 0;
  uStack_2a = 0;
  uStack_38 = (undefined7)*(undefined8 *)(param_1 + 0x60);
  local_31 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x38);
  uStack_2c = 8;
  if (param_2 != '\x03') {
    uStack_2c = 0x18;
  }
  uStack_30 = 0;
  FUN_01936cf0(auStack_48);
  FUN_01936dd0(auStack_58);
  FUN_018725b0(auStack_48,auStack_58);
  FUN_0193dd20(auStack_58,&uStack_38);
  FUN_018725b0(auStack_48,auStack_58);
  FUN_01936e80(auStack_58);
  FUN_018725b0(auStack_48,auStack_58);
  return;
}


