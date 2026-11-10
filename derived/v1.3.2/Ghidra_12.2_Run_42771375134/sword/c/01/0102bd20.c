/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102bd20; name: FUN_0102bd20
 */


void FUN_0102bd20(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *local_70;
  long *local_68;
  long local_60;
  long local_58;
  long *local_50;
  long local_48;
  long *local_38;
  
  if ((*(long **)(param_1 + 0x148) != (long *)0x0) &&
     ((**(code **)(**(long **)(param_1 + 0x148) + 0x10))(&local_38), local_38 != (long *)0x0)) {
    plVar7 = local_38;
    do {
      FUN_0102e8a0(&local_38,plVar7);
      if (local_38 == (long *)0x0) {
        (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
        break;
      }
      (**(code **)(local_38[9] + 0x18))();
      FUN_0102e8a0(&local_38,plVar7);
      lVar5 = *(long *)(local_38[0xc] + 0x60);
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      if (lVar5 == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        FUN_0102e8a0(&local_48,plVar7);
        (**(code **)(**(long **)(*(long *)(local_48 + 0x60) + 0x60) + 0x10))(&local_38);
        plVar9 = local_38;
        local_38 = (long *)0x0;
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
      FUN_0102e8a0(&local_38,plVar7);
      iVar1 = *(int *)(local_38[0xc] + 0x40);
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      if (iVar1 == 0) {
        plVar6 = plVar7 + 9;
        local_50 = plVar7;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0102c860(param_1,&local_50);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        local_50 = (long *)0x0;
        FUN_0102e8a0(&local_38,plVar7);
        *(undefined4 *)(local_38[0xc] + 0x40) = 1;
        if (local_38 != (long *)0x0) {
          (**(code **)(local_38[9] + 0x18))();
          local_38 = (long *)0x0;
        }
      }
      if (plVar9 == (long *)0x0) {
        (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
        break;
      }
      plVar6 = plVar9 + 9;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar7 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
  lVar5 = *(long *)(param_1 + 0x168);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    do {
      FUN_0102e8a0(&local_38,lVar5);
      if (local_38 == (long *)0x0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        break;
      }
      (**(code **)(local_38[9] + 0x18))();
      FUN_0102e8a0(&local_38,lVar5);
      lVar8 = *(long *)(local_38[0xc] + 0x80);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      FUN_0102e8a0(&local_38,lVar5);
      FUN_01030a80(local_38);
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      plVar7 = (long *)(lVar5 + 0x48);
      local_58 = lVar5;
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0102cb20(param_1,&local_58);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_58 = 0;
      if (lVar8 == 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        break;
      }
      plVar7 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar5 = lVar8;
    } while (lVar8 != 0);
  }
  lVar5 = *(long *)(param_1 + 0x158);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    do {
      FUN_0102e8a0(&local_38,lVar5);
      if (local_38 == (long *)0x0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        break;
      }
      (**(code **)(local_38[9] + 0x18))();
      FUN_0102e8a0(&local_38,lVar5);
      lVar8 = *(long *)(local_38[0xc] + 0x70);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      FUN_0102e8a0(&local_38,lVar5);
      uVar4 = FUN_01031c30(local_38[0xc]);
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      if ((uVar4 & 1) != 0) {
        FUN_0102e8a0(&local_38,lVar5);
        FUN_0102f310(local_38);
        if (local_38 != (long *)0x0) {
          (**(code **)(local_38[9] + 0x18))();
          local_38 = (long *)0x0;
        }
        plVar7 = (long *)(lVar5 + 0x48);
        local_60 = lVar5;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0102cdf0(param_1,&local_60);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        local_60 = 0;
      }
      if (lVar8 == 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        break;
      }
      plVar7 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar5 = lVar8;
    } while (lVar8 != 0);
  }
  if ((*(long **)(param_1 + 0x148) != (long *)0x0) &&
     ((**(code **)(**(long **)(param_1 + 0x148) + 0x10))(&local_38), local_38 != (long *)0x0)) {
    plVar7 = local_38;
    do {
      FUN_0102e8a0(&local_38,plVar7);
      if (local_38 == (long *)0x0) {
        (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
        break;
      }
      (**(code **)(local_38[9] + 0x18))();
      FUN_0102e8a0(&local_38,plVar7);
      lVar5 = *(long *)(local_38[0xc] + 0x60);
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      if (lVar5 == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        FUN_0102e8a0(&local_48,plVar7);
        (**(code **)(**(long **)(*(long *)(local_48 + 0x60) + 0x60) + 0x10))(&local_38);
        plVar9 = local_38;
        local_38 = (long *)0x0;
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
      FUN_0102e8a0(&local_38,plVar7);
      uVar4 = FUN_01031c30(local_38[0xc]);
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      if ((uVar4 & 1) != 0) {
        FUN_0102e8a0(&local_38,plVar7);
        cVar2 = *(char *)(local_38[0xc] + 0x1a);
        if (local_38 != (long *)0x0) {
          (**(code **)(local_38[9] + 0x18))();
          local_38 = (long *)0x0;
        }
        if (cVar2 != '\0') {
          FUN_0102e8a0(&local_38,plVar7);
          *(undefined4 *)(local_38[0xc] + 0x40) = 4;
          if (local_38 != (long *)0x0) {
            (**(code **)(local_38[9] + 0x18))();
            local_38 = (long *)0x0;
          }
          FUN_0102e8a0(&local_38,plVar7);
          *(undefined1 *)(local_38[0xc] + 0x1a) = 0;
          if (local_38 != (long *)0x0) {
            (**(code **)(local_38[9] + 0x18))();
            local_38 = (long *)0x0;
          }
        }
      }
      if (plVar9 == (long *)0x0) {
        (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
        break;
      }
      plVar6 = plVar9 + 9;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar7 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
  lVar5 = *(long *)(param_1 + 0x178);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  bVar3 = lVar5 == 0;
  if (lVar5 == 0) {
  }
  else {
    do {
      FUN_0102e8a0(&local_38,lVar5);
      if (local_38 == (long *)0x0) goto LAB_0102c4d8;
      (**(code **)(local_38[9] + 0x18))();
      FUN_0102e8a0(&local_38,lVar5);
      FUN_0102f030(local_38,0);
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      FUN_0102e8a0(&local_38,lVar5);
      lVar8 = *(long *)(local_38[0xc] + 0x98);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      bVar3 = lVar8 == 0;
      lVar5 = lVar8;
    } while (lVar8 != 0);
  }
  local_38 = (long *)0x0;
LAB_0102c4d8:
  lVar8 = *(long *)(param_1 + 0x188);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  plVar7 = local_38;
  if (!bVar3) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    plVar7 = local_38;
  }
  do {
    local_38 = plVar7;
    if (lVar8 == 0) {
      plVar7 = *(long **)(param_1 + 0x148);
joined_r0x0102c5ec:
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(&local_38);
        plVar7 = local_38;
        while (plVar7 != (long *)0x0) {
          FUN_0102e8a0(&local_38,plVar7);
          if (local_38 == (long *)0x0) {
            (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
            return;
          }
          (**(code **)(local_38[9] + 0x18))();
          FUN_0102e8a0(&local_38,plVar7);
          lVar5 = *(long *)(local_38[0xc] + 0x60);
          if (local_38 != (long *)0x0) {
            (**(code **)(local_38[9] + 0x18))();
            local_38 = (long *)0x0;
          }
          if (lVar5 == 0) {
            plVar9 = (long *)0x0;
          }
          else {
            FUN_0102e8a0(&local_48,plVar7);
            (**(code **)(**(long **)(*(long *)(local_48 + 0x60) + 0x60) + 0x10))(&local_38);
            plVar9 = local_38;
            local_38 = (long *)0x0;
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
              local_48 = 0;
            }
          }
          FUN_0102e8a0(&local_38,plVar7);
          iVar1 = *(int *)(local_38[0xc] + 0x40);
          if (local_38 != (long *)0x0) {
            (**(code **)(local_38[9] + 0x18))();
            local_38 = (long *)0x0;
          }
          if (iVar1 == 6) {
            FUN_0102e8a0(&local_38,plVar7);
            lVar5 = *(long *)(local_38[0xc] + 8);
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
            }
            if (local_38 != (long *)0x0) {
              (**(code **)(local_38[9] + 0x18))();
              local_38 = (long *)0x0;
            }
            plVar6 = plVar7 + 9;
            local_68 = plVar7;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_0102d0c0(param_1,&local_68);
            (**(code **)(*plVar6 + 0x18))(plVar6);
            local_68 = (long *)0x0;
            local_70 = plVar7;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_0102d390(param_1,&local_70);
            (**(code **)(*plVar6 + 0x18))(plVar6);
            local_70 = (long *)0x0;
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x54) != 0) {
                FUN_0102ea70(&local_38,lVar5);
                (**(code **)(*local_38 + 0x40))();
                if (local_38 != (long *)0x0) {
                  (**(code **)(local_38[9] + 0x18))();
                  local_38 = (long *)0x0;
                }
              }
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
            }
          }
          if (plVar9 == (long *)0x0) {
            (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
            return;
          }
          plVar6 = plVar9 + 9;
          (**(code **)(*plVar6 + 0x10))(plVar6);
          (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
          (**(code **)(*plVar6 + 0x18))(plVar6);
          plVar7 = plVar9;
        }
      }
      return;
    }
    FUN_0102e8a0(&local_38,lVar8);
    if (local_38 == (long *)0x0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      plVar7 = *(long **)(param_1 + 0x148);
      goto joined_r0x0102c5ec;
    }
    (**(code **)(local_38[9] + 0x18))();
    FUN_0102e8a0(&local_38,lVar8);
    FUN_0102f030(local_38,0);
    if (local_38 != (long *)0x0) {
      (**(code **)(local_38[9] + 0x18))();
      local_38 = (long *)0x0;
    }
    FUN_0102e8a0(&local_38,lVar8);
    lVar5 = *(long *)(local_38[0xc] + 0x98);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    lVar8 = lVar5;
    plVar7 = (long *)0x0;
    if (local_38 != (long *)0x0) {
      (**(code **)(local_38[9] + 0x18))();
      local_38 = (long *)0x0;
      plVar7 = local_38;
    }
  } while( true );
}


