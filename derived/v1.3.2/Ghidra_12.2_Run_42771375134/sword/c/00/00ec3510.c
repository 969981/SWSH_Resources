/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec3510; name: FUN_00ec3510
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00ec3510(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long local_90;
  long local_88;
  long local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  long local_58;
  
  lVar5 = FUN_00e7e260();
  lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0xb8);
  if (lVar10 == 0) {
    local_58 = _DAT_000001f8;
LAB_00ec3658:
    uVar6 = FUN_015c8a90(0);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar12 = *(long *)(lVar10 + 0x1f8);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0xb8);
    local_58 = lVar12;
    if (lVar10 == 0) goto LAB_00ec3658;
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar6 = FUN_015c8a90(lVar10);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_015caa70(&local_58);
    if ((uVar6 & 1) == 0) {
      return 1;
    }
    lVar5 = FUN_00e7e260();
    *(undefined1 *)(lVar5 + 0x7e2) = 1;
    return 1;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0xb8);
  if (lVar10 == 0) {
    uVar6 = FUN_015c8930(0);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar6 = FUN_015c8930(lVar10);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  if ((lVar5 != 0) && (*(char *)(*(long *)PTR_DAT_02717c48 + 0x350) == '\0')) {
    FUN_00ea0c00(lVar5);
  }
  FUN_00ec3fd0();
  lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0xb8);
  if (lVar10 == 0) {
    local_80 = _DAT_000001f8;
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar10 = *(long *)(lVar10 + 0x1f8);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    local_80 = lVar10;
  }
  if (local_80 == 0x29f469c0a0bbb72e) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0xb8);
    if (lVar5 == 0) {
      FUN_015c8a90(0);
      uVar6 = FUN_015caa70(&local_80);
    }
    else {
      plVar11 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_015c8a90(lVar5);
      (**(code **)(*plVar11 + 0x18))(plVar11);
      uVar6 = FUN_015caa70(&local_80);
    }
    if ((uVar6 & 1) == 0) {
      return 1;
    }
    lVar5 = FUN_00e7e260();
    if (lVar5 == 0) {
      return 1;
    }
    *(undefined1 *)(lVar5 + 0x7e2) = 1;
    return 1;
  }
  uVar4 = FUN_00ec4350();
  if (uVar4 != 0) {
    return (ulong)uVar4;
  }
  uVar4 = FUN_00ec4640();
  if (uVar4 != 0) {
    return (ulong)uVar4;
  }
  uVar4 = FUN_00ec4980();
  if (uVar4 != 0) {
    return (ulong)uVar4;
  }
  uVar6 = FUN_00ec4c20(param_1,param_2);
  if ((int)uVar6 != 0) {
    return uVar6 & 0xffffffff;
  }
  uVar6 = FUN_00ec5da0(uVar6,param_2);
  if ((int)uVar6 != 0) {
    return uVar6 & 0xffffffff;
  }
  if (((*(byte *)(param_2 + 3) & 1) != 0) &&
     (uVar6 = FUN_00ec6350(param_1,param_2), (int)uVar6 != 0)) {
    uVar6 = uVar6 & 0xffffffff;
    if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
      return uVar6;
    }
    local_80 = 0x2d329dd9170feaaf;
    pcStack_78 = "Play_UI_common_decide";
    local_70 = 0x15;
    local_68 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_80);
    if (local_68 == 0) {
      return uVar6;
    }
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    return uVar6;
  }
  uVar6 = FUN_00ec7770(uVar6,param_2);
  if ((int)uVar6 != 0) {
    return uVar6 & 0xffffffff;
  }
  if ((*(byte *)(param_2 + 3) >> 3 & 1) != 0) {
    FUN_00ec8560(uVar6,param_2);
  }
  puVar3 = PTR_DAT_027194d8;
  plVar11 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar11 != plVar1) {
    uVar6 = 0;
    do {
      if (((*(byte *)(*plVar11 + 0x38f) >> 1 & 1) != 0) &&
         (uVar7 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar7 & 1) == 0)) {
        lVar12 = *plVar11;
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x50))((undefined8 *)(lVar12 + 0x50));
        lVar10 = FUN_015bed20();
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)lVar10) {
            if ((int)uVar6 == 0) {
              if ((*(long **)(lVar12 + 0x618) == (long *)0x0) ||
                 (uVar6 = (**(code **)(**(long **)(lVar12 + 0x618) + 0x68))(), (uVar6 & 1) == 0)) {
                uVar6 = 0;
              }
              else {
                if (*(long **)(lVar12 + 0x618) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar12 + 0x618) + 0x70))();
                }
                uVar6 = 1;
              }
            }
            break;
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  bVar2 = *(byte *)(param_2 + 3);
  if ((bVar2 >> 1 & 1) != 0) {
    lVar10 = FUN_00e7e260();
    if (lVar10 != 0) {
      uVar6 = FUN_00e9f400();
      if ((uVar6 & 1) != 0) {
        bVar2 = *(byte *)(param_2 + 3);
        goto LAB_00ec3934;
      }
      *(undefined1 *)(lVar10 + 0x7e1) = 1;
    }
    lVar5 = *param_2;
    lVar10 = param_2[2];
    uVar9 = 0;
LAB_00ec3af8:
    FUN_00eca3a0(uVar9,lVar5,lVar10);
    return 2;
  }
LAB_00ec3934:
  if ((bVar2 >> 6 & 1) != 0) {
    lVar10 = *(long *)puVar3;
    plVar1 = *(long **)(lVar10 + 0xb8);
    for (plVar11 = *(long **)(lVar10 + 0xb0); plVar11 != plVar1; plVar11 = plVar11 + 1) {
      lVar10 = FUN_00e813b0(*plVar11 + 0x50);
      if ((lVar10 != 0) && (uVar6 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar6 & 1) == 0))
      goto LAB_00ec3980;
    }
    lVar10 = 0;
LAB_00ec3980:
    uVar6 = FUN_00ea02c0(lVar10);
    if ((uVar6 & 1) != 0) {
      FUN_00f05550(&local_88);
      if (local_88 == 0) {
        return 1;
      }
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      return 1;
    }
  }
  lVar10 = *(long *)puVar3;
  plVar1 = *(long **)(lVar10 + 0xb8);
  for (plVar11 = *(long **)(lVar10 + 0xb0); plVar11 != plVar1; plVar11 = plVar11 + 1) {
    if (((*(byte *)(*plVar11 + 0x38d) >> 5 & 1) != 0) &&
       (uVar6 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar6 & 1) == 0)) {
      lVar12 = *plVar11;
      plVar8 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x50))((undefined8 *)(lVar12 + 0x50));
      lVar10 = FUN_00fd8f80();
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)lVar10) {
          uVar6 = FUN_00eca5a0(*(undefined8 *)(param_1 + 0x130),lVar12);
          if ((uVar6 & 1) != 0) {
            FUN_00eca640(*(undefined8 *)(param_1 + 0x130),lVar12,param_2[2]);
          }
          break;
        }
      }
    }
  }
  uVar6 = FUN_00faf2a0(*(undefined8 *)PTR_DAT_027202a8);
  if ((uVar6 & 1) == 0) {
    lVar5 = *(long *)(*param_2 + 0x68);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN_00ec8680(&local_90,lVar5);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    return 1;
  }
  uVar4 = FUN_00ec87a0();
  if (uVar4 != 0) {
    return (ulong)uVar4;
  }
  if ((*(byte *)(param_2 + 3) >> 5 & 1) != 0) {
    uVar4 = FUN_00ec88a0(param_1);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    if ((*(byte *)(param_2 + 3) >> 5 & 1) != 0) {
      lVar10 = FUN_00e7e260();
      if (lVar10 != 0) {
        uVar6 = FUN_00e9f400();
        if ((uVar6 & 1) != 0) goto LAB_00ec3a68;
        *(undefined1 *)(lVar10 + 0x7e1) = 1;
      }
      lVar5 = *param_2;
      lVar10 = param_2[2];
      uVar9 = 1;
      goto LAB_00ec3af8;
    }
  }
LAB_00ec3a68:
  uVar6 = FUN_00ea0540(lVar5);
  if ((uVar6 & 1) != 0) {
    uVar4 = FUN_00ec8be0(uVar6,param_2);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
  }
  return 0;
}


