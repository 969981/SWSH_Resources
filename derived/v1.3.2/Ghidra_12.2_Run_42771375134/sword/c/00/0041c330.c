/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041c330; name: FUN_0041c330
 */


ulong FUN_0041c330(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int local_30;
  undefined1 local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 auStack_18 [4];
  char local_14 [4];
  
  uVar2 = FUN_0040ae20();
  if (((int)uVar2 == 1) &&
     (uVar2 = FUN_00416990(param_1 + 0x13,*(undefined4 *)(param_1[0xc] + 0x2c)), (int)uVar2 == 1)) {
    lVar3 = FUN_0041c420(param_1,local_14);
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x18) == 0) {
        return 2;
      }
      if (local_14[0] == '\0') {
        local_30 = 0;
      }
      else {
        local_30 = FUN_0040eaa0(*(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x78));
        local_30 = -local_30;
      }
      local_2c = 0;
      local_28 = 0;
      iVar1 = (**(code **)(*param_1 + 0x90))(param_1,0,&local_30,&local_24,auStack_18,0,0);
      uVar4 = 1;
      if (iVar1 == 0) {
        uVar4 = 2;
      }
      param_1[0xd] = (long)local_24;
      return (ulong)uVar4;
    }
    uVar2 = 2;
  }
  return uVar2;
}


