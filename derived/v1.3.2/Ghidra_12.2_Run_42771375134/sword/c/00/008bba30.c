/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008bba30; name: FUN_008bba30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008bba30(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long local_70 [2];
  
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar12)(puVar12);
  lVar8 = FUN_00897d00();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  lVar14 = puVar12[0xb];
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(lVar14 + 0x10);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  uVar2 = FUN_008a6f80(puVar12 + -10);
  iVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
  uVar9 = (**(code **)(**(long **)(lVar14 + 0x10) + 0x50))
                    (*(long **)(lVar14 + 0x10),*(undefined4 *)(lVar14 + 0x1c));
  FUN_008885c0(local_70,iVar3);
  uVar4 = FUN_008889f0(local_70);
  FUN_00888620(local_70);
  lVar15 = *(long *)(&DAT_02144fa8 + (ulong)uVar4 * 8);
  if ((lVar15 == -0x340d631b7bddd9bb) || (lVar15 == 0)) goto LAB_008bbfc0;
  FUN_014c7bf0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8),0,uVar9);
  if (uVar4 - 0x12 < 6) {
    puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar7 = (long *)(**(code **)*puVar16)(puVar16);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
      uVar11 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar11;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar7 != (long *)PTR_DAT_02717530; plVar7 = (long *)*plVar7) {
    }
    FUN_00ff86a0(local_70,*(undefined8 *)(puVar16[0x9f] + 0xb0),0);
    lVar15 = *(long *)(local_70[0] + 0x60);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    }
    if (uVar4 - 0xc < 0xc) {
      local_70[0] = *(long *)(&DAT_02145090 + (long)(int)(uVar4 - 0xc) * 8);
    }
    else {
      local_70[0] = 0;
    }
    FUN_014c78e0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8),1,lVar15,local_70,0);
    iVar5 = FUN_0087d3e0(uVar9);
    if (iVar5 == 0xff) {
      cVar1 = *(char *)(param_1 + 0x9c);
      if (*(long *)(param_1 + 0x68) == 0) {
        puVar16 = (undefined8 *)0x0;
      }
      else {
        puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
        if (puVar16 != (undefined8 *)0x0) {
          plVar7 = (long *)(**(code **)*puVar16)(puVar16);
          lVar10 = FUN_00897d00();
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)lVar10) {
              puVar16 = puVar16 + -10;
              goto LAB_008bbe88;
            }
          }
        }
        puVar16 = (undefined8 *)0x0;
      }
LAB_008bbe88:
      uVar11 = 0xcf39edca2348a07c;
joined_r0x008bbf90:
      if (cVar1 != '\0') goto LAB_008bbf94;
LAB_008bbea0:
      FUN_008a6b70(puVar16,uVar11,1,0);
      *(undefined1 *)(param_1 + 0x9c) = 1;
    }
    else {
      iVar5 = FUN_0087a6e0(uVar9,uVar4 - 0x12);
      cVar1 = *(char *)(param_1 + 0x9c);
      lVar10 = *(long *)(param_1 + 0x68);
      if (iVar5 == 0) {
        if (lVar10 == 0) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          puVar16 = *(undefined8 **)(lVar10 + 0x60);
          if (puVar16 == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)0x0;
          }
          else {
            plVar7 = (long *)(**(code **)*puVar16)(puVar16);
            lVar10 = FUN_00897d00();
            for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
              if (plVar7 == (long *)lVar10) {
                puVar16 = puVar16 + -10;
                goto LAB_008bc0f8;
              }
            }
            puVar16 = (undefined8 *)0x0;
          }
        }
LAB_008bc0f8:
        uVar11 = 0xcf39eeca2348a22f;
      }
      else {
        if (lVar10 == 0) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          puVar16 = *(undefined8 **)(lVar10 + 0x60);
          if (puVar16 == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)0x0;
          }
          else {
            plVar7 = (long *)(**(code **)*puVar16)(puVar16);
            lVar10 = FUN_00897d00();
            for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
              if (plVar7 == (long *)lVar10) {
                puVar16 = puVar16 + -10;
                goto LAB_008bc0d4;
              }
            }
            puVar16 = (undefined8 *)0x0;
          }
        }
LAB_008bc0d4:
        uVar11 = 0xcf39f0ca2348a595;
      }
      if (cVar1 == '\0') goto LAB_008bbea0;
LAB_008bbf94:
      FUN_008a6b70(puVar16,uVar11,0,0);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
  }
  else {
    uVar4 = uVar4 - 0xc;
    if (uVar4 < 6) {
      puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
      plVar7 = (long *)(**(code **)*puVar16)(puVar16);
      if (((*PTR_DAT_02717528 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
        uVar11 = FUN_00b8c810();
        *(undefined8 *)PTR_DAT_02717530 = uVar11;
        __cxa_guard_release(PTR_DAT_02717528);
      }
      for (; plVar7 != (long *)PTR_DAT_02717530; plVar7 = (long *)*plVar7) {
      }
      FUN_00ff86a0(local_70,*(undefined8 *)(puVar16[0x9f] + 0xb0),0);
      lVar15 = *(long *)(local_70[0] + 0x60);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      if (local_70[0] != 0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      }
      if (uVar4 < 0xc) {
        local_70[0] = *(long *)(&DAT_02145090 + (long)(int)uVar4 * 8);
      }
      else {
        local_70[0] = 0;
      }
      FUN_014c78e0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8),1,lVar15,local_70,0);
      cVar1 = *(char *)(param_1 + 0x9c);
      if (*(long *)(param_1 + 0x68) == 0) {
        puVar16 = (undefined8 *)0x0;
      }
      else {
        puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
        if (puVar16 == (undefined8 *)0x0) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          plVar7 = (long *)(**(code **)*puVar16)(puVar16);
          lVar10 = FUN_00897d00();
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)lVar10) {
              puVar16 = puVar16 + -10;
              goto LAB_008bbf80;
            }
          }
          puVar16 = (undefined8 *)0x0;
        }
      }
LAB_008bbf80:
      uVar11 = 0xcf39efca2348a3e2;
      goto joined_r0x008bbf90;
    }
    cVar1 = *(char *)(param_1 + 0x9c);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar16 != (undefined8 *)0x0))
    {
      plVar7 = (long *)(**(code **)*puVar16)(puVar16);
      lVar10 = FUN_00897d00();
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)lVar10) {
          puVar16 = puVar16 + -10;
          goto joined_r0x008bbf6c;
        }
      }
    }
    puVar16 = (undefined8 *)0x0;
joined_r0x008bbf6c:
    if (cVar1 == '\0') {
      FUN_008a6b70(puVar16,lVar15,1,0);
      *(undefined1 *)(param_1 + 0x9c) = 1;
    }
    else {
      FUN_008a6b70(puVar16,lVar15,0,0);
    }
  }
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
LAB_008bbfc0:
  FUN_008a6e20(puVar12 + -10,iVar3,uVar9,1);
  if ((iVar3 == 0x32) || ((iVar3 - 0x464U & 0xffff) < 5)) {
    *(undefined4 *)(param_1 + 0x94) = 2;
    uVar6 = FUN_008bc1a0(param_1,iVar3,uVar2);
    *(undefined4 *)(lVar14 + 0x50) = uVar6;
    FUN_01528a20(0x1d);
  }
  else {
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        FUN_014b7300(lVar13,iVar3,*(undefined4 *)(lVar14 + 0x1c),*(undefined4 *)(lVar14 + 0x18),0);
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffff) < uVar2);
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
    uVar4 = FUN_01521090(lVar8,iVar3);
    if ((uVar2 < uVar4) && (*(char *)(lVar14 + 0x2b) == '\0')) {
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    FUN_01520b70(lVar8,iVar3,uVar2);
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


