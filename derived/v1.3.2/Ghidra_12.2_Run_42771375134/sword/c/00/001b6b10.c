/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b6b10; name: FUN_001b6b10
 */


void FUN_001b6b10(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02711050 + 0x10);
  if ((long *)param_1[0x61] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x61] + 0x20))();
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0x42e]);
  lVar4 = param_1[0x42e];
  if (lVar4 != 0) {
                    /* try { // try from 001b6b54 to 001b6b67 has its CatchHandler @ 001b6ff4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b5ed0(param_1 + 999);
  nn::os::FinalizeMutex((MutexType *)param_1[0x3e6]);
  lVar4 = param_1[0x3e6];
  if (lVar4 != 0) {
                    /* try { // try from 001b6b84 to 001b6b97 has its CatchHandler @ 001b6ff0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b5fb0(param_1 + 0x39f);
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1cf4)) &&
      ((*(uint *)((long)param_1 + 0x1cf4) & 0x7fffffff) != 0)) &&
     (lVar4 = param_1[0x39d], lVar4 != 0)) {
                    /* try { // try from 001b6bbc to 001b6bcf has its CatchHandler @ 001b6fa8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0x39c]);
  lVar4 = param_1[0x39c];
  if (lVar4 != 0) {
                    /* try { // try from 001b6be0 to 001b6bf3 has its CatchHandler @ 001b6fec */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6090(param_1 + 0x355);
  nn::os::FinalizeMutex((MutexType *)param_1[0x354]);
  lVar4 = param_1[0x354];
  if (lVar4 != 0) {
                    /* try { // try from 001b6c10 to 001b6c23 has its CatchHandler @ 001b6fe8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6170(param_1 + 0x30d);
  nn::os::FinalizeMutex((MutexType *)param_1[0x30c]);
  lVar4 = param_1[0x30c];
  if (lVar4 != 0) {
                    /* try { // try from 001b6c40 to 001b6c53 has its CatchHandler @ 001b6fe4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6250(param_1 + 0x2c5);
  nn::os::FinalizeMutex((MutexType *)param_1[0x2c4]);
  lVar4 = param_1[0x2c4];
  if (lVar4 != 0) {
                    /* try { // try from 001b6c70 to 001b6c83 has its CatchHandler @ 001b6fe0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6330(param_1 + 0x27d);
  nn::os::FinalizeMutex((MutexType *)param_1[0x27c]);
  lVar4 = param_1[0x27c];
  if (lVar4 != 0) {
                    /* try { // try from 001b6ca0 to 001b6cb3 has its CatchHandler @ 001b6fdc */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6410(param_1 + 0x235);
  nn::os::FinalizeMutex((MutexType *)param_1[0x234]);
  lVar4 = param_1[0x234];
  if (lVar4 != 0) {
                    /* try { // try from 001b6cd0 to 001b6ce3 has its CatchHandler @ 001b6fd8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b64f0(param_1 + 0x1ed);
  nn::os::FinalizeMutex((MutexType *)param_1[0x1ec]);
  lVar4 = param_1[0x1ec];
  if (lVar4 != 0) {
                    /* try { // try from 001b6cfc to 001b6d0f has its CatchHandler @ 001b6fd4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b65d0(param_1 + 0x1a5);
  nn::os::FinalizeMutex((MutexType *)param_1[0x1a4]);
  lVar4 = param_1[0x1a4];
  if (lVar4 != 0) {
                    /* try { // try from 001b6d28 to 001b6d3b has its CatchHandler @ 001b6fd0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b66b0(param_1 + 0x15d);
  nn::os::FinalizeMutex((MutexType *)param_1[0x15c]);
  lVar4 = param_1[0x15c];
  if (lVar4 != 0) {
                    /* try { // try from 001b6d54 to 001b6d67 has its CatchHandler @ 001b6fcc */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6790(param_1 + 0x115);
  nn::os::FinalizeMutex((MutexType *)param_1[0x114]);
  lVar4 = param_1[0x114];
  if (lVar4 != 0) {
                    /* try { // try from 001b6d80 to 001b6d93 has its CatchHandler @ 001b6fc8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6870(param_1 + 0xcd);
  nn::os::FinalizeMutex((MutexType *)param_1[0xcc]);
  lVar4 = param_1[0xcc];
  if (lVar4 != 0) {
                    /* try { // try from 001b6dac to 001b6dbf has its CatchHandler @ 001b6fc4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6950(param_1 + 0x85);
  if (*(uint *)((long)param_1 + 0x414) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x81] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0x80] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x414));
  }
  lVar4 = param_1[0x7e];
  if (lVar4 != 0) {
                    /* try { // try from 001b6e08 to 001b6e1b has its CatchHandler @ 001b6fc0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x3dc) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x7a] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0x79] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x3dc));
  }
  lVar4 = param_1[0x77];
  if (lVar4 != 0) {
                    /* try { // try from 001b6e5c to 001b6e6f has its CatchHandler @ 001b6fbc */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x3a4) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x73] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0x72] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x3a4));
  }
  lVar4 = param_1[0x70];
  if (lVar4 != 0) {
                    /* try { // try from 001b6eb0 to 001b6ec3 has its CatchHandler @ 001b6fb8 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x36c) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x6c] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0x6b] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x36c));
  }
  lVar4 = param_1[0x69];
  if (lVar4 != 0) {
                    /* try { // try from 001b6f04 to 001b6f17 has its CatchHandler @ 001b6fb4 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)((long)param_1 + 0x334) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x65] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[100] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)((long)param_1 + 0x334));
  }
  lVar4 = param_1[0x62];
  if (lVar4 != 0) {
                    /* try { // try from 001b6f58 to 001b6f6b has its CatchHandler @ 001b6fb0 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0x60]);
  lVar4 = param_1[0x60];
  if (lVar4 != 0) {
                    /* try { // try from 001b6f7c to 001b6f8f has its CatchHandler @ 001b6fac */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_001b6a30(param_1 + 0x19);
  FUN_0029ae90(param_1);
  return;
}


