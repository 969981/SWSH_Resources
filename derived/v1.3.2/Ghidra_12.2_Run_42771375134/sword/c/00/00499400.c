/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00499400; name: FUN_00499400
 */


void FUN_00499400(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x9c) >> 0x11;
  plVar3 = (long *)*param_1;
  while( true ) {
    if (plVar3 == (long *)0x0) {
      plVar5 = param_1 + 2;
      plVar3 = (long *)*plVar5;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
        if (plVar3 == (long *)0x0) {
          return;
        }
        *plVar3 = *plVar5;
        *plVar5 = (long)plVar3;
        puVar4 = (undefined8 *)param_1[1];
      }
      else {
        puVar4 = (undefined8 *)param_1[1];
      }
      if (puVar4 == (undefined8 *)0x0) {
        *param_1 = (long)plVar3;
      }
      else {
        *puVar4 = plVar3;
        plVar3 = (long *)*plVar5;
      }
      param_1[1] = (long)plVar3;
      param_1[2] = *plVar3;
      *plVar3 = 0;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
      *(ulong *)(param_1[1] + 8) = CONCAT44(uVar2,iVar1) & 0x1ffffffff;
      return;
    }
    if ((iVar1 == *(int *)(plVar3 + 1)) && ((uint)*(byte *)((long)plVar3 + 0xc) == (uVar2 & 1)))
    break;
    plVar3 = (long *)*plVar3;
  }
  return;
}


