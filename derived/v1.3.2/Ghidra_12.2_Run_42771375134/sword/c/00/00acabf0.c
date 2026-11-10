/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acabf0; name: FUN_00acabf0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00acabf0(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  undefined1 auStack_50 [4];
  short local_4c;
  
  (**(code **)(*param_1 + 0x220))(auStack_50);
  if (local_4c == 0) {
    lVar5 = *param_2;
    if (lVar5 < 0x113052c096300d8) {
      if (-0x5a5cd762316003b7 < lVar5) {
        if (lVar5 == -0x5a5cd762316003b6) {
          lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
          local_70 = 0xe8611eeb71e26812;
          local_68 = "Spine2";
          local_60 = 6;
          local_58 = 0;
          lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
          uVar6 = _DAT_01d4abb0;
          uVar7 = _UNK_01d4abb8;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            uVar6 = _DAT_01d4abb0;
            uVar7 = _UNK_01d4abb8;
          }
          goto joined_r0x00acb650;
        }
        if (lVar5 == -0x3eb2348fd3e7ca4e) {
          lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
          local_70 = 0x55c0d7a581349f0f;
          local_68 = "Origin";
          local_60 = 6;
          local_58 = 0;
          lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
          uVar6 = _DAT_01d4aba0;
          uVar7 = _UNK_01d4aba8;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            uVar6 = _DAT_01d4aba0;
            uVar7 = _UNK_01d4aba8;
          }
          goto joined_r0x00acb6d4;
        }
        if (lVar5 != -0x226e5f122989b3f5) {
          return 0;
        }
        lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_70 = 0x525829bbe8d0ab43;
        local_68 = "Head";
        local_60 = 4;
        local_58 = 0;
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
        uVar6 = _DAT_01d49fc0;
        uVar7 = _UNK_01d49fc8;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          uVar6 = _DAT_01d49fc0;
          uVar7 = _UNK_01d49fc8;
        }
joined_r0x00acaf00:
        local_58 = 0;
        fVar2 = (float)uVar7;
        goto joined_r0x00acb098;
      }
      if (lVar5 != -0x64793ce85744b205) {
        if (lVar5 != -0x64793be85744b052) {
          return 0;
        }
        lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_70 = 0x525829bbe8d0ab43;
        local_68 = "Head";
        local_60 = 4;
        local_58 = 0;
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
        uVar6 = _DAT_01d4ba50;
        uVar7 = _UNK_01d4ba58;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          uVar6 = _DAT_01d4ba50;
          uVar7 = _UNK_01d4ba58;
        }
        goto joined_r0x00acb200;
      }
      lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
      local_70 = 0x525829bbe8d0ab43;
      local_68 = "Head";
      local_60 = 4;
      local_58 = 0;
      lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
      uVar6 = _DAT_01d4a6e0;
      uVar7 = _UNK_01d4a6e8;
      lVar3 = 0;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
        uVar6 = _DAT_01d4a6e0;
        uVar7 = _UNK_01d4a6e8;
        lVar3 = local_58;
      }
      goto joined_r0x00acb8e4;
    }
    if (lVar5 < 0x68bd6fce617ac370) {
      if (lVar5 != 0x113052c096300d8) {
        if (lVar5 != 0x791abfaf3a0f16c) {
          if (lVar5 != 0x295209b6eafc7338) {
            return 0;
          }
          goto LAB_00acaf50;
        }
        lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_70 = 0x525829bbe8d0ab43;
        local_68 = "Head";
        local_60 = 4;
        local_58 = 0;
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
        uVar6 = _DAT_01d4b7f0;
        uVar7 = _UNK_01d4b7f8;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          uVar6 = _DAT_01d4b7f0;
          uVar7 = _UNK_01d4b7f8;
        }
        goto joined_r0x00acb444;
      }
      lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
      local_70 = 0x525829bbe8d0ab43;
      local_68 = "Head";
      local_60 = 4;
      local_58 = 0;
      lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
      uVar6 = _DAT_01d4b5f0;
      uVar7 = _UNK_01d4b5f8;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        uVar6 = _DAT_01d4b5f0;
        uVar7 = _UNK_01d4b5f8;
      }
joined_r0x00acb3c0:
      local_58 = 0;
      fVar2 = (float)uVar7;
      goto joined_r0x00acb098;
    }
    if (lVar5 != 0x68bd6fce617ac370) {
      if (lVar5 != 0x6ed38b8be70cb945) {
        if (lVar5 != 0x7e9bc1acdbf0328f) {
          return 0;
        }
        lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_70 = 0x525829bbe8d0ab43;
        local_68 = "Head";
        local_60 = 4;
        local_58 = 0;
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
        uVar6 = _DAT_01d49e30;
        uVar7 = _UNK_01d49e38;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          uVar6 = _DAT_01d49e30;
          uVar7 = _UNK_01d49e38;
        }
        goto joined_r0x00acb098;
      }
LAB_00acb208:
      lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
      local_70 = 0x55c0d7a581349f0f;
      local_68 = "Origin";
      goto LAB_00acb47c;
    }
    lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
    local_70 = 0xe8611eeb71e26812;
    local_68 = "Spine2";
    local_60 = 6;
    local_58 = 0;
    lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
    uVar6 = _DAT_01d49fb0;
    uVar7 = _UNK_01d49fb8;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      uVar6 = _DAT_01d49fb0;
      uVar7 = _UNK_01d49fb8;
    }
  }
  else {
    if (local_4c != 1) {
      return 0;
    }
    lVar5 = *param_2;
    if (lVar5 < 0x113052c096300d8) {
      if (lVar5 < -0x5a5cd762316003b6) {
        if (lVar5 != -0x64793ce85744b205) {
          if (lVar5 != -0x64793be85744b052) {
            return 0;
          }
          lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
          local_70 = 0x525829bbe8d0ab43;
          local_68 = "Head";
          local_60 = 4;
          local_58 = 0;
          lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
          uVar6 = _DAT_01d4a2e0;
          uVar7 = _UNK_01d4a2e8;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            uVar6 = _DAT_01d4a2e0;
            uVar7 = _UNK_01d4a2e8;
          }
joined_r0x00acb444:
          local_58 = 0;
          fVar2 = (float)uVar7;
          goto joined_r0x00acb098;
        }
        lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_70 = 0x525829bbe8d0ab43;
        local_68 = "Head";
        local_60 = 4;
        local_58 = 0;
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
        uVar6 = _DAT_01d4a790;
        uVar7 = _UNK_01d4a798;
        lVar3 = 0;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
          uVar6 = _DAT_01d4a790;
          uVar7 = _UNK_01d4a798;
          lVar3 = local_58;
        }
      }
      else {
        if (lVar5 != -0x5a5cd762316003b6) {
          if (lVar5 != -0x3eb2348fd3e7ca4e) {
            if (lVar5 != -0x226e5f122989b3f5) {
              return 0;
            }
            lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
            local_70 = 0x525829bbe8d0ab43;
            local_68 = "Head";
            local_60 = 4;
            local_58 = 0;
            lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
            uVar6 = _DAT_01d4ba40;
            uVar7 = _UNK_01d4ba48;
            if (local_58 != 0) {
              (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
              uVar6 = _DAT_01d4ba40;
              uVar7 = _UNK_01d4ba48;
            }
joined_r0x00acb098:
            local_58 = 0;
            fVar2 = (float)uVar7;
            goto joined_r0x00acb098;
          }
          lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
          local_70 = 0x55c0d7a581349f0f;
          local_68 = "Origin";
          local_60 = 6;
          local_58 = 0;
          lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
          uVar6 = _DAT_01d4a970;
          uVar7 = _UNK_01d4a978;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            uVar6 = _DAT_01d4a970;
            uVar7 = _UNK_01d4a978;
          }
          goto joined_r0x00acb3c0;
        }
        lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_70 = 0xe8611eeb71e26812;
        local_68 = "Spine2";
LAB_00acb47c:
        local_60 = 6;
        local_58 = 0;
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        uVar6 = 0;
        uVar7 = 0;
        lVar3 = local_58;
      }
joined_r0x00acb8e4:
      fVar2 = (float)uVar7;
      local_58 = lVar3;
      goto joined_r0x00acb098;
    }
    if (lVar5 < 0x68bd6fce617ac370) {
      if (lVar5 == 0x113052c096300d8) {
        lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_70 = 0x525829bbe8d0ab43;
        local_68 = "Head";
        local_60 = 4;
        local_58 = 0;
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
        uVar6 = _DAT_01d4a880;
        uVar7 = _UNK_01d4a888;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          uVar6 = _DAT_01d4a880;
          uVar7 = _UNK_01d4a888;
        }
joined_r0x00acb650:
        local_58 = 0;
        fVar2 = (float)uVar7;
        goto joined_r0x00acb098;
      }
      if (lVar5 != 0x791abfaf3a0f16c) {
        if (lVar5 != 0x295209b6eafc7338) {
          return 0;
        }
        goto LAB_00acb208;
      }
      lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
      local_70 = 0x15e42926b703c1b9;
      local_68 = "Jaw";
      local_60 = 3;
      local_58 = 0;
      lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
      uVar6 = _DAT_01d4ba30;
      uVar7 = _UNK_01d4ba38;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        uVar6 = _DAT_01d4ba30;
        uVar7 = _UNK_01d4ba38;
      }
joined_r0x00acb200:
      local_58 = 0;
      fVar2 = (float)uVar7;
      goto joined_r0x00acb098;
    }
    if (lVar5 != 0x68bd6fce617ac370) {
      if (lVar5 != 0x6ed38b8be70cb945) {
        if (lVar5 != 0x7e9bc1acdbf0328f) {
          return 0;
        }
LAB_00acaf50:
        lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
        local_70 = 0xfe3e9b9c2b53d87a;
        local_68 = "LFinger";
        local_60 = 7;
        local_58 = 0;
        lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
        uVar6 = _DAT_01d4a980;
        uVar7 = _UNK_01d4a988;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          uVar6 = _DAT_01d4a980;
          uVar7 = _UNK_01d4a988;
        }
joined_r0x00acb6d4:
        local_58 = 0;
        fVar2 = (float)uVar7;
        goto joined_r0x00acb098;
      }
      lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
      local_70 = 0x55c0d7a581349f0f;
      local_68 = "Origin";
      local_60 = 6;
      local_58 = 0;
      lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
      uVar6 = _DAT_01d4ad30;
      uVar7 = _UNK_01d4ad38;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        uVar6 = _DAT_01d4ad30;
        uVar7 = _UNK_01d4ad38;
      }
      goto joined_r0x00acaf00;
    }
    lVar5 = (**(code **)(*param_1 + 0x208))(param_1,param_2);
    local_70 = 0xe8611deb71e2665f;
    local_68 = "Spine1";
    local_60 = 6;
    local_58 = 0;
    lVar4 = (**(code **)(*param_1 + 0x208))(param_1,&local_70);
    uVar6 = _DAT_01d4a190;
    uVar7 = _UNK_01d4a198;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      uVar6 = _DAT_01d4a190;
      uVar7 = _UNK_01d4a198;
    }
  }
  local_58 = 0;
  fVar2 = (float)uVar7;
joined_r0x00acb098:
  uVar7 = 0;
  if ((lVar4 != 0) && (uVar7 = 0, lVar5 != 0)) {
    lVar5 = *(long *)(lVar4 + 0x120);
    iVar1 = *(int *)(*(long *)(lVar4 + 0x128) + 0x40);
    FUN_00723030(lVar5,iVar1);
    lVar5 = *(long *)(lVar5 + 0x1b8) + (long)iVar1 * 0x130;
    fVar21 = (float)uVar6;
    fVar8 = (float)*(undefined8 *)(lVar5 + 0xa0);
    fVar9 = (float)((ulong)*(undefined8 *)(lVar5 + 0xa0) >> 0x20);
    fVar10 = (float)*(undefined8 *)(lVar5 + 0xa8);
    fVar11 = (float)((ulong)*(undefined8 *)(lVar5 + 0xa8) >> 0x20);
    fVar22 = (float)((ulong)uVar6 >> 0x20);
    fVar12 = (float)*(undefined8 *)(lVar5 + 0xb0);
    fVar13 = (float)((ulong)*(undefined8 *)(lVar5 + 0xb0) >> 0x20);
    fVar14 = (float)*(undefined8 *)(lVar5 + 0xb8);
    fVar15 = (float)((ulong)*(undefined8 *)(lVar5 + 0xb8) >> 0x20);
    uVar20 = *(undefined8 *)(lVar5 + 0xd8);
    uVar6 = *(undefined8 *)(lVar5 + 0xd0);
    fVar16 = (float)*(undefined8 *)(lVar5 + 0xc0);
    fVar17 = (float)((ulong)*(undefined8 *)(lVar5 + 0xc0) >> 0x20);
    fVar18 = (float)*(undefined8 *)(lVar5 + 200);
    fVar19 = (float)((ulong)*(undefined8 *)(lVar5 + 200) >> 0x20);
    uVar7 = 1;
    param_3[1] = CONCAT44(fVar11 + fVar15 * 0.0 + fVar19 * 0.0,fVar10 + fVar14 * 0.0 + fVar18 * 0.0)
    ;
    *param_3 = CONCAT44(fVar9 + fVar13 * 0.0 + fVar17 * 0.0,fVar8 + fVar12 * 0.0 + fVar16 * 0.0);
    param_3[3] = CONCAT44(fVar15 + fVar11 * 0.0 + fVar19 * 0.0,fVar14 + fVar10 * 0.0 + fVar18 * 0.0)
    ;
    param_3[2] = CONCAT44(fVar13 + fVar9 * 0.0 + fVar17 * 0.0,fVar12 + fVar8 * 0.0 + fVar16 * 0.0);
    param_3[5] = CONCAT44(fVar19 + fVar11 * 0.0 + fVar15 * 0.0,fVar18 + fVar10 * 0.0 + fVar14 * 0.0)
    ;
    param_3[4] = CONCAT44(fVar17 + fVar9 * 0.0 + fVar13 * 0.0,fVar16 + fVar8 * 0.0 + fVar12 * 0.0);
    param_3[7] = CONCAT44((float)((ulong)uVar20 >> 0x20) +
                          fVar11 * fVar21 + fVar15 * fVar22 + fVar19 * fVar2,
                          (float)uVar20 + fVar10 * fVar21 + fVar14 * fVar22 + fVar18 * fVar2);
    param_3[6] = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                          fVar9 * fVar21 + fVar13 * fVar22 + fVar17 * fVar2,
                          (float)uVar6 + fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar2);
  }
  return uVar7;
}


