/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00170ca0; name: FUN_00170ca0
 */


void FUN_00170ca0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02710eb0 + 0x10);
                    /* try { // try from 00170cd0 to 00170cf3 has its CatchHandler @ 00171074 */
  (*(code *)**(undefined8 **)param_1[0x4c])();
  (*(code *)**(undefined8 **)param_1[0x4d])();
  (*(code *)**(undefined8 **)param_1[0x4e])();
  puVar2 = (undefined8 *)param_1[0x48];
  if (puVar2 != (undefined8 *)0x0) {
    if (((-1 < (int)*(uint *)((long)puVar2 + 0x14)) &&
        ((*(uint *)((long)puVar2 + 0x14) & 0x7fffffff) != 0)) && (puVar2[1] != 0)) {
                    /* try { // try from 00170d20 to 00170d23 has its CatchHandler @ 00171030 */
      (**(code **)(*(long *)*puVar2 + 0x18))();
      puVar2 = (undefined8 *)param_1[0x48];
      if (puVar2 == (undefined8 *)0x0) goto LAB_00170d40;
    }
                    /* try { // try from 00170d2c to 00170d3f has its CatchHandler @ 00171070 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar2);
  }
LAB_00170d40:
  puVar2 = (undefined8 *)param_1[0x49];
  param_1[0x48] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    if (((-1 < (int)*(uint *)((long)puVar2 + 0x14)) &&
        ((*(uint *)((long)puVar2 + 0x14) & 0x7fffffff) != 0)) && (puVar2[1] != 0)) {
                    /* try { // try from 00170d70 to 00170d73 has its CatchHandler @ 0017102c */
      (**(code **)(*(long *)*puVar2 + 0x18))();
      puVar2 = (undefined8 *)param_1[0x49];
      if (puVar2 == (undefined8 *)0x0) goto LAB_00170d90;
    }
                    /* try { // try from 00170d7c to 00170d8f has its CatchHandler @ 0017106c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar2);
  }
LAB_00170d90:
  param_1[0x49] = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0x2a4)) &&
      ((*(uint *)((long)param_1 + 0x2a4) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x53], lVar3 != 0)
     ) {
                    /* try { // try from 00170dac to 00170dbf has its CatchHandler @ 00171068 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x294)) &&
      ((*(uint *)((long)param_1 + 0x294) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x51], lVar3 != 0)
     ) {
                    /* try { // try from 00170dd8 to 00170deb has its CatchHandler @ 00171064 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x284)) &&
      ((*(uint *)((long)param_1 + 0x284) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x4f], lVar3 != 0)
     ) {
                    /* try { // try from 00170e04 to 00170e17 has its CatchHandler @ 00171060 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x25c)) &&
      ((*(uint *)((long)param_1 + 0x25c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x4a], lVar3 != 0)
     ) {
                    /* try { // try from 00170e30 to 00170e43 has its CatchHandler @ 0017105c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x23c)) &&
      ((*(uint *)((long)param_1 + 0x23c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x46], lVar3 != 0)
     ) {
    lVar4 = *(long *)(lVar3 + -8);
                    /* try { // try from 00170e60 to 00170e73 has its CatchHandler @ 00171058 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x22c)) &&
      ((*(uint *)((long)param_1 + 0x22c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x44], lVar3 != 0)
     ) {
    lVar4 = *(long *)(lVar3 + -8);
                    /* try { // try from 00170e90 to 00170ea3 has its CatchHandler @ 00171054 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x21c)) &&
      ((*(uint *)((long)param_1 + 0x21c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x42], lVar3 != 0)
     ) {
                    /* try { // try from 00170ebc to 00170ecf has its CatchHandler @ 00171050 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x20c)) &&
      ((*(uint *)((long)param_1 + 0x20c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x40], lVar3 != 0)
     ) {
                    /* try { // try from 00170ee8 to 00170efb has its CatchHandler @ 0017104c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1fc)) &&
      ((*(uint *)((long)param_1 + 0x1fc) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x3e], lVar3 != 0)
     ) {
                    /* try { // try from 00170f14 to 00170f27 has its CatchHandler @ 00171048 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1ec)) &&
      ((*(uint *)((long)param_1 + 0x1ec) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x3c], lVar3 != 0)
     ) {
                    /* try { // try from 00170f40 to 00170f53 has its CatchHandler @ 00171044 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1dc)) &&
      ((*(uint *)((long)param_1 + 0x1dc) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x3a], lVar3 != 0)
     ) {
                    /* try { // try from 00170f6c to 00170f7f has its CatchHandler @ 00171040 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1cc)) &&
      ((*(uint *)((long)param_1 + 0x1cc) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x38], lVar3 != 0)
     ) {
    lVar4 = *(long *)(lVar3 + -8);
                    /* try { // try from 00170f9c to 00170faf has its CatchHandler @ 0017103c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1bc)) &&
      ((*(uint *)((long)param_1 + 0x1bc) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x36], lVar3 != 0)
     ) {
    lVar4 = *(long *)(lVar3 + -8);
                    /* try { // try from 00170fcc to 00170fdf has its CatchHandler @ 00171038 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1ac)) &&
      ((*(uint *)((long)param_1 + 0x1ac) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x34], lVar3 != 0)
     ) {
    lVar4 = *(long *)(lVar3 + -8);
                    /* try { // try from 00170ffc to 0017100f has its CatchHandler @ 00171034 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3 - lVar4);
  }
  FUN_00170bf0(param_1 + 0x32);
  FUN_00173d20(param_1);
  return;
}


