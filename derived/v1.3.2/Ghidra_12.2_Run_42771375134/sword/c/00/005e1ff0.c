/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e1ff0; name: FUN_005e1ff0
 */


void FUN_005e1ff0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x88);
  if (((*(byte *)(param_1 + 0xa8) & 1) == 0) && (lVar1 = *plVar3, lVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x68);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,lVar1);
      (**(code **)(*plVar2 + 0x48))(plVar2,lVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar2 = (long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (((*(byte *)(param_1 + 0xf8) & 1) == 0) && (lVar1 = *plVar2, lVar1 != 0)) {
    plVar3 = *(long **)(param_1 + 0xb8);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar1);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (0 < *(int *)(param_1 + 0x11c)) {
    lVar1 = 0;
    plVar3 = (long *)(param_1 + 0x128);
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x18))();
        *plVar3 = 0;
      }
      if ((long *)plVar3[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[-1] + 0x18))();
        plVar3[-1] = 0;
      }
      lVar1 = lVar1 + 1;
      plVar3 = plVar3 + 2;
    } while (lVar1 < *(int *)(param_1 + 0x11c));
  }
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x18))();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_005e3100(param_1 + 0x160);
  FUN_005e32f0(param_1 + 0x1b0);
  FUN_005e3100(param_1 + 0x200);
  FUN_005e32f0(param_1 + 0x250);
  return;
}


