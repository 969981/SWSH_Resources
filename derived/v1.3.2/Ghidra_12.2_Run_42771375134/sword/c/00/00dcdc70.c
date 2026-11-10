/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcdc70; name: FUN_00dcdc70
 */


void FUN_00dcdc70(long param_1,ulong param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_18 [8];
  
  if (*(int *)(param_1 + 0x184) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) goto LAB_00dcdda0;
  if (*(char *)(param_1 + 0x1b0) == '\0') {
LAB_00dcdcbc:
    *(undefined8 *)(param_1 + 0x340) = 0;
    if (*(char *)(param_1 + 0x3d0) == '\0') goto LAB_00dcdd18;
LAB_00dcdcc8:
    if (*(long *)(param_1 + 0x458) == 0) {
      *(undefined8 *)(param_1 + 0x458) = 0;
      goto LAB_00dcdd18;
    }
    FUN_006e2100(*(long *)(param_1 + 0x458),param_1 + 0x450);
    lVar2 = *(long *)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x458) = 0;
    if (lVar2 == 0) goto LAB_00dcdd18;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x560) = 0;
    if (*(char *)(param_1 + 0x610) != '\0') goto LAB_00dcdd24;
LAB_00dcdd4c:
    cVar1 = *(char *)(param_1 + 0x830);
    *(undefined8 *)(param_1 + 0x7a0) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x238) != 0) {
      FUN_006e2100(*(long *)(param_1 + 0x238),param_1 + 0x230);
      lVar2 = *(long *)(param_1 + 0x238);
      *(undefined8 *)(param_1 + 0x238) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      goto LAB_00dcdcbc;
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    if (*(char *)(param_1 + 0x3d0) != '\0') goto LAB_00dcdcc8;
LAB_00dcdd18:
    *(undefined8 *)(param_1 + 0x560) = 0;
    if (*(char *)(param_1 + 0x610) == '\0') goto LAB_00dcdd4c;
LAB_00dcdd24:
    if (*(long *)(param_1 + 0x698) != 0) {
      FUN_006e2100(*(long *)(param_1 + 0x698),param_1 + 0x690);
      lVar2 = *(long *)(param_1 + 0x698);
      *(undefined8 *)(param_1 + 0x698) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      goto LAB_00dcdd4c;
    }
    *(undefined8 *)(param_1 + 0x698) = 0;
    cVar1 = *(char *)(param_1 + 0x830);
    *(undefined8 *)(param_1 + 0x7a0) = 0;
  }
  if (cVar1 != '\0') {
    if (*(long *)(param_1 + 0x8b8) == 0) {
      *(undefined8 *)(param_1 + 0x8b8) = 0;
    }
    else {
      FUN_006e2100(*(long *)(param_1 + 0x8b8),param_1 + 0x8b0);
      lVar2 = *(long *)(param_1 + 0x8b8);
      *(undefined8 *)(param_1 + 0x8b8) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x9c0) = 0;
LAB_00dcdda0:
  lVar2 = *(long *)(param_1 + 0xa50);
  lVar3 = *(long *)(param_1 + 0xa58);
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  *(undefined8 *)(param_1 + 0x9c0) = 0;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x230) {
    *(undefined8 *)(lVar2 + 400) = 0;
  }
  FUN_00db8810(param_1,auStack_18);
  *(undefined8 *)(param_1 + 0xb60) = *(undefined8 *)(param_1 + 0xb58);
  FUN_00dcde30(param_1 + 0xb58);
  *(undefined1 *)(param_1 + 0xa82) = 1;
  *(ulong *)(*(long *)(param_1 + 0x170) + 0x138) =
       *(ulong *)(*(long *)(param_1 + 0x170) + 0x138) | 1;
  *(ulong *)(*(long *)(param_1 + 0x178) + 0x138) =
       *(ulong *)(*(long *)(param_1 + 0x178) + 0x138) | 1;
  *(undefined4 *)(param_1 + 0x184) = 0;
  return;
}


