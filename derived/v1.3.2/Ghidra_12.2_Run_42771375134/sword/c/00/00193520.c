/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00193520; name: FUN_00193520
 */


void FUN_00193520(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  FUN_0019e7c0(param_1 + 0x90);
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00194000();
    lVar3 = *(long *)(param_1 + 0x88);
    if (lVar3 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00196b30();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


