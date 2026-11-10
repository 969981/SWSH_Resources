/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a72f0; name: FUN_001a72f0
 */


void FUN_001a72f0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02710c20;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined **)(param_1 + 0x228) = puVar1 + 0x10;
  if (((-1 < (int)*(uint *)(param_1 + 0x1fc)) && ((*(uint *)(param_1 + 0x1fc) & 0x7fffffff) != 0))
     && (lVar3 = *(long *)(param_1 + 0x1f0), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + -8);
                    /* try { // try from 001a7334 to 001a7497 has its CatchHandler @ 001a74a8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x1c4)) && ((*(uint *)(param_1 + 0x1c4) & 0x7fffffff) != 0))
     && (lVar3 = *(long *)(param_1 + 0x1b8), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + -8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x18c)) && ((*(uint *)(param_1 + 0x18c) & 0x7fffffff) != 0))
     && (lVar3 = *(long *)(param_1 + 0x180), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + -8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x154)) && ((*(uint *)(param_1 + 0x154) & 0x7fffffff) != 0))
     && (lVar3 = *(long *)(param_1 + 0x148), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + -8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x11c)) && ((*(uint *)(param_1 + 0x11c) & 0x7fffffff) != 0))
     && (lVar3 = *(long *)(param_1 + 0x110), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + -8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0xe4)) && ((*(uint *)(param_1 + 0xe4) & 0x7fffffff) != 0)) &&
     (lVar3 = *(long *)(param_1 + 0xd8), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + -8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0xac)) && ((*(uint *)(param_1 + 0xac) & 0x7fffffff) != 0)) &&
     (lVar3 = *(long *)(param_1 + 0xa0), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + -8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x74)) && ((*(uint *)(param_1 + 0x74) & 0x7fffffff) != 0)) &&
     (lVar3 = *(long *)(param_1 + 0x68), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + -8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3 - lVar4);
  }
  return;
}


