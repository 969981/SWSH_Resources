/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076b0d0; name: FUN_0076b0d0
 */


int FUN_0076b0d0(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined4 local_74;
  Buffer aBStack_70 [64];
  int local_28;
  undefined4 local_24;
  
  local_24 = 0xffffffff;
  movie::Buffer::Buffer(aBStack_70);
  local_28 = 0;
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 == (long *)0x0) || (*(long *)(param_1 + 0x40) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,&local_24,&local_28);
    if (iVar1 == 0) {
      FUN_00765f90(*(undefined8 *)(param_1 + 0x40),local_24);
      if (local_28 < 1) {
        iVar1 = 0;
      }
      else {
        iVar3 = 0;
        do {
          local_74 = 0;
          iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                            (*(long **)(param_1 + 0x30),&local_24,&local_74);
          if (iVar1 == 0) {
            FUN_00765f90(*(undefined8 *)(param_1 + 0x40),local_24);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_28);
      }
      FUN_007660b0(*(undefined8 *)(param_1 + 0x40));
    }
  }
  movie::Buffer::~Buffer(aBStack_70);
  return iVar1;
}


