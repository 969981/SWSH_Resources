/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00629640; name: FUN_00629640
 */


int FUN_00629640(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  ushort *puVar24;
  uint uVar25;
  uint uVar26;
  long *plVar27;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined2 local_98;
  ushort local_96;
  undefined1 auStack_90 [8];
  ushort local_88;
  ushort local_86;
  ushort local_82;
  ushort local_80;
  int local_74;
  undefined1 auStack_70 [12];
  int local_64;
  
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar23 = *(undefined8 *)(param_1 + 0xc0);
  local_74 = 0;
  if (*(long *)(param_1 + 0x478) != 0) goto joined_r0x00629fe4;
  local_74 = (**(code **)(param_1 + 0x340))(param_1,0x67766172,uVar23,auStack_70);
  if ((local_74 != 0) &&
     (local_74 = (**(code **)(param_1 + 0x340))(param_1,0x43464632,uVar23,auStack_70), local_74 != 0
     )) {
    return local_74;
  }
  local_74 = (**(code **)(param_1 + 0x340))(param_1,0x66766172,uVar23,auStack_70);
  if (local_74 != 0) {
    return local_74;
  }
  lVar20 = FUN_00607fe0(uVar23);
  local_74 = FUN_00608530(uVar23,&DAT_02135908,auStack_90);
  uVar7 = local_86;
  if (local_74 != 0) {
    return local_74;
  }
  lVar11 = FUN_00602800(uVar3,0x90,&local_74);
  *(long *)(param_1 + 0x478) = lVar11;
  if (local_74 != 0) {
    return local_74;
  }
  uVar15 = *(ulong *)(param_1 + 0x18) >> 0x10 & 0xffffffff;
  uVar26 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x10);
  *(ulong *)(lVar11 + 0x20) =
       uVar15 * 0x10 + (ulong)local_86 * 0x33 + (ulong)(uint)local_86 * 4 +
       (ulong)(uVar26 * local_86) * 8 + 0x20;
  puVar10 = (uint *)FUN_00602800(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x478) + 0x20),&local_74)
  ;
  if (local_74 != 0) {
    return local_74;
  }
  *(uint **)(*(long *)(param_1 + 0x478) + 0x18) = puVar10;
  *puVar10 = (uint)local_86;
  puVar10[1] = 0xffffffff;
  puVar10[2] = uVar26;
  uVar17 = (ulong)local_86;
  lVar11 = (long)puVar10 + uVar17 * 2 + 0x20;
  plVar18 = (long *)(lVar11 + uVar17 * 0x30);
  *(long *)(puVar10 + 4) = lVar11;
  *(long **)(puVar10 + 6) = plVar18;
  plVar27 = plVar18 + uVar15 * 2;
  if (uVar26 != 0) {
    *plVar18 = (long)plVar27;
    uVar17 = (ulong)local_86;
    plVar27 = plVar27 + uVar17;
    if (uVar15 != 1) {
      uVar17 = (ulong)(uVar26 - 1);
      uVar19 = uVar17 & 1;
      if (uVar15 == 2) {
        lVar21 = 1;
      }
      else {
        lVar11 = 0;
        lVar21 = 1;
        do {
          *(long **)(*(long *)(puVar10 + 6) + lVar11 + 0x10) = plVar27;
          lVar1 = *(long *)(puVar10 + 6) + lVar11;
          lVar11 = lVar11 + 0x20;
          *(long **)(lVar1 + 0x20) = plVar27 + local_86;
          uVar17 = (ulong)local_86;
          plVar27 = plVar27 + local_86 + uVar17;
          lVar21 = lVar21 + 2;
        } while (uVar15 - uVar19 != lVar21);
      }
      if ((uVar26 - 1 & 1) != 0) {
        *(long **)(*(long *)(puVar10 + 6) + lVar21 * 0x10) = plVar27;
        uVar17 = (ulong)local_86;
        plVar27 = plVar27 + uVar17;
      }
    }
  }
  if ((uVar17 & 0xffff) != 0) {
    lVar11 = 0;
    uVar15 = 0;
    do {
      *(long **)(*(long *)(puVar10 + 4) + lVar11) = plVar27;
      uVar15 = uVar15 + 1;
      plVar27 = (long *)((long)plVar27 + 5);
      lVar11 = lVar11 + 0x30;
    } while (uVar15 < local_86);
  }
  iVar8 = FUN_006069e0(uVar23,lVar20 + (ulong)local_88);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (local_86 != 0) {
    lVar20 = 0;
    plVar27 = (long *)(*(long *)(puVar10 + 4) + 0x18);
    do {
      local_74 = 0;
      iVar8 = FUN_00608530(uVar23,&DAT_0213592c,&local_b8);
      if (iVar8 != 0) {
        return iVar8;
      }
      plVar27[1] = local_b8;
      plVar27[-2] = local_b0;
      plVar27[-1] = local_a8;
      *plVar27 = local_a0;
      *(uint *)(plVar27 + 2) = (uint)local_96;
      *(char *)plVar27[-3] = (char)((ulong)local_b8 >> 0x18);
      *(char *)(plVar27[-3] + 1) = (char)((ulong)plVar27[1] >> 0x10);
      *(char *)(plVar27[-3] + 2) = (char)((ulong)plVar27[1] >> 8);
      *(char *)(plVar27[-3] + 3) = (char)plVar27[1];
      *(undefined1 *)(plVar27[-3] + 4) = 0;
      *(undefined2 *)((long)puVar10 + lVar20 * 2 + 0x20) = local_98;
      lVar11 = plVar27[-1];
      if ((lVar11 < plVar27[-2]) || (*plVar27 < lVar11)) {
        plVar27[-2] = lVar11;
        *plVar27 = lVar11;
      }
      lVar20 = lVar20 + 1;
      plVar27 = plVar27 + 6;
    } while ((uint)lVar20 < (uint)local_86);
  }
  local_74 = 0;
  uVar12 = FUN_006029c0(uVar3,8,0,uVar26 * local_86,0,&local_74);
  *(undefined8 *)(*(long *)(param_1 + 0x478) + 0x28) = uVar12;
  if (local_74 != 0) {
    return local_74;
  }
  uVar9 = (uint)local_82;
  if (local_82 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x478) + 0x30) == '\0') {
      uVar12 = FUN_00607fe0(uVar23);
      FUN_0062b6d0(param_1);
      iVar8 = FUN_006069e0(uVar23,uVar12);
      if (iVar8 != 0) {
        return iVar8;
      }
      local_74 = 0;
      if (local_82 == 0) {
        uVar9 = 0;
        local_74 = 0;
        goto LAB_00629cf8;
      }
    }
    lVar20 = *(long *)(*(long *)(param_1 + 0x478) + 0x28);
    plVar27 = *(long **)(puVar10 + 6);
    if ((uint)uVar7 * 4 + 6 == (uint)local_80) {
      uVar25 = 0;
      do {
        local_74 = FUN_006081f0(uVar23,(ulong)local_86 * 4 + 6);
        if (local_74 != 0) {
          return local_74;
        }
        uVar9 = FUN_00608400(uVar23);
        *(uint *)(plVar27 + 1) = uVar9 & 0xffff;
        FUN_00608400(uVar23);
        if (local_86 != 0) {
          lVar21 = *plVar27;
          lVar11 = 0;
          do {
            uVar12 = FUN_00608440(uVar23);
            *(undefined8 *)(lVar21 + lVar11 * 8) = uVar12;
            lVar11 = lVar11 + 1;
          } while ((uint)lVar11 < (uint)local_86);
        }
        uVar9 = FUN_00608400(uVar23);
        *(uint *)((long)plVar27 + 0xc) = uVar9 & 0xffff;
        FUN_0062b8c0(*(undefined8 *)(param_1 + 0x478),local_86,*plVar27,lVar20);
        lVar20 = lVar20 + (ulong)local_86 * 8;
        FUN_00608390(uVar23);
        uVar9 = (uint)local_82;
        uVar25 = uVar25 + 1;
        plVar27 = plVar27 + 2;
      } while (uVar25 < local_82);
    }
    else {
      uVar25 = 0;
      do {
        local_74 = FUN_006081f0(uVar23,(ulong)local_86 * 4 + 4);
        if (local_74 != 0) {
          return local_74;
        }
        uVar9 = FUN_00608400(uVar23);
        *(uint *)(plVar27 + 1) = uVar9 & 0xffff;
        FUN_00608400(uVar23);
        lVar11 = *plVar27;
        if (local_86 == 0) {
          uVar7 = 0;
        }
        else {
          lVar21 = 0;
          do {
            uVar12 = FUN_00608440(uVar23);
            *(undefined8 *)(lVar11 + lVar21 * 8) = uVar12;
            lVar21 = lVar21 + 1;
          } while ((uint)lVar21 < (uint)local_86);
          lVar11 = *plVar27;
          uVar7 = local_86;
        }
        *(undefined4 *)((long)plVar27 + 0xc) = 0xffff;
        FUN_0062b8c0(*(undefined8 *)(param_1 + 0x478),uVar7,lVar11,lVar20);
        lVar20 = lVar20 + (ulong)local_86 * 8;
        FUN_00608390(uVar23);
        uVar9 = (uint)local_82;
        uVar25 = uVar25 + 1;
        plVar27 = plVar27 + 2;
      } while (uVar25 < local_82);
    }
  }
LAB_00629cf8:
  if (uVar26 != uVar9) {
    lVar20 = *(long *)(param_1 + 0x370);
    uVar22 = 0x11;
    cVar4 = (**(code **)(lVar20 + 0xf0))(param_1,0x11,&local_b8,&local_64);
    if (cVar4 == '\0') {
      uVar22 = 2;
      cVar4 = (**(code **)(lVar20 + 0xf0))(param_1,2,&local_b8,&local_64);
      if (cVar4 == '\0') goto LAB_00629db4;
    }
    cVar4 = (**(code **)(lVar20 + 0xf0))(param_1,6,&local_b8,&local_64);
    if (cVar4 != '\0') {
      lVar11 = *(long *)(puVar10 + 6);
      lVar20 = lVar11 + (ulong)local_82 * 0x10;
      *(undefined4 *)(lVar20 + 8) = uVar22;
      *(undefined4 *)(lVar20 + 0xc) = 6;
      if (local_86 != 0) {
        lVar11 = *(long *)(lVar11 + (ulong)local_82 * 0x10);
        lVar20 = 0;
        puVar16 = (undefined8 *)(*(long *)(puVar10 + 4) + 0x10);
        do {
          *(undefined8 *)(lVar11 + lVar20 * 8) = *puVar16;
          lVar20 = lVar20 + 1;
          puVar16 = puVar16 + 6;
        } while ((uint)lVar20 < (uint)local_86);
      }
    }
  }
LAB_00629db4:
  lVar20 = *(long *)(param_1 + 0xc0);
  uVar23 = *(undefined8 *)(lVar20 + 0x38);
  lVar11 = *(long *)(param_1 + 0x478);
  local_64 = (**(code **)(param_1 + 0x340))(param_1,0x4d564152,lVar20,&local_b8);
  if (local_64 == 0) {
    lVar21 = FUN_00607fe0(lVar20);
    sVar5 = FUN_00606b90(lVar20,&local_64);
    if (((local_64 == 0) && (local_64 = FUN_00606b00(lVar20,2), sVar5 == 1)) && (local_64 == 0)) {
      uVar12 = FUN_00602800(uVar23,0x30,&local_64);
      *(undefined8 *)(lVar11 + 0x60) = uVar12;
      if ((local_64 == 0) && (local_64 = FUN_00606b00(lVar20,4), local_64 == 0)) {
        uVar6 = FUN_00606b90(lVar20,&local_64);
        **(undefined2 **)(lVar11 + 0x60) = uVar6;
        if ((local_64 == 0) && (uVar15 = FUN_00606b90(lVar20,&local_64), local_64 == 0)) {
          uVar12 = FUN_00607fe0(lVar20);
          local_64 = FUN_0062ba80(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x478),
                                  lVar21 + (uVar15 & 0xffff),*(long *)(lVar11 + 0x60) + 8);
          if (local_64 == 0) {
            uVar23 = FUN_006029c0(uVar23,0x10,0,**(undefined2 **)(lVar11 + 0x60),0,&local_64);
            *(undefined8 *)(*(long *)(lVar11 + 0x60) + 0x28) = uVar23;
            if (((local_64 == 0) && (local_64 = FUN_006069e0(lVar20,uVar12), local_64 == 0)) &&
               (local_64 = FUN_006081f0(lVar20,(ulong)**(ushort **)(lVar11 + 0x60) << 3),
               local_64 == 0)) {
              puVar24 = *(ushort **)(lVar11 + 0x60);
              if ((ulong)*puVar24 != 0) {
                puVar16 = *(undefined8 **)(puVar24 + 0x14);
                puVar2 = puVar16 + (ulong)*puVar24 * 2;
                do {
                  uVar23 = FUN_00608440(lVar20);
                  *puVar16 = uVar23;
                  uVar6 = FUN_00608400(lVar20);
                  *(undefined2 *)(puVar16 + 1) = uVar6;
                  uVar7 = FUN_00608400(lVar20);
                  *(ushort *)((long)puVar16 + 10) = uVar7;
                  if ((*(uint *)(puVar24 + 4) <= (uint)*(ushort *)(puVar16 + 1)) ||
                     (*(uint *)(*(long *)(puVar24 + 8) + (ulong)*(ushort *)(puVar16 + 1) * 0x18) <=
                      (uint)uVar7)) {
                    local_64 = 8;
                    break;
                  }
                  puVar16 = puVar16 + 2;
                } while (puVar16 < puVar2);
              }
              FUN_00608390(lVar20);
              if (local_64 == 0) {
                uVar15 = (ulong)**(ushort **)(lVar11 + 0x60);
                if (uVar15 != 0) {
                  puVar16 = *(undefined8 **)(*(ushort **)(lVar11 + 0x60) + 0x14);
                  puVar2 = puVar16 + uVar15 * 2;
                  do {
                    puVar13 = (undefined2 *)FUN_0062bfe0(param_1,*puVar16);
                    if (puVar13 != (undefined2 *)0x0) {
                      *(undefined2 *)((long)puVar16 + 0xc) = *puVar13;
                    }
                    puVar16 = puVar16 + 2;
                  } while (puVar16 < puVar2);
                }
                *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 0x100;
              }
            }
          }
        }
      }
    }
  }
joined_r0x00629fe4:
  if ((param_2 != (undefined8 *)0x0) &&
     (puVar10 = (uint *)FUN_00602800(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x478) + 0x20),
                                     &local_74), local_74 == 0)) {
    memcpy(puVar10,*(void **)(*(long *)(param_1 + 0x478) + 0x18),
           *(size_t *)(*(long *)(param_1 + 0x478) + 0x20));
    uVar26 = *puVar10;
    puVar16 = (undefined8 *)((long)puVar10 + (ulong)uVar26 * 2 + 0x20);
    plVar18 = puVar16 + (ulong)uVar26 * 6;
    plVar27 = plVar18 + (ulong)puVar10[2] * 2;
    *(undefined8 **)(puVar10 + 4) = puVar16;
    *(long **)(puVar10 + 6) = plVar18;
    if (puVar10[2] != 0) {
      *plVar18 = (long)plVar27;
      uVar26 = *puVar10;
      plVar27 = plVar27 + uVar26;
      if (1 < puVar10[2]) {
        uVar15 = 1;
        lVar20 = 0x10;
        do {
          *(long **)(*(long *)(puVar10 + 6) + lVar20) = plVar27;
          uVar26 = *puVar10;
          plVar27 = plVar27 + uVar26;
          uVar15 = uVar15 + 1;
          lVar20 = lVar20 + 0x10;
        } while (uVar15 < puVar10[2]);
      }
      puVar16 = *(undefined8 **)(puVar10 + 4);
    }
    if (uVar26 != 0) {
      uVar26 = 0;
      do {
        lVar20 = puVar16[4];
        *puVar16 = plVar27;
        if (lVar20 < 0x77647468) {
          if (lVar20 == 0x6f70737a) {
            pcVar14 = "OpticalSize";
            goto LAB_006297b0;
          }
          if (lVar20 == 0x736c6e74) {
            pcVar14 = "Slant";
            goto LAB_006297b0;
          }
        }
        else {
          if (lVar20 == 0x77676874) {
            pcVar14 = "Weight";
          }
          else {
            if (lVar20 != 0x77647468) goto LAB_006297b4;
            pcVar14 = "Width";
          }
LAB_006297b0:
          *puVar16 = pcVar14;
        }
LAB_006297b4:
        uVar26 = uVar26 + 1;
        plVar27 = (long *)((long)plVar27 + 5);
        puVar16 = puVar16 + 6;
      } while (uVar26 < *puVar10);
    }
    *param_2 = puVar10;
  }
  return local_74;
}


