/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc1f00; name: FUN_00bc1f00
 */


undefined8 FUN_00bc1f00(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 auStack_80 [24];
  long local_68;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar11 = FUN_016b8190();
  uVar3 = (uint)((ulong)uVar11 >> 0x20);
  uVar4 = uVar3 - 2;
  if (uVar3 < 2) {
    return 0;
  }
  if ((int)uVar11 == 0) {
    if (5 < (int)uVar4) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0x614);
    iVar9 = 1;
    uVar4 = FUN_00bcfb20(1,0,uVar4);
    uVar12 = FUN_00bc2b00(param_1);
    plVar17 = (long *)PTR_DAT_02710848;
  }
  else {
    if (4 < uVar4) {
      return 0;
    }
    lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    lVar16 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar16 == 0) {
      uVar3 = FUN_0150b350(0);
    }
    else {
      plVar17 = (long *)(lVar16 + 0x48);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      uVar3 = FUN_0150b350(lVar16);
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    uVar4 = FUN_00bcfb20(0,(int)uVar11 + -1,uVar4);
    iVar9 = 0;
    uVar12 = FUN_00bc2b00(param_1);
    plVar17 = (long *)PTR_DAT_02710848;
  }
  PTR_DAT_02710848 = (undefined *)plVar17;
  if ((uVar12 & 1) != 0) {
    FUN_00bbf290(param_1);
    FUN_006cf0a0(auStack_80,&DAT_02637c48);
    FUN_016d3620(auStack_80);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    return 1;
  }
  *(short *)(param_1 + 0x624) = (short)uVar4;
  lVar15 = *(long *)(*plVar17 + 0x90);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  piVar13 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
  if (iVar9 == 0) {
    if (*piVar13 == 0) {
LAB_00bc23f0:
      FUN_006cf0a0(auStack_80,&DAT_02637c48);
      FUN_016d3620(auStack_80);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      uVar11 = 0;
      goto joined_r0x00bc2424;
    }
    FUN_00bd3060(*(undefined8 *)(param_1 + 0x5f0),0);
    FUN_00bc2ca0(param_1,piVar13[1] & 0xff,(uint)piVar13[1] >> 0xe & 0x3f,1);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x5f0);
    if (*piVar13 == 0) {
      iVar9 = uVar3 - 1;
      uVar7 = FUN_0150a980(lVar16,iVar9);
      uVar3 = piVar13[1];
      uVar5 = FUN_00bcfb20(*piVar13,uVar3 >> 8 & 0x3f,uVar3 >> 0xe & 0x3f);
      uVar3 = FUN_0150aff0(lVar16,iVar9,uVar4,uVar3 & 0xff,uVar5);
      FUN_0150ab30(lVar16,iVar9);
      if (uVar3 == 6) {
        if (uVar4 <= uVar7) {
          FUN_00bd1f40(*puVar1,0);
          goto LAB_00bc25a8;
        }
        FUN_00bd2a80(*puVar1,0,0,uVar4,uVar7);
        uVar11 = *(undefined8 *)(param_1 + 0x5f0);
        *(short *)(param_1 + 0x624) = (short)uVar7;
      }
      else {
        if (uVar4 == uVar3) goto LAB_00bc23f0;
        if (uVar4 < uVar7) {
          FUN_00bd30e0(*puVar1,1,uVar3,0);
          FUN_00bd30e0(*puVar1,1,uVar4,0);
          FUN_00bd2690(*puVar1,uVar3);
          if (uVar3 < uVar4) {
            uVar11 = *puVar1;
            uVar7 = uVar4;
            goto LAB_00bc2520;
          }
        }
        else {
          FUN_00bd30e0(*puVar1,1,uVar3,0);
          FUN_00bd2690(*puVar1,uVar3);
          uVar11 = *puVar1;
LAB_00bc2520:
          FUN_00bd2a80(uVar11,0,0,uVar4,uVar7 - 1);
          *(short *)(param_1 + 0x624) = (short)(uVar7 - 1);
        }
        uVar11 = *puVar1;
      }
      FUN_00bd1f40(uVar11,1);
    }
    else {
      uVar5 = FUN_0150a590(lVar16,(piVar13[1] & 0xffU) - 1,(uint)piVar13[1] >> 0xe & 0x3f);
      uVar6 = FUN_0150a5c0(lVar16,(piVar13[1] & 0xffU) - 1,(uint)piVar13[1] >> 0xe & 0x3f);
      iVar2 = uVar3 - 1;
      uVar7 = FUN_0150a590(lVar16,iVar2,uVar4);
      uVar8 = FUN_0150a5c0(lVar16,iVar2,uVar4);
      if ((piVar13[1] & 0xffU) == uVar3) {
        FUN_00bd30e0(*puVar1,1,(uint)piVar13[1] >> 0xe & 0x3f,0);
        FUN_0150aff0(lVar16,iVar2,uVar4,uVar5,uVar6);
        if (uVar7 < 0x20) {
          FUN_0150aff0(lVar16,(piVar13[1] & 0xffU) - 1,(uint)piVar13[1] >> 0xe & 0x3f,uVar7,uVar8);
          FUN_00bd2130(*puVar1,0,iVar9,uVar4,*piVar13,(uint)piVar13[1] >> 0xe & 0x3f);
          FUN_00bd1f40(*puVar1,0);
        }
        else {
          iVar9 = FUN_0150a980(lVar16,iVar2);
          FUN_0150ab30(lVar16,iVar2);
          FUN_00bd2690(*(undefined8 *)(param_1 + 0x5f0),(uint)piVar13[1] >> 0xe & 0x3f);
          FUN_00bd2a80(*(undefined8 *)(param_1 + 0x5f0),0,0,uVar4,iVar9 + -1);
          *(short *)(param_1 + 0x624) = (short)(iVar9 + -1);
          FUN_00bd1f40(*(undefined8 *)(param_1 + 0x5f0),1);
        }
        goto LAB_00bc25a8;
      }
      uVar3 = FUN_0150a980(lVar16,iVar2);
      uVar10 = FUN_0150aff0(lVar16,iVar2,uVar4,uVar5,uVar6);
      FUN_0150ab30(lVar16,iVar2);
      if (uVar10 == 6) {
        if (uVar3 < uVar4) {
          FUN_00bd2a80(*(undefined8 *)(param_1 + 0x5f0),0,0,uVar4,uVar3);
          uVar11 = *(undefined8 *)(param_1 + 0x5f0);
          *(short *)(param_1 + 0x624) = (short)uVar3;
          goto LAB_00bc2590;
        }
        if (uVar7 < 0x20) {
          FUN_0150aff0(lVar16,(piVar13[1] & 0xffU) - 1,(uint)piVar13[1] >> 0xe & 0x3f,uVar7,uVar8);
        }
        FUN_00bd30e0(*puVar1,1,uVar4,0);
        uVar11 = *puVar1;
        uVar14 = 0;
      }
      else {
        if (uVar4 == uVar10) goto LAB_00bc23f0;
        if (uVar4 < uVar3) {
          FUN_0150aff0(lVar16,(piVar13[1] & 0xffU) - 1,(uint)piVar13[1] >> 0xe & 0x3f,uVar7,uVar8);
          FUN_00bd30e0(*puVar1,1,uVar10,0);
          FUN_00bd30e0(*puVar1,1,uVar4,0);
          FUN_00bd2690(*puVar1,uVar10);
          if (uVar10 < uVar4) {
            uVar11 = *puVar1;
            uVar3 = uVar4;
            goto LAB_00bc2574;
          }
        }
        else {
          FUN_00bd30e0(*puVar1,1,uVar10,0);
          FUN_00bd2690(*puVar1,uVar10);
          uVar11 = *puVar1;
LAB_00bc2574:
          FUN_00bd2a80(uVar11,0,0,uVar4,uVar3 - 1);
          *(short *)(param_1 + 0x624) = (short)(uVar3 - 1);
        }
        uVar11 = *puVar1;
LAB_00bc2590:
        uVar14 = 1;
      }
      FUN_00bd1f40(uVar11,uVar14);
      FUN_0150ab30(lVar16,*(byte *)(piVar13 + 1) - 1);
    }
  }
LAB_00bc25a8:
  FUN_006cf0a0(auStack_80,&DAT_02637c18);
  FUN_016d3620(auStack_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  *(undefined4 *)(param_1 + 0x608) = 6;
  uVar11 = 1;
joined_r0x00bc2424:
  if (lVar16 == 0) {
    return uVar11;
  }
  (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  return uVar11;
}


