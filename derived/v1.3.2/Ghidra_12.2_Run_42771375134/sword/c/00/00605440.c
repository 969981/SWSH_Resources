/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00605440; name: FUN_00605440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00605440(long *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong *puVar3;
  int iVar4;
  void *__s;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  char *__s2;
  long *plVar8;
  size_t __n;
  long lVar9;
  long lVar10;
  
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  if (param_2 == (ulong *)0x0) {
    return 6;
  }
  if (0x20008 < (long)param_2[4]) {
    return 4;
  }
  uVar1 = *(uint *)((long)param_1 + 0x14);
  if (uVar1 != 0) {
    __s2 = (char *)param_2[2];
    lVar9 = 3;
    do {
      plVar8 = (long *)param_1[lVar9];
      lVar10 = *plVar8;
      iVar4 = strcmp(*(char **)(lVar10 + 0x10),__s2);
      if (iVar4 == 0) {
        if ((long)param_2[3] <= *(long *)(lVar10 + 0x18)) {
          return 5;
        }
        FUN_00605750(param_1,plVar8);
        uVar1 = *(uint *)((long)param_1 + 0x14);
        break;
      }
      uVar5 = lVar9 - 2;
      lVar9 = lVar9 + 1;
    } while (uVar5 < uVar1);
    if (0x1f < uVar1) {
      return 0x30;
    }
  }
  __n = param_2[1];
  lVar9 = *param_1;
  if (0 < (long)__n) {
    __s = (void *)(**(code **)(lVar9 + 8))(lVar9,__n);
    if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,__n);
    }
    return 0x40;
  }
  if (__n != 0) {
    return 6;
  }
  puRam0000000000000000 = param_2;
  _DAT_00000008 = param_1;
  _DAT_00000010 = lVar9;
  if (((byte)*param_2 >> 1 & 1) == 0) {
    uVar5 = *param_2;
    if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_00605704;
LAB_00605550:
    if ((uVar5 & 1) == 0) goto LAB_00605554;
LAB_00605714:
    pcVar7 = (code *)param_2[6];
    _SUB_00000018 = puRam0000000000000000;
  }
  else {
    lVar10 = *param_1;
    plVar8 = (long *)(**(code **)(lVar10 + 8))(lVar10,0x18);
    if (plVar8 == (long *)0x0) {
      iVar4 = 0x40;
      bVar2 = (byte)*puRam0000000000000000;
      goto joined_r0x00605574;
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = 0;
    puVar3 = puRam0000000000000000;
    _SUB_00000018 = puRam0000000000000000;
    _SUB_00000020 = (undefined4)puRam0000000000000000[9];
    if (((int)puRam0000000000000000[9] == 0x6f75746c) &&
       (*(code **)(puRam0000000000000000[0xe] + 8) != (code *)0x0)) {
      iVar4 = (**(code **)(puRam0000000000000000[0xe] + 8))(lVar10,0x68);
      if (iVar4 != 0) {
        (**(code **)(lVar10 + 0x10))(lVar10,plVar8);
        bVar2 = (byte)*puRam0000000000000000;
        goto joined_r0x00605574;
      }
      _DAT_00000070 = *(undefined8 *)(puVar3[0xe] + 0x20);
      _DAT_00000078 = puVar3[10];
    }
    plVar8[2] = 0;
    lVar10 = param_1[0x24];
    *plVar8 = lVar10;
    plVar8[1] = 0;
    if (lVar10 == 0) {
      param_1[0x23] = (long)plVar8;
      param_1[0x24] = (long)plVar8;
      plVar6 = plVar8;
    }
    else {
      *(long **)(lVar10 + 8) = plVar8;
      plVar6 = (long *)param_1[0x23];
      param_1[0x24] = (long)plVar8;
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
      lVar10 = plVar6[2];
      if (*(int *)(lVar10 + 0x20) == 0x6f75746c) goto LAB_006056f4;
    }
    lVar10 = 0;
LAB_006056f4:
    param_1[0x25] = lVar10;
    uVar5 = *puRam0000000000000000;
    if (((uint)uVar5 >> 2 & 1) == 0) goto LAB_00605550;
LAB_00605704:
    param_1[0x26] = 0;
    if ((*puRam0000000000000000 & 1) != 0) goto LAB_00605714;
LAB_00605554:
    pcVar7 = (code *)param_2[6];
  }
  if ((pcVar7 == (code *)0x0) || (iVar4 = (*pcVar7)(0), iVar4 == 0)) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    *(uint *)((long)param_1 + 0x14) = uVar1 + 1;
    param_1[(ulong)uVar1 + 3] = 0;
    return 0;
  }
  bVar2 = (byte)*puRam0000000000000000;
joined_r0x00605574:
  if (((((bVar2 >> 1 & 1) != 0) && (_SUB_00000018 != (ulong *)0x0)) &&
      ((int)_SUB_00000018[9] == 0x6f75746c)) && (_DAT_00000068 != 0)) {
    (**(code **)(_SUB_00000018[0xe] + 0x28))();
  }
  (**(code **)(lVar9 + 0x10))(lVar9,0);
  return iVar4;
}


