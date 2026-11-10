/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcbae0; name: FUN_00bcbae0
 */


void FUN_00bcbae0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  
  uVar1 = FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_48 = 0xb0991f876f019757;
  local_28 = 0;
  local_38 = 0;
  FUN_016b7700(uVar1,&local_48,&local_28,&local_38);
  if (0 < local_38._4_4_) {
    uVar2 = local_38 & 0xffffffff;
    iVar4 = local_38._4_4_;
    iVar6 = (int)local_28;
    iVar3 = local_28._4_4_;
    iVar5 = local_28._4_4_;
    do {
      if (0 < (int)uVar2) {
        do {
          local_40 = iVar6;
          iStack_3c = iVar5;
          FUN_016b81d0(uVar1,&local_40,0);
          uVar2 = local_38 & 0xffffffff;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_38 + (int)local_28);
        iVar4 = local_38._4_4_;
        iVar6 = (int)local_28;
        iVar3 = local_28._4_4_;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3 + iVar4);
  }
  return;
}


