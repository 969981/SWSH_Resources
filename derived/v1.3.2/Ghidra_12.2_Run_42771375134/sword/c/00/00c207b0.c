/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c207b0; name: FUN_00c207b0
 */


void FUN_00c207b0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 *puVar14;
  long local_248;
  long local_240;
  ulong local_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  long *local_218;
  undefined4 local_210 [78];
  undefined1 auStack_d8 [16];
  long local_c8;
  undefined2 local_70;
  
  uVar4 = FUN_00c20d90();
  if (uVar4 >> 0x20 != 0) {
    return;
  }
  if ((uVar4 & 0xff) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    lVar6 = FUN_00be66c0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        FUN_00c1ce80(&local_238,puVar9 + -10);
        goto joined_r0x00c20bb0;
      }
    }
  }
  FUN_00c1ce80(&local_238,0);
joined_r0x00c20bb0:
  if (local_238 == 0) {
    return;
  }
  puVar9 = *(undefined8 **)(local_238 + 0x60);
  if (puVar9 != (undefined8 *)0x0) {
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    lVar6 = FUN_00c22170();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar9 = puVar9 + -10;
        goto joined_r0x00c20bc0;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
joined_r0x00c20bc0:
  if (local_238 != 0) {
    (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
    local_238 = 0;
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  FUN_00bdb920(auStack_d8,puVar9);
  if (local_c8 == 0) {
    return;
  }
  lVar6 = FUN_00bdb9f0(puVar9);
  if (lVar6 == 0) {
    return;
  }
  uVar4 = FUN_00be28a0(lVar6,local_70);
  if ((uVar4 & 1) == 0) {
    return;
  }
  local_238 = local_238 & 0xffffffffffffff00;
  if (*(char *)(puVar9 + 0xe) == '\0') {
    return;
  }
  uVar3 = puVar9[0xf];
  lVar6 = puVar9[0x10];
  local_230 = uVar3;
  local_228 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_220 = puVar9[0x11];
  plVar5 = (long *)puVar9[0x12];
  local_218 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  memcpy(local_210,puVar9 + 0x13,0x136);
  local_238 = CONCAT71(local_238._1_7_,1);
  if ((int)uVar3 == 1) {
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x10))();
    }
    lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (plVar5 == (long *)0x0) {
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      goto joined_r0x00c20d80;
    }
    if (lVar10 != 0) {
      uVar4 = 0;
      puVar14 = local_210 + 1;
      do {
        lVar7 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar4 & 0xffffffff);
        if (((lVar7 != 0) && (uVar8 = FUN_008787d0(), (uVar8 & 1) == 0)) &&
           (uVar8 = FUN_0087d610(lVar7,2), (uVar8 & 1) == 0)) {
          uVar1 = puVar14[-1];
          uVar2 = *puVar14;
          FUN_01505f50(&local_240,lVar10,uVar1,uVar2,*(undefined8 *)(param_1 + 8));
          if (local_240 != 0) {
            uVar8 = FUN_0087ede0(local_240,0x34);
            if ((uVar8 & 1) == 0) {
              FUN_0087edf0(local_240,0x34);
              local_248 = local_240;
              if (local_240 != 0) {
                (**(code **)(*(long *)(local_240 + 0x48) + 0x10))();
              }
              FUN_01505ea0(lVar10,&local_248,uVar1,uVar2);
              if (local_248 != 0) {
                (**(code **)(*(long *)(local_248 + 0x48) + 0x18))();
                local_248 = 0;
              }
              *(undefined1 *)(param_1 + 0xe9) = 1;
            }
            if (local_240 != 0) {
              (**(code **)(*(long *)(local_240 + 0x48) + 0x18))();
              local_240 = 0;
            }
          }
        }
        uVar4 = uVar4 + 1;
        puVar14 = puVar14 + 2;
      } while (uVar4 != 6);
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    (**(code **)(plVar5[9] + 0x18))();
  }
  else {
    if ((((int)uVar3 == 0) && (*(long *)PTR_DAT_02710848 != 0)) &&
       (lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90), lVar10 != 0)) {
      plVar11 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar13 = *(long **)(lVar10 + 0x58);
      if (plVar13 != (long *)0x0) {
        plVar12 = plVar13 + 9;
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar10 = (**(code **)(*plVar13 + 0x50))(plVar13,0);
        if (((lVar10 != 0) && (uVar4 = FUN_008787d0(), (uVar4 & 1) == 0)) &&
           ((uVar4 = FUN_0087d610(lVar10,2), (uVar4 & 1) == 0 &&
            (uVar4 = FUN_0087ede0(lVar10,0x34), (uVar4 & 1) == 0)))) {
          FUN_0087edf0(lVar10,0x34);
          *(undefined1 *)(param_1 + 0xe9) = 1;
        }
        lVar10 = (**(code **)(*plVar13 + 0x50))(plVar13,1);
        if ((((lVar10 != 0) && (uVar4 = FUN_008787d0(), (uVar4 & 1) == 0)) &&
            (uVar4 = FUN_0087d610(lVar10,2), (uVar4 & 1) == 0)) &&
           (uVar4 = FUN_0087ede0(lVar10,0x34), (uVar4 & 1) == 0)) {
          FUN_0087edf0(lVar10,0x34);
          *(undefined1 *)(param_1 + 0xe9) = 1;
        }
        lVar10 = (**(code **)(*plVar13 + 0x50))(plVar13,2);
        if (((lVar10 != 0) && (uVar4 = FUN_008787d0(), (uVar4 & 1) == 0)) &&
           ((uVar4 = FUN_0087d610(lVar10,2), (uVar4 & 1) == 0 &&
            (uVar4 = FUN_0087ede0(lVar10,0x34), (uVar4 & 1) == 0)))) {
          FUN_0087edf0(lVar10,0x34);
          *(undefined1 *)(param_1 + 0xe9) = 1;
        }
        lVar10 = (**(code **)(*plVar13 + 0x50))(plVar13,3);
        if (((lVar10 != 0) && (uVar4 = FUN_008787d0(), (uVar4 & 1) == 0)) &&
           ((uVar4 = FUN_0087d610(lVar10,2), (uVar4 & 1) == 0 &&
            (uVar4 = FUN_0087ede0(lVar10,0x34), (uVar4 & 1) == 0)))) {
          FUN_0087edf0(lVar10,0x34);
          *(undefined1 *)(param_1 + 0xe9) = 1;
        }
        lVar10 = (**(code **)(*plVar13 + 0x50))(plVar13,4);
        if ((((lVar10 != 0) && (uVar4 = FUN_008787d0(), (uVar4 & 1) == 0)) &&
            (uVar4 = FUN_0087d610(lVar10,2), (uVar4 & 1) == 0)) &&
           (uVar4 = FUN_0087ede0(lVar10,0x34), (uVar4 & 1) == 0)) {
          FUN_0087edf0(lVar10,0x34);
          *(undefined1 *)(param_1 + 0xe9) = 1;
        }
        lVar10 = (**(code **)(*plVar13 + 0x50))(plVar13,5);
        if (((lVar10 != 0) && (uVar4 = FUN_008787d0(), (uVar4 & 1) == 0)) &&
           ((uVar4 = FUN_0087d610(lVar10,2), (uVar4 & 1) == 0 &&
            (uVar4 = FUN_0087ede0(lVar10,0x34), (uVar4 & 1) == 0)))) {
          FUN_0087edf0(lVar10,0x34);
          *(undefined1 *)(param_1 + 0xe9) = 1;
        }
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (plVar5 == (long *)0x0) goto joined_r0x00c20d80;
  }
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  local_218 = (long *)0x0;
joined_r0x00c20d80:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


