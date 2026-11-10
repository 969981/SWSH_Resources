/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013eed0; name: FUN_0013eed0
 */


void FUN_0013eed0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  size_t __n;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  
  uVar1 = *(int *)(param_1 + 0xd0) * 2 + 0x1f;
  uVar2 = uVar1 >> 5;
  if (uVar1 < 0x120) {
    local_68 = auStack_88;
    __n = (size_t)(uVar2 << 2);
  }
  else {
    __n = (size_t)(uVar2 << 2);
    plVar3 = (long *)FUN_00400d30();
    local_68 = (undefined1 *)
               (**(code **)(*plVar3 + 0x10))
                         (plVar3,__n,"NonTrackedAlloc","./../../Common/src\\CmTmpMem.h",0x38);
  }
                    /* try { // try from 0013ef64 to 0013ef73 has its CatchHandler @ 0013f188 */
                    /* WARNING: Subroutine does not return */
  memset(local_68,0,__n);
}


