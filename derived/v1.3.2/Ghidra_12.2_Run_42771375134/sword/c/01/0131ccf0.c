/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131ccf0; name: FUN_0131ccf0
 */


uint FUN_0131ccf0(long param_1)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  undefined8 local_48;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0)) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60), puVar13 == (undefined8 *)0x0)) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (long *)(**(code **)*puVar13)(puVar13);
    plVar4 = (long *)FUN_00c781c0();
    puVar14 = (undefined8 *)0x0;
    if (plVar3 != (long *)0x0) {
      do {
        if (plVar3 == plVar4) {
          puVar14 = puVar13 + -10;
          goto LAB_0131cd68;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      puVar14 = (undefined8 *)0x0;
    }
  }
LAB_0131cd68:
  local_48 = FUN_0069d2b0(puVar14);
  lVar5 = FUN_006b92e0(&local_48);
  pcVar16 = *(char **)(lVar5 + 8);
  lVar5 = *(long *)(lVar5 + 0x18);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_48 = FUN_0069d2b0(puVar14);
  lVar6 = FUN_006b94f0(&local_48);
  pcVar9 = *(char **)(lVar6 + 8);
  lVar15 = *(long *)(lVar6 + 0x10);
  do {
    lVar12 = lVar15;
    if (lVar12 < 2) {
      lVar15 = *(long *)(lVar6 + 0x18);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      goto LAB_0131ce08;
    }
    lVar15 = lVar12 + -1;
  } while (pcVar9[lVar12 + -1] != '/');
  if (pcVar9[lVar12] != '\0') {
    pcVar8 = pcVar9 + lVar12 + 1;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
  }
  lVar15 = 0;
  pcVar9 = pcVar9 + lVar12;
LAB_0131ce08:
  pcVar7 = strstr(pcVar16,"wait");
  pcVar8 = strstr(pcVar16,"walk");
  pcVar16 = strstr(pcVar16,"run");
  if (((pcVar7 != (char *)0x0) || (pcVar8 != (char *)0x0)) || (pcVar16 != (char *)0x0)) {
    pcVar1 = pcVar16;
    if (pcVar16 <= pcVar8) {
      pcVar1 = pcVar8;
    }
    if (pcVar7 <= pcVar1) {
      pcVar1 = pcVar16;
      if (pcVar16 <= pcVar7) {
        pcVar1 = pcVar7;
      }
      if (pcVar1 < pcVar8) {
        uVar10 = 2;
      }
      else {
        if (pcVar8 <= pcVar7) {
          pcVar8 = pcVar7;
        }
        uVar10 = 3;
        if (pcVar16 <= pcVar8) {
          uVar10 = 0;
        }
      }
      goto LAB_0131ce60;
    }
  }
  uVar10 = 0;
LAB_0131ce60:
  pcVar8 = strstr(pcVar9,"wait");
  pcVar16 = strstr(pcVar9,"walk");
  pcVar9 = strstr(pcVar9,"run");
  uVar11 = uVar10;
  if (((pcVar8 != (char *)0x0) || (pcVar16 != (char *)0x0)) || (pcVar9 != (char *)0x0)) {
    pcVar7 = pcVar9;
    if (pcVar9 <= pcVar16) {
      pcVar7 = pcVar16;
    }
    if (pcVar8 <= pcVar7) {
      pcVar7 = pcVar9;
      if (pcVar9 <= pcVar8) {
        pcVar7 = pcVar8;
      }
      if (pcVar7 < pcVar16) {
        uVar11 = 2;
        if (1 < uVar10) {
          uVar11 = uVar10;
        }
      }
      else {
        if (pcVar16 <= pcVar8) {
          pcVar16 = pcVar8;
        }
        uVar11 = 3;
        if (pcVar9 <= pcVar16) {
          uVar11 = 0;
        }
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
      }
    }
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar11;
}


