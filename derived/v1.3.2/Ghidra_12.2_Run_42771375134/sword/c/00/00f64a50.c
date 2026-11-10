/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f64a50; name: FUN_00f64a50
 */


ulong FUN_00f64a50(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  void *__src;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  void *__dest;
  ulong uVar7;
  char local_70 [4];
  uint local_6c;
  ulong local_68;
  ulong local_60;
  void *local_58;
  int local_48;
  undefined4 uStack_44;
  
  lVar3 = FUN_01760060(param_1,0xfff0b9d6);
  iVar1 = FUN_0175f320(param_1,0xffffffff);
  if (iVar1 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00f64b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(lVar3 + 0x30))(param_1);
    return uVar5;
  }
  __src = (void *)FUN_0175fd50(param_1,0xffffffff,&local_48);
  uVar5 = CONCAT44(uStack_44,local_48);
  local_68 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar5 < 0x17) {
    local_68 = (ulong)(byte)(local_48 << 1);
    __dest = (void *)((ulong)&local_68 | 1);
    if (uVar5 == 0) goto LAB_00f64b34;
  }
  else {
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_68 = uVar7 | 1;
    local_60 = uVar5;
    local_58 = __dest;
  }
  memcpy(__dest,__src,uVar5);
LAB_00f64b34:
  *(undefined1 *)((long)__dest + uVar5) = 0;
  lVar4 = FUN_00f5c610(lVar3 + 8,&local_68);
  if (lVar4 == 0) {
    uVar2 = 0;
    pcVar6 = (code *)0x0;
  }
  else {
    pcVar6 = *(code **)(lVar4 + 0x28);
    uVar2 = *(undefined4 *)(lVar4 + 0x38);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (pcVar6 == (code *)0x0) {
    local_60 = FUN_0175fd50(param_1,0xffffffff,&local_68);
    local_6c = 0;
    local_70[0] = '\0';
    (**(code **)(lVar3 + 0x1a0))(param_1,local_70,&local_6c,&local_68);
    if (local_70[0] == '\0') {
      local_48 = 0;
      lVar3 = FUN_0175fb60(param_1,0xfff0b9d3,&local_48);
      if (((lVar3 == 0xccc2ccc1) && (local_48 != 0)) &&
         (iVar1 = FUN_01760f10(param_1,1), iVar1 == 1)) {
        uVar2 = FUN_0175ef10(param_1);
        if (param_1 == 0) {
          FUN_01760310(0);
        }
        else {
          FUN_0175f270(param_1,2);
        }
        FUN_017607c0(param_1,uVar2);
      }
      else {
        FUN_01760310(param_1);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)local_6c;
    }
  }
  else {
    uVar5 = (*pcVar6)(param_1,lVar3,uVar2);
  }
  return uVar5;
}


