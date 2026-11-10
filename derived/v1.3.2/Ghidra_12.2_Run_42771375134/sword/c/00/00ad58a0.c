/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad58a0; name: FUN_00ad58a0
 */


void FUN_00ad58a0(long *param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  long local_28;
  
  uVar3 = (**(code **)(*param_1 + 400))();
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar1 = param_1[0x79];
  *(byte *)(param_1 + 0xaa) = param_2 & 1;
  (**(code **)(*(long *)param_1[0x78] + 0x7f8))((long *)param_1[0x78],(int)lVar1);
  iVar2 = FUN_008e19f0();
  if (*(char *)(*(long *)(param_1[0x78] + 0x5c8) + 0x79) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00b8c480(*(long *)(param_1[0x78] + 0x5c8),(int)lVar1);
  }
  if ((iVar2 != 0) || ((uVar3 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xaa) = 0;
  }
  FUN_00ad1e50(&local_28,param_1);
  if (local_28 == 0) {
    *(undefined4 *)((long)param_1 + 0x554) = 0;
  }
  else {
    if ((char)param_1[0xaa] == '\0') {
      local_58 = 0x450d36f15c2e779c;
      local_50 = "to_ba10_waitB01";
      local_48 = 0xf;
      local_40 = 0;
      uVar3 = FUN_0069d250(local_28,&local_58);
      local_38 = uVar3;
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))((long *)(local_40 + 0x48));
        uVar3 = local_38 & 0xff;
        local_40 = 0;
      }
      if ((uVar3 & 0xff) != 0) {
        FUN_0069d290(local_28,&local_38);
      }
    }
    *(undefined4 *)((long)param_1 + 0x554) = 0;
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
  }
  return;
}


