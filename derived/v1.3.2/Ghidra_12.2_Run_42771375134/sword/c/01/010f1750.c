/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f1750; name: FUN_010f1750
 */


undefined8 FUN_010f1750(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ushort *puVar12;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (param_2 < 3) {
    lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x210);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar7 = FUN_015480b0(lVar10);
    uVar1 = *(uint *)(param_3 + 0x70);
    if (((*(byte *)(param_3 + 0x78) & 1) != 0) &&
       (uVar11 = 1,
       (1 << (ulong)(uVar1 & 7) & (uint)*(byte *)(lVar7 + ((ulong)(uVar1 >> 3) & 0x1fff) + 0x1450))
       != 0)) goto joined_r0x010f1c58;
    if ((*(byte *)(param_3 + 0x78) >> 2 & 1) == 0) {
LAB_010f1a84:
      uVar11 = 0;
    }
    else {
      local_68 = *(undefined8 *)(param_3 + 0x68);
      FUN_017cbe90(auStack_58,&local_68);
      uVar4 = FUN_017cc4b0(&local_68);
      uVar5 = FUN_017cc4c0(&local_68);
      uVar6 = FUN_017cc4d0(&local_68);
      if ((((uVar4 & 0xffff) != 0) && ((uVar5 & 0xff) != 0)) && ((uVar6 & 0xff) != 0)) {
        FUN_017cbea0(auStack_60,uVar4,uVar5,uVar6,0,0,0);
        FUN_017cbf30(auStack_58,auStack_60);
      }
      FUN_017cbe90(auStack_60,auStack_58);
      FUN_017cbf30(&local_68,auStack_60);
      uVar8 = FUN_017cc510(&local_68);
      if ((uVar8 & 1) != 0) {
        uVar8 = 0;
        bVar3 = false;
        puVar12 = (ushort *)(lVar7 + 0x1568);
        do {
          local_70 = *(undefined8 *)(puVar12 + -4);
          FUN_017cbe90(auStack_58,&local_70);
          uVar4 = FUN_017cc4b0(&local_70);
          uVar5 = FUN_017cc4c0(&local_70);
          uVar6 = FUN_017cc4d0(&local_70);
          if ((((uVar4 & 0xffff) != 0) && ((uVar5 & 0xff) != 0)) && ((uVar6 & 0xff) != 0)) {
            FUN_017cbea0(auStack_60,uVar4,uVar5,uVar6,0,0,0);
            FUN_017cbf30(auStack_58,auStack_60);
          }
          FUN_017cbe90(auStack_60,auStack_58);
          FUN_017cbf30(&local_70,auStack_60);
          uVar9 = FUN_017cc510(&local_70);
          if ((uVar9 & 1) != 0) {
            if (((uint)*puVar12 == (uVar1 & 0xffff)) &&
               (uVar9 = FUN_017cc180(&local_68,&local_70), (uVar9 & 1) != 0)) {
              uVar11 = 2;
              goto joined_r0x010f1c58;
            }
            uVar9 = FUN_017cc160(&local_68,&local_70);
            if ((uVar9 & 1) != 0) {
              bVar3 = true;
            }
          }
          uVar8 = uVar8 + 1;
          puVar12 = puVar12 + 8;
        } while (uVar8 < 10);
        if (bVar3) goto LAB_010f1a84;
      }
      uVar11 = 3;
    }
joined_r0x010f1c58:
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    return uVar11;
  }
  if (param_2 == 3) {
    if (*(byte *)(param_3 + 0x84) < 0x30) {
                    /* WARNING: Subroutine does not return */
      memset(&local_298,0,0x268);
    }
    goto switchD_010f17cc_default;
  }
  if (param_2 != 4) goto switchD_010f17cc_default;
  uVar2 = *(undefined1 *)(param_1 + 0xe9);
  local_280 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_298 = 0;
  FUN_01544f50(&local_298);
  switch(uVar2) {
  case 1:
    local_298._6_1_ = local_298._4_1_;
    break;
  case 2:
    local_298._6_1_ = local_298._5_1_;
    goto joined_r0x010f18ac;
  case 3:
joined_r0x010f18ac:
    if (local_298._6_1_ == '\x02') {
      return 0;
    }
    goto LAB_010f19d8;
  case 4:
    local_298._6_1_ = local_298._7_1_;
    break;
  case 5:
    local_298._6_1_ = (char)local_290;
    break;
  default:
    goto switchD_010f17cc_default;
  }
  uVar11 = 0;
  if (local_298._6_1_ != '\x02') {
LAB_010f19d8:
    uVar11 = 0;
    if (local_298._6_1_ != '\x04') {
switchD_010f17cc_default:
      uVar11 = 1;
    }
  }
  return uVar11;
}


