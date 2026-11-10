/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d67860; name: FUN_00d67860
 */


void FUN_00d67860(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  FUN_00dab480(*(undefined8 *)(param_1 + 0x780),5);
  if (*(char *)(param_1 + 0x78c) != '\0') {
    if (*(int *)(param_1 + 0x788) == 1) {
      FUN_00d67240(param_1,0);
    }
    uVar1 = FUN_00da4bb0(*(undefined8 *)(param_1 + 0x780),1);
    if ((uVar1 & 1) != 0) {
      FUN_00da4c30(*(undefined8 *)(param_1 + 0x780),1);
    }
  }
  FUN_00daaec0(*(undefined8 *)(param_1 + 0x780),1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),0,1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),4,1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),1,1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),2,1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),3,1);
  lVar2 = *(long *)(param_1 + 0x780);
  *(undefined8 *)(param_1 + 0x780) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(param_1 + 0x778);
  *(undefined8 *)(param_1 + 0x778) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x738) != 0) {
    lVar2 = *(long *)PTR_DAT_0271e240;
    (**(code **)**(undefined8 **)(lVar2 + 8))();
    *(undefined8 *)(lVar2 + 8) = 0;
    (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))
              (*(long **)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),
               8);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x758) != 0) {
    lVar2 = *(long *)PTR_DAT_0271e240;
    (**(code **)**(undefined8 **)(lVar2 + 0x28))();
    *(undefined8 *)(lVar2 + 0x28) = 0;
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x18))
              (*(long **)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40),
               8);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
  }
  return;
}


