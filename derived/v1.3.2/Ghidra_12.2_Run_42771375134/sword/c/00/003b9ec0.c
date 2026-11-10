/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b9ec0; name: FUN_003b9ec0
 */


void FUN_003b9ec0(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [40];
  
  *param_1 = (long)(PTR_DAT_02712760 + 0x10);
  if ((int)param_1[3] < 0) {
    lVar1 = *(long *)(param_1[2] + 0x48);
                    /* try { // try from 003b9f04 to 003b9f2f has its CatchHandler @ 003b9f48 */
    (**(code **)(**(long **)(*(long *)(lVar1 + 0x720) + 0x6e8) + 0xa8))(auStack_48);
    FUN_003cde40(*(undefined8 *)(lVar1 + 0x1048),param_1,0,auStack_48,
                 *(uint *)(lVar1 + 0x110c) >> 4 & 1);
    FUN_003c6bd0(param_1);
  }
  FUN_003c6930(param_1);
  return;
}


