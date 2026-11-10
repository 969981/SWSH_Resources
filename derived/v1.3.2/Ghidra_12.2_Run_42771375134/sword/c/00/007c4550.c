/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c4550; name: FUN_007c4550
 */


undefined8 FUN_007c4550(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *local_2d0 [2];
  undefined4 local_2bc;
  undefined2 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  int local_68 [4];
  uint local_58 [6];
  
  puVar3 = PTR_DAT_02716b80;
  if (*(long *)PTR_DAT_02716b80 == 0) {
    return 0;
  }
  iVar6 = FUN_007c2bc0();
  if ((iVar6 == 0) || (iVar6 = FUN_007c2bc0(*(undefined8 *)puVar3), iVar6 == 1)) {
    puVar1 = PTR_DAT_02716708;
    if (*(long *)PTR_DAT_02716708 != 0) {
      FUN_0186bd40(*(long *)PTR_DAT_02716708,0);
    }
    puVar2 = PTR_DAT_02716a30;
    FUN_019416b0(local_2d0,*(undefined8 *)PTR_DAT_02716a30);
    local_58[0] = local_58[0] & 0xffffff00;
    if ((int)local_2d0[0] == 0) {
      uVar10 = *(undefined8 *)puVar2;
      cVar4 = FUN_007a9cb0();
      if (cVar4 == '\0') {
        FUN_01948700(local_2d0);
        local_2bc = 0xffffffff;
        local_2b8 = 1;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2d0[0] = PTR_DAT_02716bb0 + 0x10;
        puVar7 = (undefined8 *)FUN_007a9d00();
        local_2b0 = *puVar7;
        uVar5 = FUN_007a9de0();
        local_2a8 = CONCAT62(local_2a8._2_6_,uVar5);
        local_2b8 = 0;
        local_2a8 = CONCAT44(1,(undefined4)local_2a8);
        FUN_01948770(local_58,local_2d0,0,0x18);
        FUN_0193fa30(local_68,uVar10,local_2d0);
        if (local_68[0] != 0) {
          lVar9 = *(long *)puVar3;
          if (lVar9 != 0) {
            local_58[0] = 2;
            FUN_007c2c00(lVar9,local_58);
            local_58[0] = CONCAT31(local_58[0]._1_3_,1);
            local_58[1] = 0;
            FUN_007c2c50(lVar9,local_58);
            lVar9 = *(long *)puVar3;
            if (lVar9 != 0) {
              local_58[0] = local_58[0] & 0xffffff00;
              FUN_018724d0((ulong)local_58 | 4,local_68);
              local_58[0] = CONCAT31(local_58[0]._1_3_,1);
              FUN_007c2fb0(lVar9,local_58);
              if ((char)local_58[0] != '\0') {
                local_58[0] = local_58[0] & 0xffffff00;
              }
            }
          }
          FUN_01948720(local_2d0);
          return 0;
        }
        FUN_01948720(local_2d0);
        uVar8 = FUN_0193fba0(uVar10);
      }
      else {
        cVar4 = FUN_007a9cb0();
        if (cVar4 == '\x03') {
          FUN_0188e0d0(local_2d0);
          FUN_0188e380(local_2d0,4);
          FUN_01948770(local_58,local_2d0,0xffffffff,1);
          FUN_0193fa30(local_68,uVar10,local_2d0);
          if (local_68[0] != 0) {
            lVar9 = *(long *)puVar3;
            if (lVar9 != 0) {
              local_58[0] = 2;
              FUN_007c2c00(lVar9,local_58);
              local_58[0] = CONCAT31(local_58[0]._1_3_,1);
              local_58[1] = 0;
              FUN_007c2c50(lVar9,local_58);
              lVar9 = *(long *)puVar3;
              if (lVar9 != 0) {
                local_58[0] = local_58[0] & 0xffffff00;
                FUN_018724d0((ulong)local_58 | 4,local_68);
                local_58[0] = CONCAT31(local_58[0]._1_3_,1);
                FUN_007c2fb0(lVar9,local_58);
                if ((char)local_58[0] != '\0') {
                  local_58[0] = local_58[0] & 0xffffff00;
                }
              }
            }
            thunk_FUN_01948720(local_2d0);
            return 0;
          }
          thunk_FUN_01948720(local_2d0);
        }
        uVar8 = FUN_0193fba0(uVar10);
      }
      while ((uVar8 & 1) == 0) {
        if (*(long *)puVar1 != 0) {
          FUN_0186bd40(*(long *)puVar1,0);
        }
        nn::os::SleepThread(*(long *)(param_1 + 0x328) * 1000000);
        uVar8 = FUN_0193fba0(uVar10);
      }
      FUN_0193fbd0(local_58,uVar10);
      if (local_58[0] == 0) {
        return 1;
      }
      lVar9 = *(long *)puVar3;
      if (lVar9 != 0) {
        local_2d0[0] = (undefined *)CONCAT44(local_2d0[0]._4_4_,2);
        FUN_007c2c00(lVar9,local_2d0);
        local_2d0[0] = (undefined *)CONCAT71(local_2d0[0]._1_7_,1);
        local_2d0[0] = (undefined *)((ulong)local_2d0[0] & 0xffffffff);
        FUN_007c2c50(lVar9,local_2d0);
        lVar9 = *(long *)puVar3;
        if (lVar9 != 0) {
          local_2d0[0] = (undefined *)((ulong)local_2d0[0] & 0xffffffffffffff00);
          FUN_018724d0((ulong)local_2d0 | 4,local_58);
          local_2d0[0] = (undefined *)CONCAT71(local_2d0[0]._1_7_,1);
          FUN_007c2fb0(lVar9,local_2d0);
        }
      }
    }
    else {
      FUN_018724d0((ulong)local_58 | 4,local_2d0);
      lVar9 = *(long *)puVar3;
      local_58[0] = CONCAT31(local_58[0]._1_3_,1);
      if (lVar9 != 0) {
        local_2d0[0] = (undefined *)CONCAT44(local_2d0[0]._4_4_,2);
        FUN_007c2c00(lVar9,local_2d0);
        local_2d0[0] = (undefined *)CONCAT71(local_2d0[0]._1_7_,1);
        local_2d0[0] = (undefined *)((ulong)local_2d0[0] & 0xffffffff);
        FUN_007c2c50(lVar9,local_2d0);
        lVar9 = *(long *)puVar3;
        if (lVar9 != 0) {
          local_2d0[0] = (undefined *)((ulong)local_2d0[0] & 0xffffffffffffff00);
          FUN_018724d0((ulong)local_2d0 | 4,(ulong)local_58 | 4);
          local_2d0[0] = (undefined *)CONCAT71(local_2d0[0]._1_7_,1);
          FUN_007c2fb0(lVar9,local_2d0);
        }
      }
    }
  }
  return 0;
}


