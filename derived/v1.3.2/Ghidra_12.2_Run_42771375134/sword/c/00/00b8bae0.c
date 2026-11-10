/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8bae0; name: FUN_00b8bae0
 */


void FUN_00b8bae0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_016acfc0(*(undefined8 *)(param_1 + 0x58));
    FUN_016ad050(*(undefined8 *)(param_1 + 0x58));
    FUN_016ad0b0(*(undefined8 *)(param_1 + 0x58));
  }
  if (*(char *)(param_1 + 0x79) == '\0') {
    lVar3 = *(long *)(param_1 + 0x18);
    uVar1 = 1;
  }
  else {
    FUN_016acfc0(*(undefined8 *)(param_1 + 0x38));
    FUN_016ad050(*(undefined8 *)(param_1 + 0x38));
    FUN_016ad0b0(*(undefined8 *)(param_1 + 0x38));
    lVar3 = *(long *)(param_1 + 0x18);
    if (*(char *)(param_1 + 0x79) == '\0') {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_016ae310(*(undefined8 *)(param_1 + 0x38));
      uVar1 = uVar1 ^ 1;
    }
  }
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x3f8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar3 + 0x400);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (lVar2 != 0) {
      FUN_00700830(lVar2,uVar1 & 1,6);
    }
    if (lVar3 != 0) {
      FUN_00700830(lVar3,uVar1 & 1,6);
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b8bbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      return;
    }
  }
  return;
}


