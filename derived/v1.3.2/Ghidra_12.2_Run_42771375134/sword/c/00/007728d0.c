/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007728d0; name: FUN_007728d0
 */


void FUN_007728d0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  byte *pbVar15;
  ushort *puVar16;
  int *piVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong local_80;
  char *pcStack_78;
  size_t local_70;
  long local_68;
  
  puVar7 = PTR_DAT_02715080;
  puVar6 = PTR_DAT_02715078;
  lVar21 = *(long *)(param_1 + 0x68);
  if ((lVar21 == 0) || (*(int *)(lVar21 + 0x54) == 0)) {
    lVar20 = 0;
  }
  else {
    piVar17 = (int *)(lVar21 + 0x54);
    iVar10 = *(int *)(lVar21 + 0x54);
    do {
      while( true ) {
        puVar19 = *(undefined8 **)(lVar21 + 0x58);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar11 = FUN_00a87090();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        lVar20 = 0;
        if (puVar19 == (undefined8 *)0x0) goto LAB_007729a0;
        while (puVar19 != (undefined8 *)puVar7) {
          puVar19 = (undefined8 *)*puVar19;
          if (puVar19 == (undefined8 *)0x0) {
            lVar20 = 0;
            goto LAB_007729a0;
          }
        }
        iVar9 = *piVar17;
        if (iVar9 != iVar10) break;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar8) {
          *piVar17 = iVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar20 = 0;
          if (*(long *)(lVar21 + 0x60) != 0) {
            lVar20 = *(long *)(lVar21 + 0x60) + -0x50;
          }
          goto LAB_007729a0;
        }
        lVar20 = 0;
        iVar10 = iVar9;
        if (iVar9 == 0) goto LAB_007729a0;
      }
      ClearExclusiveLocal();
      lVar20 = 0;
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
LAB_007729a0:
  lVar21 = FUN_007959b0(lVar20,&local_80);
  if (*(long *)(param_1 + 0x88) == 0) {
    piVar17 = (int *)0x0;
  }
  else {
    puVar12 = *(uint **)(*(long *)(param_1 + 0x88) + 400);
    piVar17 = (int *)((long)puVar12 + (ulong)*puVar12);
  }
  puVar18 = (ushort *)((long)piVar17 - (long)*piVar17);
  if ((*puVar18 < 0x3f) || ((ulong)puVar18[0x1f] == 0)) {
    piVar14 = (int *)0x0;
  }
  else {
    puVar12 = (uint *)((long)piVar17 + (ulong)puVar18[0x1f]);
    piVar14 = (int *)((long)puVar12 + (ulong)*puVar12);
  }
  puVar16 = (ushort *)((long)piVar14 - (long)*piVar14);
  piVar1 = (int *)((long)((long)piVar14 + (ulong)puVar16[3]) +
                  (ulong)*(uint *)((long)piVar14 + (ulong)puVar16[3]));
  iVar10 = *piVar1;
  if (((*puVar18 < 5) || ((ulong)puVar18[2] == 0)) ||
     (*(uint *)((long)piVar17 + (ulong)puVar18[2]) < 5)) {
    if (iVar10 == 0) goto LAB_00772bd0;
  }
  else {
    if ((*puVar16 < 9) || ((ulong)puVar16[4] == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = *(char *)((long)piVar14 + (ulong)puVar16[4]) == '\x01';
    }
    if ((iVar10 == 0) && (!bVar8)) goto LAB_00772bd0;
  }
  if ((*puVar16 < 5) || ((ulong)puVar16[2] == 0)) {
    puVar12 = (uint *)(param_1 + 0x194);
  }
  else {
    puVar12 = (uint *)(param_1 + 400);
    if (*(char *)((long)piVar14 + (ulong)puVar16[2]) != '\x01') {
      puVar12 = (uint *)(param_1 + 0x194);
    }
  }
  if (iVar10 != 0) {
    puVar12 = (uint *)(piVar1 + (ulong)*puVar12 + 1);
    piVar17 = (int *)((long)puVar12 + (ulong)*puVar12);
    puVar2 = (uint *)((long)piVar17 + (ulong)*(ushort *)((long)piVar17 + (4 - (long)*piVar17)));
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    puVar12 = puVar2 + 1;
    uVar13 = (ulong)*puVar2;
    if (uVar13 != 0) {
      puVar2 = puVar12 + uVar13;
      do {
        piVar17 = (int *)((long)puVar12 + (ulong)*puVar12);
        if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 7) ||
           (uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3], uVar13 == 0)) {
          lVar22 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar17 + uVar13);
          lVar22 = (long)puVar3 + (ulong)*puVar3;
        }
        local_70 = strlen((char *)(lVar22 + 4));
        bVar4 = *(byte *)(lVar22 + 4);
        local_80 = 0xcbf29ce484222645;
        if (bVar4 != 0) {
          local_80 = 0xcbf29ce484222645;
          pbVar15 = (byte *)(lVar22 + 5);
          do {
            local_80 = (local_80 ^ bVar4) * 0x100000001b3;
            bVar4 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar4 != 0);
        }
        local_68 = 0;
        pcStack_78 = (char *)(lVar22 + 4);
        iVar10 = FUN_0072e390(*(undefined8 *)(lVar21 + 0x360),&local_80);
        if (-1 < iVar10) {
          if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
             (uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar13 == 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = *(char *)((long)piVar17 + uVar13) != '\0';
          }
          FUN_0072e410(*(undefined8 *)(lVar21 + 0x360),iVar10,bVar8,0);
        }
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar2);
    }
  }
LAB_00772bd0:
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  }
  return;
}


