/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a6050; name: FUN_014a6050
 */


void FUN_014a6050(long param_1,ulong param_2,uint param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  
  if (((param_3 >> 1 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0xa8), lVar3 != 0)) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((param_2 & 1) == 0) {
      FUN_00794700(lVar3);
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    else if (*(char *)(param_1 + 0xc0) == '\0') {
      bVar1 = FUN_007946a0(lVar3,1);
      *(byte *)(param_1 + 0xc0) = bVar1 & 1;
    }
    else {
      FUN_007947b0(lVar3,1);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (((param_3 >> 2 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0xb0), lVar3 != 0)) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((param_2 & 1) == 0) {
      FUN_00794700(lVar3);
      *(undefined1 *)(param_1 + 0xc1) = 0;
    }
    else if (*(char *)(param_1 + 0xc1) == '\0') {
      bVar1 = FUN_007946a0(lVar3,1);
      *(byte *)(param_1 + 0xc1) = bVar1 & 1;
    }
    else {
      FUN_007947b0(lVar3,1);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (((param_3 >> 3 & 1) == 0) || (lVar3 = *(long *)(param_1 + 0xb8), lVar3 == 0)) {
    return;
  }
  plVar2 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  if ((param_2 & 1) == 0) {
    FUN_00794700(lVar3);
    *(undefined1 *)(param_1 + 0xc2) = 0;
  }
  else if (*(char *)(param_1 + 0xc2) == '\0') {
    bVar1 = FUN_007946a0(lVar3,1);
    *(byte *)(param_1 + 0xc2) = bVar1 & 1;
  }
  else {
    FUN_007947b0(lVar3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x014a61e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


