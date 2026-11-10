/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b30d0; name: FUN_001b30d0
 */


long FUN_001b30d0(long param_1,long param_2)

{
  long *plVar1;
  void *__s;
  size_t __n;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    FUN_003ff570(*(undefined8 *)(param_1 + 0xb8));
    if (*(int *)(param_1 + 0x48) == 0) {
      uVar4 = *(uint *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = uVar4 + 1;
      uVar3 = *(uint *)(param_1 + 0x58);
      if (uVar3 <= uVar4) goto LAB_001b314c;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x48) - 1;
      uVar4 = *(uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar3 * 4);
      *(uint *)(param_1 + 0x48) = uVar3;
      uVar3 = *(uint *)(param_1 + 0x58);
      if (uVar3 <= uVar4) {
LAB_001b314c:
        uVar3 = uVar3 << 1;
        *(uint *)(param_1 + 0x58) = uVar3;
        if (uVar3 == 0) {
          __n = 0;
          __s = (void *)0x0;
        }
        else {
                    /* try { // try from 001b3158 to 001b322b has its CatchHandler @ 001b3288 */
          plVar1 = (long *)FUN_00400d30();
          __s = (void *)(**(code **)(*plVar1 + 0x10))
                                  (plVar1,(ulong)uVar3 << 3,"NonTrackedAlloc",
                                   "./../../PhysX/src/NpMaterialManager.h",0x7a);
          __n = (size_t)(uint)(*(int *)(param_1 + 0x58) << 3);
        }
                    /* WARNING: Subroutine does not return */
        memset(__s,0,__n);
      }
    }
    *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar4 * 8) = param_2;
    *(uint *)(param_2 + 0x48) = uVar4;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = 0;
      do {
                    /* try { // try from 001b324c to 001b3253 has its CatchHandler @ 001b328c */
        FUN_001fc7f0(*(undefined8 *)(*(long *)(param_1 + 8) + uVar2 * 8),param_2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x10));
    }
                    /* try { // try from 001b3268 to 001b326b has its CatchHandler @ 001b3284 */
    FUN_003ff5a0(*(undefined8 *)(param_1 + 0xb8));
  }
  return param_2;
}


