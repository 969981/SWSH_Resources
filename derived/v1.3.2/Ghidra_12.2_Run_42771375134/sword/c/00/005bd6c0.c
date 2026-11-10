/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bd6c0; name: FUN_005bd6c0
 */


void FUN_005bd6c0(long param_1,long param_2)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [1024];
  
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 < 1) {
    return;
  }
  __ptr = malloc(lVar5 << 3);
  if (__ptr == (void *)0x0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(lVar1 + 0x10);
      if (((param_2 < *(int *)(lVar3 + 0x80)) && (lVar4 < lVar5)) && (*(long *)(lVar3 + 0x58) != 0))
      {
        *(long *)((long)__ptr + lVar4 * 8) = lVar3;
        lVar4 = lVar4 + 1;
      }
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != 0);
    if (0xff < lVar4) {
      lVar5 = 0x100;
      goto LAB_005bd754;
    }
  }
  lVar5 = lVar4;
LAB_005bd754:
  FUN_005be630(auStack_458,lVar4,__ptr);
  if (0 < lVar4) {
    lVar1 = 0;
    lVar3 = 0;
    do {
      lVar2 = *(long *)((long)__ptr + lVar3 * 8);
      if (0 < *(int *)(lVar2 + 0x84)) {
        if (*(long *)(lVar2 + 0x88) == 0) {
          FUN_005c55d0(auStack_450,0x400,"Unknown File",0xffffffffffffffff);
        }
        else {
          FUN_005c5550(auStack_450,0x400);
        }
        if (0x62 < lVar1) break;
        lVar1 = lVar1 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar5);
    if (0 < lVar4) {
      lVar4 = 0;
      lVar1 = 0;
      do {
        while (lVar3 = *(long *)((long)__ptr + lVar1 * 8), *(int *)(lVar3 + 0x84) != 0) {
          lVar1 = lVar1 + 1;
          if (lVar5 <= lVar1) goto LAB_005bd860;
        }
        if (*(long *)(lVar3 + 0x88) == 0) {
          FUN_005c55d0(auStack_450,0x400,"Unknown File",0xffffffffffffffff);
        }
        else {
          FUN_005c5550(auStack_450,0x400);
        }
        if (0x62 < lVar4) break;
        lVar4 = lVar4 + 1;
        lVar1 = lVar1 + 1;
      } while (lVar1 < lVar5);
    }
  }
LAB_005bd860:
  free(__ptr);
  return;
}


