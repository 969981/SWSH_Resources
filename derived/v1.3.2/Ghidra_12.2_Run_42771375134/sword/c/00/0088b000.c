/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088b000; name: FUN_0088b000
 */


undefined8 FUN_0088b000(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  void *pvVar5;
  ulong local_58;
  ulong local_48;
  
  if (param_2 == 0) {
    return 2;
  }
  local_48 = 0;
  lVar2 = FUN_0088ffa0(param_3,0,0,&local_48);
  uVar1 = local_48;
  *(long *)(param_1 + 8) = lVar2;
  if (lVar2 == 0) {
    plVar4 = *(long **)(param_2 + 8);
    if (plVar4 != (long *)0x0) {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,local_48);
      if (pvVar5 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar5,0,uVar1 & 0xffffffff);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    local_58 = 0;
    uVar3 = FUN_0088ffa0(param_3,1,0,&local_58);
    uVar1 = local_58;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(long *)(param_1 + 0x20) == 0) {
      plVar4 = *(long **)(param_2 + 8);
      if ((plVar4 != (long *)0x0) &&
         (pvVar5 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,local_58), pvVar5 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar5,0,uVar1 & 0xffffffff);
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      plVar4 = *(long **)(param_2 + 8);
      if (plVar4 != (long *)0x0) {
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,(ulong)param_3 << 2);
        if (pvVar5 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          memset(pvVar5,0,(ulong)param_3 << 2 & 0xfffffffc);
        }
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  return 0x34;
}


