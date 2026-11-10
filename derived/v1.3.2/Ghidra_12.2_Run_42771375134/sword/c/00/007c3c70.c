/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c3c70; name: FUN_007c3c70
 */


undefined8 FUN_007c3c70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  int local_2a0 [4];
  int local_290 [3];
  undefined2 local_284;
  undefined8 local_238;
  undefined2 local_230;
  undefined2 local_22e;
  uint local_58 [6];
  
  puVar3 = PTR_DAT_02716b80;
  if (*(long *)PTR_DAT_02716b80 == 0) {
    return 0;
  }
  iVar5 = FUN_007c2bc0();
  if ((iVar5 == 0) || (iVar5 = FUN_007c2bc0(*(undefined8 *)puVar3), iVar5 == 1)) {
    puVar1 = PTR_DAT_02716708;
    if (*(long *)PTR_DAT_02716708 != 0) {
      FUN_0186bd40(*(long *)PTR_DAT_02716708,0);
    }
    puVar2 = PTR_DAT_02716a30;
    FUN_019416b0(local_290,*(undefined8 *)PTR_DAT_02716a30);
    local_58[0] = local_58[0] & 0xffffff00;
    if (local_290[0] == 0) {
      uVar10 = *(undefined8 *)puVar2;
      cVar4 = FUN_007a9cb0();
      if (cVar4 == '\0') {
        FUN_01890290(local_290);
        puVar8 = (undefined8 *)FUN_007a9d00();
        local_238 = *puVar8;
        local_230 = FUN_007a9de0();
        FUN_018903c0(local_58,local_290,
                     "W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGOZlLy8MYL",0x40);
        local_284 = 2;
        local_22e = 2;
        uVar6 = FUN_007c1be0(param_1 + 0x360);
        if ((uVar6 & 1) != 0) {
          uVar7 = FUN_007c2320(param_1 + 0x360);
          FUN_01890460(local_58,local_290,uVar7,0x168);
        }
        FUN_0193fc80(local_2a0,uVar10,local_290);
        if (local_2a0[0] != 0) {
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
              FUN_018724d0((ulong)local_58 | 4,local_2a0);
              local_58[0] = CONCAT31(local_58[0]._1_3_,1);
              FUN_007c2fb0(lVar9,local_58);
              if ((char)local_58[0] != '\0') {
                local_58[0] = local_58[0] & 0xffffff00;
              }
            }
          }
          thunk_FUN_0189cb80(local_290);
          return 0;
        }
        thunk_FUN_0189cb80(local_290);
        uVar6 = FUN_0193fd80(uVar10);
      }
      else {
        cVar4 = FUN_007a9cb0();
        if (cVar4 == '\x03') {
          FUN_01875ef0(local_290);
          FUN_01876300(local_290,1);
          FUN_01937d20(local_290,4);
          uVar6 = FUN_007c1be0(param_1 + 0x360);
          if ((uVar6 & 1) != 0) {
            uVar7 = FUN_007c2320(param_1 + 0x360);
            FUN_01876050(local_58,local_290,uVar7,0x168);
          }
          FUN_0193fc80(local_2a0,uVar10,local_290);
          if (local_2a0[0] != 0) {
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
                FUN_018724d0((ulong)local_58 | 4,local_2a0);
                local_58[0] = CONCAT31(local_58[0]._1_3_,1);
                FUN_007c2fb0(lVar9,local_58);
                if ((char)local_58[0] != '\0') {
                  local_58[0] = local_58[0] & 0xffffff00;
                }
              }
            }
            thunk_FUN_01937cd0(local_290);
            return 0;
          }
          thunk_FUN_01937cd0(local_290);
        }
        uVar6 = FUN_0193fd80(uVar10);
      }
      while ((uVar6 & 1) == 0) {
        if (*(long *)puVar1 != 0) {
          FUN_0186bd40(*(long *)puVar1,0);
        }
        nn::os::SleepThread(*(long *)(param_1 + 0x328) * 1000000);
        uVar6 = FUN_0193fd80(uVar10);
      }
      FUN_0193fdb0(local_58,uVar10);
      if (local_58[0] == 0) {
        return 1;
      }
      lVar9 = *(long *)puVar3;
      if (lVar9 != 0) {
        local_290[0] = 2;
        FUN_007c2c00(lVar9,local_290);
        local_290[0]._0_1_ = 1;
        local_290[1] = 0;
        FUN_007c2c50(lVar9,local_290);
        lVar9 = *(long *)puVar3;
        if (lVar9 != 0) {
          local_290[0] = (uint)local_290[0]._1_3_ << 8;
          FUN_018724d0((ulong)local_290 | 4,local_58);
          local_290[0] = CONCAT31(local_290[0]._1_3_,1);
          FUN_007c2fb0(lVar9,local_290);
        }
      }
    }
    else {
      FUN_018724d0((ulong)local_58 | 4,local_290);
      lVar9 = *(long *)puVar3;
      local_58[0] = CONCAT31(local_58[0]._1_3_,1);
      if (lVar9 != 0) {
        local_290[0] = 2;
        FUN_007c2c00(lVar9,local_290);
        local_290[0]._0_1_ = 1;
        local_290[1] = 0;
        FUN_007c2c50(lVar9,local_290);
        lVar9 = *(long *)puVar3;
        if (lVar9 != 0) {
          local_290[0] = (uint)local_290[0]._1_3_ << 8;
          FUN_018724d0((ulong)local_290 | 4,(ulong)local_58 | 4);
          local_290[0] = CONCAT31(local_290[0]._1_3_,1);
          FUN_007c2fb0(lVar9,local_290);
        }
      }
    }
  }
  return 0;
}


