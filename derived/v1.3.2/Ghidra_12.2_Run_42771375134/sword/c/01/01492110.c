/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01492110; name: FUN_01492110
 */


void FUN_01492110(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x5cc) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_0149216c:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_01481a10();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          goto LAB_01492170;
        }
      }
      goto LAB_0149216c;
    }
  }
LAB_01492170:
  switch(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc)) {
  case 1:
  case 2:
    FUN_0148f070(*(undefined8 *)(param_1 + 0x88));
    FUN_014a2300(puVar6);
    FUN_01485970(*(undefined8 *)(param_1 + 0x80),5);
    break;
  case 3:
    uVar4 = FUN_014a22e0(puVar6);
    uVar5 = 3;
    goto LAB_014921dc;
  case 4:
    uVar4 = FUN_014a22e0(puVar6);
    uVar5 = 2;
LAB_014921dc:
    uVar1 = 0;
    if ((uVar4 & 1) == 0) {
      uVar1 = uVar5;
    }
    *(undefined4 *)(param_1 + 0x78) = 6;
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
    break;
  case 8:
    FUN_014a23f0(puVar6);
    break;
  case 9:
    if (*(int *)puVar6[0xc] == 7) {
      *(undefined4 *)(param_1 + 0x78) = 3;
      FUN_01492470(param_1,0x1c610abe15c6794b);
    }
    else {
      *(undefined8 *)(param_1 + 0x78) = 0x500000006;
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc) = 0;
  return;
}


