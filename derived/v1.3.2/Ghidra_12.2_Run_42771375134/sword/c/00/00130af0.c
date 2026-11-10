/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00130af0; name: FUN_00130af0
 */


void FUN_00130af0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  if (*(uint *)(param_1 + 700) != 0) {
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x2b0) + uVar3 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(*(long *)(param_1 + 0x2a8) + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)(param_1 + 700));
  }
  lVar5 = *(long *)(param_1 + 0x298);
  if (lVar5 != 0) {
                    /* try { // try from 00130b40 to 00130b53 has its CatchHandler @ 00130fd4 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x294)) && ((*(uint *)(param_1 + 0x294) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x288), lVar5 != 0)) {
                    /* try { // try from 00130b6c to 00130b7f has its CatchHandler @ 00130fc0 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (*(uint *)(param_1 + 0x26c) != 0) {
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x260) + uVar3 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(*(long *)(param_1 + 600) + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)(param_1 + 0x26c));
  }
  lVar5 = *(long *)(param_1 + 0x248);
  if (lVar5 != 0) {
                    /* try { // try from 00130bc0 to 00130bd3 has its CatchHandler @ 00130fd0 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (*(uint *)(param_1 + 0x234) != 0) {
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x228) + uVar3 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(*(long *)(param_1 + 0x220) + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)(param_1 + 0x234));
  }
  lVar5 = *(long *)(param_1 + 0x210);
  if (lVar5 != 0) {
                    /* try { // try from 00130c14 to 00130c27 has its CatchHandler @ 00130fcc */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x204)) && ((*(uint *)(param_1 + 0x204) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x1f8), lVar5 != 0)) {
                    /* try { // try from 00130c40 to 00130c53 has its CatchHandler @ 00130fbc */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 500)) && ((*(uint *)(param_1 + 500) & 0x7fffffff) != 0)) &&
     (lVar5 = *(long *)(param_1 + 0x1e8), lVar5 != 0)) {
                    /* try { // try from 00130c6c to 00130c7f has its CatchHandler @ 00130fb8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x1c4)) && ((*(uint *)(param_1 + 0x1c4) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x1b8), lVar5 != 0)) {
                    /* try { // try from 00130c98 to 00130d2f has its CatchHandler @ 00130fdc */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x1b4)) && ((*(uint *)(param_1 + 0x1b4) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x1a8), lVar5 != 0)) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x1a4)) && ((*(uint *)(param_1 + 0x1a4) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x198), lVar5 != 0)) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x194)) && ((*(uint *)(param_1 + 0x194) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x188), lVar5 != 0)) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x184)) && ((*(uint *)(param_1 + 0x184) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x178), lVar5 != 0)) {
                    /* try { // try from 00130d48 to 00130ddf has its CatchHandler @ 00130fd8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x174)) && ((*(uint *)(param_1 + 0x174) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x168), lVar5 != 0)) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x164)) && ((*(uint *)(param_1 + 0x164) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x158), lVar5 != 0)) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x154)) && ((*(uint *)(param_1 + 0x154) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x148), lVar5 != 0)) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x144)) && ((*(uint *)(param_1 + 0x144) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x138), lVar5 != 0)) {
                    /* try { // try from 00130df8 to 00130e0b has its CatchHandler @ 00130fb4 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x134)) && ((*(uint *)(param_1 + 0x134) & 0x7fffffff) != 0))
     && (lVar5 = *(long *)(param_1 + 0x128), lVar5 != 0)) {
                    /* try { // try from 00130e24 to 00130e37 has its CatchHandler @ 00130fb0 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0x114)) && ((*(uint *)(param_1 + 0x114) & 0x7fffffff) != 0))
     && (*(long *)(param_1 + 0x108) != 0)) {
                    /* try { // try from 00130e5c to 00130e5f has its CatchHandler @ 00130fa4 */
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))();
  }
  if (((-1 < (int)*(uint *)(param_1 + 0xfc)) && ((*(uint *)(param_1 + 0xfc) & 0x7fffffff) != 0)) &&
     (*(long *)(param_1 + 0xf0) != 0)) {
                    /* try { // try from 00130e84 to 00130e87 has its CatchHandler @ 00130fa0 */
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))();
  }
  if (((-1 < (int)*(uint *)(param_1 + 0xe4)) && ((*(uint *)(param_1 + 0xe4) & 0x7fffffff) != 0)) &&
     (*(long *)(param_1 + 0xd8) != 0)) {
                    /* try { // try from 00130eac to 00130eaf has its CatchHandler @ 00130f9c */
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
  }
  if (((-1 < (int)*(uint *)(param_1 + 0xbc)) && ((*(uint *)(param_1 + 0xbc) & 0x7fffffff) != 0)) &&
     (lVar5 = *(long *)(param_1 + 0xb0), lVar5 != 0)) {
                    /* try { // try from 00130ec8 to 00130edb has its CatchHandler @ 00130fac */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (((-1 < (int)*(uint *)(param_1 + 0xa4)) && ((*(uint *)(param_1 + 0xa4) & 0x7fffffff) != 0)) &&
     (*(long *)(param_1 + 0x98) != 0)) {
                    /* try { // try from 00130f00 to 00130f03 has its CatchHandler @ 00130f98 */
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
  }
  if ((*(long *)(param_1 + 0x70) != 0) && (-1 < *(int *)(param_1 + 0x78))) {
                    /* try { // try from 00130f20 to 00130f23 has its CatchHandler @ 00130fa8 */
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))();
  }
  lVar5 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if ((lVar5 != 0) && (-1 < *(int *)(param_1 + 0x68))) {
                    /* try { // try from 00130f38 to 00130f4b has its CatchHandler @ 00130fc8 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((lVar5 != 0) && (-1 < *(int *)(param_1 + 0x58))) {
                    /* try { // try from 00130f60 to 00130f73 has its CatchHandler @ 00130fc4 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar1 = PTR_DAT_02710c20;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 8) = puVar1 + 0x10;
  return;
}


