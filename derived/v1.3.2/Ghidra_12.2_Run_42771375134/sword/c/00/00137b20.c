/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00137b20; name: FUN_00137b20
 */


void FUN_00137b20(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x3208);
  if (lVar2 != param_1 + 0x3000 && lVar2 != 0) {
                    /* try { // try from 00137b44 to 00137b57 has its CatchHandler @ 00137bcc */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0x3208) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x3210);
  if ((lVar2 != param_1) && (lVar2 != 0)) {
                    /* try { // try from 00137b6c to 00137b7f has its CatchHandler @ 00137bc8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0x3210) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x3218);
  if ((lVar2 != param_1 + 0x1800) && (lVar2 != 0)) {
                    /* try { // try from 00137b9c to 00137baf has its CatchHandler @ 00137bc4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0x3218) = 0;
  }
  *(undefined8 *)(param_1 + 0x3200) = 0;
  return;
}


