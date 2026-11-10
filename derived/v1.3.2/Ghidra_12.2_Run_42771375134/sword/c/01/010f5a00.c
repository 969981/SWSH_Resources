/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f5a00; name: FUN_010f5a00
 */


void FUN_010f5a00(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  
  lVar2 = param_1 + (long)param_2 * 0x18;
  lVar1 = *(long *)(lVar2 + 0x600);
  if (lVar1 != 0) {
    FUN_016b2d70(lVar1,0);
    lVar1 = *(long *)(lVar2 + 0x600);
    if (lVar1 != 0) {
      FUN_016b2da0(lVar1,0);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x5e8);
  local_28 = 0;
  local_38 = 0;
  FUN_016b7700(uVar6,param_1 + (long)param_2 * 0x18 + 0x5f8,&local_28,&local_38);
  if (0 < local_38._4_4_) {
    uVar3 = local_38 & 0xffffffff;
    iVar5 = local_38._4_4_;
    iVar8 = (int)local_28;
    iVar4 = local_28._4_4_;
    iVar7 = local_28._4_4_;
    do {
      if (0 < (int)uVar3) {
        do {
          local_40 = iVar8;
          iStack_3c = iVar7;
          FUN_016b81d0(uVar6,&local_40,0);
          uVar3 = local_38 & 0xffffffff;
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)local_38 + (int)local_28);
        iVar5 = local_38._4_4_;
        iVar8 = (int)local_28;
        iVar4 = local_28._4_4_;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4 + iVar5);
  }
  return;
}


