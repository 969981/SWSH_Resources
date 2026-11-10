/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00402000; name: FUN_00402000
 */


void FUN_00402000(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02712a08 + 0x10);
  if (((-1 < (int)*(uint *)((long)param_1 + 0x94)) &&
      ((*(uint *)((long)param_1 + 0x94) & 0x7fffffff) != 0)) && (lVar4 = param_1[0x11], lVar4 != 0))
  {
                    /* try { // try from 00402038 to 0040204b has its CatchHandler @ 00402130 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x84)) &&
      ((*(uint *)((long)param_1 + 0x84) & 0x7fffffff) != 0)) && (lVar4 = param_1[0xf], lVar4 != 0))
  {
                    /* try { // try from 00402064 to 00402077 has its CatchHandler @ 0040212c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x74)) &&
      ((*(uint *)((long)param_1 + 0x74) & 0x7fffffff) != 0)) && (lVar4 = param_1[0xd], lVar4 != 0))
  {
                    /* try { // try from 00402090 to 004020a3 has its CatchHandler @ 00402128 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0xc]);
  lVar4 = param_1[0xc];
  if (lVar4 != 0) {
                    /* try { // try from 004020b4 to 004020c7 has its CatchHandler @ 00402138 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x44) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[7] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[6] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x44));
  }
  lVar4 = param_1[4];
  if (lVar4 != 0) {
                    /* try { // try from 00402108 to 0040211b has its CatchHandler @ 00402134 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  return;
}


