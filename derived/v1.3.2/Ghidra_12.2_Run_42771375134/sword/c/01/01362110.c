/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01362110; name: FUN_01362110
 */


void FUN_01362110(long *param_1)

{
  long *plVar1;
  size_t __n;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  if ((ulong)param_1[7] < 0x100) {
    uVar5 = param_1[2] - param_1[1] >> 3;
    lVar3 = param_1[3] - *param_1;
    if ((ulong)(lVar3 >> 3) <= uVar5) {
      lVar4 = lVar3 >> 2;
      if (lVar3 == 0) {
        lVar4 = 1;
      }
      plVar1 = param_1 + 4;
      local_70 = 0;
      local_68 = plVar1;
      if (lVar4 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 3,0x10);
        if (local_88 == 0) {
          (**(code **)(*(long *)*plVar1 + 0xb8))();
        }
      }
      local_80 = local_88 + uVar5 * 8;
      local_70 = local_88 + lVar4 * 8;
      local_78 = local_80;
      local_90 = (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0x1000,0x10);
      if (local_90 == 0) {
        (**(code **)(*(long *)param_1[9] + 0xb8))();
      }
      FUN_013611b0(&local_88,&local_90);
      lVar3 = param_1[1];
      lVar4 = param_1[2];
      if (lVar4 != lVar3) {
        do {
          lVar4 = lVar4 + -8;
          FUN_013613c0(&local_88,lVar4);
          lVar3 = param_1[1];
        } while (lVar4 != lVar3);
        lVar4 = param_1[2];
      }
      lVar7 = *param_1;
      *param_1 = local_88;
      param_1[1] = local_80;
      param_1[2] = local_78;
      lVar9 = param_1[3];
      param_1[3] = local_70;
      local_78 = lVar4;
      if (lVar3 != lVar4) {
        local_78 = lVar4 + (~((lVar4 + -8) - lVar3) & 0xfffffffffffffff8U);
      }
      if (lVar7 == 0) {
        return;
      }
      local_88 = lVar7;
      local_80 = lVar3;
      local_70 = lVar9;
      (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,lVar7,lVar9 - lVar7,0x10);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_88 = (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0x1000,0x10);
      if (local_88 == 0) {
        (**(code **)(*(long *)param_1[9] + 0xb8))();
      }
      FUN_01360db0(param_1,&local_88);
      return;
    }
    local_88 = (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0x1000,0x10);
    if (local_88 == 0) {
      (**(code **)(*(long *)param_1[9] + 0xb8))();
    }
    FUN_01360fb0(param_1,&local_88);
    puVar12 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)param_1[1] + 1;
    uVar11 = *(undefined8 *)param_1[1];
    param_1[1] = (long)puVar6;
    if (puVar12 != (undefined8 *)param_1[3]) goto LAB_0136257c;
    puVar8 = (undefined8 *)*param_1;
    lVar3 = (long)puVar6 - (long)puVar8;
    if (puVar8 <= puVar6 && lVar3 != 0) goto LAB_01362248;
    lVar3 = param_1[3] - (long)puVar8;
    uVar5 = lVar3 >> 2;
    if (lVar3 == 0) {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
      puVar8 = (undefined8 *)0x0;
      if (puVar6 != puVar12) goto LAB_013624d8;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar5 << 3,0x10);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xb8))();
      }
      puVar6 = (undefined8 *)param_1[1];
      puVar12 = (undefined8 *)param_1[2];
      puVar8 = (undefined8 *)(lVar3 + (uVar5 >> 2) * 8);
      if (puVar6 != puVar12) {
LAB_013624d8:
        puVar2 = PTR_DAT_02710860;
        puVar13 = puVar8;
        do {
          lVar7 = param_1[4];
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_013625e8;
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar7;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          puVar10 = puVar6 + 1;
          puVar14 = puVar13 + 1;
          *puVar13 = *puVar6;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          puVar6 = puVar10;
          puVar13 = puVar14;
        } while (puVar12 != puVar10);
        goto LAB_01362540;
      }
    }
LAB_0136253c:
    puVar14 = puVar8;
  }
  else {
    puVar12 = (undefined8 *)param_1[2];
    param_1[7] = param_1[7] - 0x100;
    puVar6 = (undefined8 *)param_1[1] + 1;
    uVar11 = *(undefined8 *)param_1[1];
    param_1[1] = (long)puVar6;
    if (puVar12 != (undefined8 *)param_1[3]) goto LAB_0136257c;
    puVar8 = (undefined8 *)*param_1;
    lVar3 = (long)puVar6 - (long)puVar8;
    if (puVar8 <= puVar6 && lVar3 != 0) {
LAB_01362248:
      lVar3 = lVar3 >> 3;
      lVar4 = lVar3 + 2;
      if (-1 < lVar3 + 1) {
        lVar4 = lVar3 + 1;
      }
      __n = (long)puVar12 - (long)puVar6;
      puVar12 = puVar6 + -(lVar4 >> 1);
      if (__n == 0) {
        puVar6 = puVar12;
      }
      else {
        memmove(puVar12,puVar6,__n);
        puVar6 = (undefined8 *)(param_1[1] + (lVar4 >> 1) * -8);
      }
      puVar12 = puVar12 + ((long)__n >> 3);
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar12;
      goto LAB_0136257c;
    }
    lVar3 = param_1[3] - (long)puVar8;
    uVar5 = lVar3 >> 2;
    if (lVar3 == 0) {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
      puVar8 = (undefined8 *)0x0;
      if (puVar6 == puVar12) goto LAB_0136253c;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar5 << 3,0x10);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[4] + 0xb8))();
      }
      puVar6 = (undefined8 *)param_1[1];
      puVar12 = (undefined8 *)param_1[2];
      puVar8 = (undefined8 *)(lVar3 + (uVar5 >> 2) * 8);
      if (puVar6 == puVar12) goto LAB_0136253c;
    }
    puVar2 = PTR_DAT_02710860;
    puVar13 = puVar8;
    do {
      lVar7 = param_1[4];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_013625e8;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar7;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      puVar10 = puVar6 + 1;
      *puVar13 = *puVar6;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      puVar6 = puVar10;
      puVar14 = puVar13 + 1;
      puVar13 = puVar13 + 1;
    } while (puVar12 != puVar10);
  }
LAB_01362540:
  puVar12 = puVar14;
  lVar4 = *param_1;
  lVar7 = param_1[3];
  *param_1 = lVar3;
  param_1[1] = (long)puVar8;
  param_1[2] = (long)puVar12;
  param_1[3] = lVar3 + uVar5 * 8;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar4,lVar7 - lVar4,0x10);
    puVar12 = (undefined8 *)param_1[2];
  }
LAB_0136257c:
  lVar4 = param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar12 = uVar11;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB_013625e8:
                    /* WARNING: Subroutine does not return */
  abort();
}


