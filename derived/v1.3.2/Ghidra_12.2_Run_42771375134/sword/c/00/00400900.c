/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00400900; name: FUN_00400900
 */


void FUN_00400900(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
                 ,undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined1 auStack_450 [1024];
  
  if ((*(uint *)(param_1 + 0x16c) & param_2) != 0) {
    FUN_003ff570(*(undefined8 *)(param_1 + 0x170));
    local_458 = param_6[3];
    local_460 = param_6[2];
    local_468 = param_6[1];
    local_470 = *param_6;
                    /* try { // try from 00400968 to 0040097b has its CatchHandler @ 004009e4 */
    FUN_00401ae0(auStack_450,0x400,param_5,&local_470);
    if (*(int *)(param_1 + 0x160) != 0) {
      uVar2 = 0;
      do {
        plVar1 = *(long **)(*(long *)(param_1 + 0x158) + uVar2 * 8);
                    /* try { // try from 00400998 to 004009ab has its CatchHandler @ 004009e8 */
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2,auStack_450,param_3,param_4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x160));
    }
                    /* try { // try from 004009c0 to 004009c3 has its CatchHandler @ 004009e0 */
    FUN_003ff5a0(*(undefined8 *)(param_1 + 0x170));
  }
  return;
}


