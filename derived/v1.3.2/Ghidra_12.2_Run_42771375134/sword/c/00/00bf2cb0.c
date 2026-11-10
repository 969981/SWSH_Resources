/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf2cb0; name: FUN_00bf2cb0
 */


void FUN_00bf2cb0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  
  if (*(uint *)(param_1 + 0x68) < 0x40 &&
      (1L << ((ulong)*(uint *)(param_1 + 0x68) & 0x3f) & 0x8000000000040042U) != 0) {
    if (*(char *)(param_1 + 0x70) == '\0') {
      uVar1 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x88))();
      if (((uVar1 & 1) != 0) && (*(char *)(param_1 + 0xa4) != '\0')) {
        *(char *)(param_1 + 0x70) = '\x02';
        iVar4 = *(int *)(param_1 + 0x68);
        goto joined_r0x00bf2f74;
      }
      goto LAB_00bf2d2c;
    }
  }
  else {
LAB_00bf2d2c:
    pcVar6 = (char *)(param_1 + 0x70);
    if (*pcVar6 == '\0') {
      plVar2 = *(long **)(param_1 + 0x78);
      if (plVar2 != (long *)0x0) {
        uVar1 = plVar2[0xc0];
        iVar4 = (int)(uVar1 >> 0x20);
        *(int *)(param_1 + 0x74) = (int)plVar2[0xc1];
        if (iVar4 == 2) {
          cVar3 = '\n';
        }
        else if (iVar4 == 1) {
          cVar3 = '\v';
        }
        else {
          cVar3 = '\f';
          switch(uVar1 & 0xffffffff) {
          case 0:
            cVar3 = '\0';
            break;
          case 1:
            cVar3 = *(char *)(param_1 + 0xa0) + '\x0f';
            break;
          case 2:
            cVar3 = '\x0e';
            break;
          case 4:
            cVar3 = '\r';
          }
        }
        *pcVar6 = cVar3;
        (**(code **)(*plVar2 + 0xa0))();
        if (*pcVar6 != '\0') goto LAB_00bf2d34;
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        uVar1 = FUN_00c028b0();
        if ((uVar1 & 0xff00000000) == 0) {
          if ((uint)uVar1 < 6) {
            cVar3 = (char)uVar1 + '\x04';
          }
          else {
            cVar3 = '\0';
          }
        }
        else {
          cVar3 = '\x01';
        }
        *(char *)(param_1 + 0x70) = cVar3;
        FUN_00c02120(*(undefined8 *)(param_1 + 0x80));
        if (*(char *)(param_1 + 0x70) != '\0') goto LAB_00bf2d34;
      }
      lVar5 = *(long *)(param_1 + 0x88);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x608) == 1) {
          cVar3 = '\x0f';
LAB_00bf2f5c:
          *pcVar6 = cVar3;
        }
        else if (*(int *)(lVar5 + 0x608) == 2) {
          cVar3 = '\x0e';
          goto LAB_00bf2f5c;
        }
        *(undefined4 *)(lVar5 + 0x608) = 0;
        FUN_00bfdd00(*(undefined8 *)(param_1 + 0x88));
        iVar4 = *(int *)(param_1 + 0x68);
        goto joined_r0x00bf2f74;
      }
    }
  }
LAB_00bf2d34:
  iVar4 = *(int *)(param_1 + 0x68);
joined_r0x00bf2f74:
  if ((iVar4 != -1) && (uVar1 = FUN_00bf2fa0(param_1), (uVar1 & 1) != 0)) {
    if (*(char *)(param_1 + 0x178) != '\0') {
      *(undefined1 *)(param_1 + 0x178) = 0;
      return;
    }
    FUN_00bf30b0(param_1);
    FUN_00bf33c0(param_1);
    uVar1 = FUN_00bf2fa0(param_1);
    if ((uVar1 & 1) != 0) {
      if (*(char *)(param_1 + 0x15a) != '\0') {
        if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(*(long *)(param_1 + 0x78) + 0x4c0) != 0))
        {
          FUN_016d2080();
        }
        if ((*(long *)(param_1 + 0x80) != 0) && (*(long *)(*(long *)(param_1 + 0x80) + 0x4c0) != 0))
        {
          FUN_016d2080();
        }
        if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(*(long *)(param_1 + 0x88) + 0x4c0) != 0))
        {
          FUN_016d2080();
        }
        *(undefined1 *)(param_1 + 0x15a) = 0;
      }
      if (((*(int *)(param_1 + 0x68) == 0x16) &&
          (uVar1 = FUN_00bfb270(*(undefined8 *)(param_1 + 0xf8)), (uVar1 & 1) == 0)) &&
         (*(char *)(param_1 + 0xa5) != '\0')) {
        *(undefined1 *)(param_1 + 0x70) = 3;
        *(undefined1 *)(param_1 + 0xa5) = 0;
      }
      FUN_00bf36d0(param_1);
      if (*(char *)(param_1 + 0x98) != '\0') {
        *(undefined1 *)(param_1 + 0x98) = 0;
        if ((*(int *)(param_1 + 0x68) == 0x16) && (*(char *)(param_1 + 0xa5) == '\0')) {
          uVar1 = FUN_00bfb270(*(undefined8 *)(param_1 + 0xf8));
          if ((uVar1 & 1) == 0) {
            FUN_00bfb2a0(*(undefined8 *)(param_1 + 0xf8),
                         *(long *)(param_1 + 0x90) +
                         (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x60) * 0x2c + 0x1a0);
          }
          *(undefined1 *)(param_1 + 0xa5) = 1;
        }
        FUN_00bf3850(param_1);
        FUN_00bf3b40(param_1);
        FUN_00bfdd10(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x68));
        FUN_00bf3c00(param_1);
        return;
      }
    }
  }
  return;
}


