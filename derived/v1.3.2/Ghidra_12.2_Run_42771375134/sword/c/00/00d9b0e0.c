/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9b0e0; name: FUN_00d9b0e0
 */


bool FUN_00d9b0e0(long param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  if (*(int *)(param_1 + 0x398) < *(int *)(param_1 + 0x39c)) {
    iVar1 = *(int *)(param_1 + 0x398) + 1;
    iVar5 = *(int *)(param_1 + 0x364);
    *(int *)(param_1 + 0x398) = iVar1;
    *(ulong *)(param_1 + 0x3b8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3b8) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x3c8) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x3b8) + (float)*(undefined8 *)(param_1 + 0x3c8))
    ;
    *(ulong *)(param_1 + 0x3b0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3b0) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x3b0) + (float)*(undefined8 *)(param_1 + 0x3c0))
    ;
    if (*(int *)(param_1 + 0x39c) <= iVar1 && iVar5 == 2) {
      FUN_00d9be00(param_1,*(undefined4 *)(param_1 + 0x360));
      iVar5 = *(int *)(param_1 + 0x364);
    }
    bVar2 = true;
  }
  else {
    *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x3d8);
    *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x3d0);
    iVar5 = *(int *)(param_1 + 0x364);
    bVar2 = iVar5 != 3;
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  local_28 = (undefined1)(int)(float)*(undefined8 *)(param_1 + 0x3b0);
  local_27 = (undefined1)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x3b0) >> 0x20);
  local_26 = (undefined1)(int)(float)*(undefined8 *)(param_1 + 0x3b8);
  local_25 = (undefined1)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x3b8) >> 0x20);
  if (iVar5 == 3) {
    lVar4 = *(long *)(param_1 + 0x380);
  }
  else {
    if (iVar5 != 2) {
      return bVar2;
    }
    lVar4 = *(long *)(param_1 + 0x370);
  }
  if ((lVar4 != 0) &&
     (plVar3 = (long *)FUN_00786910(*(undefined8 *)(param_1 + 0x358)), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0,&local_28);
    (**(code **)(*plVar3 + 0x28))(plVar3,1,&local_28);
    (**(code **)(*plVar3 + 0x28))(plVar3,2,&local_28);
    (**(code **)(*plVar3 + 0x28))(plVar3,3,&local_28);
  }
  return bVar2;
}


