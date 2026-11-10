/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d95480; name: FUN_00d95480
 */


bool FUN_00d95480(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  if (*(int *)(param_1 + 0x608) < *(int *)(param_1 + 0x60c)) {
    iVar1 = *(int *)(param_1 + 0x608) + 1;
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(int *)(param_1 + 0x608) = iVar1;
    *(ulong *)(param_1 + 0x618) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x618) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x628) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x618) + (float)*(undefined8 *)(param_1 + 0x628))
    ;
    *(ulong *)(param_1 + 0x610) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x610) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x620) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x610) + (float)*(undefined8 *)(param_1 + 0x620))
    ;
    if (*(int *)(param_1 + 0x60c) <= iVar1 && iVar2 == 2) {
      *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)(param_1 + 0x638);
      *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x630);
      FUN_00d967d0(param_1,*(undefined4 *)(param_1 + 0x5d0));
      iVar2 = *(int *)(param_1 + 0x5d4);
    }
    bVar3 = true;
  }
  else {
    *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)(param_1 + 0x638);
    *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x630);
    iVar2 = *(int *)(param_1 + 0x5d4);
    bVar3 = iVar2 != 3;
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
  local_28 = (undefined1)(int)(float)*(undefined8 *)(param_1 + 0x610);
  local_27 = (undefined1)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x610) >> 0x20);
  local_26 = (undefined1)(int)(float)*(undefined8 *)(param_1 + 0x618);
  local_25 = (undefined1)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x618) >> 0x20);
  if (iVar2 == 3) {
    lVar5 = *(long *)(param_1 + 0x5f0);
  }
  else {
    if (iVar2 != 2) {
      return bVar3;
    }
    lVar5 = *(long *)(param_1 + 0x5e0);
  }
  if ((lVar5 != 0) &&
     (plVar4 = (long *)FUN_00786910(*(undefined8 *)(param_1 + 0x5c8)), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0,&local_28);
    (**(code **)(*plVar4 + 0x28))(plVar4,1,&local_28);
    (**(code **)(*plVar4 + 0x28))(plVar4,2,&local_28);
    (**(code **)(*plVar4 + 0x28))(plVar4,3,&local_28);
  }
  return bVar3;
}


