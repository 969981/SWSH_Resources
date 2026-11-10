/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fec20; name: FUN_011fec20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_011fec20(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            long *param_6)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_290 [12];
  undefined1 *local_230;
  code *local_228;
  code *local_220;
  undefined1 *local_218;
  long alStack_210 [12];
  undefined1 *local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  long alStack_190 [12];
  undefined1 *local_130;
  code *local_128;
  code *local_120;
  undefined1 *local_118;
  long alStack_110 [13];
  undefined4 local_a4;
  long local_a0;
  long *local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70 [2];
  
  lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar7 == 0) {
    if (_DAT_00000070 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
    FUN_01127680(&local_90,lVar7);
    lVar4 = CONCAT44(uStack_8c,local_90);
    lVar9 = *(long *)(lVar4 + 0x70);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    if (lVar9 != 0) {
      uVar10 = 0;
      goto LAB_011ff318;
    }
  }
  if (((*(long *)(param_1 + 0x138) == 0) || (*(int *)(*(long *)(param_1 + 0x138) + 0x54) == 0)) &&
     (*(int *)(param_1 + 0x84) == 0)) {
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    local_90 = (int)uVar10;
    uStack_8c = (undefined4)((ulong)uVar10 >> 0x20);
    local_70[0] = "StartJoinSession";
    lVar4 = FUN_012055b0(&local_98,uVar10,&local_90,local_70);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar10 = 0;
    if ((param_2 != 0) && (lVar4 != 0)) {
      if (*param_6 == 0) {
        lVar9 = *(long *)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = 0;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
        }
      }
      else {
        plVar8 = *(long **)(param_1 + 0x58);
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        plVar5 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x90,8);
        if (plVar5 == (long *)0x0) {
          (**(code **)(*plVar8 + 0xb8))(plVar8);
        }
        FUN_00883c20(plVar5,*(undefined8 *)(param_1 + 0x58));
        plVar5[1] = (long)plVar8;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x90;
        plVar5[4] = 8;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(plVar5[9] + 0x10))();
        }
        if (*(long *)(param_1 + 0x120) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x120) = 0;
        }
        *(long **)(param_1 + 0x120) = plVar5;
        (**(code **)(*plVar5 + 0x68))(plVar5,*param_6);
      }
      uStack_8c = (undefined4)param_3;
      uStack_88 = (undefined4)((ulong)param_3 >> 0x20);
      local_a4 = 0;
      local_90 = param_2;
      local_80 = param_4;
      uStack_78 = param_5;
      FUN_011ff350(&local_a0,lVar4,&local_a4);
      FUN_011ff4d0(&local_98,local_a0,&local_90);
      plVar8 = local_98;
      local_120 = FUN_012071b0;
      local_130 = &LAB_01207180;
      local_128 = FUN_012071a0;
      local_118 = &LAB_012071c0;
      alStack_110[0] = param_1;
      iVar3 = FUN_007dc9a0(local_98);
      if (iVar3 == 0) {
        pcVar6 = (code *)plVar8[0x25];
        if (pcVar6 != (code *)0x0) {
          plVar8[0x26] = 0;
          plVar8[0x27] = 0;
          plVar8[0x24] = 0;
          plVar8[0x25] = 0;
          (*pcVar6)(plVar8 + 0x28);
        }
        if (local_120 != (code *)0x0) {
          (*local_120)(alStack_110,plVar8 + 0x28);
          plVar8[0x27] = (long)local_118;
          plVar8[0x25] = (long)local_128;
          plVar8[0x26] = (long)local_120;
          plVar8[0x24] = (long)local_130;
        }
LAB_011fef08:
        (**(code **)(plVar8[9] + 0x10))();
      }
      else if (plVar8 != (long *)0x0) goto LAB_011fef08;
      local_1a0 = FUN_01207220;
      local_1b0 = &LAB_012071d0;
      local_1a8 = FUN_01207210;
      local_198 = &LAB_01207230;
      alStack_190[0] = param_1;
      iVar3 = FUN_007dc9a0(plVar8);
      if (iVar3 == 0) {
        pcVar6 = (code *)plVar8[0x45];
        if (pcVar6 != (code *)0x0) {
          plVar8[0x46] = 0;
          plVar8[0x47] = 0;
          plVar8[0x44] = 0;
          plVar8[0x45] = 0;
          (*pcVar6)(plVar8 + 0x48);
        }
        if (local_1a0 != (code *)0x0) {
          (*local_1a0)(alStack_190,plVar8 + 0x48);
          plVar8[0x47] = (long)local_198;
          plVar8[0x45] = (long)local_1a8;
          plVar8[0x46] = (long)local_1a0;
          plVar8[0x44] = (long)local_1b0;
        }
LAB_011fefb0:
        (**(code **)(plVar8[9] + 0x10))();
      }
      else if (plVar8 != (long *)0x0) goto LAB_011fefb0;
      local_220 = FUN_01207270;
      local_230 = &LAB_01207240;
      local_228 = FUN_01207260;
      local_218 = &LAB_01207280;
      alStack_210[0] = param_1;
      iVar3 = FUN_007dc9a0(plVar8);
      if (iVar3 == 0) {
        pcVar6 = (code *)plVar8[0x55];
        if (pcVar6 != (code *)0x0) {
          plVar8[0x56] = 0;
          plVar8[0x57] = 0;
          plVar8[0x54] = 0;
          plVar8[0x55] = 0;
          (*pcVar6)(plVar8 + 0x58);
        }
        if (local_220 != (code *)0x0) {
          (*local_220)(alStack_210,plVar8 + 0x58);
          plVar8[0x57] = (long)local_218;
          plVar8[0x55] = (long)local_228;
          plVar8[0x56] = (long)local_220;
          plVar8[0x54] = (long)local_230;
        }
LAB_011ff058:
        (**(code **)(plVar8[9] + 0x10))();
      }
      else if (plVar8 != (long *)0x0) goto LAB_011ff058;
      alStack_290[0] = param_1;
      iVar3 = FUN_007dc9a0(plVar8);
      if (iVar3 == 0) {
        pcVar6 = (code *)plVar8[0x35];
        if (pcVar6 != (code *)0x0) {
          plVar8[0x36] = 0;
          plVar8[0x37] = 0;
          plVar8[0x34] = 0;
          plVar8[0x35] = 0;
          (*pcVar6)(plVar8 + 0x38);
        }
        FUN_01207360(alStack_290,plVar8 + 0x38);
        plVar8[0x37] = (long)&LAB_01207370;
        plVar8[0x35] = (long)FUN_01207350;
        plVar8[0x36] = (long)FUN_01207360;
        plVar8[0x34] = (long)&LAB_01207290;
LAB_011ff10c:
        plVar5 = plVar8 + 9;
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_007dcc80(plVar8);
        (**(code **)(plVar8[9] + 0x10))(plVar5);
        bVar1 = false;
      }
      else {
        if (plVar8 != (long *)0x0) goto LAB_011ff10c;
        FUN_007dcc80(0);
        bVar1 = true;
      }
      (**(code **)(*plVar8 + 0x10))(local_70,plVar8);
      if (*(long *)(param_1 + 0x138) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x138) = 0;
      }
      pcVar2 = local_70[0];
      local_70[0] = (char *)0x0;
      *(char **)(param_1 + 0x138) = pcVar2;
      plVar8 = plVar8 + 9;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      if (!bVar1) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      FUN_01207350(alStack_290);
      if (!bVar1) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      pcVar6 = local_228;
      if (local_228 != (code *)0x0) {
        local_220 = (code *)0x0;
        local_218 = (undefined1 *)0x0;
        local_230 = (undefined1 *)0x0;
        local_228 = (code *)0x0;
        (*pcVar6)(alStack_210);
      }
      if (!bVar1) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      pcVar6 = local_1a8;
      if (local_1a8 != (code *)0x0) {
        local_1a0 = (code *)0x0;
        local_198 = (undefined1 *)0x0;
        local_1b0 = (undefined1 *)0x0;
        local_1a8 = (code *)0x0;
        (*pcVar6)(alStack_190);
      }
      if (!bVar1) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      pcVar6 = local_128;
      if (local_128 != (code *)0x0) {
        local_120 = (code *)0x0;
        local_118 = (undefined1 *)0x0;
        local_130 = (undefined1 *)0x0;
        local_128 = (code *)0x0;
        (*pcVar6)(alStack_110);
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(local_98[9] + 0x18))();
        local_98 = (long *)0x0;
      }
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      if (lVar7 == 0) {
        local_70[0] = (char *)0x0;
      }
      else {
        FUN_01127680(local_70,lVar7);
      }
      pcVar2 = local_70[0];
      plVar8 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar9 = *(long *)(pcVar2 + 0x70);
      *(long *)(pcVar2 + 0x70) = lVar4;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
      if (local_70[0] != (char *)0x0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
        local_70[0] = (char *)0x0;
      }
      *(undefined8 *)(param_1 + 0x80) = 0x100000001;
      FUN_011fdea0(param_1);
      uVar10 = 1;
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  else {
    uVar10 = 0;
  }
  if (lVar7 == 0) {
    return uVar10;
  }
LAB_011ff318:
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return uVar10;
}


