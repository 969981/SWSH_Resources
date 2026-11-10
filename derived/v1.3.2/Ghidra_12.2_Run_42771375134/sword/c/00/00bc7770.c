/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc7770; name: FUN_00bc7770
 */


void FUN_00bc7770(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar1 = FUN_00bb48a0();
  uVar2 = FUN_016b7980();
  iVar6 = (int)((ulong)uVar2 >> 0x20);
  if ((0 < iVar6) && (0 < (int)uVar2)) {
    iVar7 = 0;
    do {
      iVar8 = 0;
      do {
        local_70 = iVar8;
        iStack_6c = iVar7;
        local_78 = FUN_016b7950(uVar1,&local_70);
        uVar3 = FUN_00bb5d80(local_78,local_78);
        if (((uVar3 & 1) != 0) || (uVar3 = FUN_00bb5ea0(uVar3,local_78), (uVar3 & 1) != 0)) {
          local_60 = 0;
          local_58 = 0;
          FUN_016b7700(uVar1,&local_78,&local_58,&local_60);
          if (0 < local_60._4_4_) {
            uVar3 = local_60 & 0xffffffff;
            iVar5 = local_60._4_4_;
            iVar10 = (int)local_58;
            iVar4 = local_58._4_4_;
            iVar9 = local_58._4_4_;
            do {
              if (0 < (int)uVar3) {
                do {
                  local_68 = iVar10;
                  iStack_64 = iVar9;
                  FUN_016b81d0(uVar1,&local_68,param_2 & 1);
                  uVar3 = local_60 & 0xffffffff;
                  iVar10 = iVar10 + 1;
                } while (iVar10 < (int)local_60 + (int)local_58);
                iVar5 = local_60._4_4_;
                iVar10 = (int)local_58;
                iVar4 = local_58._4_4_;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar4 + iVar5);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != (int)uVar2);
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar6);
  }
  return;
}


