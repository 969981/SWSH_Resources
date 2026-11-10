/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fe130; name: FUN_011fe130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_011fe130(long param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long alStack_270 [12];
  undefined1 *local_210;
  code *local_208;
  code *local_200;
  undefined1 *local_1f8;
  long alStack_1f0 [12];
  undefined1 *local_190;
  code *local_188;
  code *local_180;
  undefined1 *local_178;
  long alStack_170 [12];
  undefined1 *local_110;
  code *local_108;
  code *local_100;
  undefined1 *local_f8;
  long alStack_f0 [13];
  undefined4 local_84;
  long local_80;
  long *local_78;
  long local_70 [2];
  
  lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar8 == 0) {
    if (_DAT_00000070 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
    FUN_01127680(local_70,lVar8);
    lVar11 = *(long *)(local_70[0] + 0x70);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    }
    if (lVar11 != 0) {
      uVar9 = 0;
      goto LAB_011fe1fc;
    }
  }
  if (((*(long *)(param_1 + 0x138) == 0) || (*(int *)(*(long *)(param_1 + 0x138) + 0x54) == 0)) &&
     (*(int *)(param_1 + 0x84) == 0)) {
    local_70[0] = *(long *)(param_1 + 0x58);
    local_78 = (long *)0x1d29a97;
    lVar11 = FUN_01203310(&local_80,local_70[0],local_70,&local_78);
    if (lVar11 == 0) goto LAB_011fe1f0;
    plVar10 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if (*param_3 == 0) {
      lVar4 = *(long *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
    }
    else {
      plVar12 = *(long **)(param_1 + 0x58);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      plVar5 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
      if (plVar5 == (long *)0x0) {
        (**(code **)(*plVar12 + 0xb8))(plVar12);
      }
      FUN_00883c20(plVar5,*(undefined8 *)(param_1 + 0x58));
      plVar5[1] = (long)plVar12;
      plVar5[2] = (long)plVar5;
      plVar5[3] = 0x90;
      plVar5[4] = 8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(plVar5[9] + 0x10))();
      }
      if (*(long *)(param_1 + 0x120) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
      *(long **)(param_1 + 0x120) = plVar5;
      (**(code **)(*plVar5 + 0x68))(plVar5,*param_3);
    }
    local_84 = 0;
    FUN_011fe920(&local_80,lVar11,&local_84);
    FUN_011feaa0(&local_78,local_80,param_2);
    plVar12 = local_78;
    local_100 = FUN_01205400;
    local_110 = &LAB_012053d0;
    local_108 = FUN_012053f0;
    local_f8 = &LAB_01205410;
    alStack_f0[0] = param_1;
    iVar3 = FUN_007dc9a0(local_78);
    if (iVar3 == 0) {
      pcVar7 = (code *)plVar12[0x25];
      if (pcVar7 != (code *)0x0) {
        plVar12[0x26] = 0;
        plVar12[0x27] = 0;
        plVar12[0x24] = 0;
        plVar12[0x25] = 0;
        (*pcVar7)(plVar12 + 0x28);
      }
      if (local_100 != (code *)0x0) {
        (*local_100)(alStack_f0,plVar12 + 0x28);
        plVar12[0x27] = (long)local_f8;
        plVar12[0x25] = (long)local_108;
        plVar12[0x26] = (long)local_100;
        plVar12[0x24] = (long)local_110;
      }
LAB_011fe424:
      (**(code **)(plVar12[9] + 0x10))();
    }
    else if (plVar12 != (long *)0x0) goto LAB_011fe424;
    local_180 = FUN_01205450;
    local_190 = &LAB_01205420;
    local_188 = FUN_01205440;
    local_178 = &LAB_01205460;
    alStack_170[0] = param_1;
    iVar3 = FUN_007dc9a0(plVar12);
    if (iVar3 == 0) {
      pcVar7 = (code *)plVar12[0x45];
      if (pcVar7 != (code *)0x0) {
        plVar12[0x46] = 0;
        plVar12[0x47] = 0;
        plVar12[0x44] = 0;
        plVar12[0x45] = 0;
        (*pcVar7)(plVar12 + 0x48);
      }
      if (local_180 != (code *)0x0) {
        (*local_180)(alStack_170,plVar12 + 0x48);
        plVar12[0x47] = (long)local_178;
        plVar12[0x45] = (long)local_188;
        plVar12[0x46] = (long)local_180;
        plVar12[0x44] = (long)local_190;
      }
LAB_011fe4cc:
      (**(code **)(plVar12[9] + 0x10))();
    }
    else if (plVar12 != (long *)0x0) goto LAB_011fe4cc;
    local_200 = FUN_012054a0;
    local_210 = &LAB_01205470;
    local_208 = FUN_01205490;
    local_1f8 = &LAB_012054b0;
    alStack_1f0[0] = param_1;
    iVar3 = FUN_007dc9a0(plVar12);
    if (iVar3 == 0) {
      pcVar7 = (code *)plVar12[0x55];
      if (pcVar7 != (code *)0x0) {
        plVar12[0x56] = 0;
        plVar12[0x57] = 0;
        plVar12[0x54] = 0;
        plVar12[0x55] = 0;
        (*pcVar7)(plVar12 + 0x58);
      }
      if (local_200 != (code *)0x0) {
        (*local_200)(alStack_1f0,plVar12 + 0x58);
        plVar12[0x57] = (long)local_1f8;
        plVar12[0x55] = (long)local_208;
        plVar12[0x56] = (long)local_200;
        plVar12[0x54] = (long)local_210;
      }
LAB_011fe574:
      (**(code **)(plVar12[9] + 0x10))();
    }
    else if (plVar12 != (long *)0x0) goto LAB_011fe574;
    alStack_270[0] = param_1;
    iVar3 = FUN_007dc9a0(plVar12);
    if (iVar3 == 0) {
      pcVar7 = (code *)plVar12[0x35];
      if (pcVar7 != (code *)0x0) {
        plVar12[0x36] = 0;
        plVar12[0x37] = 0;
        plVar12[0x34] = 0;
        plVar12[0x35] = 0;
        (*pcVar7)(plVar12 + 0x38);
      }
      FUN_01205590(alStack_270,plVar12 + 0x38);
      plVar12[0x37] = (long)&LAB_012055a0;
      plVar12[0x35] = (long)FUN_01205580;
      plVar12[0x36] = (long)FUN_01205590;
      plVar12[0x34] = (long)&LAB_012054c0;
LAB_011fe628:
      plVar5 = plVar12 + 9;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_007dcc80(plVar12);
      (**(code **)(plVar12[9] + 0x10))(plVar5);
      bVar2 = false;
    }
    else {
      if (plVar12 != (long *)0x0) goto LAB_011fe628;
      FUN_007dcc80(0);
      bVar2 = true;
    }
    (**(code **)(*plVar12 + 0x10))(local_70,plVar12);
    if (*(long *)(param_1 + 0x138) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    lVar4 = local_70[0];
    local_70[0] = 0;
    *(long *)(param_1 + 0x138) = lVar4;
    plVar12 = plVar12 + 9;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    if (!bVar2) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    FUN_01205580(alStack_270);
    if (!bVar2) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    pcVar7 = local_208;
    if (local_208 != (code *)0x0) {
      local_200 = (code *)0x0;
      local_1f8 = (undefined1 *)0x0;
      local_210 = (undefined1 *)0x0;
      local_208 = (code *)0x0;
      (*pcVar7)(alStack_1f0);
    }
    if (!bVar2) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    pcVar7 = local_188;
    if (local_188 != (code *)0x0) {
      local_180 = (code *)0x0;
      local_178 = (undefined1 *)0x0;
      local_190 = (undefined1 *)0x0;
      local_188 = (code *)0x0;
      (*pcVar7)(alStack_170);
    }
    if (!bVar2) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    pcVar7 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar7)(alStack_f0);
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(local_78[9] + 0x18))();
      local_78 = (long *)0x0;
    }
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (lVar8 == 0) {
      local_70[0] = 0;
    }
    else {
      FUN_01127680(local_70,lVar8);
    }
    lVar4 = local_70[0];
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar10);
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar10);
    lVar6 = *(long *)(lVar4 + 0x70);
    *(long *)(lVar4 + 0x70) = lVar11;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
    *(undefined8 *)(param_1 + 0x80) = 0x100000001;
    lVar11 = 0;
    uVar9 = param_2[1];
    *(undefined8 *)(param_1 + 0x88) = *param_2;
    *(undefined8 *)(param_1 + 0x90) = uVar9;
    do {
      while( true ) {
        lVar4 = param_1 + lVar11;
        cVar1 = *(char *)((long)param_2 + lVar11 + 0x10);
        if (*(char *)(lVar4 + 0x98) == '\0') break;
        if (cVar1 == '\0') {
          if (*(char *)(lVar4 + 0xa0) != '\0') {
            *(undefined1 *)(lVar4 + 0xa0) = 0;
          }
          *(undefined1 *)(lVar4 + 0x98) = 0;
        }
        else {
          *(undefined4 *)(lVar4 + 0x9c) = *(undefined4 *)((long)param_2 + lVar11 + 0x14);
          cVar1 = *(char *)((long)param_2 + lVar11 + 0x18);
          if (*(char *)(lVar4 + 0xa0) == '\0') {
            if (cVar1 != '\0') {
              *(undefined8 *)(lVar4 + 0xa4) = *(undefined8 *)((long)param_2 + lVar11 + 0x1c);
              *(undefined1 *)(lVar4 + 0xa0) = 1;
            }
          }
          else if (cVar1 == '\0') {
            *(undefined1 *)(lVar4 + 0xa0) = 0;
          }
          else {
            *(undefined8 *)(lVar4 + 0xa4) = *(undefined8 *)((long)param_2 + lVar11 + 0x1c);
          }
        }
joined_r0x011fe8b0:
        lVar11 = lVar11 + 0x14;
        if (lVar11 == 0x78) goto LAB_011fe8e8;
      }
      if (cVar1 == '\0') goto joined_r0x011fe8b0;
      *(undefined4 *)(lVar4 + 0x9c) = *(undefined4 *)((long)param_2 + lVar11 + 0x14);
      *(undefined1 *)(lVar4 + 0xa0) = 0;
      if (*(char *)((long)param_2 + lVar11 + 0x18) != '\0') {
        *(undefined8 *)(lVar4 + 0xa4) = *(undefined8 *)((long)param_2 + lVar11 + 0x1c);
        *(undefined1 *)(lVar4 + 0xa0) = 1;
      }
      *(undefined1 *)(lVar4 + 0x98) = 1;
      lVar11 = lVar11 + 0x14;
    } while (lVar11 != 0x78);
LAB_011fe8e8:
    uVar9 = param_2[0x11];
    *(undefined2 *)(param_1 + 0x118) = *(undefined2 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x110) = uVar9;
    FUN_011fdea0(param_1);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    uVar9 = 1;
  }
  else {
LAB_011fe1f0:
    uVar9 = 0;
  }
  if (lVar8 == 0) {
    return uVar9;
  }
LAB_011fe1fc:
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return uVar9;
}


