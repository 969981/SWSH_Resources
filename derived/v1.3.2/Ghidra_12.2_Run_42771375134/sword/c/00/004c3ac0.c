/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c3ac0; name: FUN_004c3ac0
 */


void FUN_004c3ac0(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 local_34;
  undefined3 uStack_33;
  
  plVar3 = *(long **)(param_1 + 0x10);
  uVar2 = *(ushort *)PTR_DAT_02712ac0;
  uVar1 = *(uint *)(param_1 + 0x18);
  plVar5 = plVar3;
  if (uVar1 == 0) {
LAB_004c3b28:
    if (plVar5 != plVar3 + (ulong)uVar1 * 4) {
      for (plVar5 = (long *)plVar5[2]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if ((((plVar5[3] == param_2) && (*(char *)(plVar5 + 5) == -0x70)) &&
            (*(char *)((long)plVar5 + 0x2b) != '\0')) &&
           (((*(byte *)(plVar5 + 6) >> 2 & 1) == 0 &&
            (*(int *)((long)plVar5 + 0x2c) <= (int)(uint)uVar2)))) {
          _local_34 = CONCAT31((int3)((uint)*(undefined4 *)(plVar5 + 5) >> 8),0x80);
          FUN_004c30d0(param_1,param_2,&local_34,*(int *)((long)plVar5 + 0x2c),1,0);
        }
      }
    }
  }
  else {
    lVar4 = (ulong)uVar1 << 5;
    do {
      if (*plVar5 == *(long *)(param_2 + 0x40)) goto LAB_004c3b28;
      lVar4 = lVar4 + -0x20;
      plVar5 = plVar5 + 4;
    } while (lVar4 != 0);
  }
  return;
}


