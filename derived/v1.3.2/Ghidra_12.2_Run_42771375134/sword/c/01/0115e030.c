/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115e030; name: FUN_0115e030
 */


void FUN_0115e030(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x730);
  local_48 = 0;
  FUN_016b7700(uVar4,*(long *)(param_1 + 0x740) + 0x60,&local_38,&local_48);
  if (0 < local_48._4_4_) {
    uVar1 = local_48 & 0xffffffff;
    iVar3 = local_48._4_4_;
    iVar6 = (int)local_38;
    iVar2 = local_38._4_4_;
    iVar5 = local_38._4_4_;
    do {
      if (0 < (int)uVar1) {
        do {
          local_50 = iVar6;
          iStack_4c = iVar5;
          FUN_016b81d0(uVar4,&local_50,param_2 & 1);
          uVar1 = local_48 & 0xffffffff;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_48 + (int)local_38);
        iVar3 = local_48._4_4_;
        iVar6 = (int)local_38;
        iVar2 = local_38._4_4_;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2 + iVar3);
  }
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x740),param_2 & 1);
  return;
}


