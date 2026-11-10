/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00173d20; name: FUN_00173d20
 */


void FUN_00173d20(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[1];
  *param_1 = (long)(PTR_DAT_02710ef8 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    if (((-1 < (int)*(uint *)((long)puVar3 + 0x14)) &&
        ((*(uint *)((long)puVar3 + 0x14) & 0x7fffffff) != 0)) && (puVar3[1] != 0)) {
                    /* try { // try from 00173d6c to 00173d6f has its CatchHandler @ 00173e34 */
      (**(code **)(*(long *)*puVar3 + 0x18))();
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 == (undefined8 *)0x0) goto LAB_00173d8c;
    }
                    /* try { // try from 00173d78 to 00173d8b has its CatchHandler @ 00173e40 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar3);
  }
LAB_00173d8c:
  puVar3 = (undefined8 *)param_1[2];
  param_1[1] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if (((-1 < (int)*(uint *)((long)puVar3 + 0x14)) &&
        ((*(uint *)((long)puVar3 + 0x14) & 0x7fffffff) != 0)) && (puVar3[1] != 0)) {
                    /* try { // try from 00173dbc to 00173dbf has its CatchHandler @ 00173e30 */
      (**(code **)(*(long *)*puVar3 + 0x18))();
      puVar3 = (undefined8 *)param_1[2];
      if (puVar3 == (undefined8 *)0x0) goto LAB_00173ddc;
    }
                    /* try { // try from 00173dc8 to 00173ddb has its CatchHandler @ 00173e3c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar3);
  }
LAB_00173ddc:
  param_1[2] = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0xf4)) &&
      ((*(uint *)((long)param_1 + 0xf4) & 0x7fffffff) != 0)) && (param_1[0x1d] != 0)) {
                    /* try { // try from 00173e04 to 00173e07 has its CatchHandler @ 00173e38 */
    (**(code **)(*(long *)param_1[0x1c] + 0x18))();
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
                    /* try { // try from 00173e10 to 00173e23 has its CatchHandler @ 00173e5c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return;
}


