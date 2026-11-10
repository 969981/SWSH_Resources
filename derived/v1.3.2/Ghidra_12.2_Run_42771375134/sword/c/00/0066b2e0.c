/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066b2e0; name: FUN_0066b2e0
 */


undefined8 FUN_0066b2e0(long param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (0 < *(long *)(param_3 + 0x68)) {
    FUN_00682fc0(param_2,(long)*(int *)(param_3 + 100));
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0xbe8) = 0;
      return 0;
    }
    lVar3 = (**(code **)(*plVar2 + 0x40))
                      (plVar2,1,*(undefined8 *)(param_3 + 0x68),*(undefined4 *)(param_3 + 100),
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                       ,0x646);
    *(long *)(param_1 + 0xbe8) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    (**(code **)(*param_2 + 0xa8))(param_2,lVar3,*(undefined8 *)(param_3 + 0x68),1);
  }
  FUN_00682fc0(param_2,0x10);
  if (*(int *)(param_3 + 0x80) < 1) {
    if (*(int *)(param_3 + 0x84) < 1) {
      if (*(int *)(param_3 + 0x88) < 1) {
        if (*(int *)(param_3 + 0x8c) < 1) {
          if (*(int *)(param_3 + 0x90) < 1) {
            if (*(int *)(param_3 + 0x94) < 1) {
              return 1;
            }
            plVar2 = *(long **)(param_1 + 8);
            if (plVar2 == (long *)0x0) {
              uVar4 = 0;
              lVar3 = *(long *)(param_1 + 0xbe8);
              *(undefined8 *)(param_1 + 0xc20) = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar2 + 0x40))
                                (plVar2,0x10,(long)*(int *)(param_3 + 0x94),0xffffffff,
                                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                                 ,0x69f);
              lVar3 = *(long *)(param_1 + 0xbe8);
              *(undefined8 *)(param_1 + 0xc20) = uVar4;
            }
            if (lVar3 == 0) {
              return 0;
            }
            (**(code **)(*param_2 + 0xa8))(param_2,uVar4,(long)*(int *)(param_3 + 0x94) << 4,1);
            iVar1 = *(int *)(param_3 + 0x94);
            uVar6 = (ulong)iVar1;
            if (*(ulong *)(param_1 + 0xdf8) != uVar6) {
              if ((uVar6 < *(ulong *)(param_1 + 0xe00)) ||
                 (uVar5 = FUN_0066f150(param_1 + 0xde8,uVar6,1), (uVar5 & 1) != 0)) {
                *(ulong *)(param_1 + 0xdf8) = uVar6;
                if (iVar1 != 0) {
                  *(long *)(param_1 + 0xe18) = *(long *)(param_1 + 0xe10);
                  *(ulong *)(param_1 + 0xe20) = *(long *)(param_1 + 0xe10) + uVar6 * 8;
                  goto LAB_0066b928;
                }
              }
              else {
                *(undefined8 *)(param_1 + 0xdf8) = 0;
              }
              *(undefined8 *)(param_1 + 0xe20) = 0;
              *(undefined8 *)(param_1 + 0xe18) = 0;
            }
LAB_0066b928:
                    /* WARNING: Subroutine does not return */
            memset(*(void **)(param_1 + 0xe10),0,(long)*(int *)(param_3 + 0x94) << 3);
          }
          plVar2 = *(long **)(param_1 + 8);
          if (plVar2 == (long *)0x0) {
            uVar4 = 0;
            lVar3 = *(long *)(param_1 + 0xbe8);
            *(undefined8 *)(param_1 + 0xc18) = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x40))
                              (plVar2,0x10,(long)*(int *)(param_3 + 0x90),0xffffffff,
                               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                               ,0x690);
            lVar3 = *(long *)(param_1 + 0xbe8);
            *(undefined8 *)(param_1 + 0xc18) = uVar4;
          }
          if (lVar3 == 0) {
            return 0;
          }
          (**(code **)(*param_2 + 0xa8))(param_2,uVar4,(long)*(int *)(param_3 + 0x90) << 4,1);
          iVar1 = *(int *)(param_3 + 0x90);
          uVar6 = (ulong)iVar1;
          if (*(ulong *)(param_1 + 0xda8) != uVar6) {
            if ((uVar6 < *(ulong *)(param_1 + 0xdb0)) ||
               (uVar5 = FUN_0066f150(param_1 + 0xd98,uVar6,1), (uVar5 & 1) != 0)) {
              *(ulong *)(param_1 + 0xda8) = uVar6;
              if (iVar1 != 0) {
                *(long *)(param_1 + 0xdc8) = *(long *)(param_1 + 0xdc0);
                *(ulong *)(param_1 + 0xdd0) = *(long *)(param_1 + 0xdc0) + uVar6 * 8;
                goto LAB_0066b838;
              }
            }
            else {
              *(undefined8 *)(param_1 + 0xda8) = 0;
            }
            *(undefined8 *)(param_1 + 0xdd0) = 0;
            *(undefined8 *)(param_1 + 0xdc8) = 0;
          }
LAB_0066b838:
                    /* WARNING: Subroutine does not return */
          memset(*(void **)(param_1 + 0xdc0),0,(long)*(int *)(param_3 + 0x90) << 3);
        }
        plVar2 = *(long **)(param_1 + 8);
        if (plVar2 == (long *)0x0) {
          uVar4 = 0;
          lVar3 = *(long *)(param_1 + 0xbe8);
          *(undefined8 *)(param_1 + 0xc10) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x40))
                            (plVar2,0x10,(long)*(int *)(param_3 + 0x8c),0xffffffff,
                             "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                             ,0x681);
          lVar3 = *(long *)(param_1 + 0xbe8);
          *(undefined8 *)(param_1 + 0xc10) = uVar4;
        }
        if (lVar3 == 0) {
          return 0;
        }
        (**(code **)(*param_2 + 0xa8))(param_2,uVar4,(long)*(int *)(param_3 + 0x8c) << 4,1);
        iVar1 = *(int *)(param_3 + 0x8c);
        uVar6 = (ulong)iVar1;
        if (*(ulong *)(param_1 + 0xd58) != uVar6) {
          if ((uVar6 < *(ulong *)(param_1 + 0xd60)) ||
             (uVar5 = FUN_0066f150(param_1 + 0xd48,uVar6,1), (uVar5 & 1) != 0)) {
            *(ulong *)(param_1 + 0xd58) = uVar6;
            if (iVar1 != 0) {
              *(long *)(param_1 + 0xd78) = *(long *)(param_1 + 0xd70);
              *(ulong *)(param_1 + 0xd80) = *(long *)(param_1 + 0xd70) + uVar6 * 8;
              goto LAB_0066b748;
            }
          }
          else {
            *(undefined8 *)(param_1 + 0xd58) = 0;
          }
          *(undefined8 *)(param_1 + 0xd80) = 0;
          *(undefined8 *)(param_1 + 0xd78) = 0;
        }
LAB_0066b748:
                    /* WARNING: Subroutine does not return */
        memset(*(void **)(param_1 + 0xd70),0,(long)*(int *)(param_3 + 0x8c) << 3);
      }
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 == (long *)0x0) {
        uVar4 = 0;
        lVar3 = *(long *)(param_1 + 0xbe8);
        *(undefined8 *)(param_1 + 0xc08) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x40))
                          (plVar2,0x10,(long)*(int *)(param_3 + 0x88),0xffffffff,
                           "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                           ,0x672);
        lVar3 = *(long *)(param_1 + 0xbe8);
        *(undefined8 *)(param_1 + 0xc08) = uVar4;
      }
      if (lVar3 == 0) {
        return 0;
      }
      (**(code **)(*param_2 + 0xa8))(param_2,uVar4,(long)*(int *)(param_3 + 0x88) << 4,1);
      iVar1 = *(int *)(param_3 + 0x88);
      uVar6 = (ulong)iVar1;
      if (*(ulong *)(param_1 + 0xd08) != uVar6) {
        if ((uVar6 < *(ulong *)(param_1 + 0xd10)) ||
           (uVar5 = FUN_0066f150(param_1 + 0xcf8,uVar6,1), (uVar5 & 1) != 0)) {
          *(ulong *)(param_1 + 0xd08) = uVar6;
          if (iVar1 != 0) {
            *(long *)(param_1 + 0xd28) = *(long *)(param_1 + 0xd20);
            *(ulong *)(param_1 + 0xd30) = *(long *)(param_1 + 0xd20) + uVar6 * 8;
            goto LAB_0066b658;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0xd08) = 0;
        }
        *(undefined8 *)(param_1 + 0xd30) = 0;
        *(undefined8 *)(param_1 + 0xd28) = 0;
      }
LAB_0066b658:
                    /* WARNING: Subroutine does not return */
      memset(*(void **)(param_1 + 0xd20),0,(long)*(int *)(param_3 + 0x88) << 3);
    }
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 == (long *)0x0) {
      uVar4 = 0;
      lVar3 = *(long *)(param_1 + 0xbe8);
      *(undefined8 *)(param_1 + 0xc00) = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x40))
                        (plVar2,0x10,(long)*(int *)(param_3 + 0x84),0xffffffff,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                         ,0x663);
      lVar3 = *(long *)(param_1 + 0xbe8);
      *(undefined8 *)(param_1 + 0xc00) = uVar4;
    }
    if (lVar3 == 0) {
      return 0;
    }
    (**(code **)(*param_2 + 0xa8))(param_2,uVar4,(long)*(int *)(param_3 + 0x84) << 4,1);
    iVar1 = *(int *)(param_3 + 0x84);
    uVar6 = (ulong)iVar1;
    if (*(ulong *)(param_1 + 0xcb8) != uVar6) {
      if ((uVar6 < *(ulong *)(param_1 + 0xcc0)) ||
         (uVar5 = FUN_0066f150(param_1 + 0xca8,uVar6,1), (uVar5 & 1) != 0)) {
        *(ulong *)(param_1 + 0xcb8) = uVar6;
        if (iVar1 != 0) {
          *(long *)(param_1 + 0xcd8) = *(long *)(param_1 + 0xcd0);
          *(ulong *)(param_1 + 0xce0) = *(long *)(param_1 + 0xcd0) + uVar6 * 8;
          goto LAB_0066b568;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xcb8) = 0;
      }
      *(undefined8 *)(param_1 + 0xce0) = 0;
      *(undefined8 *)(param_1 + 0xcd8) = 0;
    }
LAB_0066b568:
                    /* WARNING: Subroutine does not return */
    memset(*(void **)(param_1 + 0xcd0),0,(long)*(int *)(param_3 + 0x84) << 3);
  }
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
    lVar3 = *(long *)(param_1 + 0xbe8);
    *(undefined8 *)(param_1 + 0xbf8) = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x40))
                      (plVar2,0x10,(long)*(int *)(param_3 + 0x80),0xffffffff,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                       ,0x654);
    lVar3 = *(long *)(param_1 + 0xbe8);
    *(undefined8 *)(param_1 + 0xbf8) = uVar4;
  }
  if (lVar3 == 0) {
    return 0;
  }
  (**(code **)(*param_2 + 0xa8))(param_2,uVar4,(long)*(int *)(param_3 + 0x80) << 4,1);
  iVar1 = *(int *)(param_3 + 0x80);
  uVar6 = (ulong)iVar1;
  if (*(ulong *)(param_1 + 0xc68) != uVar6) {
    if ((uVar6 < *(ulong *)(param_1 + 0xc70)) ||
       (uVar5 = FUN_0066f150(param_1 + 0xc58,uVar6,1), (uVar5 & 1) != 0)) {
      *(ulong *)(param_1 + 0xc68) = uVar6;
      if (iVar1 != 0) {
        *(long *)(param_1 + 0xc88) = *(long *)(param_1 + 0xc80);
        *(ulong *)(param_1 + 0xc90) = *(long *)(param_1 + 0xc80) + uVar6 * 8;
        goto LAB_0066b478;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xc68) = 0;
    }
    *(undefined8 *)(param_1 + 0xc90) = 0;
    *(undefined8 *)(param_1 + 0xc88) = 0;
  }
LAB_0066b478:
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0xc80),0,(long)*(int *)(param_3 + 0x80) << 3);
}


