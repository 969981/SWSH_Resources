/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb9a00; name: FUN_00bb9a00
 */


void FUN_00bb9a00(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long local_88;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar1 = FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar2 = FUN_016b7980();
  iVar4 = (int)((ulong)uVar2 >> 0x20);
  if (0 < iVar4 && 0 < (int)uVar2) {
    iVar9 = 0;
    do {
      iVar11 = 0;
      do {
        local_80 = iVar11;
        iStack_7c = iVar9;
        local_88 = FUN_016b7950(uVar1,&local_80);
        if ((((local_88 == -0x4ae43aff5c18c875) || (local_88 == 0x1c25f63e48ab9462)) ||
            (local_88 == -0x28deae12defc8940)) &&
           (lVar3 = FUN_00ffda40(param_1 + 0x100,&local_88), lVar3 != 0)) {
          local_70 = 0;
          local_68 = 0;
          FUN_016b7700(uVar1,&local_88,&local_68,&local_70);
          if (0 < local_70._4_4_) {
            uVar5 = local_70 & 0xffffffff;
            iVar7 = local_70._4_4_;
            iVar10 = (int)local_68;
            iVar6 = local_68._4_4_;
            iVar8 = local_68._4_4_;
            do {
              if (0 < (int)uVar5) {
                do {
                  local_78 = iVar10;
                  iStack_74 = iVar8;
                  FUN_016b81d0(uVar1,&local_78,param_2 & 1);
                  uVar5 = local_70 & 0xffffffff;
                  iVar10 = iVar10 + 1;
                } while (iVar10 < (int)local_70 + (int)local_68);
                iVar7 = local_70._4_4_;
                iVar10 = (int)local_68;
                iVar6 = local_68._4_4_;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar6 + iVar7);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != (int)uVar2);
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar4);
  }
  return;
}


