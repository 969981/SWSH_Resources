/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a37980; name: FUN_00a37980
 */


void FUN_00a37980(long param_1,byte param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 local_38;
  
  *(byte *)(param_1 + 0x67d) = param_2 & 1;
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x650));
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x650),99 < param_3 & param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x640);
  cVar1 = *(char *)(param_1 + 0x67d);
  local_40 = 0;
  local_38 = 0;
  FUN_016b7700(uVar5,&DAT_02154850,&local_38,&local_40);
  if (0 < local_40._4_4_) {
    uVar2 = local_40 & 0xffffffff;
    iVar4 = local_40._4_4_;
    iVar7 = (int)local_38;
    iVar3 = local_38._4_4_;
    iVar6 = local_38._4_4_;
    do {
      if (0 < (int)uVar2) {
        do {
          local_48 = iVar7;
          iStack_44 = iVar6;
          FUN_016b81d0(uVar5,&local_48,cVar1 != '\0');
          uVar2 = local_40 & 0xffffffff;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)local_40 + (int)local_38);
        iVar4 = local_40._4_4_;
        iVar7 = (int)local_38;
        iVar3 = local_38._4_4_;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3 + iVar4);
  }
  return;
}


