/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c3bc0; name: FUN_004c3bc0
 */


void FUN_004c3bc0(long param_1,long param_2,int param_3,char param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined1 local_44;
  undefined3 uStack_43;
  
  plVar2 = *(long **)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  plVar4 = plVar2;
  if (uVar1 == 0) {
LAB_004c3c28:
    if ((plVar4 != plVar2 + (ulong)uVar1 * 4) && (plVar4 = (long *)plVar4[2], plVar4 != (long *)0x0)
       ) {
      if (param_4 == -1) {
        do {
          if ((((plVar4[3] == param_2) && ((char)plVar4[5] == -0x70)) &&
              (*(char *)((long)plVar4 + 0x2b) != '\0')) &&
             (((*(byte *)(plVar4 + 6) >> 2 & 1) == 0 && (*(int *)((long)plVar4 + 0x2c) <= param_3)))
             ) {
            uStack_43 = (undefined3)((ulong)plVar4[5] >> 8);
            _local_44 = CONCAT31(uStack_43,0x80);
            FUN_004c30d0(param_1,param_2,&local_44,*(int *)((long)plVar4 + 0x2c),1,0);
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          if (((plVar4[3] == param_2) && (*(char *)((long)plVar4 + 0x29) == param_4)) &&
             (((char)plVar4[5] == -0x70 &&
              (((*(char *)((long)plVar4 + 0x2b) != '\0' && ((*(byte *)(plVar4 + 6) >> 2 & 1) == 0))
               && (*(int *)((long)plVar4 + 0x2c) <= param_3)))))) {
            uStack_43 = (undefined3)((ulong)plVar4[5] >> 8);
            _local_44 = CONCAT31(uStack_43,0x80);
            FUN_004c30d0(param_1,param_2,&local_44,*(int *)((long)plVar4 + 0x2c),1,0);
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  else {
    lVar3 = (ulong)uVar1 << 5;
    do {
      if (*plVar4 == *(long *)(param_2 + 0x40)) goto LAB_004c3c28;
      lVar3 = lVar3 + -0x20;
      plVar4 = plVar4 + 4;
    } while (lVar3 != 0);
  }
  return;
}


