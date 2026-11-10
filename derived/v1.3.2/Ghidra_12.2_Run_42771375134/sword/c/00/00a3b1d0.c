/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3b1d0; name: FUN_00a3b1d0
 */


void FUN_00a3b1d0(long param_1,int param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 local_38;
  
  local_50 = *(undefined8 *)(&DAT_0262deb8 + (long)param_2 * 0x18);
  if (param_3 < 3) {
    uVar6 = *(undefined8 *)(param_1 + (long)param_2 * 8 + 0x5f0);
    uVar1 = 0x101 >> (ulong)(param_3 << 3 & 0x18);
    if (param_2 == 0) {
      uVar8 = 0x40c00000;
      if ((param_4 & 1) == 0) {
        uVar8 = 0;
      }
      FUN_00ffd510(uVar8,param_1 + 0x100,param_1 + 0x5d8);
    }
    FUN_016b2da0(uVar6,(uVar1 & 0xff) != 0);
    FUN_016b2d70(uVar6,(1U >> (ulong)(param_3 << 3 & 0x18) & 0xff) != 0);
    uVar6 = *(undefined8 *)(param_1 + 0x630);
    local_40 = 0;
    local_38 = 0;
    FUN_016b7700(uVar6,&local_50,&local_38,&local_40);
    if (0 < local_40._4_4_) {
      uVar2 = local_40 & 0xffffffff;
      iVar4 = local_40._4_4_;
      iVar7 = (int)local_38;
      iVar3 = local_38._4_4_;
      iVar5 = local_38._4_4_;
      do {
        if (0 < (int)uVar2) {
          do {
            local_48 = iVar7;
            iStack_44 = iVar5;
            FUN_016b81d0(uVar6,&local_48,(uVar1 & 0xff) != 0);
            uVar2 = local_40 & 0xffffffff;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)local_40 + (int)local_38);
          iVar4 = local_40._4_4_;
          iVar7 = (int)local_38;
          iVar3 = local_38._4_4_;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3 + iVar4);
    }
  }
  return;
}


