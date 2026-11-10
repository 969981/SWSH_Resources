/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c70320; name: FUN_00c70320
 */


void FUN_00c70320(long param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_48;
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x118) != 0) {
    local_38 = 0;
    FUN_007273c0(*(long *)(param_1 + 0x118),param_2 & 1,&local_38);
  }
  plVar1 = *(long **)(param_1 + 0x168);
  if ((param_2 & 1) == 0) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,0,&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 0x170) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x170) + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,0,&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 0x178) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x178) + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,0,&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 0x180) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x180) + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,0,&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 0x188) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x188) + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,0,&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 400) == (long *)0x0) goto LAB_00c70884;
    (**(code **)(**(long **)(param_1 + 400) + 0xa8))(&local_38);
    lVar4 = local_38;
    if (local_38 == 0) goto LAB_00c70884;
    if (*(int *)(local_38 + 0x54) != 0) {
      lVar6 = *(long *)(local_38 + 0x60);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        uVar2 = FUN_00a8cbe0(lVar6);
        lVar6 = lVar6 + -0x50;
        if ((uVar2 & 1) == 0) {
          lVar6 = 0;
        }
      }
      uVar3 = 0;
      goto LAB_00c70870;
    }
  }
  else {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,*(undefined1 *)(param_1 + 0x1c8),&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 0x170) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x170) + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,*(undefined1 *)(param_1 + 0x1c9),&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 0x178) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x178) + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,*(undefined1 *)(param_1 + 0x1ca),&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 0x180) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x180) + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,*(undefined1 *)(param_1 + 0x1cb),&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 0x188) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x188) + 0xa8))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        if (*(int *)(local_38 + 0x54) != 0) {
          lVar6 = *(long *)(local_38 + 0x60);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            uVar2 = FUN_00a8cbe0(lVar6);
            lVar6 = lVar6 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar6 = 0;
            }
          }
          local_38 = 0;
          FUN_007273c0(lVar6,*(undefined1 *)(param_1 + 0x1cc),&local_38);
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    if (*(long **)(param_1 + 400) == (long *)0x0) goto LAB_00c70884;
    (**(code **)(**(long **)(param_1 + 400) + 0xa8))(&local_38);
    lVar4 = local_38;
    if (local_38 == 0) goto LAB_00c70884;
    if (*(int *)(local_38 + 0x54) != 0) {
      lVar6 = *(long *)(local_38 + 0x60);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        uVar2 = FUN_00a8cbe0(lVar6);
        lVar6 = lVar6 + -0x50;
        if ((uVar2 & 1) == 0) {
          lVar6 = 0;
        }
      }
      uVar3 = *(undefined1 *)(param_1 + 0x1cd);
LAB_00c70870:
      local_38 = 0;
      FUN_007273c0(lVar6,uVar3,&local_38);
    }
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
LAB_00c70884:
  if ((*(long *)(param_1 + 0x1d0) != 0) && (*(int *)(*(long *)(param_1 + 0x1d0) + 0x54) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    local_48 = *(long *)(param_1 + 0x1d0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00c7e940(&local_40,uVar5,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_40 != 0) {
      if (*(int *)(local_40 + 0x54) != 0) {
        if ((local_40 == 0) || (lVar4 = *(long *)(local_40 + 0x60), lVar4 == 0)) {
          lVar4 = 0;
        }
        else {
          uVar2 = FUN_00a8cbe0(lVar4);
          lVar4 = lVar4 + -0x50;
          if ((uVar2 & 1) == 0) {
            lVar4 = 0;
          }
        }
        local_38 = 0;
        FUN_007273c0(lVar4,param_2 & 1,&local_38);
      }
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


