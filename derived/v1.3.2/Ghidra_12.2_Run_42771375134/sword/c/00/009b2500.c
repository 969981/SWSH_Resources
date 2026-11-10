/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b2500; name: FUN_009b2500
 */


bool FUN_009b2500(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  char cVar5;
  
  if (((*(long *)(param_1 + 600) == 0) || (*(char *)(*(long *)(param_1 + 600) + 4) == '\x05')) ||
     (uVar2 = FUN_009c44e0(*(undefined8 *)(param_1 + 0x3b8)), (uVar2 & 1) == 0)) {
LAB_009b2760:
    cVar5 = '\0';
    lVar3 = *(long *)(param_1 + 0x278);
    if (lVar3 != 0) goto LAB_009b2550;
LAB_009b276c:
    lVar3 = *(long *)(param_1 + 0x298);
joined_r0x009b258c:
    if (lVar3 == 0) goto LAB_009b2774;
LAB_009b2590:
    if ((*(char *)(lVar3 + 4) == '\x05') ||
       (uVar2 = FUN_009c44e0(*(undefined8 *)(param_1 + 0x3b8)), (uVar2 & 1) == 0))
    goto LAB_009b2774;
    piVar4 = *(int **)(param_1 + 0x298);
    if ((char)piVar4[0x9ca] != '\0') {
      cVar5 = cVar5 + '\x01';
      lVar3 = *(long *)(param_1 + 0x2b8);
      goto joined_r0x009b25cc;
    }
    if ((*piVar4 != 2) || (piVar4[2] != *(int *)PTR_DAT_02718608)) goto LAB_009b2774;
    cVar5 = cVar5 + '\x01';
    *(undefined1 *)(piVar4 + 0x9ca) = 1;
    lVar3 = *(long *)(param_1 + 0x2b8);
    if (lVar3 != 0) goto LAB_009b25d0;
LAB_009b277c:
    lVar3 = *(long *)(param_1 + 0x2d8);
joined_r0x009b260c:
    if (lVar3 == 0) goto LAB_009b2784;
LAB_009b2610:
    if ((*(char *)(lVar3 + 4) == '\x05') ||
       (uVar2 = FUN_009c44e0(*(undefined8 *)(param_1 + 0x3b8)), (uVar2 & 1) == 0))
    goto LAB_009b2784;
    piVar4 = *(int **)(param_1 + 0x2d8);
    if ((char)piVar4[0x9ca] != '\0') {
      cVar5 = cVar5 + '\x01';
      lVar3 = *(long *)(param_1 + 0x2f8);
      goto joined_r0x009b264c;
    }
    if ((*piVar4 != 2) || (piVar4[2] != *(int *)PTR_DAT_02718608)) goto LAB_009b2784;
    cVar5 = cVar5 + '\x01';
    *(undefined1 *)(piVar4 + 0x9ca) = 1;
    lVar3 = *(long *)(param_1 + 0x2f8);
    if (lVar3 != 0) goto LAB_009b2650;
LAB_009b278c:
    lVar3 = *(long *)(param_1 + 0x318);
joined_r0x009b268c:
    if (lVar3 == 0) goto LAB_009b2794;
LAB_009b2690:
    if ((*(char *)(lVar3 + 4) == '\x05') ||
       (uVar2 = FUN_009c44e0(*(undefined8 *)(param_1 + 0x3b8)), (uVar2 & 1) == 0))
    goto LAB_009b2794;
    piVar4 = *(int **)(param_1 + 0x318);
    if ((char)piVar4[0x9ca] == '\0') {
      if ((*piVar4 != 2) || (piVar4[2] != *(int *)PTR_DAT_02718608)) goto LAB_009b2794;
      cVar5 = cVar5 + '\x01';
      *(undefined1 *)(piVar4 + 0x9ca) = 1;
      lVar3 = *(long *)(param_1 + 0x338);
    }
    else {
      cVar5 = cVar5 + '\x01';
      lVar3 = *(long *)(param_1 + 0x338);
    }
  }
  else {
    piVar4 = *(int **)(param_1 + 600);
    if ((char)piVar4[0x9ca] == '\0') {
      if ((*piVar4 != 2) || (piVar4[2] != *(int *)PTR_DAT_02718608)) goto LAB_009b2760;
      *(undefined1 *)(piVar4 + 0x9ca) = 1;
      lVar3 = *(long *)(param_1 + 0x278);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x278);
    }
    cVar5 = '\x01';
    if (lVar3 == 0) goto LAB_009b276c;
LAB_009b2550:
    if ((*(char *)(lVar3 + 4) == '\x05') ||
       (uVar2 = FUN_009c44e0(*(undefined8 *)(param_1 + 0x3b8)), (uVar2 & 1) == 0))
    goto LAB_009b276c;
    piVar4 = *(int **)(param_1 + 0x278);
    if ((char)piVar4[0x9ca] != '\0') {
      cVar5 = cVar5 + '\x01';
      lVar3 = *(long *)(param_1 + 0x298);
      goto joined_r0x009b258c;
    }
    if ((*piVar4 != 2) || (piVar4[2] != *(int *)PTR_DAT_02718608)) goto LAB_009b276c;
    cVar5 = cVar5 + '\x01';
    *(undefined1 *)(piVar4 + 0x9ca) = 1;
    lVar3 = *(long *)(param_1 + 0x298);
    if (lVar3 != 0) goto LAB_009b2590;
LAB_009b2774:
    lVar3 = *(long *)(param_1 + 0x2b8);
joined_r0x009b25cc:
    if (lVar3 == 0) goto LAB_009b277c;
LAB_009b25d0:
    if ((*(char *)(lVar3 + 4) == '\x05') ||
       (uVar2 = FUN_009c44e0(*(undefined8 *)(param_1 + 0x3b8)), (uVar2 & 1) == 0))
    goto LAB_009b277c;
    piVar4 = *(int **)(param_1 + 0x2b8);
    if ((char)piVar4[0x9ca] != '\0') {
      cVar5 = cVar5 + '\x01';
      lVar3 = *(long *)(param_1 + 0x2d8);
      goto joined_r0x009b260c;
    }
    if ((*piVar4 != 2) || (piVar4[2] != *(int *)PTR_DAT_02718608)) goto LAB_009b277c;
    cVar5 = cVar5 + '\x01';
    *(undefined1 *)(piVar4 + 0x9ca) = 1;
    lVar3 = *(long *)(param_1 + 0x2d8);
    if (lVar3 != 0) goto LAB_009b2610;
LAB_009b2784:
    lVar3 = *(long *)(param_1 + 0x2f8);
joined_r0x009b264c:
    if (lVar3 == 0) goto LAB_009b278c;
LAB_009b2650:
    if ((*(char *)(lVar3 + 4) == '\x05') ||
       (uVar2 = FUN_009c44e0(*(undefined8 *)(param_1 + 0x3b8)), (uVar2 & 1) == 0))
    goto LAB_009b278c;
    piVar4 = *(int **)(param_1 + 0x2f8);
    if ((char)piVar4[0x9ca] != '\0') {
      cVar5 = cVar5 + '\x01';
      lVar3 = *(long *)(param_1 + 0x318);
      goto joined_r0x009b268c;
    }
    if ((*piVar4 != 2) || (piVar4[2] != *(int *)PTR_DAT_02718608)) goto LAB_009b278c;
    cVar5 = cVar5 + '\x01';
    *(undefined1 *)(piVar4 + 0x9ca) = 1;
    lVar3 = *(long *)(param_1 + 0x318);
    if (lVar3 != 0) goto LAB_009b2690;
LAB_009b2794:
    lVar3 = *(long *)(param_1 + 0x338);
  }
  if (((lVar3 != 0) && (*(char *)(lVar3 + 4) != '\x05')) &&
     (uVar2 = FUN_009c44e0(*(undefined8 *)(param_1 + 0x3b8)), (uVar2 & 1) != 0)) {
    piVar4 = *(int **)(param_1 + 0x338);
    if ((char)piVar4[0x9ca] != '\0') {
      cVar5 = cVar5 + '\x01';
      lVar3 = *(long *)PTR_DAT_027104b0;
      goto joined_r0x009b2978;
    }
    if ((*piVar4 == 2) && (piVar4[2] == *(int *)PTR_DAT_02718608)) {
      cVar5 = cVar5 + '\x01';
      *(undefined1 *)(piVar4 + 0x9ca) = 1;
      lVar3 = *(long *)PTR_DAT_027104b0;
      goto joined_r0x009b2978;
    }
  }
  lVar3 = *(long *)PTR_DAT_027104b0;
joined_r0x009b2978:
  if (lVar3 == 0) {
    return false;
  }
  cVar1 = FUN_009c4530(*(undefined8 *)(param_1 + 0x3b8));
  return cVar1 != '\0' && cVar5 == cVar1;
}


