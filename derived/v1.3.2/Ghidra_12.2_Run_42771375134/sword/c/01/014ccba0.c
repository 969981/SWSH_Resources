/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ccba0; name: FUN_014ccba0
 */


void FUN_014ccba0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x78) - 1U < 2) {
    lVar2 = 0x12;
    lVar3 = param_1;
    do {
      if (*(long *)(lVar3 + 200) == 0) {
        *(undefined8 *)(lVar3 + 200) = 0;
        lVar1 = *(long *)(lVar3 + 0x1d8);
        if (lVar1 != 0) goto LAB_014ccc20;
LAB_014ccbdc:
        *(undefined8 *)(lVar3 + 0x1d8) = 0;
        lVar1 = *(long *)(lVar3 + 0xb8);
        *(undefined8 *)(lVar3 + 0xb8) = 0;
      }
      else {
        FUN_006e2100(*(long *)(lVar3 + 200),lVar3 + 0xc0);
        lVar1 = *(long *)(lVar3 + 200);
        *(undefined8 *)(lVar3 + 200) = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
        lVar1 = *(long *)(lVar3 + 0x1d8);
        if (lVar1 == 0) goto LAB_014ccbdc;
LAB_014ccc20:
        FUN_006e2100(lVar1,lVar3 + 0x1d0);
        lVar1 = *(long *)(lVar3 + 0x1d8);
        *(undefined8 *)(lVar3 + 0x1d8) = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
        lVar1 = *(long *)(lVar3 + 0xb8);
        *(undefined8 *)(lVar3 + 0xb8) = 0;
      }
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      lVar3 = lVar3 + 0x260;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  else if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


