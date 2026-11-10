/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079f050; name: FUN_0079f050
 */


void FUN_0079f050(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0079f4ec;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *plVar2 = (long)param_2;
  plVar2[1] = 0x7ffffffffffffff;
  plVar2[6] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *param_1;
  *param_1 = (long)plVar2;
  if (lVar3 != 0) {
    plVar2 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar2) {
      pcVar9 = *(code **)(*plVar2 + 0x20);
LAB_0079f12c:
      (*pcVar9)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar9 = *(code **)(*plVar2 + 0x28);
      goto LAB_0079f12c;
    }
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar3,param_1[2],param_1[3]);
    plVar2 = (long *)*param_1;
  }
  param_1[1] = (long)param_2;
  param_1[2] = 0x40;
  param_1[3] = 0x10;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0079f4ec:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *plVar4 = *plVar2;
  plVar4[1] = plVar2[1];
  plVar5 = (long *)plVar2[6];
  if (plVar5 == (long *)0x0) {
    plVar4[6] = 0;
  }
  else if (plVar2 + 2 == plVar5) {
    plVar4[6] = (long)(plVar4 + 2);
    (**(code **)(*(long *)plVar2[6] + 0x18))();
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x10))();
    plVar4[6] = lVar6;
  }
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  if ((ulong)plVar4[1] < 10) goto LAB_0079f4ec;
  puVar7 = (undefined8 *)(**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0x140,8);
  puVar12 = (undefined8 *)plVar4[8];
  puVar13 = puVar7;
  if (puVar12 != (undefined8 *)0x0) {
    lVar6 = plVar4[9];
    puVar15 = puVar12 + lVar6 * 4;
    if (lVar6 != 0) {
      puVar16 = puVar12;
      do {
        lVar14 = *plVar4;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0079f4ec;
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        uVar10 = *puVar16;
        *puVar16 = 0;
        *puVar13 = uVar10;
        uVar11 = puVar16[3];
        uVar10 = puVar16[2];
        puVar13[1] = puVar16[1];
        puVar13[2] = uVar10;
        puVar13[3] = uVar11;
        puVar16 = puVar16 + 4;
        puVar13 = puVar13 + 4;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      } while (puVar16 != puVar15);
      lVar8 = plVar4[9];
      if (lVar8 != lVar6) {
        do {
          lVar14 = *plVar4;
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0079f4ec;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar10 = *puVar15;
          *puVar15 = 0;
          *puVar13 = uVar10;
          uVar11 = puVar15[3];
          uVar10 = puVar15[2];
          puVar13[1] = puVar15[1];
          puVar13[2] = uVar10;
          puVar13[3] = uVar11;
          puVar15 = puVar15 + 4;
          puVar13 = puVar13 + 4;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        } while (puVar15 != puVar12 + lVar8 * 4);
        lVar6 = plVar4[9];
      }
    }
    while (lVar6 != 0) {
      puVar15 = (undefined8 *)*puVar12;
      lVar6 = lVar6 + -1;
      *puVar12 = 0;
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15);
        (**(code **)(*(long *)puVar12[1] + 0x18))((long *)puVar12[1],puVar15,puVar12[2],puVar12[3]);
      }
      puVar12 = puVar12 + 4;
    }
    (**(code **)(*(long *)*plVar4 + 0x18))((long *)*plVar4,plVar4[8],plVar4[10] << 5,8);
  }
  plVar4[8] = (long)puVar7;
  plVar4[9] = (long)puVar13 - (long)puVar7 >> 5;
  plVar4[10] = 10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar13 = (undefined8 *)param_1[4];
  param_1[4] = (long)plVar4;
  if (puVar13 == (undefined8 *)0x0) goto LAB_0079f4b8;
  lVar3 = puVar13[9];
  if (lVar3 != 0) {
    puVar12 = (undefined8 *)puVar13[8];
    do {
      puVar7 = (undefined8 *)*puVar12;
      lVar3 = lVar3 + -1;
      *puVar12 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        (**(code **)(*(long *)puVar12[1] + 0x18))((long *)puVar12[1],puVar7,puVar12[2],puVar12[3]);
      }
      puVar12 = puVar12 + 4;
    } while (lVar3 != 0);
  }
  if (puVar13[10] != 0) {
    (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,puVar13[8],puVar13[10] << 5,8);
  }
  plVar2 = (long *)puVar13[6];
  if (puVar13 + 2 == plVar2) {
    pcVar9 = *(code **)(*plVar2 + 0x20);
LAB_0079f490:
    (*pcVar9)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar9 = *(code **)(*plVar2 + 0x28);
    goto LAB_0079f490;
  }
  (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],puVar13,param_1[6],param_1[7]);
LAB_0079f4b8:
  param_1[5] = (long)param_2;
  param_1[6] = 0x60;
  param_1[7] = 0x10;
  return;
}


