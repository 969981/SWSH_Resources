/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c660; name: FUN_0042c660
 */


void FUN_0042c660(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float local_98;
  float local_94;
  float local_88;
  undefined4 local_84;
  
  lVar14 = *(long *)(param_1 + 0x140);
  uVar21 = *(undefined4 *)(lVar14 + 0x10);
  lVar15 = *(long *)(lVar14 + 0x50);
  if (lVar15 == 0) {
    lVar16 = *(long *)PTR_DAT_02712ae8;
    uVar4 = *(uint *)(lVar14 + 0xc);
    nn::os::LockMutex((MutexType *)(lVar16 + 0x150));
    uVar5 = *(uint *)(lVar16 + 0x178);
    if (uVar5 == 0) {
      lVar15 = 0;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      for (lVar15 = *(long *)(*(long *)(lVar16 + 0x170) + (ulong)(uVar4 - uVar7 * uVar5) * 8);
          lVar15 != 0; lVar15 = *(long *)(lVar15 + 8)) {
        if (*(uint *)(lVar15 + 0x10) == uVar4) {
          *(int *)(lVar15 + 0x14) = *(int *)(lVar15 + 0x14) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(lVar16 + 0x150));
    *(long *)(lVar14 + 0x50) = lVar15;
  }
  puVar11 = PTR_DAT_02712d38;
  puVar10 = PTR_DAT_02712d18;
  puVar9 = PTR_DAT_02712a90;
  fVar8 = DAT_01d4c6b8;
  puVar1 = PTR_DAT_02712d28 + 0x10;
  lVar14 = *param_2;
  puVar2 = PTR_DAT_02712d30 + 0x10;
  do {
    uVar17 = *(undefined8 *)(lVar14 + 0x50);
    FUN_0042c920(uVar21,lVar15,lVar14,lVar14 + 0x5c,&local_88,&local_94,&local_98);
    pcVar13 = *(char **)PTR_DAT_02712d40;
    if (pcVar13[3] == '\0') {
      cVar6 = *pcVar13;
      fVar18 = 1.0;
    }
    else {
      fVar18 = 1.0;
      if (*(long *)(pcVar13 + 0x38) != 0) {
        local_84 = 0;
        fVar18 = (float)FUN_0042e770(*(float *)(lVar14 + 0x3c) * fVar8,pcVar13 + 0x38,0,&local_84);
        pcVar13 = *(char **)PTR_DAT_02712d40;
      }
      cVar6 = *pcVar13;
    }
    fVar19 = fVar18;
    if ((cVar6 != '\0') && (*(long *)(pcVar13 + 8) != 0)) {
      local_84 = 0;
      fVar19 = (float)FUN_0042e770(*(float *)(lVar14 + 0x40) * fVar8,pcVar13 + 8,0,&local_84);
      fVar19 = fVar19 * fVar18;
    }
    plVar12 = (long *)FUN_004958e0(*(undefined8 *)(param_1 + 0x10));
    if ((char)plVar12[0x17] == '\0') {
      plVar12 = *(long **)puVar10;
      do {
        while (plVar12 == (long *)0x0) {
          plVar12 = (long *)FUN_00404690(*(undefined4 *)puVar9,0xc0);
          *plVar12 = (long)puVar1;
          plVar12[1] = 0;
          lVar16 = *(long *)(puVar11 + 8);
          plVar12[2] = 0;
          plVar12[3] = lVar16;
          plVar3 = (long *)(puVar11 + 0x10);
          if (*(long *)(puVar11 + 0x10) != 0) {
            plVar3 = (long *)(lVar16 + 0x10);
          }
          *plVar3 = (long)plVar12;
          *(long **)(puVar11 + 8) = plVar12;
          *(int *)puVar11 = *(int *)puVar11 + 1;
          *plVar12 = (long)puVar2;
          plVar12[7] = 0;
          plVar12[8] = 0;
          plVar12[10] = 0;
          plVar12[0xb] = 0;
          plVar12[0xf] = 0;
          plVar12[0x10] = 0;
          plVar12[0x12] = 0;
          plVar12[0x13] = 0;
          plVar12[0x15] = 0;
          plVar12[0x16] = 0;
          *(long **)puVar10 = plVar12;
          *(undefined2 *)(plVar12 + 0x17) = 0x101;
          if ((char)plVar12[0x17] != '\0') goto LAB_0042c8a4;
        }
      } while ((char)plVar12[0x17] == '\0');
    }
LAB_0042c8a4:
    fVar20 = (float)FUN_00459930(plVar12 + 4,uVar17,0);
    *(float *)(lVar14 + 0x30) = fVar20 * fVar19 * local_88;
    *(float *)(lVar14 + 0x34) = local_94 * fVar18;
    *(float *)(lVar14 + 0x38) = local_98 * fVar18;
    lVar14 = lVar14 + 0x60;
    if (lVar14 == *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x60) {
      return;
    }
  } while( true );
}


