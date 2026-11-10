/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00612c10; name: FUN_00612c10
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00612c10(undefined8 param_1,long param_2,uint param_3,code *param_4,code *param_5,
                undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  void *__base;
  long lVar5;
  ulong uVar6;
  size_t __nmemb;
  uint uVar7;
  uint *puVar8;
  uint local_b8 [10];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  puVar3 = (uint *)FUN_006029c0(param_1,8,0,param_3 + 10,0,&local_64);
  *(uint **)(param_2 + 0x20) = puVar3;
  if (local_64 != 0) {
    return local_64;
  }
  if (param_3 != 0) {
    if (param_5 == (code *)0x0) {
      uVar7 = 0;
      puVar8 = puVar3;
      do {
        pcVar4 = (char *)(*param_4)(param_6,uVar7);
        puVar3 = puVar8;
        if (pcVar4 != (char *)0x0) {
          iVar1 = strcmp("Delta",pcVar4);
          if (iVar1 == 0) {
            lVar5 = 0;
            iVar1 = (int)local_90;
joined_r0x00613064:
            if (iVar1 == 0) {
LAB_00613068:
              *(undefined4 *)((long)&local_90 + lVar5 * 4) = 1;
              local_b8[lVar5] = uVar7;
            }
          }
          else {
            iVar1 = strcmp("Omega",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 1;
              iVar1 = local_90._4_4_;
              goto joined_r0x00613064;
            }
            iVar1 = strcmp("fraction",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 2;
              iVar1 = (int)local_88;
joined_r0x00613104:
              if (iVar1 != 0) goto LAB_0061307c;
              goto LAB_00613068;
            }
            iVar1 = strcmp("hyphen",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 3;
              iVar1 = local_88._4_4_;
              goto joined_r0x00613104;
            }
            iVar1 = strcmp("macron",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 4;
              iVar1 = (int)local_80;
              goto joined_r0x00613104;
            }
            iVar1 = strcmp("mu",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 5;
              iVar1 = local_80._4_4_;
              goto joined_r0x00613104;
            }
            iVar1 = strcmp("periodcentered",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 6;
              iVar1 = (int)local_78;
              goto joined_r0x00613104;
            }
            iVar1 = strcmp("space",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 7;
              iVar1 = local_78._4_4_;
              goto joined_r0x00613104;
            }
            iVar1 = strcmp("Tcommaaccent",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 8;
              iVar1 = (int)local_70;
              goto joined_r0x00613104;
            }
            iVar1 = strcmp("tcommaaccent",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 9;
              iVar1 = local_70._4_4_;
              goto joined_r0x00613104;
            }
          }
LAB_0061307c:
          uVar2 = FUN_006128e0(pcVar4);
          if ((uVar2 & 0x7fffffff) != 0) {
            if ((int)uVar2 < 0x394) {
              if ((int)uVar2 < 0x21a) {
                if (uVar2 == 0xa0) {
                  lVar5 = 7;
                }
                else {
                  if (uVar2 != 0xad) goto LAB_00613190;
                  lVar5 = 3;
                }
              }
              else if (uVar2 == 0x21a) {
                lVar5 = 8;
              }
              else if (uVar2 == 0x21b) {
                lVar5 = 9;
              }
              else {
                if (uVar2 != 0x2c9) goto LAB_00613190;
                lVar5 = 4;
              }
LAB_00613188:
              *(undefined4 *)((long)&local_90 + lVar5 * 4) = 2;
            }
            else {
              if (0x3bb < (int)uVar2) {
                if (uVar2 == 0x3bc) {
                  lVar5 = 5;
                }
                else if (uVar2 == 0x2215) {
                  lVar5 = 2;
                }
                else {
                  if (uVar2 != 0x2219) goto LAB_00613190;
                  lVar5 = 6;
                }
                goto LAB_00613188;
              }
              if (uVar2 == 0x394) {
                lVar5 = 0;
                goto LAB_00613188;
              }
              if (uVar2 == 0x3a9) {
                lVar5 = 1;
                goto LAB_00613188;
              }
            }
LAB_00613190:
            puVar3 = puVar8 + 2;
            *puVar8 = uVar2;
            puVar8[1] = uVar7;
          }
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar3;
      } while (param_3 != uVar7);
    }
    else {
      uVar7 = 0;
      puVar8 = puVar3;
      do {
        pcVar4 = (char *)(*param_4)(param_6,uVar7);
        puVar3 = puVar8;
        if (pcVar4 != (char *)0x0) {
          iVar1 = strcmp("Delta",pcVar4);
          if (iVar1 == 0) {
            lVar5 = 0;
            iVar1 = (int)local_90;
joined_r0x00612dd4:
            if (iVar1 == 0) {
LAB_00612dd8:
              *(undefined4 *)((long)&local_90 + lVar5 * 4) = 1;
              local_b8[lVar5] = uVar7;
            }
          }
          else {
            iVar1 = strcmp("Omega",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 1;
              iVar1 = local_90._4_4_;
              goto joined_r0x00612dd4;
            }
            iVar1 = strcmp("fraction",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 2;
              iVar1 = (int)local_88;
joined_r0x00612e74:
              if (iVar1 != 0) goto LAB_00612dec;
              goto LAB_00612dd8;
            }
            iVar1 = strcmp("hyphen",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 3;
              iVar1 = local_88._4_4_;
              goto joined_r0x00612e74;
            }
            iVar1 = strcmp("macron",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 4;
              iVar1 = (int)local_80;
              goto joined_r0x00612e74;
            }
            iVar1 = strcmp("mu",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 5;
              iVar1 = local_80._4_4_;
              goto joined_r0x00612e74;
            }
            iVar1 = strcmp("periodcentered",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 6;
              iVar1 = (int)local_78;
              goto joined_r0x00612e74;
            }
            iVar1 = strcmp("space",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 7;
              iVar1 = local_78._4_4_;
              goto joined_r0x00612e74;
            }
            iVar1 = strcmp("Tcommaaccent",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 8;
              iVar1 = (int)local_70;
              goto joined_r0x00612e74;
            }
            iVar1 = strcmp("tcommaaccent",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 9;
              iVar1 = local_70._4_4_;
              goto joined_r0x00612e74;
            }
          }
LAB_00612dec:
          uVar2 = FUN_006128e0(pcVar4);
          if ((uVar2 & 0x7fffffff) != 0) {
            if ((int)uVar2 < 0x394) {
              if ((int)uVar2 < 0x21a) {
                if (uVar2 == 0xa0) {
                  lVar5 = 7;
                }
                else {
                  if (uVar2 != 0xad) goto LAB_00612f00;
                  lVar5 = 3;
                }
              }
              else if (uVar2 == 0x21a) {
                lVar5 = 8;
              }
              else if (uVar2 == 0x21b) {
                lVar5 = 9;
              }
              else {
                if (uVar2 != 0x2c9) goto LAB_00612f00;
                lVar5 = 4;
              }
LAB_00612ef8:
              *(undefined4 *)((long)&local_90 + lVar5 * 4) = 2;
            }
            else {
              if (0x3bb < (int)uVar2) {
                if (uVar2 == 0x3bc) {
                  lVar5 = 5;
                }
                else if (uVar2 == 0x2215) {
                  lVar5 = 2;
                }
                else {
                  if (uVar2 != 0x2219) goto LAB_00612f00;
                  lVar5 = 6;
                }
                goto LAB_00612ef8;
              }
              if (uVar2 == 0x394) {
                lVar5 = 0;
                goto LAB_00612ef8;
              }
              if (uVar2 == 0x3a9) {
                lVar5 = 1;
                goto LAB_00612ef8;
              }
            }
LAB_00612f00:
            puVar3 = puVar8 + 2;
            *puVar8 = uVar2;
            puVar8[1] = uVar7;
          }
          (*param_5)(param_6,pcVar4);
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar3;
      } while (param_3 != uVar7);
    }
  }
  if ((int)local_90 == 1) {
    *puVar3 = 0x394;
    puVar3[1] = local_b8[0];
    puVar3 = puVar3 + 2;
  }
  if (local_90._4_4_ == 1) {
    *puVar3 = 0x3a9;
    *(uint *)((long)puVar3 + 4) = local_b8[1];
    puVar3 = (uint *)((long)puVar3 + 8);
  }
  if ((int)local_88 == 1) {
    *puVar3 = 0x2215;
    *(uint *)((long)puVar3 + 4) = local_b8[2];
    puVar3 = (uint *)((long)puVar3 + 8);
  }
  if (local_88._4_4_ == 1) {
    *puVar3 = 0xad;
    *(uint *)((long)puVar3 + 4) = local_b8[3];
    puVar3 = (uint *)((long)puVar3 + 8);
  }
  if ((int)local_80 == 1) {
    *puVar3 = 0x2c9;
    *(uint *)((long)puVar3 + 4) = local_b8[4];
    puVar3 = (uint *)((long)puVar3 + 8);
  }
  if (local_80._4_4_ == 1) {
    *puVar3 = 0x3bc;
    *(uint *)((long)puVar3 + 4) = local_b8[5];
    puVar3 = (uint *)((long)puVar3 + 8);
  }
  if ((int)local_78 == 1) {
    *puVar3 = 0x2219;
    *(uint *)((long)puVar3 + 4) = local_b8[6];
    puVar3 = (uint *)((long)puVar3 + 8);
  }
  if (local_78._4_4_ == 1) {
    *puVar3 = 0xa0;
    *(uint *)((long)puVar3 + 4) = local_b8[7];
    puVar3 = (uint *)((long)puVar3 + 8);
  }
  if ((int)local_70 == 1) {
    *puVar3 = 0x21a;
    *(uint *)((long)puVar3 + 4) = local_b8[8];
    puVar3 = (uint *)((long)puVar3 + 8);
  }
  if (local_70._4_4_ == 1) {
    *puVar3 = 0x21b;
    *(uint *)((long)puVar3 + 4) = local_b8[9];
    __base = *(void **)(param_2 + 0x20);
    uVar6 = (long)puVar3 + (8 - (long)__base);
    uVar7 = (uint)(uVar6 >> 3);
  }
  else {
    __base = *(void **)(param_2 + 0x20);
    uVar6 = (long)puVar3 - (long)__base;
    uVar7 = (uint)(uVar6 >> 3);
  }
  if (uVar7 == 0) {
    FUN_006028c0(param_1,__base);
    *(undefined8 *)(param_2 + 0x20) = 0;
    if (local_64 == 0) {
      local_64 = 0xa3;
    }
  }
  else {
    if (uVar7 < param_3 >> 1) {
      __nmemb = uVar6 >> 3 & 0xffffffff;
      __base = (void *)FUN_006029c0(param_1,8,param_3,__nmemb,__base,&local_64);
      *(void **)(param_2 + 0x20) = __base;
      local_64 = 0;
    }
    else {
      __nmemb = uVar6 >> 3 & 0xffffffff;
    }
    qsort(__base,__nmemb,8,(__compar_fn_t)&LAB_006136e0);
  }
  *(uint *)(param_2 + 0x18) = uVar7;
  return local_64;
}


