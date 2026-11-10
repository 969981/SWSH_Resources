/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e19520; name: FUN_00e19520
 */


void FUN_00e19520(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar5;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
  FUN_00dbbc50(*(undefined8 *)(param_1 + 0xe8));
  if ((param_2 & 1) != 0) {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar1 + 0x1e8);
    if (lVar2 == 0) {
      FUN_015c5d00(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_015c5d00(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  plVar3 = *(long **)(param_1 + 0x210);
  if (*(long **)(param_1 + 0x218) != plVar3) {
    plVar4 = *(long **)(param_1 + 0x218);
    do {
      plVar5 = plVar4 + -2;
      if (*plVar5 != 0) {
        (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
        plVar4[-2] = 0;
      }
      plVar4 = plVar5;
    } while (plVar3 != plVar5);
  }
  *(long **)(param_1 + 0x218) = plVar3;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x148);
  return;
}


