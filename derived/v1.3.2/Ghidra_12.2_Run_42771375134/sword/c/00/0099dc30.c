/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099dc30; name: FUN_0099dc30
 */


void FUN_0099dc30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined2 local_30;
  char local_28 [8];
  
  if (*(int *)*param_3 == 0xa4) {
    local_40 = param_3[1];
    FUN_00942450(param_1);
    uVar1 = FUN_009259f0();
    FUN_0099de00(uVar1,local_28,&local_40);
    if (local_28[0] == '\0') {
      return;
    }
  }
  else {
    if (*(int *)*param_3 == 0x11d) {
      local_40 = param_3[1];
      uStack_38 = param_3[2];
      local_30 = 1;
      FUN_00942450(param_1);
      uVar1 = FUN_009253f0();
      FUN_00949670(uVar1,local_28,&local_40);
      return;
    }
    uVar1 = FUN_009423e0(param_1);
    uVar2 = FUN_0092c940(uVar1,*param_3,param_3[1],param_3[2],&local_40);
    if ((uVar2 & 1) == 0) {
      if ((char)local_40 == '\0') {
        return;
      }
      lVar3 = FUN_00942400(param_1);
      if (*(char *)(lVar3 + 0x34) == '\0') {
        FUN_009423b0(param_1);
        FUN_009366b0();
        return;
      }
      return;
    }
  }
  lVar3 = FUN_00942400(param_1);
  FUN_0093af10(lVar3 + 0x10);
  return;
}


