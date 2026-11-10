/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060b2c0; name: FUN_0060b2c0
 */


undefined8 FUN_0060b2c0(long param_1,ulong *param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *local_d0;
  long local_c8;
  byte local_a8;
  long *local_a0;
  char *local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  undefined1 auStack_70 [16];
  long local_60;
  long lStack_58;
  
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = FUN_00682e30(param_3,1), (uVar3 & 1) != 0)) {
    plVar4 = (long *)FUN_0067d0e0();
    plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,param_3,9,0);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    uVar5 = (**(code **)(*plVar4 + 0x50))();
    plVar6 = *(long **)(param_1 + 8);
    if ((plVar6 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar6 + 0x40))
                          (plVar6,1,uVar5,0xffffffff,
                           "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp"
                           ,0x8c), lVar7 == 0)) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return 0;
    }
    uVar3 = (**(code **)(*plVar4 + 0xa8))(plVar4,lVar7,uVar5,1);
    (**(code **)(*plVar4 + 0x48))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    if ((uVar3 & 1) != 0) {
      iVar2 = FUN_00604300(*(undefined8 *)(param_1 + 0x28),lVar7,uVar5,(long)param_4,param_2);
      if (iVar2 == 0) {
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar8 = *(long *)(param_1 + 0x48);
          do {
            if (*param_2 < *(ulong *)(lVar8 + 8)) {
              lVar11 = *(long *)(lVar8 + 0x20);
            }
            else {
              if (*param_2 <= *(ulong *)(lVar8 + 8)) {
                if (*(long *)(lVar8 + 0x10) != 0) {
                  plVar4 = *(long **)(param_1 + 8);
                  if (plVar4 != (long *)0x0) {
                    (**(code **)(*plVar4 + 0x48))
                              (plVar4,*(long *)(lVar8 + 0x10),
                               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp"
                               ,0xb7);
                  }
                  *(undefined8 *)(lVar8 + 0x10) = 0;
                }
                *(long *)(lVar8 + 0x10) = lVar7;
                return 1;
              }
              lVar11 = *(long *)(lVar8 + 0x28);
            }
          } while ((lVar11 != 0) && (bVar1 = lVar11 != lVar8, lVar8 = lVar11, bVar1));
        }
        FUN_0060b710(param_1 + 0x30,param_2,lVar7);
        return 1;
      }
      local_80 = 0;
      local_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = (long *)0x0;
      local_98 = (char *)0x0;
      lVar8 = FUN_005bc740();
      if (lVar8 == 0) {
        local_a0 = (long *)FUN_005bc6f0();
      }
      else {
        local_a0 = (long *)FUN_005bc740();
      }
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        local_90 = 0;
        do {
          lVar8 = local_90 + 1;
          local_90 = local_90 + 1;
        } while (param_3[lVar8] != '\0');
        local_80 = 0;
        local_78 = 1;
        local_98 = param_3;
      }
      FUN_005e44b0(&local_d0,&local_a0,1);
      uVar3 = *param_2;
      lVar8 = param_1 + 0x30;
      lVar11 = *(long *)(param_1 + 0x48);
      local_60 = lVar8;
      if (*(long *)(param_1 + 0x48) != 0) {
        do {
          uVar9 = *(ulong *)(lVar11 + 8);
          if (uVar3 <= uVar9 && uVar9 != uVar3) {
            lVar10 = *(long *)(lVar11 + 0x20);
          }
          else {
            if (uVar3 <= uVar9) {
              lStack_58 = lVar11;
              FUN_00604370();
              if (*(long *)(lVar11 + 0x10) != 0) {
                plVar4 = *(long **)(param_1 + 8);
                if (plVar4 != (long *)0x0) {
                  (**(code **)(*plVar4 + 0x48))
                            (plVar4,*(long *)(lVar11 + 0x10),
                             "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp"
                             ,0x10e);
                }
                *(undefined8 *)(lVar11 + 0x10) = 0;
              }
              FUN_0060bcd0(auStack_70,lVar8,&local_60);
              plVar4 = *(long **)(param_1 + 8);
              goto joined_r0x0060b5f8;
            }
            lVar10 = *(long *)(lVar11 + 0x28);
          }
        } while ((lVar10 != 0) && (bVar1 = lVar10 != lVar11, lVar11 = lVar10, bVar1));
      }
      lStack_58 = 0;
      FUN_00604370();
      plVar4 = *(long **)(param_1 + 8);
joined_r0x0060b5f8:
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,lVar7,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp",
                   0xb0);
      }
      if ((local_a8 & 1) == 0) {
        if ((local_c8 != 0) && (local_d0 != (long *)0x0)) {
          (**(code **)(*local_d0 + 0x48))
                    (local_d0,local_c8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
        }
        local_c8 = 0;
      }
      if ((((local_78 & 1) == 0) && (local_98 != (char *)0x0)) && (local_a0 != (long *)0x0)) {
        (**(code **)(*local_a0 + 0x48))
                  (local_a0,local_98,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
    }
  }
  return 0;
}


