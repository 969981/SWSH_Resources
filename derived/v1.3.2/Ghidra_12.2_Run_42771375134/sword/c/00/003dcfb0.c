/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dcfb0; name: FUN_003dcfb0
 */


void FUN_003dcfb0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 0x29c) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x290) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x288) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x29c));
  }
  lVar4 = *(long *)(param_1 + 0x278);
  if (lVar4 != 0) {
                    /* try { // try from 003dd000 to 003dd013 has its CatchHandler @ 003dd07c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  if (*(uint *)(param_1 + 0x264) != 0) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 600) + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x250) + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x264));
  }
  lVar4 = *(long *)(param_1 + 0x240);
  if (lVar4 != 0) {
                    /* try { // try from 003dd054 to 003dd067 has its CatchHandler @ 003dd078 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  }
  FUN_003c1900(param_1 + 8);
  return;
}


