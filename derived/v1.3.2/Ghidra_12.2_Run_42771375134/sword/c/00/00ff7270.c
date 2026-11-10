/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff7270; name: FUN_00ff7270
 */


void FUN_00ff7270(long *param_1)

{
  size_t __n;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  if ((ulong)param_1[0xe] < 0x200) {
    uVar4 = param_1[2] - param_1[1] >> 3;
    lVar2 = param_1[4] - *param_1;
    if ((ulong)(lVar2 >> 3) <= uVar4) {
      lVar3 = lVar2 >> 2;
      if (lVar2 == 0) {
        lVar3 = 1;
      }
      local_68 = param_1 + 6;
      local_70 = 0;
      if (lVar3 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = (**(code **)(*(long *)*local_68 + 0x10))((long *)*local_68,lVar3 << 3,8);
      }
      local_80 = local_88 + uVar4 * 8;
      local_70 = local_88 + lVar3 * 8;
      local_78 = local_80;
      local_90 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0x1000,8);
      FUN_00ff7ab0(&local_88,&local_90);
      lVar2 = param_1[1];
      lVar3 = param_1[2];
      if (lVar3 != lVar2) {
        do {
          lVar3 = lVar3 + -8;
          FUN_00ff7cb0(&local_88,lVar3);
          lVar2 = param_1[1];
        } while (lVar3 != lVar2);
        lVar3 = param_1[2];
      }
      lVar6 = *param_1;
      *param_1 = local_88;
      param_1[1] = local_80;
      param_1[2] = local_78;
      lVar8 = param_1[4];
      param_1[4] = local_70;
      local_78 = lVar3;
      if (lVar2 != lVar3) {
        local_78 = lVar3 + (~((lVar3 + -8) - lVar2) & 0xfffffffffffffff8U);
      }
      if (lVar6 == 0) {
        return;
      }
      local_88 = lVar6;
      local_80 = lVar2;
      local_70 = lVar8;
      (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,lVar6,lVar8 - lVar6,8);
      return;
    }
    if (param_1[4] != param_1[2]) {
      local_88 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0x1000,8);
      FUN_00ff76d0(param_1,&local_88);
      return;
    }
    local_88 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0x1000,8);
    FUN_00ff78c0(param_1,&local_88);
    puVar11 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)param_1[1] + 1;
    uVar10 = *(undefined8 *)param_1[1];
    param_1[1] = (long)puVar5;
    if (puVar11 != (undefined8 *)param_1[4]) goto LAB_00ff765c;
    puVar7 = (undefined8 *)*param_1;
    lVar2 = (long)puVar5 - (long)puVar7;
    if (puVar7 <= puVar5 && lVar2 != 0) goto LAB_00ff7380;
    lVar2 = param_1[4] - (long)puVar7;
    uVar4 = lVar2 >> 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      lVar2 = 0;
      puVar7 = (undefined8 *)0x0;
      if (puVar5 != puVar11) goto LAB_00ff75b4;
    }
    else {
      lVar2 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],uVar4 << 3,8);
      puVar5 = (undefined8 *)param_1[1];
      puVar11 = (undefined8 *)param_1[2];
      puVar7 = (undefined8 *)(lVar2 + (uVar4 >> 2) * 8);
      if (puVar5 != puVar11) {
LAB_00ff75b4:
        puVar1 = PTR_DAT_02710860;
        puVar12 = puVar7;
        do {
          lVar6 = param_1[6];
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00ff76c8;
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          puVar9 = puVar5 + 1;
          puVar13 = puVar12 + 1;
          *puVar12 = *puVar5;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          puVar5 = puVar9;
          puVar12 = puVar13;
        } while (puVar11 != puVar9);
        goto LAB_00ff761c;
      }
    }
LAB_00ff7618:
    puVar13 = puVar7;
  }
  else {
    puVar11 = (undefined8 *)param_1[2];
    param_1[0xe] = param_1[0xe] - 0x200;
    puVar5 = (undefined8 *)param_1[1] + 1;
    uVar10 = *(undefined8 *)param_1[1];
    param_1[1] = (long)puVar5;
    if (puVar11 != (undefined8 *)param_1[4]) goto LAB_00ff765c;
    puVar7 = (undefined8 *)*param_1;
    lVar2 = (long)puVar5 - (long)puVar7;
    if (puVar7 <= puVar5 && lVar2 != 0) {
LAB_00ff7380:
      lVar2 = lVar2 >> 3;
      lVar3 = lVar2 + 2;
      if (-1 < lVar2 + 1) {
        lVar3 = lVar2 + 1;
      }
      __n = (long)puVar11 - (long)puVar5;
      puVar11 = puVar5 + -(lVar3 >> 1);
      if (__n == 0) {
        puVar5 = puVar11;
      }
      else {
        memmove(puVar11,puVar5,__n);
        puVar5 = (undefined8 *)(param_1[1] + (lVar3 >> 1) * -8);
      }
      puVar11 = puVar11 + ((long)__n >> 3);
      param_1[1] = (long)puVar5;
      param_1[2] = (long)puVar11;
      goto LAB_00ff765c;
    }
    lVar2 = param_1[4] - (long)puVar7;
    uVar4 = lVar2 >> 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      lVar2 = 0;
      puVar7 = (undefined8 *)0x0;
      if (puVar5 == puVar11) goto LAB_00ff7618;
    }
    else {
      lVar2 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],uVar4 << 3,8);
      puVar5 = (undefined8 *)param_1[1];
      puVar11 = (undefined8 *)param_1[2];
      puVar7 = (undefined8 *)(lVar2 + (uVar4 >> 2) * 8);
      if (puVar5 == puVar11) goto LAB_00ff7618;
    }
    puVar1 = PTR_DAT_02710860;
    puVar12 = puVar7;
    do {
      lVar6 = param_1[6];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00ff76c8;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      puVar9 = puVar5 + 1;
      *puVar12 = *puVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar5 = puVar9;
      puVar13 = puVar12 + 1;
      puVar12 = puVar12 + 1;
    } while (puVar11 != puVar9);
  }
LAB_00ff761c:
  puVar11 = puVar13;
  lVar3 = *param_1;
  lVar6 = param_1[4];
  *param_1 = lVar2;
  param_1[1] = (long)puVar7;
  param_1[2] = (long)puVar11;
  param_1[4] = lVar2 + uVar4 * 8;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar3,lVar6 - lVar3,8);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_00ff765c:
  lVar3 = param_1[6];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar11 = uVar10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB_00ff76c8:
                    /* WARNING: Subroutine does not return */
  abort();
}


