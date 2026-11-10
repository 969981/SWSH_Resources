/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00113420; name: FUN_00113420
 */


void FUN_00113420(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  param_1[0xbe] = 0;
  puVar1 = PTR_DAT_02710c20;
  param_1[0xb7] = 0;
  param_1[0xb0] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xbc] = (long)puVar1;
  param_1[0xb5] = (long)puVar1;
  param_1[0xae] = (long)puVar1;
  FUN_00112e00(param_1 + 0x62);
  FUN_00112e00(param_1 + 0x16);
  lVar3 = param_1[0x14];
  if ((lVar3 != 0) && (-1 < (int)param_1[0x15])) {
                    /* try { // try from 00113474 to 00113487 has its CatchHandler @ 00113648 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  param_1[0x14] = 0;
  if (((-1 < (int)*(uint *)((long)param_1 + 0x9c)) &&
      ((*(uint *)((long)param_1 + 0x9c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x12], lVar3 != 0))
  {
                    /* try { // try from 001134a4 to 001134b7 has its CatchHandler @ 00113644 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x8c)) &&
      ((*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0x10], lVar3 != 0))
  {
                    /* try { // try from 001134d0 to 001134e3 has its CatchHandler @ 00113640 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x7c)) &&
      ((*(uint *)((long)param_1 + 0x7c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0xe], lVar3 != 0))
  {
                    /* try { // try from 001134fc to 0011350f has its CatchHandler @ 0011363c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x6c)) &&
      ((*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) != 0)) && (lVar3 = param_1[0xc], lVar3 != 0))
  {
                    /* try { // try from 00113528 to 0011353b has its CatchHandler @ 00113638 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x5c)) &&
      ((*(uint *)((long)param_1 + 0x5c) & 0x7fffffff) != 0)) && (lVar3 = param_1[10], lVar3 != 0)) {
                    /* try { // try from 00113554 to 00113567 has its CatchHandler @ 00113634 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x4c)) &&
      ((*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) != 0)) && (lVar3 = param_1[8], lVar3 != 0)) {
                    /* try { // try from 00113580 to 00113593 has its CatchHandler @ 00113630 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x3c)) &&
      ((*(uint *)((long)param_1 + 0x3c) & 0x7fffffff) != 0)) && (lVar3 = param_1[6], lVar3 != 0)) {
                    /* try { // try from 001135ac to 001135bf has its CatchHandler @ 0011362c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x24)) &&
      ((*(uint *)((long)param_1 + 0x24) & 0x7fffffff) != 0)) && (lVar3 = param_1[3], lVar3 != 0)) {
                    /* try { // try from 001135d8 to 001135eb has its CatchHandler @ 00113628 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0xc)) &&
      ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) != 0)) && (lVar3 = *param_1, lVar3 != 0)) {
                    /* try { // try from 00113604 to 00113617 has its CatchHandler @ 00113624 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
  return;
}


