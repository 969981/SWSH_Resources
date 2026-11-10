/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e19630; name: FUN_00e19630
 */


void FUN_00e19630(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  int *piVar10;
  long *plVar11;
  ushort *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  
  lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  puVar9 = *(uint **)(*(long *)(lVar15 + 0x88) + 400);
  piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
  puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
  puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9 + 4);
  uVar8 = FUN_00e19cd0(*(undefined8 *)(param_1 + 0xe8),(long)puVar9 + (ulong)*puVar9);
  piVar10 = *(int **)(param_1 + 0x48);
  puVar12 = (ushort *)((long)piVar10 - (long)*piVar10);
  uVar2 = *puVar12;
  if (uVar2 < 0x35) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar12[0x1a] != 0) {
      puVar9 = (uint *)((long)piVar10 + (ulong)puVar12[0x1a]);
      piVar14 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar13 == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = *(char *)((long)piVar14 + uVar13) != '\0';
  }
  if (uVar2 < 0x35) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar12[0x1a] != 0) {
      puVar9 = (uint *)((long)piVar10 + (ulong)puVar12[0x1a]);
      piVar14 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
     (uVar13 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar13 == 0)) {
    piVar14 = (int *)0x0;
  }
  else {
    puVar9 = (uint *)((long)piVar14 + uVar13);
    piVar14 = (int *)((long)puVar9 + (ulong)*puVar9);
  }
  uVar22 = 0;
  if ((4 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar13 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar13 != 0)) {
    uVar22 = *(undefined4 *)((long)piVar14 + uVar13);
  }
  if (uVar2 < 0x35) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar12[0x1a] != 0) {
      puVar9 = (uint *)((long)piVar10 + (ulong)puVar12[0x1a]);
      piVar14 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
     (uVar13 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar13 == 0)) {
    piVar14 = (int *)0x0;
  }
  else {
    puVar9 = (uint *)((long)piVar14 + uVar13);
    piVar14 = (int *)((long)puVar9 + (ulong)*puVar9);
  }
  uVar23 = 0;
  if ((6 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar13 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar13 != 0)) {
    uVar23 = *(undefined4 *)((long)piVar14 + uVar13);
  }
  if (uVar2 < 0x35) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar12[0x1a] != 0) {
      puVar9 = (uint *)((long)piVar10 + (ulong)puVar12[0x1a]);
      piVar14 = (int *)((long)puVar9 + (ulong)*puVar9);
    }
  }
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
     (uVar13 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar13 == 0)) {
    piVar14 = (int *)0x0;
  }
  else {
    puVar9 = (uint *)((long)piVar14 + uVar13);
    piVar14 = (int *)((long)puVar9 + (ulong)*puVar9);
  }
  uVar21 = 0;
  uVar24 = 0;
  if (8 < *(ushort *)((long)piVar14 - (long)*piVar14)) {
    uVar13 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4];
    uVar24 = 0;
    if (uVar13 != 0) {
      uVar24 = *(undefined4 *)((long)piVar14 + uVar13);
    }
  }
  piVar10 = (int *)((long)((long)piVar10 + (ulong)puVar12[0x1a]) +
                   (ulong)*(uint *)((long)piVar10 + (ulong)puVar12[0x1a]));
  if ((8 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
     (uVar13 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar13 != 0)) {
    uVar21 = *(undefined4 *)((long)piVar10 + uVar13);
  }
  FUN_00eacef0(uVar21,CONCAT44(uVar23,uVar22),uVar22,uVar23,uVar24,uVar8,bVar6 ^ 1);
  if (param_3 == 0) {
    lVar17 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar17 == 0) {
      FUN_00e19e60(param_1,DAT_00000140);
    }
    else {
      plVar18 = (long *)(lVar17 + 0x48);
      (**(code **)(*plVar18 + 0x10))(plVar18);
      FUN_00e19e60(param_1,*(undefined1 *)(lVar17 + 0x140));
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    puVar12 = (ushort *)((long)piVar1 - (long)*piVar1);
    uVar8 = *(undefined8 *)(param_1 + 0xe8);
    if ((((6 < *puVar12) && ((ulong)puVar12[3] != 0)) &&
        (puVar9 = (uint *)((long)piVar1 + (ulong)puVar12[3]),
        puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9), puVar9 != (uint *)0x0)) && (*puVar9 != 0))
    {
      lVar17 = (ulong)*puVar9 << 2;
      do {
        puVar9 = puVar9 + 1;
        FUN_00e2ec80(uVar8,(long)puVar9 + (ulong)*puVar9);
        lVar17 = lVar17 + -4;
      } while (lVar17 != 0);
      uVar8 = *(undefined8 *)(param_1 + 0xe8);
      puVar12 = (ushort *)((long)piVar1 - (long)*piVar1);
    }
    puVar9 = (uint *)((long)((long)piVar1 + (ulong)puVar12[3]) +
                     (ulong)*(uint *)((long)piVar1 + (ulong)puVar12[3]) + 4);
    piVar10 = (int *)((long)puVar9 + (ulong)*puVar9);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
       (uVar13 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar13 == 0)) {
      lVar17 = 0;
    }
    else {
      puVar9 = (uint *)((long)piVar10 + uVar13);
      lVar17 = (long)puVar9 + (ulong)*puVar9;
    }
    FUN_00e19f70(uVar8,lVar17);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9 + 4);
    piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar13 == 0)) {
      lVar17 = 0;
    }
    else {
      puVar9 = (uint *)((long)piVar1 + uVar13);
      lVar17 = (long)puVar9 + (ulong)*puVar9;
    }
    FUN_00e1a100(*(undefined8 *)(param_1 + 0xe8),lVar17);
    lStack_58 = param_2[5];
    local_60 = param_2[4];
    lStack_68 = param_2[7];
    local_70 = param_2[6];
    FUN_00e1a290(param_1,&local_60,&local_70);
    FUN_00fc50d0(*(undefined8 *)PTR_DAT_0271f530,param_1 + 0xf0,1);
    plVar16 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb8);
    for (plVar18 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb0); plVar18 != plVar16;
        plVar18 = plVar18 + 1) {
      plVar11 = (long *)*plVar18;
      uVar13 = FUN_00dfefc0(plVar11 + 10);
      if (((uVar13 & 1) != 0) &&
         (uVar13 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar13 & 1) == 0)) {
        puVar19 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0xb0);
        puVar20 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0xb8);
        puVar3 = (undefined8 *)PTR_DAT_0271ee58;
        pbVar4 = PTR_DAT_0271ee50;
        if (puVar19 == puVar20) goto LAB_00e19b80;
        goto LAB_00e19b2c;
      }
    }
    plVar11 = (long *)0x0;
    puVar19 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0xb0);
    puVar20 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0xb8);
    puVar3 = (undefined8 *)PTR_DAT_0271ee58;
    pbVar4 = PTR_DAT_0271ee50;
    if (puVar19 != puVar20) {
LAB_00e19b2c:
      do {
        plVar16 = (long *)*puVar19;
        plVar18 = (long *)(**(code **)plVar16[10])(plVar16 + 10);
        if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
          uVar8 = FUN_00a89c30();
          *puVar3 = uVar8;
          __cxa_guard_release(pbVar4);
        }
        for (; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
          if (plVar18 == puVar3) {
            uVar13 = (**(code **)(*(long *)*puVar19 + 0x88))();
            if ((uVar13 & 1) == 0) goto LAB_00e19b84;
            break;
          }
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar20);
    }
LAB_00e19b80:
    plVar16 = (long *)0x0;
LAB_00e19b84:
    lVar17 = *param_2;
    if (((lVar17 == 0x5742865396e549d0) || (lVar17 == 0x674edc539f9f74a6)) ||
       (lVar17 == 0x5ea5c3539ab81c81)) {
      (**(code **)(*plVar11 + 0x180))(plVar11,0);
      (**(code **)(*plVar16 + 0x180))(plVar16,1);
      plVar16[0xc3] = param_2[1];
      puVar5 = PTR_DAT_0271f538;
      if ((*param_2 == 0x674edc539f9f74a6) || (*param_2 == 0x5ea5c3539ab81c81)) {
        *(float *)((long)plVar16 + 0x474) =
             (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) * 0.0;
        *(undefined1 *)(plVar16 + 0x8d) = 1;
        *(undefined4 *)((long)plVar16 + 0x5d4) = *(undefined4 *)puVar5;
      }
    }
  }
  if (lVar15 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e19c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  return;
}


