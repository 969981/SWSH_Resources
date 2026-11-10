/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe16e0; name: FUN_00fe16e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fe16e0(long param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [24];
  long local_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 == 0) {
    FUN_012b4da0(auStack_70,*(undefined8 *)(_DAT_00000b98 + 400),
                 *(undefined8 *)(_DAT_00000b98 + 0x180));
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_012b4da0(auStack_70,*(undefined8 *)(*(long *)(lVar5 + 0xb98) + 400),
                 *(undefined8 *)(*(long *)(lVar5 + 0xb98) + 0x180));
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_f8 = 0xc46bd515954dab1b;
  local_f0 = "stamp_table";
  local_e8 = 0xb;
  FUN_012b4250(auStack_80,auStack_70,&local_f8);
  lVar5 = FUN_012b40f0(auStack_80);
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      FUN_012b4190(auStack_90,auStack_80,uVar7);
      local_f8 = 0xc076bb6523cb87c9;
      local_f0 = "stampId";
      local_e8 = 7;
      FUN_012b4250(&local_d8,auStack_90,&local_f8);
      iVar3 = FUN_012b4420(&local_d8,0);
      if (iVar3 == param_2) {
        FUN_012b4190(auStack_90,auStack_80,uVar7 & 0xffffffff);
        local_d8 = 0x65936613831e89b7;
        local_d0 = "fieldImageName";
        local_c8 = 0xe;
        FUN_012b4250(auStack_c0,auStack_90,&local_d8);
        local_f8 = 0xcbf29ce484222645;
        local_f0 = "";
        local_e8 = 0;
        local_e0 = 0;
        FUN_012b4820(auStack_b0,auStack_c0,&local_f8);
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_160 = 0;
        uStack_158 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        FUN_010a6a10(param_1 + 0x40,auStack_b0,0,&local_180);
        pcVar2 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = 0;
          uStack_168 = 0;
          local_180 = 0;
          local_178 = (code *)0x0;
          (*pcVar2)(&local_160);
        }
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          local_98 = 0;
        }
        if (local_e0 != 0) {
          (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
          local_e0 = 0;
        }
        local_f8 = 0x4e37e44ca7f410cf;
        local_f0 = "pokeIconFlag";
        local_e8 = 0xc;
        FUN_012b4250(&local_d8,auStack_90,&local_f8);
        iVar3 = FUN_012b4420(&local_d8,0);
        if (iVar3 == 0) {
          lVar5 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),param_1 + 0x810);
          *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
        }
        else {
          local_190 = 0;
          uStack_188 = 0;
          local_1a0 = 0;
          uStack_198 = 0;
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1c0 = 0;
          uStack_1b8 = 0;
          local_1d0 = 0;
          uStack_1c8 = 0;
          local_1e0 = 0;
          uStack_1d8 = 0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_200 = 0;
          local_1f8 = (code *)0x0;
          FUN_0168c9c0(param_1 + 0x410,param_3,0,&local_200);
          pcVar2 = local_1f8;
          if (local_1f8 != (code *)0x0) {
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_200 = 0;
            local_1f8 = (code *)0x0;
            (*pcVar2)(&local_1e0);
          }
          plVar6 = *(long **)(param_1 + 0x428);
          local_f8 = 0xcebdeec5f8e10b59;
          local_f0 = "pokeIconPosFieldX";
          local_e8 = 0x11;
          FUN_012b4250(&local_d8,auStack_90,&local_f8);
          uVar8 = FUN_012b4630(0,&local_d8);
          local_f8 = 0xcebdedc5f8e109a6;
          local_f0 = "pokeIconPosFieldY";
          local_e8 = 0x11;
          FUN_012b4250(&local_d8,auStack_90,&local_f8);
          uVar9 = FUN_012b4630(0,&local_d8);
          *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
          *(undefined4 *)(plVar6 + 6) = uVar8;
          *(undefined4 *)(plVar6 + 7) = 0;
          *(undefined4 *)((long)plVar6 + 0x34) = uVar9;
          local_f8 = 0x707151e61ea4b74d;
          local_f0 = "type";
          local_e8 = 4;
          FUN_012b4250(&local_d8,auStack_90,&local_f8);
          iVar3 = FUN_012b4420(&local_d8,0);
          uVar10 = local_f8;
          cVar1 = -(iVar3 != 3);
          local_f8._4_4_ = SUB84(uVar10,4);
          local_f8._0_4_ = CONCAT13(0xff,CONCAT12(cVar1,CONCAT11(cVar1,cVar1)));
          (**(code **)(*plVar6 + 0x28))(plVar6,0,&local_f8);
          (**(code **)(*plVar6 + 0x28))(plVar6,1,&local_f8);
          (**(code **)(*plVar6 + 0x28))(plVar6,2,&local_f8);
          (**(code **)(*plVar6 + 0x28))(plVar6,3,&local_f8);
        }
        local_f8 = 0x707151e61ea4b74d;
        local_f0 = "type";
        local_e8 = 4;
        FUN_012b4250(&local_d8,auStack_90,&local_f8);
        iVar3 = FUN_012b4420(&local_d8,0);
        FUN_00ffd010(*(undefined8 *)(param_1 + 0x10),param_1 + 0x838);
        uVar10 = 0x3f800000;
        if (iVar3 != 3) {
          uVar10 = 0;
        }
        FUN_00ffd510(uVar10,*(undefined8 *)(param_1 + 0x10),param_1 + 0x838);
        return;
      }
      uVar7 = uVar7 + 1;
      uVar4 = FUN_012b40f0(auStack_80);
    } while (uVar7 < uVar4);
  }
  return;
}


