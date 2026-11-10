/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da5dd0; name: FUN_00da5dd0
 */


void FUN_00da5dd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1);
    lVar1 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x338);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x330);
    lVar1 = *(long *)(param_1 + 0x338);
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x118);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x110);
    lVar1 = *(long *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x448);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x440);
    lVar1 = *(long *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x448) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x228);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x220);
    lVar1 = *(long *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x558);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170) != '\0')) {
    FUN_006e2100(lVar1,param_1 + 0x550);
    lVar1 = *(long *)(param_1 + 0x558);
    *(undefined8 *)(param_1 + 0x558) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  if (*(long *)(param_1 + 0x668) == 0) {
    *(undefined8 *)(param_1 + 0x668) = 0;
    lVar1 = *(long *)(param_1 + 0xee8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x668),param_1 + 0x660);
    lVar1 = *(long *)(param_1 + 0x668);
    *(undefined8 *)(param_1 + 0x668) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0xee8);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0xee8) = 0;
    lVar1 = *(long *)(param_1 + 0x778);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0xee0);
    lVar1 = *(long *)(param_1 + 0xee8);
    *(undefined8 *)(param_1 + 0xee8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x778);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x778) = 0;
    lVar1 = *(long *)(param_1 + 0x888);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x770);
    lVar1 = *(long *)(param_1 + 0x778);
    *(undefined8 *)(param_1 + 0x778) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x888);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x888) = 0;
    lVar1 = *(long *)(param_1 + 0x998);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x880);
    lVar1 = *(long *)(param_1 + 0x888);
    *(undefined8 *)(param_1 + 0x888) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x998);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x998) = 0;
    lVar1 = *(long *)(param_1 + 0xaa8);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x990);
    lVar1 = *(long *)(param_1 + 0x998);
    *(undefined8 *)(param_1 + 0x998) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0xaa8);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0xaa8) = 0;
    lVar1 = *(long *)(param_1 + 3000);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0xaa0);
    lVar1 = *(long *)(param_1 + 0xaa8);
    *(undefined8 *)(param_1 + 0xaa8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 3000);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 3000) = 0;
    lVar1 = *(long *)(param_1 + 0xcc8);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0xbb0);
    lVar1 = *(long *)(param_1 + 3000);
    *(undefined8 *)(param_1 + 3000) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0xcc8);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0xcc8) = 0;
    lVar1 = *(long *)(param_1 + 0xdd8);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0xcc0);
    lVar1 = *(long *)(param_1 + 0xcc8);
    *(undefined8 *)(param_1 + 0xcc8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0xdd8);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0xdd8) = 0;
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0xdd0);
    lVar1 = *(long *)(param_1 + 0xdd8);
    *(undefined8 *)(param_1 + 0xdd8) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00da606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


