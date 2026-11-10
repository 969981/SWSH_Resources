/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9dd90; name: FUN_00f9dd90
 */


ulong FUN_00f9dd90(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  void *__src;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  code *pcVar6;
  void *__dest;
  ulong uVar7;
  char local_64 [4];
  ulong local_60;
  ulong local_58;
  void *local_50;
  uint local_48;
  undefined4 uStack_44;
  
  lVar2 = FUN_01760060(param_1,0xfff0b9d6);
  iVar1 = FUN_0175f320(param_1,0xfffffffe);
  if (iVar1 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00f9de34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar2 + 0x38))(param_1);
    return uVar4;
  }
  __src = (void *)FUN_0175fd50(param_1,0xfffffffe,&local_48);
  uVar4 = CONCAT44(uStack_44,local_48);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    local_60 = (ulong)(byte)(local_48 << 1);
    __dest = (void *)((ulong)&local_60 | 1);
    if (uVar4 == 0) goto LAB_00f9de68;
  }
  else {
    uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_60 = uVar7 | 1;
    local_58 = uVar4;
    local_50 = __dest;
  }
  memcpy(__dest,__src,uVar4);
LAB_00f9de68:
  *(undefined1 *)((long)__dest + uVar4) = 0;
  lVar3 = FUN_00f5c610(lVar2 + 8,&local_60);
  if (lVar3 == 0) {
    uVar5 = 0;
    pcVar6 = (code *)0x0;
  }
  else {
    pcVar6 = *(code **)(lVar3 + 0x30);
    uVar5 = *(undefined4 *)(lVar3 + 0x38);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (pcVar6 == (code *)0x0) {
    local_58 = FUN_0175fd50(param_1,0xfffffffe,&local_60);
    local_48 = 0;
    local_64[0] = '\0';
    (**(code **)(lVar2 + 0xb78))(param_1,local_64,&local_48,&local_60);
    if (local_64[0] == '\0') {
      uVar4 = FUN_00f83070(param_1);
    }
    else {
      uVar4 = (ulong)local_48;
    }
  }
  else {
    uVar4 = (*pcVar6)(param_1,lVar2,uVar5);
  }
  return uVar4;
}


