/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004005a0; name: FUN_004005a0
 */


void FUN_004005a0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  plVar1 = param_1 + 0x37;
  *param_1 = (long)(PTR_DAT_027129c8 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar4 = 0;
    do {
      plVar5 = *(long **)(*plVar1 + uVar4 * 8);
      if (plVar5 != (long *)0x0) {
        do {
          plVar5 = (long *)*plVar5;
                    /* try { // try from 004005ec to 004005f3 has its CatchHandler @ 004007e4 */
          FUN_00401580(auStack_40);
        } while (plVar5 != (long *)0x0);
        uVar2 = (ulong)*(uint *)(param_1 + 0x38);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  local_38 = 0;
                    /* try { // try from 0040060c to 00400627 has its CatchHandler @ 004007e0 */
  FUN_00401320(plVar1,0,&local_38);
  FUN_00401400(plVar1,(int)param_1[0x38]);
  nn::os::FinalizeMutex((MutexType *)param_1[0x3a]);
                    /* try { // try from 00400638 to 0040063f has its CatchHandler @ 004007dc */
  FUN_00401580(param_1 + 0x3a,param_1[0x3a]);
  nn::os::FinalizeMutex((MutexType *)param_1[0x39]);
                    /* try { // try from 00400650 to 00400657 has its CatchHandler @ 004007d8 */
  FUN_00401580(param_1 + 0x39,param_1[0x39]);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c4)) &&
     ((*(uint *)((long)param_1 + 0x1c4) & 0x7fffffff) != 0)) {
                    /* try { // try from 0040066c to 00400673 has its CatchHandler @ 004007c8 */
    FUN_00401580(plVar1,*plVar1);
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0x36]);
                    /* try { // try from 00400684 to 0040068b has its CatchHandler @ 004007d4 */
  FUN_00401580(param_1 + 0x36,param_1[0x36]);
  if (*(uint *)((long)param_1 + 0x19c) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x32] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0x31] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x19c));
  }
  if (param_1[0x2f] != 0) {
                    /* try { // try from 004006e0 to 004006e3 has its CatchHandler @ 004007cc */
    (**(code **)(*(long *)(*(long *)PTR_DAT_027129e0 + 0x18) + 0x18))();
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0x2e]);
                    /* try { // try from 004006f4 to 004006fb has its CatchHandler @ 004007d0 */
  FUN_00401580(param_1 + 0x2e,param_1[0x2e]);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x19] = (long)(PTR_DAT_027129e8 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x164)) &&
     ((*(uint *)((long)param_1 + 0x164) & 0x7fffffff) != 0)) {
    if (param_1 + 0x1a == (long *)param_1[0x2b]) {
      *(undefined1 *)(param_1 + 0x2a) = 0;
    }
    else if ((long *)param_1[0x2b] != (long *)0x0) {
                    /* try { // try from 00400748 to 0040074b has its CatchHandler @ 004007c4 */
      (**(code **)(*(long *)(*(long *)PTR_DAT_027129e0 + 0x18) + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[3] = (long)(PTR_DAT_027129f0 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) &&
     ((*(uint *)((long)param_1 + 0xb4) & 0x7fffffff) != 0)) {
    if (param_1 + 4 == (long *)param_1[0x15]) {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    else if ((long *)param_1[0x15] != (long *)0x0) {
                    /* try { // try from 004007a0 to 004007a3 has its CatchHandler @ 004007c0 */
      (**(code **)(*(long *)(*(long *)PTR_DAT_027129e0 + 0x18) + 0x18))();
    }
  }
  return;
}


