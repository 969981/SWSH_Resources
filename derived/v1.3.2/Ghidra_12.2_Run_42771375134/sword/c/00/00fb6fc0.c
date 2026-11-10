/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb6fc0; name: FUN_00fb6fc0
 */


void FUN_00fb6fc0(long param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  uVar2 = FUN_0102b670(*(undefined1 *)(*(long *)(param_1 + 0x70) + 0x85));
  lVar3 = *(long *)(param_1 + 0x25c0);
  pcVar1 = (char *)(param_1 + 0x25e0);
  if ((uVar2 | 1) == 3) {
    if (((lVar3 != 0) && (*(long *)(param_1 + 0x2178) != 0)) &&
       ((*(char *)(*(long *)(param_1 + 0x2178) + 0x170) != '\0' &&
        (*(char *)(param_1 + 0xcc1) != '\0')))) {
      if (((*(int *)(param_1 + 0x25b0) == 2) && (lVar3 = FUN_015bee50(lVar3,auStack_28), lVar3 != 0)
          ) && (lVar3 = FUN_00794780(), lVar3 == 0)) {
        FUN_00fb5450(param_1,0);
      }
      if (*pcVar1 != '\0') {
        FUN_00fb6000(param_1,0);
        FUN_00fb62c0(param_1,0,0);
      }
    }
    if (((*(long *)(param_1 + 0x25c8) != 0) && (*(long *)(param_1 + 0x2288) != 0)) &&
       (*(char *)(*(long *)(param_1 + 0x2288) + 0x170) != '\0')) {
      if (((*(int *)(param_1 + 0x25b4) == 2) &&
          (lVar3 = FUN_015bee50(*(long *)(param_1 + 0x25c8),auStack_28), lVar3 != 0)) &&
         (lVar3 = FUN_00794780(), lVar3 == 0)) {
        FUN_00fb5450(param_1,1);
      }
      if (*pcVar1 != '\0') {
        FUN_00fb6000(param_1,1);
        FUN_00fb62c0(param_1,1,0);
      }
    }
    if ((((*(long *)(param_1 + 0x25d0) != 0) && (*(long *)(param_1 + 0x2398) != 0)) &&
        (*(char *)(*(long *)(param_1 + 0x2398) + 0x170) != '\0')) &&
       (*(char *)(param_1 + 0xcc2) != '\0')) {
      if (((*(int *)(param_1 + 0x25b8) == 2) &&
          (lVar3 = FUN_015bee50(*(long *)(param_1 + 0x25d0),auStack_28), lVar3 != 0)) &&
         (lVar3 = FUN_00794780(), lVar3 == 0)) {
        FUN_00fb5450(param_1,2);
      }
      if (*pcVar1 != '\0') {
        FUN_00fb6000(param_1,2);
        FUN_00fb62c0(param_1,2,0);
      }
    }
    if (((*(long *)(param_1 + 0x25d8) != 0) && (*(long *)(param_1 + 0x24a8) != 0)) &&
       ((*(char *)(*(long *)(param_1 + 0x24a8) + 0x170) != '\0' &&
        (*(char *)(param_1 + 0xcc3) != '\0')))) {
      if (((*(int *)(param_1 + 0x25bc) == 2) &&
          (lVar3 = FUN_015bee50(*(long *)(param_1 + 0x25d8),auStack_28), lVar3 != 0)) &&
         (lVar3 = FUN_00794780(), lVar3 == 0)) {
        FUN_00fb5450(param_1,3);
      }
      if (*pcVar1 != '\0') {
        FUN_00fb6000(param_1,3);
        FUN_00fb62c0(param_1,3,0);
        return;
      }
    }
  }
  else {
    if ((((lVar3 != 0) && (*(long *)(param_1 + 0x2178) != 0)) &&
        (*(char *)(*(long *)(param_1 + 0x2178) + 0x170) != '\0')) &&
       (*(char *)(param_1 + 0xcc1) != '\0')) {
      if (*pcVar1 != '\0') {
        FUN_00fb73d0(param_1,0);
      }
      if (((*(int *)(param_1 + 0x25b0) == 2) &&
          (lVar3 = FUN_015bee50(*(undefined8 *)(param_1 + 0x25c0),auStack_28), lVar3 != 0)) &&
         (lVar3 = FUN_00794780(), lVar3 == 0)) {
        FUN_00fb5450(param_1,0);
      }
    }
    if (((*(long *)(param_1 + 0x25c8) != 0) && (*(long *)(param_1 + 0x2288) != 0)) &&
       (*(char *)(*(long *)(param_1 + 0x2288) + 0x170) != '\0')) {
      if (*pcVar1 != '\0') {
        FUN_00fb73d0(param_1,1);
      }
      if (((*(int *)(param_1 + 0x25b4) == 2) &&
          (lVar3 = FUN_015bee50(*(undefined8 *)(param_1 + 0x25c8),auStack_28), lVar3 != 0)) &&
         (lVar3 = FUN_00794780(), lVar3 == 0)) {
        FUN_00fb5450(param_1,1);
      }
    }
    if (((*(long *)(param_1 + 0x25d0) != 0) && (*(long *)(param_1 + 0x2398) != 0)) &&
       ((*(char *)(*(long *)(param_1 + 0x2398) + 0x170) != '\0' &&
        (*(char *)(param_1 + 0xcc2) != '\0')))) {
      if (*pcVar1 != '\0') {
        FUN_00fb73d0(param_1,2);
      }
      if (((*(int *)(param_1 + 0x25b8) == 2) &&
          (lVar3 = FUN_015bee50(*(undefined8 *)(param_1 + 0x25d0),auStack_28), lVar3 != 0)) &&
         (lVar3 = FUN_00794780(), lVar3 == 0)) {
        FUN_00fb5450(param_1,2);
      }
    }
    if ((((*(long *)(param_1 + 0x25d8) != 0) && (*(long *)(param_1 + 0x24a8) != 0)) &&
        (*(char *)(*(long *)(param_1 + 0x24a8) + 0x170) != '\0')) &&
       (*(char *)(param_1 + 0xcc3) != '\0')) {
      if (*pcVar1 != '\0') {
        FUN_00fb73d0(param_1,3);
      }
      if (((*(int *)(param_1 + 0x25bc) == 2) &&
          (lVar3 = FUN_015bee50(*(undefined8 *)(param_1 + 0x25d8),auStack_28), lVar3 != 0)) &&
         (lVar3 = FUN_00794780(), lVar3 == 0)) {
        FUN_00fb5450(param_1,3);
      }
    }
  }
  return;
}


