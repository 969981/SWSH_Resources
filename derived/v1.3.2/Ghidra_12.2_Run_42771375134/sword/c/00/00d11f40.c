/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d11f40; name: FUN_00d11f40
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d11f40(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long local_50;
  long local_48;
  
  puVar4 = (undefined1 *)*param_4;
  if ((long)puVar4 < -0x878bb31c5268320) {
    if ((long)puVar4 < -0x3ddb973bc924ec0f) {
      if ((long)puVar4 < -0x5b2af2c0a9b53322) {
        if ((long)puVar4 < -0x6bf3c522adc64b88) {
          if ((long)puVar4 < -0x7e53ad4e51518942) {
            if (puVar4 == (undefined1 *)0x80bcb397ffc8d8b6) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d201a0(&local_50,uVar5,&local_48,param_4);
            }
            else if (puVar4 == (undefined1 *)0x812bcf8124b7f398) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d22910(&local_50,uVar5,&local_48,param_4);
            }
            else {
              if (puVar4 != (undefined1 *)0x81a7916cbc68a487) goto LAB_00d14180;
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d1a210(&local_50,uVar5,&local_48,param_4);
            }
          }
          else if (puVar4 == (undefined1 *)0x81ac52b1aeae76be) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d22a40(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 == (undefined1 *)0x8c35259171a23a9b) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d30920(&local_50,uVar5,&local_48,param_4);
              goto joined_r0x00d122c8;
            }
            if (puVar4 != (undefined1 *)0x8df9e5a8df0e4706) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d190c0(&local_50,uVar5,&local_48,param_4);
          }
        }
        else if ((long)puVar4 < -0x6489b6d0c408a3f7) {
          if (puVar4 == (undefined1 *)0x940c3add5239b478) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d18fb0(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 != (undefined1 *)0x97c348bde47b233c) {
              if (puVar4 == (undefined1 *)0x98cd6c2acb959f69) {
                uVar5 = *(undefined8 *)(param_2 + 8);
                (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
                plVar1 = (long *)FUN_00d31910(&local_50,uVar5,&local_48,param_4);
                goto joined_r0x00d122c8;
              }
LAB_00d14180:
              plVar1 = *(long **)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_50);
              lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (*(ulong *)(lVar2 + 0x80) < 0x10) {
                *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar1;
                *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
                plVar3 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1,0x350,0x10);
                if (plVar3 == (long *)0x0) {
                  (**(code **)(*plVar1 + 0xb8))(plVar1);
                }
                local_48 = local_50;
                local_50 = 0;
                FUN_00d34820(plVar3,&local_48,param_4);
                if (local_48 != 0) {
                  (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
                  local_48 = 0;
                }
                plVar3[1] = (long)plVar1;
                plVar3[2] = (long)plVar3;
                plVar3[3] = 0x350;
                plVar3[4] = 0x10;
                *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
                *param_1 = (long)plVar3;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(plVar3[9] + 0x10))();
                }
                if (local_50 != 0) {
                  (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
                  local_50 = 0;
                }
                (**(code **)(*plVar3 + 0x38))
                          (plVar3,*(undefined8 *)(*(long *)(param_2 + 0x2b8) + 0x98),param_4);
                return;
              }
LAB_00d14294:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d1cea0(&local_50,uVar5,&local_48,param_4);
          }
        }
        else if (puVar4 == (undefined1 *)0x9b76492f3bf75c09) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d2bf40(&local_50,uVar5,&local_48,param_4);
        }
        else if (puVar4 == (undefined1 *)0xa0ead94811e29d1c) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d28980(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0xa4cc032d75d8a0e5) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d25fa0(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if ((long)puVar4 < -0x4bf2b8016a306180) {
        if ((long)puVar4 < -0x50726c097a3d00e4) {
          if (puVar4 == (undefined1 *)0xa4d50d3f564accde) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d220d0(&local_50,uVar5,&local_48,param_4);
          }
          else if (puVar4 == (undefined1 *)0xaa588f0b5c1295e2) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d26470(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 != (undefined1 *)0xac2b2345046ff628) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d25e30(&local_50,uVar5,&local_48,param_4);
          }
        }
        else if (puVar4 == (undefined1 *)0xaf8d93f685c2ff1c) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d20320(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0xb200ecc99ba75b2d) {
            if (puVar4 == (undefined1 *)0xb292f78b52fa24d3) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d33280(&local_50,uVar5,&local_48,param_4);
              goto joined_r0x00d122c8;
            }
            goto LAB_00d14180;
          }
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d26f10(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if ((long)puVar4 < -0x445e8ffd49000701) {
        if (puVar4 == (undefined1 *)0xb40d47fe95cf9e80) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d281b0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0xb4698fe816d88aa1) {
            if (puVar4 == &DAT_b65f518b3debf713) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d34550(&local_50,uVar5,&local_48,param_4);
              goto joined_r0x00d122c8;
            }
            goto LAB_00d14180;
          }
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d21520(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if (puVar4 == (undefined1 *)0xbba17002b6fff8ff) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d260d0(&local_50,uVar5,&local_48,param_4);
      }
      else if (puVar4 == (undefined1 *)0xbd3efb2fda3b8a06) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d186b0(&local_50,uVar5,&local_48,param_4);
      }
      else {
        if (puVar4 != (undefined1 *)0xbe363c94505edaa8) goto LAB_00d14180;
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d21eb0(&local_50,uVar5,&local_48,param_4);
      }
      goto joined_r0x00d13374;
    }
    if ((long)puVar4 < -0x1e758722ce8a738c) {
      if ((long)puVar4 < -0x33505dc30f2af8e8) {
        if ((long)puVar4 < -0x372f3655e69b50fa) {
          if (puVar4 == (undefined1 *)0xc22468c436db13f1) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d1ed90(&local_50,uVar5,&local_48,param_4);
          }
          else if (puVar4 == (undefined1 *)0xc33710a726f7afbf) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d20ab0(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 != (undefined1 *)0xc519c3b2a5fdf11e) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d2c850(&local_50,uVar5,&local_48,param_4);
          }
        }
        else if (puVar4 == (undefined1 *)0xc8d0c9aa1964af06) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d198f0(&local_50,uVar5,&local_48,param_4);
        }
        else if (puVar4 == (undefined1 *)0xca73cce351a9e728) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d191d0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0xcb36f4dbca0de5e7) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d267a0(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if ((long)puVar4 < -0x28dcec2315709cee) {
        if (puVar4 == (undefined1 *)0xccafa23cf0d50718) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d28870(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 == (undefined1 *)0xd1ee7dd2bf2bd45e) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d31b90(&local_50,uVar5,&local_48,param_4);
            goto joined_r0x00d122c8;
          }
          if (puVar4 != (undefined1 *)0xd4db6fac083ca701) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d243b0(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if (puVar4 == (undefined1 *)0xd72313dcea8f6312) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d18260(&local_50,uVar5,&local_48,param_4);
      }
      else {
        if (puVar4 == (undefined1 *)0xd91b91f75db88a6b) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d30c10(&local_50,uVar5,&local_48,param_4);
          goto joined_r0x00d122c8;
        }
        if (puVar4 != (undefined1 *)0xdb1015efce318ac7) goto LAB_00d14180;
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d1fee0(&local_50,uVar5,&local_48,param_4);
      }
      goto joined_r0x00d13374;
    }
    if (-0x13352196abbe3026 < (long)puVar4) {
      if ((long)puVar4 < -0x117213aff240fe09) {
        if (puVar4 == (undefined1 *)0xeccade695441cfdb) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d2b580(&local_50,uVar5,&local_48,param_4);
        }
        else if (puVar4 == (undefined1 *)0xeda37dbadd952c54) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d187f0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0xee85d96d2789708a) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d26590(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if (puVar4 == (undefined1 *)0xee8dec500dbf01f7) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d20920(&local_50,uVar5,&local_48,param_4);
      }
      else {
        if (puVar4 == (undefined1 *)0xf27b4f13c1a15675) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d2e520(&local_50,uVar5,&local_48,param_4);
          goto joined_r0x00d122c8;
        }
        if (puVar4 != (undefined1 *)0xf63d9515ae6a72de) goto LAB_00d14180;
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d27a90(&local_50,uVar5,&local_48,param_4);
      }
      goto joined_r0x00d13374;
    }
    if ((long)puVar4 < -0x1b4b73ff2f1f6154) {
      if (puVar4 != (undefined1 *)0xe18a78dd31758c74) {
        if (puVar4 == (undefined1 *)0xe1d36aa725f23d19) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d18420(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0xe3079b3941e544c2) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d1b0e0(&local_50,uVar5,&local_48,param_4);
        }
        goto joined_r0x00d13374;
      }
      uVar5 = *(undefined8 *)(param_2 + 8);
      (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
      plVar1 = (long *)FUN_00d2eb80(&local_50,uVar5,&local_48,param_4);
    }
    else {
      if (puVar4 != (undefined1 *)0xe4b48c00d0e09eac) {
        if (puVar4 == (undefined1 *)0xe71175ff88181673) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d1b1f0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0xe7375b751ceca83b) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d18d90(&local_50,uVar5,&local_48,param_4);
        }
        goto joined_r0x00d13374;
      }
      uVar5 = *(undefined8 *)(param_2 + 8);
      (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
      plVar1 = (long *)FUN_00d30140(&local_50,uVar5,&local_48,param_4);
    }
joined_r0x00d122c8:
    if (plVar1 != (long *)0x0) {
      (**(code **)(plVar1[9] + 0x10))();
    }
  }
  else {
    if ((long)puVar4 < 0x437885422d5d125e) {
      if ((long)puVar4 < 0x218e2a14a790d265) {
        if ((long)puVar4 < 0x19826616f9fb0f17) {
          if ((long)puVar4 < 0xc9f9a465e724a2c) {
            if (puVar4 == (undefined1 *)0xf78744ce3ad97ce0) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d18bd0(&local_50,uVar5,&local_48,param_4);
            }
            else if (puVar4 == (undefined1 *)0xfdcc6c1e02af3569) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d256c0(&local_50,uVar5,&local_48,param_4);
            }
            else {
              if (puVar4 != (undefined1 *)0xff507c4693926d21) goto LAB_00d14180;
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d2ac70(&local_50,uVar5,&local_48,param_4);
            }
          }
          else if (puVar4 == (undefined1 *)0xc9f9a465e724a2c) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d27430(&local_50,uVar5,&local_48,param_4);
          }
          else if (puVar4 == (undefined1 *)0x151ed45e6dc9d7ea) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d225b0(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 != (undefined1 *)0x165f3588ba95ea07) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d1fd10(&local_50,uVar5,&local_48,param_4);
          }
        }
        else if ((long)puVar4 < 0x1e15848319bb2d97) {
          if (puVar4 == (undefined1 *)0x19826616f9fb0f17) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d26340(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 == (undefined1 *)0x19e64c4c6bd0d0cc) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d34440(&local_50,uVar5,&local_48,param_4);
              goto joined_r0x00d122c8;
            }
            if (puVar4 != (undefined1 *)0x1bd045d7cbfc5e99) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d1c8e0(&local_50,uVar5,&local_48,param_4);
          }
        }
        else if (puVar4 == (undefined1 *)0x1e15848319bb2d97) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d21da0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0x1e19569da7eac823) {
            if (puVar4 != (undefined1 *)0x203ecec113ba045d) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d2cda0(&local_50,uVar5,&local_48,param_4);
            goto joined_r0x00d122c8;
          }
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d18550(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if ((long)puVar4 < 0x2e447ecb1d577f6e) {
        if ((long)puVar4 < 0x2a951fbbd0ca650f) {
          if (puVar4 == (undefined1 *)0x218e2a14a790d265) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d226f0(&local_50,uVar5,&local_48,param_4);
          }
          else if (puVar4 == (undefined1 *)0x25ce36df9afdb8a4) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d1efc0(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 != (undefined1 *)0x2a371c45d0149a54) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d22350(&local_50,uVar5,&local_48,param_4);
          }
        }
        else if (puVar4 == (undefined1 *)0x2a951fbbd0ca650f) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d22d90(&local_50,uVar5,&local_48,param_4);
        }
        else if (puVar4 == (undefined1 *)0x2c19f3517dbe93ee) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d1aa50(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0x2d4f4bc40511b560) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d22800(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if ((long)puVar4 < 0x406c6c7dbb649ae8) {
        if (puVar4 == (undefined1 *)0x2e447ecb1d577f6e) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d1f2f0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 == (undefined1 *)0x31dbb046f173da3e) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d2efa0(&local_50,uVar5,&local_48,param_4);
            goto joined_r0x00d122c8;
          }
          if (puVar4 != (undefined1 *)0x331db44e63027d34) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d282e0(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if (puVar4 == (undefined1 *)0x406c6c7dbb649ae8) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d197e0(&local_50,uVar5,&local_48,param_4);
      }
      else {
        if (puVar4 != (undefined1 *)0x41867b579e0940a7) {
          if (puVar4 == (undefined1 *)0x4233553c1bfb4cc7) {
            plVar3 = *(long **)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_50);
            lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00d14294;
            *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
            *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
            plVar1 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x430,0x10);
            if (plVar1 == (long *)0x0) {
              (**(code **)(*plVar3 + 0xb8))(plVar3);
            }
            local_48 = local_50;
            local_50 = 0;
            FUN_00d31cb0(plVar1,&local_48,param_4);
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
              local_48 = 0;
            }
            plVar1[1] = (long)plVar3;
            plVar1[2] = (long)plVar1;
            plVar1[3] = 0x430;
            plVar1[4] = 0x10;
            *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
            if (plVar1 != (long *)0x0) {
              (**(code **)(plVar1[9] + 0x10))();
            }
            if (local_50 != 0) {
              (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
              local_50 = 0;
            }
            goto LAB_00d14148;
          }
          goto LAB_00d14180;
        }
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d25cc0(&local_50,uVar5,&local_48,param_4);
      }
    }
    else if ((long)puVar4 < 0x590026590767b61c) {
      if ((long)puVar4 < 0x4e371497b954f55c) {
        if ((long)puVar4 < 0x4a49e6dd6a9d5e7e) {
          if (puVar4 == (undefined1 *)0x437885422d5d125e) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d2d800(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 == (undefined1 *)0x46ec6a928b00f335) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d1df50(&local_50,uVar5,&local_48,param_4);
              goto joined_r0x00d13374;
            }
            if (puVar4 != (undefined1 *)0x476fa46bb2fc99a9) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d31800(&local_50,uVar5,&local_48,param_4);
          }
          goto joined_r0x00d122c8;
        }
        if (puVar4 == (undefined1 *)0x4a49e6dd6a9d5e7e) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d22210(&local_50,uVar5,&local_48,param_4);
        }
        else if (puVar4 == (undefined1 *)0x4c285f103793b30b) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d189a0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0x4c43b60dce5b0cd0) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d1eeb0(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if ((long)puVar4 < 0x556245300151680b) {
        if (puVar4 == (undefined1 *)0x4e371497b954f55c) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d22470(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 == (undefined1 *)0x4ffdd33c6628f5f9) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d30410(&local_50,uVar5,&local_48,param_4);
            goto joined_r0x00d122c8;
          }
          if (puVar4 != (undefined1 *)0x54bad945bc6b9693) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d18ea0(&local_50,uVar5,&local_48,param_4);
        }
      }
      else {
        if (puVar4 == (undefined1 *)0x556245300151680b) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d31db0(&local_50,uVar5,&local_48,param_4);
          goto joined_r0x00d122c8;
        }
        if (puVar4 == (undefined1 *)0x587f190fdef46deb) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d29fe0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0x58b1c312546f66f2) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d1d5b0(&local_50,uVar5,&local_48,param_4);
        }
      }
    }
    else {
      if (0x6b64308c63a10f94 < (long)puVar4) {
        if ((long)puVar4 < 0x73d594b9ae139a56) {
          if (puVar4 == (undefined1 *)0x6b64308c63a10f95) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d2f570(&local_50,uVar5,&local_48,param_4);
          }
          else {
            if (puVar4 == (undefined1 *)0x6c41b58beecf21a6) {
              uVar5 = *(undefined8 *)(param_2 + 8);
              (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
              plVar1 = (long *)FUN_00d296d0(&local_50,uVar5,&local_48,param_4);
              goto joined_r0x00d13374;
            }
            if (puVar4 != (undefined1 *)0x6c9815b2487063ef) goto LAB_00d14180;
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d31a50(&local_50,uVar5,&local_48,param_4);
          }
        }
        else if (puVar4 == (undefined1 *)0x73d594b9ae139a56) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d342b0(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 == (undefined1 *)0x792eff5ea8d6c7ef) {
            uVar5 = *(undefined8 *)(param_2 + 8);
            (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
            plVar1 = (long *)FUN_00d26210(&local_50,uVar5,&local_48,param_4);
            goto joined_r0x00d13374;
          }
          if (puVar4 != (undefined1 *)0x7b1090484f0bc45a) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d2fb40(&local_50,uVar5,&local_48,param_4);
        }
        goto joined_r0x00d122c8;
      }
      if ((long)puVar4 < 0x5dbb8f8182496856) {
        if (puVar4 == (undefined1 *)0x590026590767b61c) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d20ec0(&local_50,uVar5,&local_48,param_4);
        }
        else if (puVar4 == (undefined1 *)0x59d1161f0bed3107) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d21c10(&local_50,uVar5,&local_48,param_4);
        }
        else {
          if (puVar4 != (undefined1 *)0x5c4b5703041308a9) goto LAB_00d14180;
          uVar5 = *(undefined8 *)(param_2 + 8);
          (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
          plVar1 = (long *)FUN_00d204a0(&local_50,uVar5,&local_48,param_4);
        }
      }
      else if (puVar4 == (undefined1 *)0x5dbb8f8182496856) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d21fc0(&local_50,uVar5,&local_48,param_4);
      }
      else if (puVar4 == (undefined1 *)0x67b8cdd06d2ec6c1) {
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d1a930(&local_50,uVar5,&local_48,param_4);
      }
      else {
        if (puVar4 != (undefined1 *)0x698e29d2b1ef26f3) goto LAB_00d14180;
        uVar5 = *(undefined8 *)(param_2 + 8);
        (**(code **)(**(long **)(param_2 + 0x2b8) + 0x10))(&local_48);
        plVar1 = (long *)FUN_00d1f0d0(&local_50,uVar5,&local_48,param_4);
      }
    }
joined_r0x00d13374:
    if (plVar1 != (long *)0x0) {
      (**(code **)(*(long *)((long)plVar1 + 0x48) + 0x10))();
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_00d14148:
  (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(*(long *)(param_2 + 0x2b8) + 0x98),param_4);
  *param_1 = (long)plVar1;
  return;
}


